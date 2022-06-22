import React from 'react'
import Child from './Child'

const Parent = () => {
    const userLIst = [{
        "name": "ram", "class": "5th-c"
    }, {
        "name": "shyam", "class": "6th-a"
    },
    {
        "name": "abram", "class": "7th-b"
    }]
    return (
        <>
            {userLIst.map((user, index) =>
                <Child key={index} user={user} />
            )
            }
        </>
    )
}

export default Parent