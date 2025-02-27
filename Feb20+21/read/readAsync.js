let fs = require('fs')

fs.readFile('../static/sample.txt', 'utf-8', (err, data) => {
    if (err)
        console.log('Error while reading data', err.code)
    else
        console.log(data)
})
console.log('I am here')