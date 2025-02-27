let fs = require('fs')
fs.writeFile(require('../path'),'hi',(err)=>{
    if(err)
        console.log
    else
    console.log('Write Success')
})
console.log('I am here')