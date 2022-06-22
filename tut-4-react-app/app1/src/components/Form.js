import React, { Component } from 'react'

export default class Form extends Component {
    constructor(props) {
        super(props)
        this.handleOnclick = this.handleOnclick.bind(this)
        this.fName = React.createRef()
    }
    handleOnclick() {
        console.log(this.fName.current.placeholder = "")
    }
    render() {
        return (
            <div>
                <label htmlFor='fName'>Name</label>
                <input name="fName"  placeholder='Enter Name' ref={this.fName} ></input>
                <button onClick={this.handleOnclick}>submit</button>
            </div>
        )
    }
}
