import {Router} from "express";
import userRouter from "./user-routes.js";

const appRouter = Router();

appRouter.use("/user" , userRouter);//domain/api/v1/user


export default appRouter;