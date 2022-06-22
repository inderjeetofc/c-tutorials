import React from 'react'
const Child = (props) => {
    const { user } = props
    const styleList = {
        color: 'blue',
        fontSize: '40px'
    }
    return (
        <>
            <p style={styleList}>{user.name}</p>
            <p >{user.class}</p>
        </>
    )
}

export default Child