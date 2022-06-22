import React, { Component, PureComponent } from 'react'
import Memo from './Memo'

export default class PureComp extends PureComponent {
    constructor(props) {
        super(props)
        this.state = {
            name: "inder"
        }
        this.handleClick = this.handleClick.bind(this)
    }
    handleClick() {
        this.setState({
            name: "raj"
        })
    }
    // shouldComponentUpdate() {
    //     return false
    // }
    render() {
        console.log("ok1")
        return (
            <div>pureComponent
                <button onClick={this.handleClick}>change</button>
                <Memo name={this.state.name} />
            </div>
        )
    }
}
