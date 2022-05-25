require('dotenv').config()
const Sequelize = require('sequelize')
const sequelize = new Sequelize('process.env.MYSQL_DB_NAME', 'process.env.MYSQL_USER', 'process.env.MYSQL_PASSWORD', {
    host: process.env.MYSQL_PORT,
    dialect: 'mysql',
    port: process.env.MYSQL_PORT ? process.env.MYSQL_PORT : 3306,
    operatorAliases: false,
    dialectOptions: { //this is used to have options like use db in read mode etc
        decimalNumbers: true
    },
    logging:true
});

sequelize.authenticate().then(() => {
    console.log("connection to db successfull")
}).catch((err) => {
    console.log('error connecting to mysql: ', err.message)
});
module.exports = sequelize