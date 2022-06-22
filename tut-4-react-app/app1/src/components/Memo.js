import React from 'react'

function Memo(props) {
    const handleOnclick = () => {
    }
    return (
        <>
            {console.log("rendered")}
            <div>{props.name}</div>
            <button onClick={handleOnclick}>memo button</button>
        </>
    )
}

export default React.memo(Memo)