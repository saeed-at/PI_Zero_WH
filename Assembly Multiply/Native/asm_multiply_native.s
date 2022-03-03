.global main
main:

push {r0-r3, lr}
ldr r3, =pi
vldr.f32 s14, [r3]
ldr r3, =r
vldr.f32 s15, [r3]
vmul.f32 s15,s14,s15
vcvt.f64.f32 d7,s15
vmov r1,r2,d7
ldr r0, =msg


bl printf
pop {r0-r3, pc}

.data
pi: .float 3.1415926
r: .float 1.5
res: .float 1
msg: .string "pi * r =  %f\n"
