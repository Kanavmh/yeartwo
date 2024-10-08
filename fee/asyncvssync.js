console.log("Synchronous Style");
console.log("Sync- JS-1");
console.log("Sync- JS-2");
console.log("Sync- JS-3");

console.log("\nAsynchronous Style");
console.log("Async- JS-1");
setTimeout(() => {
    console.log("Async- JS-2");
}, 2000);
console.log("Async- JS-3");