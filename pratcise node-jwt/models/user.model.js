'use strict';
const Sequelize = require('sequelize');


module.exports = class User extends Sequelize.Model {
    static init(sequelize, DataTypes) {
        return super.init({
            id: {
                type: DataTypes.UUID,
                allowNull: false,
                primaryKey: true,
                defaultValue: DataTypes.UUIDV4,
            },
            first_name: {
                type: DataTypes.STRING(255),
            },
            last_name: {
                type: DataTypes.STRING(255),
            },
            email: {
                type: DataTypes.STRING(255),
                allowNull: false,
            },
            province: {
                type: DataTypes.STRING(255),
            },
            dob: {
                type: DataTypes.DATE,
                required: true,
            },
            phone: {
                type: DataTypes.STRING(255),
            },
            password: {
                type: DataTypes.STRING(255),
                allowNull: true
            },
            favourite_locations: {
                type: DataTypes.STRING(255)
            },
            favourite_products: {
                type: DataTypes.STRING(255)
            },
            sms_notification: {
                type: DataTypes.BOOLEAN,
                defaultValue: true,
            },
            email_notification: {
                type: DataTypes.BOOLEAN,
                defaultValue: true,
            },
            marketing_notification: {
                type: DataTypes.BOOLEAN,
                defaultValue: false,
            },
            notification_updates: {
                type: DataTypes.BOOLEAN,
                defaultValue: true,
            },
            active: {
                type: DataTypes.BOOLEAN,
            },
            average_order_value: {
                type: DataTypes.DOUBLE(11, 2),
                defaultValue: 0,
            },
            total_order_value: {
                type: DataTypes.DOUBLE(11, 2),
                defaultValue: 0,
            },
            frequency_of_visits: {
                type: DataTypes.DOUBLE(11, 2),
                defaultValue: 0,
            },
            status: {
                type: DataTypes.ENUM('registered', 'verified', 'banned', 'guest'),
            },
            email_verification_status: {
                type: DataTypes.BOOLEAN,
            },
            phone_verification_status: {
                type: DataTypes.BOOLEAN,
            },
            registered_from: {
                type: DataTypes.STRING,
                allowNull: true,
                defaultValue: 'budler',
            },
            registered_by: {
                type: DataTypes.STRING,
                allowNull: false,
                defaultValue: 'user',
            },
            registered_by_id: {
                type: DataTypes.UUID,
                allowNull: true
            },
            created_at: {
                allowNull: false,
                type: DataTypes.DATE,
            },
            updated_at: {
                allowNull: false,
                type: DataTypes.DATE,
            },
            deleted_at: {
                type: DataTypes.DATE,
            }
        }, {
            modelName: 'User',
            tableName: 'users',
            createdAt: 'created_at',
            updatedAt: 'updated_at',
            underscored: true,
            paranoid: true,
            timestamps: true,
            sequelize,
        })
    }
}