// ./cppController.clist.d.ts
export interface Assembly {
    // ... add declarations of exported function here.
}

// following lines is template code.

export interface Module {
   asm : Assembly;
   handleRequest(req: any, res: any, service: any) : void;
}

export interface ModuleLoader {
    initialize(userModule : any) : Promise<Module>;
}

declare const loader : ModuleLoader;
export default loader;