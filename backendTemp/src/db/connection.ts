import {connect , disconnect} from "mongoose";

export default async function connectToDatabase() {
    try{
        await connect(process.env.MONGODB_URL)
    }catch(error){
        console.log(error);
        throw new Error("Cannot Connect to MondoDB");
    }
}

async function disconnectFromDatabase(){
    try {
        await disconnect();
    } catch (error) {
        console.log(error);
        throw new Error("Cannot Disconnect to MondoDB");
    }
}

export{connectToDatabase , disconnectFromDatabase}