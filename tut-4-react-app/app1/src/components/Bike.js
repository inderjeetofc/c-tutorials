import React from "react";

export class Bike extends React.Component {
    constructor() {
        super()
        this.state = {
            firstName: "inderjeet",
            lastName: "kaur",
            show: true
        }
        this.handleOnclick = this.handleOnclick.bind(this)//preferred method as will tell how many functions we are using
    }
    handleOnclick() {
        this.setState({
            show: !this.state.show
        })
        // handleOnclick = () => {
        //access state and props
        // this.setState((state, props) => (console.log(state, props)))

        //accessing prev values
        // this.setState((prev) => ({
        //     firstName: prev.firstName + "rajbir",
        //     lastName: prev.lastName + "singh"
        // }))
        // this.setState((prev) => ({
        //     firstName: prev.firstName + "sonu",
        //     lastName: prev.lastName + "singh"
        // }))
        console.log("clicked")
        this.setState({
            firstName: "rajbir",
            lastName: "singh"
        })
        // this.setState({
        //     firstName: "sonu",
        //     lastName: "kaur"
        // })

    }

    render() {
        return (
            <>
                {this.state.show && <h1>hello world</h1>}
                <h2>this is bike class component</h2>
                <span>my name is {this.state.firstName} {this.state.lastName}</span>
                <button onClick={this.handleOnclick
                }>update state</button >
                {/* <button onClick={this.handleOnclick.bind(this)
                }>update state</button > */}
            </>
        )
    }
}