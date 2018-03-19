// ./cppController.d.ts
// export interface Assembly {
//     // ... add declarations of exported function here.
// }

// following lines is template code.

export interface Module {
//    asm : Assembly;
   handleRequestHyperscript(req: any, res: any, service: any) : void;
   handleRequestString(req: any, res: any, service: any) : void;
   handleRequestStringStream(req: any, res: any, service: any) : void;
   handleRequestPing(req: any, res: any, service: any) : void;
}

// export interface ModuleLoader {
//     initialize(userModule : any) : Promise<Module>;
// }

declare const loader : (userModule : any) => Module;
export default loader;