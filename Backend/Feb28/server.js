//Import express, body-parser
const express = require('express')
const bodyParser = require('body-parser')
const app = express() //create rest object

//Use thr body-parser to parse JSON payloads
app.use(bodyParser.json())
//use the body-parser to parse URL encoded payloads
app.use(bodyParser.urlencoded({ extended: true }))
//use the body-parser to parse raw and text content
app.use(bodyParser.raw())
app.use(bodyParser.text())

//Define a POST route to handle the form submissions or JSON payloads
app.post('/submit',(req,res)=>{
    console.log(req.body) //log the parsed request body to the console
    res.send('Form submitted successfully') //send a response to the client
})

const port = 8080
//Start express.js application
app.listen(port, () => {
    console.log(`Server started on port ${port}`)
})
