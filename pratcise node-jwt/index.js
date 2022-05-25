const express = require('express')
const app = express()
require('./config/mySql')
const server = require('http').Server(app)
require('dotenv').config()
server.listen(process.env.APPLICATION_PORT, () => {
    console.log('listening on port: ', process.env.APPLICATION_PORT);
})