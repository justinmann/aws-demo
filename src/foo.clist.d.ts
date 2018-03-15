// ./foo.clist.d.ts
export interface Assembly {
    _sayHello() : void;
    // ... add declarations of exported function here.
}

// following lines is template code.

export interface Module {
   asm : Assembly;
}

export interface ModuleLoader {
    initialize(userModule : any) : Promise<Module>;
}

declare const loader : ModuleLoader;
export default loader;