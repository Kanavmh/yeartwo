//
let fs = require('fs');
fs.open(require('../path'),"r+",(err,fd)=>{
    if(err){
        console.log('Error opening file',err)
    }else{
        console.log('File opened successfully')
    }
})
console.log('I am here')
