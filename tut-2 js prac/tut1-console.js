// console.time("ok")
// console.log("hello world")
// console.warn("this is warning")//gives warning
// console.table({ col1: "hola", col2: "ok" })//creates table
// console.assert(53 < 1 < "error shows") //assertion failed will show error
// console.error("i am error body")
// console.timeEnd("ok")
// //console.clear()//clears console
// let arr = new Array
// arr = [1, 2, 3, 4, 5]
// let str="hello"
// console.log(str.toUpperCase())
// // console.log(arr.isArray())

function wait() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve();
        }, 2000);
    })
}
let arr = [2, 3, 4, 5, 6]
arr.forEach(element => {
    // setInterval(() => {
        wait().then(e => {
            console.log(element)
        }).catch(err => {
        })
    // }, 2000);
});
for (i = 0; i < arr.length; i++) {
    // setInterval(() => {
    wait().then(() => {
        console.log(1)
    }).catch(err => {
    })
    // }, 2000);
};