//import fs module
let fs = require('fs')
let path = require('../path')
//append data asynchronously
fs.appendFile(path, 'Good morning...!',(err)=>{
    if(err)
        console.log('Error while appending data')
    else
    console.log('Append Success')
    console.log(fs.readFileSync(path,'utf-8'))
})
console.log('I am here')