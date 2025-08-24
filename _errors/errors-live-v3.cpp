-------------------------------------
Translated Report (Full Report Below)
-------------------------------------

Process:               Live [88905]
Path:                  /Applications/Ableton Live 12 Suite.app/Contents/MacOS/Live
Identifier:            com.ableton.live
Version:               12.2.2 (2025-08-01_7acf90750f) (12.2.2 (2025-08-01_7acf90750f))
Code Type:             ARM-64 (Native)
Parent Process:        launchd [1]
User ID:               502

Date/Time:             2025-08-24 16:08:33.3610 +0000
OS Version:            macOS 15.6 (24G84)
Report Version:        12
Anonymous UUID:        14CE5F82-82B2-5557-92EA-60F9D97DBF72

Sleep/Wake UUID:       11B52E5A-AE62-42DA-AB7C-DB250CECAAED

Time Awake Since Boot: 260000 seconds
Time Since Wake:       764 seconds

System Integrity Protection: enabled

Crashed Thread:        0  MainThread  Dispatch queue: com.apple.main-thread

Exception Type:        EXC_BAD_ACCESS (SIGSEGV)
Exception Codes:       KERN_INVALID_ADDRESS at 0x0000000000000040
Exception Codes:       0x0000000000000001, 0x0000000000000040

Termination Reason:    Namespace SIGNAL, Code 11 Segmentation fault: 11
Terminating Process:   exc handler [88905]

VM Region Info: 0x40 is not in any region.  Bytes before following region: 4308467648
      REGION TYPE                    START - END         [ VSIZE] PRT/MAX SHRMOD  REGION DETAIL
      UNUSED SPACE AT START
--->
      __TEXT                      100ce0000-106c94000    [ 95.7M] r-x/r-x SM=COW  /Applications/Ableton Live 12 Suite.app/Contents/MacOS/Live

Kernel Triage:
VM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter
VM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter
VM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter
VM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter
VM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter


Thread 0 Crashed:: MainThread Dispatch queue: com.apple.main-thread
0   SoundCollector                	       0x4279e6f3c juce::Rectangle<int>::getWidth() const + 12 (juce_Rectangle.h:142)
1   SoundCollector                	       0x427a370f4 juce::Component::getWidth() const + 28
2   SoundCollector                	       0x428225f38 juce::Component::setBounds(int, int, int, int) + 192
3   SoundCollector                	       0x427a37324 SoundCollectorAudioProcessorEditor::resized() + 180
4   SoundCollector                	       0x428226348 juce::Component::sendMovedResizedMessages(bool, bool) + 156
5   SoundCollector                	       0x42822629c juce::Component::sendMovedResizedMessagesIfPending() + 148
6   SoundCollector                	       0x4282261a8 juce::Component::setBounds(int, int, int, int) + 816
7   SoundCollector                	       0x42821a088 juce::Component::setSize(int, int) + 76
8   SoundCollector                	       0x427a34940 SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&) + 996
9   SoundCollector                	       0x427a367ac SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&) + 36
10  SoundCollector                	       0x427a2ce50 SoundCollectorAudioProcessor::createEditor() + 44
11  SoundCollector                	       0x427bd8ef0 juce::AudioProcessor::createEditorIfNeeded() + 104
12  SoundCollector                	       0x4279e5da8 JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::operator()(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize) const + 128 (juce_audio_plugin_client_AU_1.mm:1918)
13  SoundCollector                	       0x4279e5e6c JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::__invoke(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize) + 60 (juce_audio_plugin_client_AU_1.mm:1908)
14  Live                          	       0x10398dd4c 0x100ce0000 + 46849356
15  Live                          	       0x10398e41c 0x100ce0000 + 46851100
16  Live                          	       0x10398ec7c 0x100ce0000 + 46853244
17  Live                          	       0x10398eb10 0x100ce0000 + 46852880
18  Live                          	       0x1025b0190 0x100ce0000 + 26018192
19  Live                          	       0x1025afe5c 0x100ce0000 + 26017372
20  Live                          	       0x1025bf1d0 0x100ce0000 + 26079696
21  Live                          	       0x1025946d8 0x100ce0000 + 25904856
22  Live                          	       0x103a894e8 0x100ce0000 + 47879400
23  Live                          	       0x103b102b8 0x100ce0000 + 48431800
24  Live                          	       0x103b101bc 0x100ce0000 + 48431548
25  Live                          	       0x103b1033c 0x100ce0000 + 48431932
26  Live                          	       0x1020ec328 0x100ce0000 + 21021480
27  Live                          	       0x1020e2950 0x100ce0000 + 20982096
28  Live                          	       0x103b10000 0x100ce0000 + 48431104
29  Live                          	       0x102353434 0x100ce0000 + 23540788
30  Live                          	       0x102353190 0x100ce0000 + 23540112
31  Live                          	       0x1023002fc 0x100ce0000 + 23200508
32  Live                          	       0x1023023b8 0x100ce0000 + 23208888
33  Live                          	       0x10224d73c 0x100ce0000 + 22468412
34  Live                          	       0x10224d55c 0x100ce0000 + 22467932
35  Live                          	       0x102231c14 0x100ce0000 + 22354964
36  AppKit                        	       0x194df655c _routeMouseUpEvent + 132
37  AppKit                        	       0x194357c20 -[NSWindow(NSEventRouting) _reallySendEvent:isDelayedEvent:] + 440
38  AppKit                        	       0x1943578a0 -[NSWindow(NSEventRouting) sendEvent:] + 288
39  AppKit                        	       0x194bcf6c0 -[NSApplication(NSEventRouting) sendEvent:] + 1504
40  Live                          	       0x10222cb74 0x100ce0000 + 22334324
41  AppKit                        	       0x1947ce42c -[NSApplication _handleEvent:] + 60
42  AppKit                        	       0x194224c0c -[NSApplication run] + 520
43  Live                          	       0x102238f48 0x100ce0000 + 22384456
44  dyld                          	       0x18fe82b98 start + 6076

Thread 1:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 2:: NetIoThread
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101d427f0 0x100ce0000 + 17180656
2   Live                          	       0x102123dec void ableton::utility::detail::CallbackTypes<ANetIoThread, void, TUserData>::CallMemberFunc<&ANetIoThread::Main(TUserData)>(void*, TUserData) + 92
3   Live                          	       0x101d5d790 0x100ce0000 + 17291152
4   Live                          	       0x101d5e468 0x100ce0000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 3:
0   libsystem_kernel.dylib        	       0x1901e1c34 mach_msg2_trap + 8
1   libsystem_kernel.dylib        	       0x1901f43a0 mach_msg2_internal + 76
2   libsystem_kernel.dylib        	       0x1901ea764 mach_msg_overwrite + 484
3   libsystem_kernel.dylib        	       0x1901e1fa8 mach_msg + 24
4   CoreMIDI                      	       0x1ac8b2eac XServerMachPort::ReceiveMessage(int&, void*, int&) + 104
5   CoreMIDI                      	       0x1ac8d4740 MIDIProcess::MIDIInPortThread::Run() + 148
6   CoreMIDI                      	       0x1ac8c976c CADeprecated::XThread::RunHelper(void*) + 48
7   CoreMIDI                      	       0x1ac8d3e44 CADeprecated::CAPThread::Entry(CADeprecated::CAPThread*) + 96
8   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
9   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 4:: FileThread
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101d427f0 0x100ce0000 + 17180656
2   Live                          	       0x102cefec0 0x100ce0000 + 33619648
3   Live                          	       0x101d5d790 0x100ce0000 + 17291152
4   Live                          	       0x101d5e468 0x100ce0000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 5:: IPC Channel Reader
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   Live                          	       0x104a821cc 0x100ce0000 + 64627148
2   Live                          	       0x1021548a0 0x100ce0000 + 21448864
3   Live                          	       0x102154d6c 0x100ce0000 + 21450092
4   Live                          	       0x102156474 0x100ce0000 + 21455988
5   Live                          	       0x102156068 0x100ce0000 + 21454952
6   Live                          	       0x101d5d790 0x100ce0000 + 17291152
7   Live                          	       0x101d5e468 0x100ce0000 + 17294440
8   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
9   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 6:: caulk.messenger.shared:17
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   caulk                         	       0x19b896cc8 caulk::semaphore::timed_wait(double) + 224
2   caulk                         	       0x19b896b70 caulk::concurrent::details::worker_thread::run() + 32
3   caulk                         	       0x19b896844 void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*) + 96
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 7:: caulk.messenger.shared:high
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   caulk                         	       0x19b896cc8 caulk::semaphore::timed_wait(double) + 224
2   caulk                         	       0x19b896b70 caulk::concurrent::details::worker_thread::run() + 32
3   caulk                         	       0x19b896844 void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*) + 96
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 8:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Live                          	       0x103cc7f80 0x100ce0000 + 50233216
4   Live                          	       0x1059f6374 0x100ce0000 + 80831348
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 9:: browser
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x104a7b4d8 0x100ce0000 + 64599256
2   Live                          	       0x1047671e0 ableton::live_library::AsyncLibraryHub::Impl::workerThreadMain(ableton::live_library::AsyncLibraryHub::Impl*) + 368
3   Live                          	       0x104767990 0x100ce0000 + 61372816
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 10:
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   Live                          	       0x1019de30c 0x100ce0000 + 13624076
2   Live                          	       0x1019df3b8 0x100ce0000 + 13628344
3   Live                          	       0x1019df13c 0x100ce0000 + 13627708
4   Live                          	       0x1019e5770 0x100ce0000 + 13653872
5   Live                          	       0x1019e56bc 0x100ce0000 + 13653692
6   Live                          	       0x1019e55c4 0x100ce0000 + 13653444
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 11:: com.apple.NSEventThread
0   libsystem_kernel.dylib        	       0x1901e1c34 mach_msg2_trap + 8
1   libsystem_kernel.dylib        	       0x1901f43a0 mach_msg2_internal + 76
2   libsystem_kernel.dylib        	       0x1901ea764 mach_msg_overwrite + 484
3   libsystem_kernel.dylib        	       0x1901e1fa8 mach_msg + 24
4   CoreFoundation                	       0x19030ecbc __CFRunLoopServiceMachPort + 160
5   CoreFoundation                	       0x19030d5d8 __CFRunLoopRun + 1208
6   CoreFoundation                	       0x19030ca98 CFRunLoopRunSpecific + 572
7   AppKit                        	       0x19435578c _NSEventThread + 140
8   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
9   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 12:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101d427f0 0x100ce0000 + 17180656
2   Live                          	       0x1025862d4 0x100ce0000 + 25846484
3   Live                          	       0x101d5d790 0x100ce0000 + 17291152
4   Live                          	       0x101d5e468 0x100ce0000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 13:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101d427f0 0x100ce0000 + 17180656
2   Live                          	       0x1025862d4 0x100ce0000 + 25846484
3   Live                          	       0x101d5d790 0x100ce0000 + 17291152
4   Live                          	       0x101d5e468 0x100ce0000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 14:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101d427f0 0x100ce0000 + 17180656
2   Live                          	       0x1025862d4 0x100ce0000 + 25846484
3   Live                          	       0x101d5d790 0x100ce0000 + 17291152
4   Live                          	       0x101d5e468 0x100ce0000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 15:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101d427f0 0x100ce0000 + 17180656
2   Live                          	       0x1025862d4 0x100ce0000 + 25846484
3   Live                          	       0x101d5d790 0x100ce0000 + 17291152
4   Live                          	       0x101d5e468 0x100ce0000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 16:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101d427f0 0x100ce0000 + 17180656
2   Live                          	       0x1025862d4 0x100ce0000 + 25846484
3   Live                          	       0x101d5d790 0x100ce0000 + 17291152
4   Live                          	       0x101d5e468 0x100ce0000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 17:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101d427f0 0x100ce0000 + 17180656
2   Live                          	       0x1025862d4 0x100ce0000 + 25846484
3   Live                          	       0x101d5d790 0x100ce0000 + 17291152
4   Live                          	       0x101d5e468 0x100ce0000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 18:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101d427f0 0x100ce0000 + 17180656
2   Live                          	       0x1025862d4 0x100ce0000 + 25846484
3   Live                          	       0x101d5d790 0x100ce0000 + 17291152
4   Live                          	       0x101d5e468 0x100ce0000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 19:: com.apple.audio.IOThread.client
0   Live                          	       0x102d4b7f8 0x100ce0000 + 33994744
1   Live                          	       0x102d491d0 0x100ce0000 + 33984976
2   CoreAudio                     	       0x1931149b8 HALC_ProxyIOContext::IOWorkLoop() + 11636
3   CoreAudio                     	       0x193111530 invocation function for block in HALC_ProxyIOContext::HALC_ProxyIOContext(unsigned int, unsigned int) + 172
4   CoreAudio                     	       0x1932bb9f4 HALC_IOThread::Entry(void*) + 88
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 20:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 21:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 22:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   smartEQ4                      	       0x17da0eed4 0x17d000000 + 10546900
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 23:: Realtime safe async job spooler
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   smartEQ4                      	       0x17d9e6f64 0x17d000000 + 10383204
4   smartEQ4                      	       0x17d9148e8 0x17d000000 + 9521384
5   smartEQ4                      	       0x17d9f1e1c 0x17d000000 + 10427932
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 24:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_distressor             	       0x32f09f234 0x32f000000 + 651828
4   uaudio_distressor             	       0x32f0698a0 0x32f000000 + 432288
5   uaudio_distressor             	       0x32f07a628 0x32f000000 + 501288
6   uaudio_distressor             	       0x32f07aff8 0x32f000000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 25:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x32f02a33c 0x32f000000 + 172860
2   uaudio_distressor             	       0x32f02b0c8 0x32f000000 + 176328
3   uaudio_distressor             	       0x32f02aeac 0x32f000000 + 175788
4   uaudio_distressor             	       0x32f02e21c 0x32f000000 + 188956
5   uaudio_distressor             	       0x32f07a614 0x32f000000 + 501268
6   uaudio_distressor             	       0x32f07aff8 0x32f000000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 26:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x32f02a33c 0x32f000000 + 172860
2   uaudio_distressor             	       0x32f02b0c8 0x32f000000 + 176328
3   uaudio_distressor             	       0x32f02aeac 0x32f000000 + 175788
4   uaudio_distressor             	       0x32f02e21c 0x32f000000 + 188956
5   uaudio_distressor             	       0x32f07a614 0x32f000000 + 501268
6   uaudio_distressor             	       0x32f07aff8 0x32f000000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 27:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x32f02a33c 0x32f000000 + 172860
2   uaudio_distressor             	       0x32f02b0c8 0x32f000000 + 176328
3   uaudio_distressor             	       0x32f02aeac 0x32f000000 + 175788
4   uaudio_distressor             	       0x32f02e21c 0x32f000000 + 188956
5   uaudio_distressor             	       0x32f07a614 0x32f000000 + 501268
6   uaudio_distressor             	       0x32f07aff8 0x32f000000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 28:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x32f02a33c 0x32f000000 + 172860
2   uaudio_distressor             	       0x32f02b0c8 0x32f000000 + 176328
3   uaudio_distressor             	       0x32f02aeac 0x32f000000 + 175788
4   uaudio_distressor             	       0x32f02e21c 0x32f000000 + 188956
5   uaudio_distressor             	       0x32f07a614 0x32f000000 + 501268
6   uaudio_distressor             	       0x32f07aff8 0x32f000000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 29:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3632abfd4 0x363198000 + 1130452
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 30:: HighResolutionTimerThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Kick 3                        	       0x363290fcc 0x363198000 + 1019852
4   Kick 3                        	       0x3632668a0 0x363198000 + 845984
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 31:: ContentsListsThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x363255d50 0x363198000 + 777552
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 32:: Kick Analysis Thread
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   Kick 3                        	       0x3634b0e7c 0x363198000 + 3247740
3   Kick 3                        	       0x3632668a0 0x363198000 + 845984
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 33:: Resources Store
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633e2e68 0x363198000 + 2403944
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 34:: Convo Engines Store
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633e30bc 0x363198000 + 2404540
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 35:: thumb cache
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x363255d50 0x363198000 + 777552
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 36:: ContentsListsThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x363255d50 0x363198000 + 777552
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 37:: HighResolutionTimerThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x363290f1c 0x363198000 + 1019676
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 38:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633fa130 0x363198000 + 2498864
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 39:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633fa130 0x363198000 + 2498864
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 40:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633fa130 0x363198000 + 2498864
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 41:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633fa130 0x363198000 + 2498864
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 42:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633fa130 0x363198000 + 2498864
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 43:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633fa130 0x363198000 + 2498864
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 44:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x372ad3d5c 0x3729f0000 + 933212
3   Addictive Drums 2             	       0x372af63e0 0x3729f0000 + 1074144
4   Addictive Drums 2             	       0x372ad4c14 0x3729f0000 + 936980
5   Addictive Drums 2             	       0x372aea2dc 0x3729f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 45:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x372ad3d5c 0x3729f0000 + 933212
3   Addictive Drums 2             	       0x372af63e0 0x3729f0000 + 1074144
4   Addictive Drums 2             	       0x372ad4c14 0x3729f0000 + 936980
5   Addictive Drums 2             	       0x372aea2dc 0x3729f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 46:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x372ad3d5c 0x3729f0000 + 933212
3   Addictive Drums 2             	       0x372af63e0 0x3729f0000 + 1074144
4   Addictive Drums 2             	       0x372ad4c14 0x3729f0000 + 936980
5   Addictive Drums 2             	       0x372aea2dc 0x3729f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 47:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x372ad3d5c 0x3729f0000 + 933212
3   Addictive Drums 2             	       0x372af63e0 0x3729f0000 + 1074144
4   Addictive Drums 2             	       0x372ad4c14 0x3729f0000 + 936980
5   Addictive Drums 2             	       0x372aea2dc 0x3729f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 48:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x372ad3d5c 0x3729f0000 + 933212
3   Addictive Drums 2             	       0x372af63e0 0x3729f0000 + 1074144
4   Addictive Drums 2             	       0x372ad4c14 0x3729f0000 + 936980
5   Addictive Drums 2             	       0x372aea2dc 0x3729f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 49:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x372ad3d5c 0x3729f0000 + 933212
3   Addictive Drums 2             	       0x372af63e0 0x3729f0000 + 1074144
4   Addictive Drums 2             	       0x372ad4c14 0x3729f0000 + 936980
5   Addictive Drums 2             	       0x372aea2dc 0x3729f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 50:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x372ad3d5c 0x3729f0000 + 933212
3   Addictive Drums 2             	       0x372af63e0 0x3729f0000 + 1074144
4   Addictive Drums 2             	       0x372ad4c14 0x3729f0000 + 936980
5   Addictive Drums 2             	       0x372aea2dc 0x3729f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 51:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x372ad3d5c 0x3729f0000 + 933212
3   Addictive Drums 2             	       0x372af63e0 0x3729f0000 + 1074144
4   Addictive Drums 2             	       0x372ad4c14 0x3729f0000 + 936980
5   Addictive Drums 2             	       0x372aea2dc 0x3729f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 52:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x372ad3d5c 0x3729f0000 + 933212
3   Addictive Drums 2             	       0x372af63e0 0x3729f0000 + 1074144
4   Addictive Drums 2             	       0x372ad4c14 0x3729f0000 + 936980
5   Addictive Drums 2             	       0x372aea2dc 0x3729f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 53:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x372ad3d5c 0x3729f0000 + 933212
3   Addictive Drums 2             	       0x372af63e0 0x3729f0000 + 1074144
4   Addictive Drums 2             	       0x372ad4c14 0x3729f0000 + 936980
5   Addictive Drums 2             	       0x372aea2dc 0x3729f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 54:
0   libsystem_kernel.dylib        	       0x1901e1d00 mach_wait_until + 8
1   CarbonCore                    	       0x193da7f1c MPDelayUntil + 20
2   Addictive Drums 2             	       0x372d990b0 0x3729f0000 + 3838128
3   Addictive Drums 2             	       0x372e06084 0x3729f0000 + 4284548
4   Addictive Drums 2             	       0x372d98d50 0x3729f0000 + 3837264
5   CarbonCore                    	       0x193da765c PrivateMPEntryPoint + 60
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 55:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x19022410c _pthread_cond_wait + 1028
2   CarbonCore                    	       0x193dd405c TSWaitOnConditionTimedRelative + 32
3   CarbonCore                    	       0x193da6594 MPWaitForEvent + 208
4   Addictive Drums 2             	       0x372d98b00 0x3729f0000 + 3836672
5   Addictive Drums 2             	       0x372e6f0f8 0x3729f0000 + 4714744
6   Addictive Drums 2             	       0x372d98d50 0x3729f0000 + 3837264
7   CarbonCore                    	       0x193da765c PrivateMPEntryPoint + 60
8   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
9   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 56:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Addictive Drums 2             	       0x372f0b960 0x3729f0000 + 5355872
4   Addictive Drums 2             	       0x372f0d5c0 0x3729f0000 + 5363136
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 57:: PerformanceManagers
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   Rev PLATE-140                 	       0x3867feb38 0x385bb8000 + 12872504
3   Rev PLATE-140                 	       0x386b4c340 0x385bb8000 + 16335680
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 58:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Rev PLATE-140                 	       0x385eccbe4 0x385bb8000 + 3230692
4   Rev PLATE-140                 	       0x385ed3874 0x385bb8000 + 3258484
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 59:: AsyncPresetLoader
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Rev PLATE-140                 	       0x385e320fc 0x385bb8000 + 2597116
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 60:
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   libc++.1.dylib                	       0x190155f38 std::__1::this_thread::sleep_for(std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&) + 84
3   libplateverbProcessor.dylib   	       0x37fbbbf08 0x37fa14000 + 1736456
4   libplateverbProcessor.dylib   	       0x37fbbc25c 0x37fa14000 + 1737308
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 61:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_ua_1176ae              	       0x38438050c 0x3842e0000 + 656652
4   uaudio_ua_1176ae              	       0x38434ab78 0x3842e0000 + 437112
5   uaudio_ua_1176ae              	       0x38435b900 0x3842e0000 + 506112
6   uaudio_ua_1176ae              	       0x38435c2d0 0x3842e0000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 62:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x38430b614 0x3842e0000 + 177684
2   uaudio_ua_1176ae              	       0x38430c3a0 0x3842e0000 + 181152
3   uaudio_ua_1176ae              	       0x38430c184 0x3842e0000 + 180612
4   uaudio_ua_1176ae              	       0x38430f4f4 0x3842e0000 + 193780
5   uaudio_ua_1176ae              	       0x38435b8ec 0x3842e0000 + 506092
6   uaudio_ua_1176ae              	       0x38435c2d0 0x3842e0000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 63:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x38430b614 0x3842e0000 + 177684
2   uaudio_ua_1176ae              	       0x38430c3a0 0x3842e0000 + 181152
3   uaudio_ua_1176ae              	       0x38430c184 0x3842e0000 + 180612
4   uaudio_ua_1176ae              	       0x38430f4f4 0x3842e0000 + 193780
5   uaudio_ua_1176ae              	       0x38435b8ec 0x3842e0000 + 506092
6   uaudio_ua_1176ae              	       0x38435c2d0 0x3842e0000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 64:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x38430b614 0x3842e0000 + 177684
2   uaudio_ua_1176ae              	       0x38430c3a0 0x3842e0000 + 181152
3   uaudio_ua_1176ae              	       0x38430c184 0x3842e0000 + 180612
4   uaudio_ua_1176ae              	       0x38430f4f4 0x3842e0000 + 193780
5   uaudio_ua_1176ae              	       0x38435b8ec 0x3842e0000 + 506092
6   uaudio_ua_1176ae              	       0x38435c2d0 0x3842e0000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 65:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x38430b614 0x3842e0000 + 177684
2   uaudio_ua_1176ae              	       0x38430c3a0 0x3842e0000 + 181152
3   uaudio_ua_1176ae              	       0x38430c184 0x3842e0000 + 180612
4   uaudio_ua_1176ae              	       0x38430f4f4 0x3842e0000 + 193780
5   uaudio_ua_1176ae              	       0x38435b8ec 0x3842e0000 + 506092
6   uaudio_ua_1176ae              	       0x38435c2d0 0x3842e0000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 66:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x389c1cbfc 0x389b38000 + 936956
3   XO                            	       0x389c3f280 0x389b38000 + 1077888
4   XO                            	       0x389c1dab4 0x389b38000 + 940724
5   XO                            	       0x389c3317c 0x389b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 67:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x389c1cbfc 0x389b38000 + 936956
3   XO                            	       0x389c3f280 0x389b38000 + 1077888
4   XO                            	       0x389c1dab4 0x389b38000 + 940724
5   XO                            	       0x389c3317c 0x389b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 68:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x389c1cbfc 0x389b38000 + 936956
3   XO                            	       0x389c3f280 0x389b38000 + 1077888
4   XO                            	       0x389c1dab4 0x389b38000 + 940724
5   XO                            	       0x389c3317c 0x389b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 69:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x389c1cbfc 0x389b38000 + 936956
3   XO                            	       0x389c3f280 0x389b38000 + 1077888
4   XO                            	       0x389c1dab4 0x389b38000 + 940724
5   XO                            	       0x389c3317c 0x389b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 70:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x389c1cbfc 0x389b38000 + 936956
3   XO                            	       0x389c3f280 0x389b38000 + 1077888
4   XO                            	       0x389c1dab4 0x389b38000 + 940724
5   XO                            	       0x389c3317c 0x389b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 71:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x389c1cbfc 0x389b38000 + 936956
3   XO                            	       0x389c3f280 0x389b38000 + 1077888
4   XO                            	       0x389c1dab4 0x389b38000 + 940724
5   XO                            	       0x389c3317c 0x389b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 72:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x389c1cbfc 0x389b38000 + 936956
3   XO                            	       0x389c3f280 0x389b38000 + 1077888
4   XO                            	       0x389c1dab4 0x389b38000 + 940724
5   XO                            	       0x389c3317c 0x389b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 73:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x389c1cbfc 0x389b38000 + 936956
3   XO                            	       0x389c3f280 0x389b38000 + 1077888
4   XO                            	       0x389c1dab4 0x389b38000 + 940724
5   XO                            	       0x389c3317c 0x389b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 74:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x389c1cbfc 0x389b38000 + 936956
3   XO                            	       0x389c3f280 0x389b38000 + 1077888
4   XO                            	       0x389c1dab4 0x389b38000 + 940724
5   XO                            	       0x389c3317c 0x389b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 75:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x389c1cbfc 0x389b38000 + 936956
3   XO                            	       0x389c3f280 0x389b38000 + 1077888
4   XO                            	       0x389c1dab4 0x389b38000 + 940724
5   XO                            	       0x389c3317c 0x389b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 76:
0   libsystem_kernel.dylib        	       0x1901e1d00 mach_wait_until + 8
1   CarbonCore                    	       0x193da7f1c MPDelayUntil + 20
2   XO                            	       0x389ee0868 0x389b38000 + 3836008
3   XO                            	       0x389f4d888 0x389b38000 + 4282504
4   XO                            	       0x389ee0508 0x389b38000 + 3835144
5   CarbonCore                    	       0x193da765c PrivateMPEntryPoint + 60
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 77:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   XO                            	       0x38a052448 0x389b38000 + 5350472
4   XO                            	       0x38a0540a8 0x389b38000 + 5357736
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 78:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 79:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 80:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 81:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 82:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 83:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 84:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 85:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 86:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 87:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 88:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 89:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 90:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 91:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 92:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 93:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 94:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 95:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 96:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 97:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 98:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 99:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a4157e38 0x3a3d4c000 + 4243000
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 100:: AudioRecorder_thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a412c368 0x3a3d4c000 + 4064104
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 101:: com.u-he.Diva.voice-renderer 0
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 102:: com.u-he.Diva.voice-renderer 1
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 103:: com.u-he.Diva.voice-renderer 2
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 104:: com.u-he.Diva.voice-renderer 3
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 105:: com.u-he.Diva.voice-renderer 4
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 106:: com.u-he.Diva.voice-renderer 5
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 107:: com.u-he.Diva.voice-renderer 6
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 108:: com.u-he.Diva.voice-renderer 7
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 109:: com.u-he.Diva.voice-renderer 8
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 110:: com.u-he.Diva.voice-renderer 9
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 111:: com.u-he.Diva.voice-renderer 10
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 112:: com.u-he.Diva.voice-renderer 11
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 113:: com.u-he.Diva.voice-renderer 12
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 114:: com.u-he.Diva.voice-renderer 13
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 115:: com.u-he.Diva.voice-renderer 14
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 116:: com.u-he.Diva.voice-renderer 15
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 117:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   WrapPersist                   	       0x39c2889f8 0x39c054000 + 2312696
4   WrapPersist                   	       0x39c28cb0c 0x39c054000 + 2329356
5   WrapPersist                   	       0x39c28ca64 0x39c054000 + 2329188
6   WrapPersist                   	       0x39c28c9b0 0x39c054000 + 2329008
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 118:: Internet Monitor
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   Stardust 201 Tape Echo        	       0x3c7d106c8 PSInternet::run() + 46108
3   Stardust 201 Tape Echo        	       0x3c7e3ded4 juce::threadEntryProc(void*) + 528
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 119:: thumb cache
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Stardust 201 Tape Echo        	       0x3c7e2d034 juce::WaitableEvent::wait(int) const + 152
4   Stardust 201 Tape Echo        	       0x3c7e2cc8c juce::TimeSliceThread::run() + 128
5   Stardust 201 Tape Echo        	       0x3c7e3ded4 juce::threadEntryProc(void*) + 528
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 120:: com.apple.NSURLConnectionLoader
0   libsystem_kernel.dylib        	       0x1901e1c34 mach_msg2_trap + 8
1   libsystem_kernel.dylib        	       0x1901f43a0 mach_msg2_internal + 76
2   libsystem_kernel.dylib        	       0x1901ea764 mach_msg_overwrite + 484
3   libsystem_kernel.dylib        	       0x1901e1fa8 mach_msg + 24
4   CoreFoundation                	       0x19030ecbc __CFRunLoopServiceMachPort + 160
5   CoreFoundation                	       0x19030d5d8 __CFRunLoopRun + 1208
6   CoreFoundation                	       0x19030ca98 CFRunLoopRunSpecific + 572
7   CFNetwork                     	       0x1960172f4 +[__CFN_CoreSchedulingSetRunnable _run:] + 416
8   Foundation                    	       0x1918d6ba8 __NSThread__start__ + 732
9   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
10  libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 121:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_studio_d_chorus        	       0x3cf2bbd34 0x3cf21c000 + 654644
4   uaudio_studio_d_chorus        	       0x3cf2863a0 0x3cf21c000 + 435104
5   uaudio_studio_d_chorus        	       0x3cf297128 0x3cf21c000 + 504104
6   uaudio_studio_d_chorus        	       0x3cf297af8 0x3cf21c000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 122:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3cf246e3c 0x3cf21c000 + 175676
2   uaudio_studio_d_chorus        	       0x3cf247bc8 0x3cf21c000 + 179144
3   uaudio_studio_d_chorus        	       0x3cf2479ac 0x3cf21c000 + 178604
4   uaudio_studio_d_chorus        	       0x3cf24ad1c 0x3cf21c000 + 191772
5   uaudio_studio_d_chorus        	       0x3cf297114 0x3cf21c000 + 504084
6   uaudio_studio_d_chorus        	       0x3cf297af8 0x3cf21c000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 123:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3cf246e3c 0x3cf21c000 + 175676
2   uaudio_studio_d_chorus        	       0x3cf247bc8 0x3cf21c000 + 179144
3   uaudio_studio_d_chorus        	       0x3cf2479ac 0x3cf21c000 + 178604
4   uaudio_studio_d_chorus        	       0x3cf24ad1c 0x3cf21c000 + 191772
5   uaudio_studio_d_chorus        	       0x3cf297114 0x3cf21c000 + 504084
6   uaudio_studio_d_chorus        	       0x3cf297af8 0x3cf21c000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 124:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3cf246e3c 0x3cf21c000 + 175676
2   uaudio_studio_d_chorus        	       0x3cf247bc8 0x3cf21c000 + 179144
3   uaudio_studio_d_chorus        	       0x3cf2479ac 0x3cf21c000 + 178604
4   uaudio_studio_d_chorus        	       0x3cf24ad1c 0x3cf21c000 + 191772
5   uaudio_studio_d_chorus        	       0x3cf297114 0x3cf21c000 + 504084
6   uaudio_studio_d_chorus        	       0x3cf297af8 0x3cf21c000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 125:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3cf246e3c 0x3cf21c000 + 175676
2   uaudio_studio_d_chorus        	       0x3cf247bc8 0x3cf21c000 + 179144
3   uaudio_studio_d_chorus        	       0x3cf2479ac 0x3cf21c000 + 178604
4   uaudio_studio_d_chorus        	       0x3cf24ad1c 0x3cf21c000 + 191772
5   uaudio_studio_d_chorus        	       0x3cf297114 0x3cf21c000 + 504084
6   uaudio_studio_d_chorus        	       0x3cf297af8 0x3cf21c000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 126:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3ed7d60cc 0x3ed294000 + 5513420
4   Pianoteq 8 STAGE              	       0x3ed2a0780 0x3ed294000 + 51072
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 127:: jq-1
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3ed7d5f78 0x3ed294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3ed7d77dc 0x3ed294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 128:: jq-10
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3ed7d5f78 0x3ed294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3ed7d77dc 0x3ed294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 129:: jq-2
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3ed7d5f78 0x3ed294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3ed7d77dc 0x3ed294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 130:: jq-9
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3ed7d5f78 0x3ed294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3ed7d77dc 0x3ed294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 131:: jq-8
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3ed7d5f78 0x3ed294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3ed7d77dc 0x3ed294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 132:: jq-3
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3ed7d5f78 0x3ed294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3ed7d77dc 0x3ed294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 133:: jq-4
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3ed7d5f78 0x3ed294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3ed7d77dc 0x3ed294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 134:: jq-7
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3ed7d5f78 0x3ed294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3ed7d77dc 0x3ed294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 135:: jq-5
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3ed7d5f78 0x3ed294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3ed7d77dc 0x3ed294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 136:: jq-6
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3ed7d5f78 0x3ed294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3ed7d77dc 0x3ed294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 137:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3ed7d60cc 0x3ed294000 + 5513420
4   Pianoteq 8 STAGE              	       0x3ed4d8aec 0x3ed294000 + 2378476
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 138:: vpuptthd
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3ed7d60cc 0x3ed294000 + 5513420
4   Pianoteq 8 STAGE              	       0x3ed29d2e4 0x3ed294000 + 37604
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 139:: tith
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3ed7d60cc 0x3ed294000 + 5513420
4   Pianoteq 8 STAGE              	       0x3ed29d838 0x3ed294000 + 38968
5   Pianoteq 8 STAGE              	       0x3ed7d6358 0x3ed294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 140:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_electra                	       0x3f7daa654 0x3f7d08000 + 665172
4   uaudio_electra                	       0x3f7d74cc0 0x3f7d08000 + 445632
5   uaudio_electra                	       0x3f7d85a48 0x3f7d08000 + 514632
6   uaudio_electra                	       0x3f7d86418 0x3f7d08000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 141:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3f7d3575c 0x3f7d08000 + 186204
2   uaudio_electra                	       0x3f7d364e8 0x3f7d08000 + 189672
3   uaudio_electra                	       0x3f7d362cc 0x3f7d08000 + 189132
4   uaudio_electra                	       0x3f7d3963c 0x3f7d08000 + 202300
5   uaudio_electra                	       0x3f7d85a34 0x3f7d08000 + 514612
6   uaudio_electra                	       0x3f7d86418 0x3f7d08000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 142:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3f7d3575c 0x3f7d08000 + 186204
2   uaudio_electra                	       0x3f7d364e8 0x3f7d08000 + 189672
3   uaudio_electra                	       0x3f7d362cc 0x3f7d08000 + 189132
4   uaudio_electra                	       0x3f7d3963c 0x3f7d08000 + 202300
5   uaudio_electra                	       0x3f7d85a34 0x3f7d08000 + 514612
6   uaudio_electra                	       0x3f7d86418 0x3f7d08000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 143:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3f7d3575c 0x3f7d08000 + 186204
2   uaudio_electra                	       0x3f7d364e8 0x3f7d08000 + 189672
3   uaudio_electra                	       0x3f7d362cc 0x3f7d08000 + 189132
4   uaudio_electra                	       0x3f7d3963c 0x3f7d08000 + 202300
5   uaudio_electra                	       0x3f7d85a34 0x3f7d08000 + 514612
6   uaudio_electra                	       0x3f7d86418 0x3f7d08000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 144:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3f7d3575c 0x3f7d08000 + 186204
2   uaudio_electra                	       0x3f7d364e8 0x3f7d08000 + 189672
3   uaudio_electra                	       0x3f7d362cc 0x3f7d08000 + 189132
4   uaudio_electra                	       0x3f7d3963c 0x3f7d08000 + 202300
5   uaudio_electra                	       0x3f7d85a34 0x3f7d08000 + 514612
6   uaudio_electra                	       0x3f7d86418 0x3f7d08000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 145:: com.u-he.Diva.voice-renderer 0
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 146:: com.u-he.Diva.voice-renderer 1
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 147:: com.u-he.Diva.voice-renderer 2
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 148:: com.u-he.Diva.voice-renderer 3
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 149:: com.u-he.Diva.voice-renderer 4
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 150:: com.u-he.Diva.voice-renderer 5
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 151:: com.u-he.Diva.voice-renderer 6
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 152:: com.u-he.Diva.voice-renderer 7
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 153:: com.u-he.Diva.voice-renderer 8
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 154:: com.u-he.Diva.voice-renderer 9
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 155:: com.u-he.Diva.voice-renderer 10
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 156:: com.u-he.Diva.voice-renderer 11
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 157:: com.u-he.Diva.voice-renderer 12
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 158:: com.u-he.Diva.voice-renderer 13
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 159:: com.u-he.Diva.voice-renderer 14
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 160:: com.u-he.Diva.voice-renderer 15
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3ae033f74 0x3adbe0000 + 4538228
3   Diva                          	       0x3ae0a7f34 0x3adbe0000 + 5013300
4   Diva                          	       0x3ae479178 0x3adbe0000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 161:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_ua_1176ln_rev_e        	       0x3fe3736d4 0x3fe2d4000 + 653012
4   uaudio_ua_1176ln_rev_e        	       0x3fe33dd40 0x3fe2d4000 + 433472
5   uaudio_ua_1176ln_rev_e        	       0x3fe34eac8 0x3fe2d4000 + 502472
6   uaudio_ua_1176ln_rev_e        	       0x3fe34f498 0x3fe2d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 162:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3fe2fe7dc 0x3fe2d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3fe2ff568 0x3fe2d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3fe2ff34c 0x3fe2d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3fe3026bc 0x3fe2d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3fe34eab4 0x3fe2d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3fe34f498 0x3fe2d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 163:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3fe2fe7dc 0x3fe2d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3fe2ff568 0x3fe2d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3fe2ff34c 0x3fe2d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3fe3026bc 0x3fe2d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3fe34eab4 0x3fe2d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3fe34f498 0x3fe2d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 164:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3fe2fe7dc 0x3fe2d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3fe2ff568 0x3fe2d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3fe2ff34c 0x3fe2d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3fe3026bc 0x3fe2d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3fe34eab4 0x3fe2d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3fe34f498 0x3fe2d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 165:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3fe2fe7dc 0x3fe2d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3fe2ff568 0x3fe2d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3fe2ff34c 0x3fe2d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3fe3026bc 0x3fe2d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3fe34eab4 0x3fe2d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3fe34f498 0x3fe2d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 166:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_teletronix_la-2a_gray  	       0x3fd79f9ac 0x3fd700000 + 653740
4   uaudio_teletronix_la-2a_gray  	       0x3fd76a018 0x3fd700000 + 434200
5   uaudio_teletronix_la-2a_gray  	       0x3fd77ada0 0x3fd700000 + 503200
6   uaudio_teletronix_la-2a_gray  	       0x3fd77b770 0x3fd700000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 167:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3fd72aab4 0x3fd700000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3fd72b840 0x3fd700000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3fd72b624 0x3fd700000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3fd72e994 0x3fd700000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3fd77ad8c 0x3fd700000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3fd77b770 0x3fd700000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 168:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3fd72aab4 0x3fd700000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3fd72b840 0x3fd700000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3fd72b624 0x3fd700000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3fd72e994 0x3fd700000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3fd77ad8c 0x3fd700000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3fd77b770 0x3fd700000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 169:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3fd72aab4 0x3fd700000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3fd72b840 0x3fd700000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3fd72b624 0x3fd700000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3fd72e994 0x3fd700000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3fd77ad8c 0x3fd700000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3fd77b770 0x3fd700000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 170:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3fd72aab4 0x3fd700000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3fd72b840 0x3fd700000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3fd72b624 0x3fd700000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3fd72e994 0x3fd700000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3fd77ad8c 0x3fd700000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3fd77b770 0x3fd700000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 171:: splice event processor
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   SpliceBridge                  	       0x40fab7ba4 juce::WaitableEvent::wait(double) const + 108
4   SpliceBridge                  	       0x40f800d5c SpliceEventProcessor::process_events_on_thread() + 128
5   SpliceBridge                  	       0x40f800cb4 SpliceEventProcessor::run() + 44
6   SpliceBridge                  	       0x40fab8960 juce::Thread::threadEntryPoint() + 296
7   SpliceBridge                  	       0x40fb26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
8   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
9   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 172:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SpliceBridge                  	       0x40fab7c38 juce::WaitableEvent::wait(double) const + 256
4   SpliceBridge                  	       0x40fa65498 juce::Timer::TimerThread::run() + 480
5   SpliceBridge                  	       0x40fab8960 juce::Thread::threadEntryPoint() + 296
6   SpliceBridge                  	       0x40fb26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 173:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x40fffd1e4 gpr_cv_wait + 132
3   SpliceBridge                  	       0x40ff10068 grpc_core::Executor::ThreadMain(void*) + 232
4   SpliceBridge                  	       0x4100019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 174:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x40fffd1e4 gpr_cv_wait + 132
3   SpliceBridge                  	       0x40ff10068 grpc_core::Executor::ThreadMain(void*) + 232
4   SpliceBridge                  	       0x4100019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 175:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x40fffd1cc gpr_cv_wait + 108
3   SpliceBridge                  	       0x40ff20ab4 timer_thread(void*) + 724
4   SpliceBridge                  	       0x4100019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 176:: grpc communication thread
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   SpliceBridge                  	       0x40fa83308 juce::Thread::sleep(int) + 80
3   SpliceBridge                  	       0x40f7fea2c SpliceCommunication::run() + 124
4   SpliceBridge                  	       0x40fab8960 juce::Thread::threadEntryPoint() + 296
5   SpliceBridge                  	       0x40fb26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 177:: audio loading thread
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   SpliceBridge                  	       0x40fa83308 juce::Thread::sleep(int) + 80
3   SpliceBridge                  	       0x40f812670 SpliceSuperPowered::run() + 564
4   SpliceBridge                  	       0x40fab8960 juce::Thread::threadEntryPoint() + 296
5   SpliceBridge                  	       0x40fb26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 178:: JUCE v8.0.8: Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SoundCollector                	       0x427db6738 std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&) + 328
4   SoundCollector                	       0x427db63c4 void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
5   SoundCollector                	       0x427df429c std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&) + 132
6   SoundCollector                	       0x427df4148 bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1) + 72
7   SoundCollector                	       0x427d7b6d0 bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1) + 100
8   SoundCollector                	       0x427d4a30c juce::WaitableEvent::wait(double) const + 188
9   SoundCollector                	       0x427d4c154 juce::Thread::wait(double) const + 36
10  SoundCollector                	       0x427e2fdf8 juce::Timer::TimerThread::run() + 420
11  SoundCollector                	       0x427d4b0ec juce::Thread::threadEntryPoint() + 340
12  SoundCollector                	       0x427d4b4b0 juce::juce_threadEntryPoint(void*) + 24
13  SoundCollector                	       0x427da4dd8 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const + 148
14  SoundCollector                	       0x427da4d38 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*) + 28
15  libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
16  libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 179:: JUCE v8.0.8: thumb cache
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SoundCollector                	       0x427db6738 std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&) + 328
4   SoundCollector                	       0x427db63c4 void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
5   SoundCollector                	       0x427df429c std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&) + 132
6   SoundCollector                	       0x427df4148 bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1) + 72
7   SoundCollector                	       0x427d7b6d0 bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1) + 100
8   SoundCollector                	       0x427d4a30c juce::WaitableEvent::wait(double) const + 188
9   SoundCollector                	       0x427d4c154 juce::Thread::wait(double) const + 36
10  SoundCollector                	       0x427d4f9a4 juce::TimeSliceThread::run() + 848
11  SoundCollector                	       0x427d4b0ec juce::Thread::threadEntryPoint() + 340
12  SoundCollector                	       0x427d4b4b0 juce::juce_threadEntryPoint(void*) + 24
13  SoundCollector                	       0x427da4dd8 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const + 148
14  SoundCollector                	       0x427da4d38 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*) + 28
15  libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
16  libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 180:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a51fee0 0x42a4e4000 + 245472
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 181:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a506e24 0x42a4e4000 + 142884
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 182:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a506e24 0x42a4e4000 + 142884
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 183:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a506e24 0x42a4e4000 + 142884
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 184:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a50810c 0x42a4e4000 + 147724
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 185:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a50810c 0x42a4e4000 + 147724
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 186:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a51fee0 0x42a4e4000 + 245472
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 187:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a506e24 0x42a4e4000 + 142884
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 188:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a506e24 0x42a4e4000 + 142884
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 189:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a506e24 0x42a4e4000 + 142884
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 190:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a50810c 0x42a4e4000 + 147724
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 191:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x42a6b9498 0x42a4e4000 + 1922200
4   ADPTR MetricAB                	       0x42a50810c 0x42a4e4000 + 147724
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 192:: DiskTaskFIFO
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   ADPTR MetricAB                	       0x42a6ac204 0x42a4e4000 + 1868292
3   ADPTR MetricAB                	       0x42a58db98 0x42a4e4000 + 695192
4   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
5   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 193:: DiskTaskFIFO
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   ADPTR MetricAB                	       0x42a6ac204 0x42a4e4000 + 1868292
3   ADPTR MetricAB                	       0x42a58db98 0x42a4e4000 + 695192
4   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
5   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 194:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   MaxPlugLib                    	       0x44324df3c spdlog::details::mpmc_blocking_queue<spdlog::details::async_msg>::dequeue_for(spdlog::details::async_msg&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l>>) + 136
4   MaxPlugLib                    	       0x44324dde0 spdlog::details::thread_pool::process_next_msg_() + 128
5   MaxPlugLib                    	       0x44324db98 void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct>>, spdlog::details::thread_pool::thread_pool(unsigned long, unsigned long, std::__1::function<void ()>, std::__1::function<void ()>)::'lambda'()>>(void*) + 76
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 195:: RT-InterProcessSenderThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Live                          	       0x1021226c8 0x100ce0000 + 21243592
3   Live                          	       0x101d5d790 0x100ce0000 + 17291152
4   Live                          	       0x101d5e468 0x100ce0000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 196:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_distressor             	       0x32f02b5b4 0x32f000000 + 177588
3   uaudio_distressor             	       0x32f02b06c 0x32f000000 + 176236
4   uaudio_distressor             	       0x32f02aeac 0x32f000000 + 175788
5   uaudio_distressor             	       0x32f19ff90 0x32f000000 + 1703824
6   uaudio_distressor             	       0x32f02ad44 0x32f000000 + 175428
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 197:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_ua_1176ae              	       0x38430c88c 0x3842e0000 + 182412
3   uaudio_ua_1176ae              	       0x38430c344 0x3842e0000 + 181060
4   uaudio_ua_1176ae              	       0x38430c184 0x3842e0000 + 180612
5   uaudio_ua_1176ae              	       0x384481268 0x3842e0000 + 1708648
6   uaudio_ua_1176ae              	       0x38430c01c 0x3842e0000 + 180252
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 198:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_studio_d_chorus        	       0x3cf2480b4 0x3cf21c000 + 180404
3   uaudio_studio_d_chorus        	       0x3cf247b6c 0x3cf21c000 + 179052
4   uaudio_studio_d_chorus        	       0x3cf2479ac 0x3cf21c000 + 178604
5   uaudio_studio_d_chorus        	       0x3cf3bca90 0x3cf21c000 + 1706640
6   uaudio_studio_d_chorus        	       0x3cf247844 0x3cf21c000 + 178244
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 199:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_electra                	       0x3f7d369d4 0x3f7d08000 + 190932
3   uaudio_electra                	       0x3f7d3648c 0x3f7d08000 + 189580
4   uaudio_electra                	       0x3f7d362cc 0x3f7d08000 + 189132
5   uaudio_electra                	       0x3f7eab3b0 0x3f7d08000 + 1717168
6   uaudio_electra                	       0x3f7d36164 0x3f7d08000 + 188772
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 200:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_ua_1176ln_rev_e        	       0x3fe2ffa54 0x3fe2d4000 + 178772
3   uaudio_ua_1176ln_rev_e        	       0x3fe2ff50c 0x3fe2d4000 + 177420
4   uaudio_ua_1176ln_rev_e        	       0x3fe2ff34c 0x3fe2d4000 + 176972
5   uaudio_ua_1176ln_rev_e        	       0x3fe474430 0x3fe2d4000 + 1705008
6   uaudio_ua_1176ln_rev_e        	       0x3fe2ff1e4 0x3fe2d4000 + 176612
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 201:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_teletronix_la-2a_gray  	       0x3fd72bd2c 0x3fd700000 + 179500
3   uaudio_teletronix_la-2a_gray  	       0x3fd72b7e4 0x3fd700000 + 178148
4   uaudio_teletronix_la-2a_gray  	       0x3fd72b624 0x3fd700000 + 177700
5   uaudio_teletronix_la-2a_gray  	       0x3fd8a0708 0x3fd700000 + 1705736
6   uaudio_teletronix_la-2a_gray  	       0x3fd72b4bc 0x3fd700000 + 177340
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 202:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   smartEQ4                      	       0x17d9e6f64 0x17d000000 + 10383204
4   smartEQ4                      	       0x17da62164 0x17d000000 + 10887524
5   smartEQ4                      	       0x17d9f1e1c 0x17d000000 + 10427932
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 203:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Rev PLATE-140                 	       0x386b3591c 0x385bb8000 + 16242972
4   Rev PLATE-140                 	       0x3869527d0 0x385bb8000 + 14264272
5   Rev PLATE-140                 	       0x386b4c340 0x385bb8000 + 16335680
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 204:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a412c894 0x3a3d4c000 + 4065428
4   SubLabXL                      	       0x3a417059c 0x3a3d4c000 + 4343196
5   SubLabXL                      	       0x3a413aef8 0x3a3d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 205:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Stardust 201 Tape Echo        	       0x3c7e2d034 juce::WaitableEvent::wait(int) const + 152
4   Stardust 201 Tape Echo        	       0x3c7e715c8 juce::Timer::TimerThread::run() + 576
5   Stardust 201 Tape Echo        	       0x3c7e3ded4 juce::threadEntryProc(void*) + 528
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 206:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   NSCreateObjectFileImageFromMemory-SyAuO9Bw	       0x3c75c79b0 juce::WaitableEvent::wait(int) const + 152
4   NSCreateObjectFileImageFromMemory-SyAuO9Bw	       0x3c75e24c8 juce::Timer::TimerThread::run() + 576
5   NSCreateObjectFileImageFromMemory-SyAuO9Bw	       0x3c75ce9e4 juce::threadEntryProc(void*) + 528
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 207:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3ed92e268 0x3ed294000 + 6922856
4   Pianoteq 8 STAGE              	       0x3ed9520f8 0x3ed294000 + 7069944
5   Pianoteq 8 STAGE              	       0x3ed92e970 0x3ed294000 + 6924656
6   Pianoteq 8 STAGE              	       0x3ed9432ac 0x3ed294000 + 7008940
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 208:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633fa130 0x363198000 + 2498864
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 209:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   ADPTR MetricAB                	       0x42a6b93bc 0x42a4e4000 + 1921980
4   ADPTR MetricAB                	       0x42a6e80cc 0x42a4e4000 + 2113740
5   ADPTR MetricAB                	       0x42a6b9ff4 0x42a4e4000 + 1925108
6   ADPTR MetricAB                	       0x42a6cf6e8 0x42a4e4000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 210:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   MaxPlugLib                    	       0x44304c4cc juce::WaitableEvent::wait(double) const + 544
4   MaxPlugLib                    	       0x44307f65c juce::Timer::TimerThread::run() + 476
5   MaxPlugLib                    	       0x44304d008 juce::Thread::threadEntryPoint() + 292
6   MaxPlugLib                    	       0x44306ef08 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 211:: tcp_listener
0   libsystem_kernel.dylib        	       0x1901ea46c __accept + 8
1   MaxPlugLib                    	       0x44303e370 juce::StreamingSocket::waitForNextConnection() const + 92
2   MaxPlugLib                    	       0x442e27400 tcpconnection_listenthread(_tcpconnection*) + 168
3   MaxPlugLib                    	       0x442d31de0 systhread_threadproc + 232
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 212:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x17dd48c5c 0x17d000000 + 13929564
2   smartEQ4                      	       0x17d9f1e1c 0x17d000000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 213:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x17dd48c5c 0x17d000000 + 13929564
2   smartEQ4                      	       0x17d9f1e1c 0x17d000000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 214:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x17dd48c5c 0x17d000000 + 13929564
2   smartEQ4                      	       0x17d9f1e1c 0x17d000000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 215:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x17dd48c5c 0x17d000000 + 13929564
2   smartEQ4                      	       0x17d9f1e1c 0x17d000000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 216:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x17dd48c5c 0x17d000000 + 13929564
2   smartEQ4                      	       0x17d9f1e1c 0x17d000000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 217:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x17dd48c5c 0x17d000000 + 13929564
2   smartEQ4                      	       0x17d9f1e1c 0x17d000000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 218:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x17dd48c5c 0x17d000000 + 13929564
2   smartEQ4                      	       0x17d9f1e1c 0x17d000000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 219:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x17dd48c5c 0x17d000000 + 13929564
2   smartEQ4                      	       0x17d9f1e1c 0x17d000000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 220:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x40fffd1e4 gpr_cv_wait + 132
3   SpliceBridge                  	       0x40ff20ab4 timer_thread(void*) + 724
4   SpliceBridge                  	       0x4100019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 221:: caulk::deferred_logger
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   caulk                         	       0x19b896cc8 caulk::semaphore::timed_wait(double) + 224
2   caulk                         	       0x19b896b70 caulk::concurrent::details::worker_thread::run() + 32
3   caulk                         	       0x19b896844 void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*) + 96
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 222:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 223:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 224:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 225:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 226:: CVDisplayLink
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x19022410c _pthread_cond_wait + 1028
2   CoreVideo                     	       0x199bc51f4 CVDisplayLink::waitUntil(unsigned long long) + 336
3   CoreVideo                     	       0x199bc42dc CVDisplayLink::runIOThread() + 500
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 227:
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   Live                          	       0x104a9dd40 0x100ce0000 + 64740672
2   Live                          	       0x104a7f564 0x100ce0000 + 64615780
3   Live                          	       0x104a9d77c 0x100ce0000 + 64739196
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8


Thread 0 crashed with ARM Thread State (64-bit):
    x0: 0x0000000000000038   x1: 0x0000000000000020   x2: 0x0000000000000099   x3: 0x000000000000006b
    x4: 0x0000000000000020   x5: 0x00000000bb49795d   x6: 0x000060002a93eb80   x7: 0x0000000000000006
    x8: 0x0000000000000038   x9: 0x0000000000000000  x10: 0x00000001fe1b60c0  x11: 0x00002040b4bb0000
   x12: 0x0000000000000020  x13: 0x000060002aeb0fa4  x14: 0x00000000001ff800  x15: 0x00000000000007fb
   x16: 0x00000001fe1b60c0  x17: 0x00000001fe1b60c0  x18: 0x0000000000000000  x19: 0x0000600054e8ae40
   x20: 0x0000600000fbc000  x21: 0x0000000095b495ae  x22: 0x000060005eefee10  x23: 0x000000000000022e
   x24: 0x000060006d5dbaa0  x25: 0x000060006d5dbab0  x26: 0x0000600024de14a0  x27: 0x0000000107432000
   x28: 0x00000000ffff7fef   fp: 0x000000016f11dd00   lr: 0x0000000427a370f4
    sp: 0x000000016f11dce0   pc: 0x00000004279e6f3c cpsr: 0x60001000
   far: 0x0000000000000040  esr: 0x92000006 (Data Abort) byte read Translation fault

Binary Images:
       0x100ce0000 -        0x106c93fff com.ableton.live (12.2.2 (2025-08-01_7acf90750f)) <c9ac18e9-0394-35c2-a077-3e9fce2c01c7> /Applications/Ableton Live 12 Suite.app/Contents/MacOS/Live
       0x109d18000 -        0x109e97fff libonnxruntime_abl.dylib (*) <8038ea9a-f0aa-3323-b68f-f754b5f98e85> /Applications/Ableton Live 12 Suite.app/Contents/Frameworks/libonnxruntime_abl.dylib
       0x109728000 -        0x10973bfff libusb-1.0.dylib (*) <98c8293a-4285-31c6-8154-ffa7b4a47a9f> /Applications/Ableton Live 12 Suite.app/Contents/Frameworks/libusb-1.0.dylib
       0x109970000 -        0x1099b7fff se.propellerheads.rex.library (*) <ddfec8a2-ead4-3fab-9674-1be6f6e189c9> /Applications/Ableton Live 12 Suite.app/Contents/Frameworks/REX Shared Library.framework/Versions/A/REX Shared Library
       0x109c74000 -        0x109c7ffff libobjc-trampolines.dylib (*) <a3faee04-0f8b-3428-9497-560c97eca6fb> /usr/lib/libobjc-trampolines.dylib
       0x1321c0000 -        0x132857fff com.apple.AGXMetalG13X (329.2) <6b497f3b-6583-398c-9d05-5f30a1c1bae5> /System/Library/Extensions/AGXMetalG13X.bundle/Contents/MacOS/AGXMetalG13X
       0x17c568000 -        0x17c6d7fff com.fabfilter.Pro-Q.AU.3 (3.26) <e6e002dd-8240-37cd-922f-dbb4e84b4aa1> /Library/Audio/Plug-Ins/Components/FabFilter Pro-Q 3.component/Contents/MacOS/FabFilter Pro-Q 3
       0x157200000 -        0x15721ffff com.apple.security.csparser (3.0) <3a905673-ada9-3c57-992e-b83f555baa61> /System/Library/Frameworks/Security.framework/Versions/A/PlugIns/csparser.bundle/Contents/MacOS/csparser
       0x17d000000 -        0x17e43ffff com.sonible.smarteq4 (1.0.0) <1497c372-617f-3735-8171-efe1e72c4385> /Library/Audio/Plug-Ins/Components/smartEQ4.component/Contents/MacOS/smartEQ4
       0x17f3dc000 -        0x17f967fff libonnxruntime.1.15.1.dylib (*) <bb2e5f66-2caf-35eb-87f3-706dc1a8a6f2> /Library/Application Support/sonible/*/libonnxruntime.1.15.1.dylib
       0x17eff4000 -        0x17f12ffff com.apple.audio.units.Components (1.14) <351a431e-1520-3b3b-bb1e-f034da294ecd> /System/Library/Components/CoreAudio.component/Contents/MacOS/CoreAudio
       0x32f000000 -        0x32f863fff com.uaudio.effects.U3C4 (1.0.8) <db952c5a-48af-3c07-984c-10c83e67ff28> /Library/Audio/Plug-Ins/Components/uaudio_distressor.component/Contents/MacOS/uaudio_distressor
       0x363198000 -        0x36397ffff com.SonicAcademy.Kick3 (1.1.2) <0fd687cb-5ac8-3e3c-aac9-2cf99381d245> /Library/Audio/Plug-Ins/Components/Kick 3.component/Contents/MacOS/Kick 3
       0x3729f0000 -        0x373cc7fff com.xlnaudio.addictivedrums2 (2.7.0) <679d782c-d5d2-3902-844f-5e102be52be3> /Library/Audio/Plug-Ins/Components/Addictive Drums 2.component/Contents/MacOS/Addictive Drums 2
       0x17b3c0000 -        0x17b3ebfff com.arturia.component.Rev-PLATE-140 (67328) <2ea5456b-7ed1-3b94-adca-db0cbe7183cd> /Library/Audio/Plug-Ins/Components/Rev PLATE-140.component/Contents/MacOS/Rev PLATE-140
       0x385bb8000 -        0x386f2ffff com.Arturia.Rev-PLATE-140.vst3 (1.7.0.5460) <fb34ef9c-a26c-331d-a9bb-d84e67eec9cf> /Library/Audio/Plug-Ins/Components/Rev PLATE-140.component/Contents/Resources/plugin.vst3/Contents/MacOS/Rev PLATE-140
       0x364c38000 -        0x364d5ffff libsqlite.dylib (*) <c6fdd249-ac24-385a-85a0-d3e91bfbb179> /Library/Arturia/*/libsqlite.dylib
       0x37fa14000 -        0x37fdd7fff libplateverbProcessor.dylib (*) <9d9fe136-36bd-3683-858c-e1dad60cfed7> /Library/Arturia/*/libplateverbProcessor.dylib
       0x3842e0000 -        0x384b17fff com.uaudio.effects.U39Z (1.3.15) <b995f721-0177-3bb0-835d-1f4b4078bb19> /Library/Audio/Plug-Ins/Components/uaudio_ua_1176ae.component/Contents/MacOS/uaudio_ua_1176ae
       0x389b38000 -        0x38ad87fff com.xlnaudio.xo (1.7.6) <97f45523-4c60-3f63-b228-371ade2d3ad9> /Library/Audio/Plug-Ins/Components/XO.component/Contents/MacOS/XO
       0x384100000 -        0x38421bfff com.fabfilter.Pro-Q.AU.2 (2.23) <490c8b97-fdf6-3b01-a27e-a23537bec4da> /Library/Audio/Plug-Ins/Components/FabFilter Pro-Q 2.component/Contents/MacOS/FabFilter Pro-Q 2
       0x3a3d4c000 -        0x3a91ebfff com.FutureAudioWorkshop.SubLabXL (1.0.4) <f0499087-d400-3cca-909d-9d8dda7bfd52> /Library/Audio/Plug-Ins/Components/SubLabXL.component/Contents/MacOS/SubLabXL
       0x3adbe0000 -        0x3ae65bfff com.u-he.Diva.au (V1.4.7) <d3f4b734-1172-357b-97e3-af161d31b490> /Library/Audio/Plug-Ins/Components/Diva.component/Contents/MacOS/Diva
       0x3ac3a8000 -        0x3ad04ffff com.soundtoys.audiounit.Decapitator (5.4.3.17500 Authorization: Decapitator) <c1140d38-4035-3453-8d99-b393da9727a0> /Library/Audio/Plug-Ins/Components/Decapitator.component/Contents/MacOS/Decapitator
       0x39c054000 -        0x39c343fff com.paceap.eden.WrapPersist (5.10.1 GM (b5284, 8eb337be)) <84667690-b93b-30ad-9737-5e65be8a4d93> /Library/Frameworks/PACEEdenExperience.framework/Versions/A/WrapPersist.bundle/Contents/MacOS/WrapPersist
       0x3bcb5c000 -        0x3bd1ebfff com.xfer.serum.AU (1.363) <111913f2-ace3-302c-a1ef-6a124d64e18b> /Library/Audio/Plug-Ins/Components/Serum.component/Contents/MacOS/Serum
       0x3a3914000 -        0x3a3b93fff com.ValhallaDSP.ValhallaVintageVerb (3.0.0) <6f23cc3b-cbc0-3483-8a2e-8636f440060c> /Library/Audio/Plug-Ins/Components/ValhallaVintageVerbAU64.component/Contents/MacOS/ValhallaVintageVerb
       0x3c7be8000 -        0x3c8273fff com.cherryaudio.stardust201 (1.0.11) <cc6b57e0-7066-3d3d-845c-93c64697ec32> /Library/Audio/Plug-Ins/Components/Stardust 201 Tape Echo.component/Contents/MacOS/Stardust 201 Tape Echo
       0x3c75a8000 -        0x3c77f3fff NSCreateObjectFileImageFromMemory-SyAuO9Bw (*) <a113d629-e07f-3385-bf0b-8680c31a6854> /private/tmp/NSCreateObjectFileImageFromMemory-SyAuO9Bw
       0x3cf21c000 -        0x3cfa3bfff com.uaudio.effects.U3BM (1.2.15) <fc1b963a-365e-3712-9148-f40a126181b2> /Library/Audio/Plug-Ins/Components/uaudio_studio_d_chorus.component/Contents/MacOS/uaudio_studio_d_chorus
       0x3ed294000 -        0x3edaabfff com.modartt.Pianoteq8STAGE.AudioUnit (8.3.1) <caf476aa-3cdc-3bfd-93aa-57eedc7dac58> /Library/Audio/Plug-Ins/Components/Pianoteq 8 STAGE.component/Contents/MacOS/Pianoteq 8 STAGE
       0x3f7d08000 -        0x3f86d3fff com.uaudio.effects.UI07 (1.0.11) <3be207e7-1234-3c87-a820-12e3b15be352> /Library/Audio/Plug-Ins/Components/uaudio_electra.component/Contents/MacOS/uaudio_electra
       0x3fe2d4000 -        0x3feb07fff com.uaudio.effects.U39X (1.3.15) <0f52ecc6-3aa1-3479-a79b-1988e593bfcb> /Library/Audio/Plug-Ins/Components/uaudio_ua_1176ln_rev_e.component/Contents/MacOS/uaudio_ua_1176ln_rev_e
       0x3fd700000 -        0x3fdf3bfff com.uaudio.effects.U3A7 (1.3.15) <8f9c2d2a-e232-370c-a2ba-e2e99a5f9094> /Library/Audio/Plug-Ins/Components/uaudio_teletronix_la-2a_gray.component/Contents/MacOS/uaudio_teletronix_la-2a_gray
       0x40264c000 -        0x40286ffff com.ValhallaDSP.ValhallaRoom (1.6.8) <34896efb-7d7c-380a-a6c7-3337a639c98d> /Library/Audio/Plug-Ins/Components/ValhallaRoomAU64.component/Contents/MacOS/ValhallaRoom
       0x40f794000 -        0x410e07fff com.splice.bridge (5.1.1) <8e7b1830-3932-3675-b0b9-1191e06d9ae4> /Library/Audio/Plug-Ins/Components/SpliceBridge.component/Contents/MacOS/SpliceBridge
       0x40e300000 -        0x40e633fff com.ValhallaDSP.ValhallaDelay (2.5.1) <6c906a52-3c28-3fd0-94aa-03f36901f2d3> /Library/Audio/Plug-Ins/Components/ValhallaDelay.component/Contents/MacOS/ValhallaDelay
       0x40f000000 -        0x40f513fff com.Youlean.audiounit.Youlean-Loudness-Meter-2 (2.4.4) <dec4f989-8b60-35e0-8809-553a3acf4d25> /Library/Audio/Plug-Ins/Components/Youlean Loudness Meter 2.component/Contents/MacOS/Youlean Loudness Meter 2
       0x4279b8000 -        0x428823fff com.yourcompany.SoundCollector (1.0.0) <20d10ad5-4c9a-3777-8f8a-ef1bc8df26d5> /Users/USER/Library/Audio/Plug-Ins/Components/SoundCollector.component/Contents/MacOS/SoundCollector
       0x42a4e4000 -        0x42afebfff com.adptr.MetricAB (1.4.1) <49f6a5ae-93e4-306d-87ca-7d0adcd88007> /Library/Audio/Plug-Ins/Components/ADPTR MetricAB.component/Contents/MacOS/ADPTR MetricAB
       0x125f90000 -        0x125f93fff com.cycling74.maxchecker (1.01) <3d903238-500c-32e8-b9b3-5abede64af6b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/support/maxchecker.bundle/Contents/MacOS/maxchecker
       0x4429d0000 -        0x4452affff com.cycling74.MaxPlugLib ( (b9109490887)) <b6cc4fcf-93c9-3f93-91e1-f5a3840f0914> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/support/MaxPlugLib.bundle/Contents/MacOS/MaxPlugLib
       0x427900000 -        0x427977fff com.cycling74.MaxAudioAPIImpl (*) <0732b043-c55b-35a2-bf3c-98d25964a33e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxAudioAPIImpl.framework/Versions/A/MaxAudioAPIImpl
       0x43ae70000 -        0x43aefbfff com.cycling74.MaxLuaImpl (*) <f1a09173-bfe2-3fcc-a4d8-16c736bfd8c2> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxLuaImpl.framework/Versions/A/MaxLuaImpl
       0x43cf14000 -        0x43d027fff com.cycling74.JitterAPIImpl (1.7.0) <eb73be27-c373-3012-8c2a-87df119182e9> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/JitterAPIImpl.framework/Versions/A/JitterAPIImpl
       0x16f2e0000 -        0x16f2e3fff com.cycling74.MaxLua (*) <8dcd9c4f-c7d7-3aae-9894-65ff549d114f> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxLua.framework/Versions/A/MaxLua
       0x43cc00000 -        0x43cd3ffff libmozjs185_impl.dylib (*) <919cbda1-301b-36a8-877b-dd0e4552c71c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/libmozjs185_impl.dylib
       0x16f1ac000 -        0x16f1d3fff com.cycling74.patcher (9.0.7 (b9109490887)) <d5c02bf1-706c-3017-b19a-c745c32e3619> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/support/patcher.bundle/Contents/MacOS/patcher
       0x16f218000 -        0x16f21bfff com.cycling74.MaxAudioAPI (*) <4f56d925-cc1a-345a-9f38-df723f6175e7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxAudioAPI.framework/Versions/A/MaxAudioAPI
       0x16f224000 -        0x16f227fff com.cycling74.fseventwatcher (9.0.7 (b9109490887)) <21d1ce4b-79c9-36ea-9d2e-49d8843b9f76> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/fseventwatcher.mxo/Contents/MacOS/fseventwatcher
       0x399c6c000 -        0x399c6ffff com.cycling74.cefaudio (9.0.7 (b9109490887)) <7ca48c89-d341-37ed-980d-1cef562f3000> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/cefaudio.mxo/Contents/MacOS/cefaudio
       0x43ddf0000 -        0x43df27fff com.cycling74.gl2 (9.0.7 (b9109490887)) <4e7cb2d7-2d29-35a0-aa40-f3a36b132993> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/jitter/gl2.mxo/Contents/MacOS/gl2
       0x39a7f4000 -        0x39a7f7fff com.cycling74.JitterAPI (1.7.0) <22a2aee2-383c-317a-bdef-c0b99a459e29> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/JitterAPI.framework/Versions/A/JitterAPI
       0x43dc3c000 -        0x43dcdffff com.cycling74.sketch (9.0.7 (b9109490887)) <ad424434-84a2-3b3f-95fd-0b5fd80f5e4a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/jitter/sketch.mxo/Contents/MacOS/sketch
       0x39aa00000 -        0x39aa37fff com.cycling74.live.guilib (9.0.7 (b9109490887)) <e173c13c-b3aa-3dce-8263-057da7df3197> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/m4l/live.guilib.mxo/Contents/MacOS/live.guilib
       0x39aa54000 -        0x39aa5bfff com.cycling74.autohelp (9.0.7 (b9109490887)) <6a85940d-a6c3-3c7b-83ad-a9594e2a516e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/autohelp.mxo/Contents/MacOS/autohelp
       0x39b000000 -        0x39b003fff com.cycling74.debugwindow (9.0.7 (b9109490887)) <c05f164c-2898-3ee9-bd20-1112cb226b5d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/debugwindow.mxo/Contents/MacOS/debugwindow
       0x43da98000 -        0x43db83fff com.cycling74.genpatcher (9.0.7 (b9109490887)) <b205c9af-3e5c-33d0-82f8-82d17b440cd5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/genpatcher.mxo/Contents/MacOS/genpatcher
       0x39c390000 -        0x39c393fff com.cycling74.jsrepl (9.0.7 (b9109490887)) <9d093fd9-335c-3f22-9e06-513ab299279e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/jsrepl.mxo/Contents/MacOS/jsrepl
       0x44e864000 -        0x4519ebfff com.cycling74.maxclang (9.0.7 (b9109490887)) <37622245-5b39-333d-bc04-1a8cf81387a7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxclang.mxo/Contents/MacOS/maxclang
       0x43dd10000 -        0x43dd9ffff com.cycling74.maxurl (9.0.7 (b9109490887)) <38529482-7204-37b5-9000-d2b66ae5a25b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxurl.mxo/Contents/MacOS/maxurl
       0x4457f8000 -        0x4476c3fff com.cycling74.maxxslt (9.0.7 (b9109490887)) <c1eb4c91-83e7-3c7b-a234-a4331941d5b4> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxxslt.mxo/Contents/MacOS/maxxslt
       0x39cdd8000 -        0x39cdeffff com.cycling74.maxzlib (9.0.7 (b9109490887)) <6dd0952b-f5f8-30a5-b47d-2243d2d17e51> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxzlib.mxo/Contents/MacOS/maxzlib
       0x39cdac000 -        0x39cdaffff com.cycling74.objectview (9.0.7 (b9109490887)) <49fe8b49-a629-3833-b315-6b414300a378> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/objectview.mxo/Contents/MacOS/objectview
       0x39cd80000 -        0x39cd87fff com.cycling74.palblocks (9.0.7 (b9109490887)) <c68e6a5f-80bd-3662-b837-cfd8275a7342> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/palblocks.mxo/Contents/MacOS/palblocks
       0x39cdc0000 -        0x39cdc7fff com.cycling74.paramview (9.0.7 (b9109490887)) <1702c166-2b64-30ce-925d-c8bfad05458f> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/paramview.mxo/Contents/MacOS/paramview
       0x39cfc8000 -        0x39cfd3fff com.cycling74.pianoroll (9.0.7 (b9109490887)) <ae43e3ff-6d8b-33ed-8a38-488be7f9566d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/pianoroll.mxo/Contents/MacOS/pianoroll
       0x39cfe4000 -        0x39cfebfff com.cycling74.querylib (9.0.7 (b9109490887)) <3ccf65e7-edbe-39d8-a439-cece09461fb0> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/querylib.mxo/Contents/MacOS/querylib
       0x3a3d28000 -        0x3a3d2ffff com.cycling74.setplugpath (9.0.7 (b9109490887)) <54adbd9a-4125-3976-be4f-f793dd79b3ca> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/setplugpath.mxo/Contents/MacOS/setplugpath
       0x43eaf0000 -        0x43ec33fff com.cycling74.sqlite (9.0.7 (b9109490887)) <bd9536ff-96a3-3f3c-855d-bfec7b3fb78a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/sqlite.mxo/Contents/MacOS/sqlite
       0x3adb58000 -        0x3adb87fff com.cycling74.synophrys (9.0.7 (b9109490887)) <c278dae1-d11c-376b-b6e7-7b732ecd9e37> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/synophrys.mxo/Contents/MacOS/synophrys
       0x44774c000 -        0x448673fff com.cycling74.v8 (9.0.7 (b9109490887)) <02ec3450-9c1a-31ca-87ef-d7ede5c5ac0c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/v8.mxo/Contents/MacOS/v8
       0x3aea84000 -        0x3aeab3fff com.cycling74.yaml (9.0.7 (b9109490887)) <f55d5407-47a7-3beb-ab74-273416439b1c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/yaml.mxo/Contents/MacOS/yaml
       0x39cd98000 -        0x39cd9bfff com.cycling74.zoomer (9.0.7 (b9109490887)) <3bf1b8a0-5c1c-31c1-9007-b9e3baea5826> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/zoomer.mxo/Contents/MacOS/zoomer
       0x39cf8c000 -        0x39cf97fff com.cycling74.max-tilde (9.0.7 (b9109490887)) <18f0eb06-9865-3c72-952d-41f35a4622da> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/max~.mxo/Contents/MacOS/max~
       0x39cfac000 -        0x39cfb7fff com.cycling74.polybuffer (9.0.7 (b9109490887)) <65d11a2d-4569-3df2-a42d-145b567dc951> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/polybuffer.mxo/Contents/MacOS/polybuffer
       0x3adbcc000 -        0x3adbcffff com.cycling74.probe.history-tilde (9.0.7 (b9109490887)) <517a6822-8290-3b6b-bf75-cf8cd7676dc5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/probe.history~.mxo/Contents/MacOS/probe.history~
       0x3aeadc000 -        0x3aeadffff com.cycling74.probe.meter-tilde (9.0.7 (b9109490887)) <9bb3a25c-ae42-3746-9d0f-0a22ede04794> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/probe.meter~.mxo/Contents/MacOS/probe.meter~
       0x3adba0000 -        0x3adba3fff com.cycling74.probe.scope-tilde (9.0.7 (b9109490887)) <a9b3274a-0d9c-3e5c-84c9-8a971ed87567> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/probe.scope~.mxo/Contents/MacOS/probe.scope~
       0x43e900000 -        0x43ea3ffff com.cycling74.gl3 (9.0.7 (b9109490887)) <42dc0237-9e6c-38bd-b5fb-963875766eac> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/packages/Jitter Tools/extensions/gl3.mxo/Contents/MacOS/gl3
       0x3adbb4000 -        0x3adbb7fff com.acme.${PRODUCT_NAME:rfc1034identifier} (8.2.0) <11e2f200-6641-3c87-b652-6fdc3b7afca1> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/packages/max-mxj/extensions/mxj_safe.mxo/Contents/MacOS/mxj_safe
       0x43f9d0000 -        0x43fd77fff com.cycling74.rnbopatcher (*) <de1ffce1-b977-36e2-870c-ac4dc80aec2e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/packages/RNBO/extensions/rnbopatcher.mxo/Contents/MacOS/rnbopatcher
       0x3aefe0000 -        0x3aefe7fff com.cycling74.comment (9.0.7 (b9109490887)) <26b3d8ff-e0a5-3077-9f17-0cf1adf385f2> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/comment.mxo/Contents/MacOS/comment
       0x3aefa4000 -        0x3aefc3fff com.cycling74.js (9.0.7 (b9109490887)) <e314a8cc-72ee-3daa-b782-3d037d621fa7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/js.mxo/Contents/MacOS/js
       0x39c3a4000 -        0x39c3a7fff libmozjs185.dylib (*) <bfc682c9-649e-31ae-9e95-2209a5ff1702> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/libmozjs185.dylib
       0x3bc990000 -        0x3bc997fff com.cycling74.jsjitter (9.0.7 (b9109490887)) <e83b29d6-ce1f-3835-9618-8764c4a5da0c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/jitter/jsjitter.mxo/Contents/MacOS/jsjitter
       0x3bc9a8000 -        0x3bc9affff com.cycling74.jsliveapi (9.0.7 (b9109490887)) <06e52919-0fa6-3bee-a360-2c6207367be8> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/m4l/jsliveapi.mxo/Contents/MacOS/jsliveapi
       0x3bc9c0000 -        0x3bc9c3fff com.cycling74.jsfolder (9.0.7 (b9109490887)) <41150e82-11ff-3ded-a5cf-11bb8c9f980b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsfolder.mxo/Contents/MacOS/jsfolder
       0x3bc9d4000 -        0x3bc9d7fff com.cycling74.jsmaxobjlistener (9.0.7 (b9109490887)) <9765142b-2d49-3d4c-a658-dd47cd5a88f5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsmaxobjlistener.mxo/Contents/MacOS/jsmaxobjlistener
       0x3bc9e8000 -        0x3bc9ebfff com.cycling74.jsparaminfoprovider (9.0.7 (b9109490887)) <4fefb063-ba42-30ed-8c2f-a110bfd1f883> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsparaminfoprovider.mxo/Contents/MacOS/jsparaminfoprovider
       0x3bcb00000 -        0x3bcb03fff com.cycling74.jsparamlistener (9.0.7 (b9109490887)) <612efa73-5628-37d3-a5fc-0b5807614d4e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsparamlistener.mxo/Contents/MacOS/jsparamlistener
       0x3bcb14000 -        0x3bcb17fff com.cycling74.jsrequire (9.0.7 (b9109490887)) <e28319e4-a960-347f-b755-4370b4503424> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsrequire.mxo/Contents/MacOS/jsrequire
       0x3bcb28000 -        0x3bcb2bfff com.cycling74.jsrx256 (9.0.7 (b9109490887)) <07911bce-cfca-369e-b75d-002eba5dad46> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsrx256.mxo/Contents/MacOS/jsrx256
       0x3bcb3c000 -        0x3bcb3ffff com.cycling74.jssnapshotapi (9.0.7 (b9109490887)) <4ef5252f-0e92-3efc-9d27-78a71ebe84b8> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jssnapshotapi.mxo/Contents/MacOS/jssnapshotapi
       0x3c4590000 -        0x3c4593fff com.cycling74.jssqlite (9.0.7 (b9109490887)) <04d3289a-7d72-3a3d-b392-bd203bbff6a2> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jssqlite.mxo/Contents/MacOS/jssqlite
       0x3c45a4000 -        0x3c45a7fff com.cycling74.jssqlresult (9.0.7 (b9109490887)) <efffca0c-e4ab-3719-895b-cad04ab6eb86> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jssqlresult.mxo/Contents/MacOS/jssqlresult
       0x3c45b8000 -        0x3c45bbfff com.cycling74.jstrigger (9.0.7 (b9109490887)) <034d76a3-99de-3cda-96f7-1b4c869571dc> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jstrigger.mxo/Contents/MacOS/jstrigger
       0x3c45cc000 -        0x3c45cffff com.cycling74.jsxmlhttprequest (9.0.7 (b9109490887)) <e8eff39a-5f8d-327d-8c42-2a02e24cae32> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsxmlhttprequest.mxo/Contents/MacOS/jsxmlhttprequest
       0x3c45e0000 -        0x3c45e3fff com.cycling74.jsbuffer (9.0.7 (b9109490887)) <8bba6d9b-f22d-3098-b1df-08d06c7e157c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/msp/jsbuffer.mxo/Contents/MacOS/jsbuffer
       0x17b1bc000 -        0x17b1bffff com.cycling74.delay (9.0.7 (b9109490887)) <229d5dc5-2748-376b-89e7-b15ae4b4642d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/delay.mxo/Contents/MacOS/delay
       0x17b1d0000 -        0x17b1d3fff com.cycling74.ubutton (9.0.7 (b9109490887)) <fa3ce921-0824-3628-b823-14aaba2ab6d7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/ubutton.mxo/Contents/MacOS/ubutton
       0x17b190000 -        0x17b19bfff com.cycling74.message (9.0.7 (b9109490887)) <df31d34d-d90a-3998-bfb9-2fbb643f598a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/message.mxo/Contents/MacOS/message
       0x17b1e4000 -        0x17b1effff com.cycling74.panel (9.0.7 (b9109490887)) <0a076c00-4321-37a1-9410-e7a7d8d5ce44> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/panel.mxo/Contents/MacOS/panel
       0x17b204000 -        0x17b207fff com.cycling74.deferlow (9.0.7 (b9109490887)) <ec700477-2893-3703-a136-d0e8f55f97b0> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/deferlow.mxo/Contents/MacOS/deferlow
       0x3bafc8000 -        0x3bafd3fff com.cycling74.textbutton (9.0.7 (b9109490887)) <bd12696d-76b3-3658-9669-bfc914236917> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/textbutton.mxo/Contents/MacOS/textbutton
       0x3bafe8000 -        0x3bafebfff com.cycling74.counter (9.0.7 (b9109490887)) <df6bd178-ac8c-3a2a-a5ae-af902f9137d7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/counter.mxo/Contents/MacOS/counter
       0x3c69c8000 -        0x3c69d3fff com.cycling74.zl (9.0.7 (b9109490887)) <98216fc3-0f97-36a1-bc86-a80617fe27a4> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/zl.mxo/Contents/MacOS/zl
       0x3c69e4000 -        0x3c69e7fff com.cycling74.live.observer (9.0.7 (b9109490887)) <493596ba-a7c9-3e97-8d7c-6a419426b59b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.observer.mxo/Contents/MacOS/live.observer
       0x3c6f00000 -        0x3c6f03fff com.cycling74.prepend (9.0.7 (b9109490887)) <42c7f221-923a-3e22-a3b7-9f725b667906> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/prepend.mxo/Contents/MacOS/prepend
       0x3c6f14000 -        0x3c6f17fff com.cycling74.live.object (9.0.7 (b9109490887)) <92f67c94-5a0e-3ca8-9ce5-34a3f6b63c8b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.object.mxo/Contents/MacOS/live.object
       0x3c7570000 -        0x3c7573fff com.cycling74.live.path (9.0.7 (b9109490887)) <f63d96c3-eac1-3af4-b6c0-40cd84f5ddb5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.path.mxo/Contents/MacOS/live.path
       0x3c7584000 -        0x3c758ffff com.cycling74.coll (9.0.7 (b9109490887)) <3da68a89-d0e7-3c19-a9e8-0dc45a1da40e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/coll.mxo/Contents/MacOS/coll
       0x3c79e0000 -        0x3c79e3fff com.cycling74.listfunnel (9.0.7 (b9109490887)) <4827fa72-9461-3125-841d-d9ba53fd3291> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/listfunnel.mxo/Contents/MacOS/listfunnel
       0x3c7b8c000 -        0x3c7b8ffff com.cycling74.append (9.0.7 (b9109490887)) <fe7e2812-a932-3ed5-a356-d33fdb3fad22> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/append.mxo/Contents/MacOS/append
       0x3c7ba0000 -        0x3c7ba3fff com.cycling74.iter (9.0.7 (b9109490887)) <a7fead0b-252f-354a-b254-d262dd04f70a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/iter.mxo/Contents/MacOS/iter
       0x3c7bb4000 -        0x3c7bbbfff com.cycling74.button (9.0.7 (b9109490887)) <ed8dcd9a-a9e0-3fcf-8d59-a91249742749> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/button.mxo/Contents/MacOS/button
       0x3c7bcc000 -        0x3c7bcffff com.cycling74.uzi (9.0.7 (b9109490887)) <f99cf39b-6d90-3f25-889f-5527e6cf09d4> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/uzi.mxo/Contents/MacOS/uzi
       0x3cf200000 -        0x3cf203fff com.cycling74.combine (9.0.7 (b9109490887)) <d58a8b8a-b71e-3b0f-bbc1-5d01125b409d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/combine.mxo/Contents/MacOS/combine
       0x3cfbac000 -        0x3cfbaffff com.cycling74.translate (9.0.7 (b9109490887)) <6c119b4e-6452-3276-9f67-92d7546cc739> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/translate.mxo/Contents/MacOS/translate
       0x3cfbc0000 -        0x3cfbc3fff com.cycling74.rdiv (9.0.7 (b9109490887)) <acb5eeb9-2644-3300-b0c8-1ea5509dbc29> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/rdiv.mxo/Contents/MacOS/rdiv
       0x3cfbd4000 -        0x3cfbd7fff com.cycling74.plugsync-tilde (9.0.7 (b9109490887)) <5f658dd4-5789-3c62-8a5c-3b4e4a860661> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/msp/plugsync~.mxo/Contents/MacOS/plugsync~
       0x3cfbe8000 -        0x3cfbeffff com.cycling74.live.thisdevice (9.0.7 (b9109490887)) <26b7f3b2-3166-3842-9140-9b210157f00e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.thisdevice.mxo/Contents/MacOS/live.thisdevice
       0x3c698c000 -        0x3c69abfff com.cycling74.jit.cellblock (9.0.7 (b9109490887)) <f1f2cd9f-dd2a-33e6-bc24-9a5ef321cf53> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/jit.cellblock.mxo/Contents/MacOS/jit.cellblock
       0x3f57bc000 -        0x3f57bffff com.cycling74.tosymbol (9.0.7 (b9109490887)) <14bc2cd5-6c54-3beb-942a-173d13407e8c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/tosymbol.mxo/Contents/MacOS/tosymbol
       0x3f57d0000 -        0x3f57d3fff com.cycling74.fromsymbol (9.0.7 (b9109490887)) <36013942-a602-3c2f-8121-277f3457652d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/fromsymbol.mxo/Contents/MacOS/fromsymbol
       0x3f57e4000 -        0x3f57e7fff com.cycling74.atoi (9.0.7 (b9109490887)) <7265ae34-95a1-3d85-8a77-774d3036d9ff> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/atoi.mxo/Contents/MacOS/atoi
       0x3f7cd4000 -        0x3f7cd7fff com.cycling74.itoa (9.0.7 (b9109490887)) <60cb4f23-199c-3b3c-a238-c10014821f37> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/itoa.mxo/Contents/MacOS/itoa
       0x3f7ce8000 -        0x3f7cebfff com.cycling74.join (9.0.7 (b9109490887)) <78511710-06a4-34bc-8eff-79241ebe0910> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/join.mxo/Contents/MacOS/join
       0x3fbea4000 -        0x3fbea7fff com.cycling74.regexp (9.0.7 (b9109490887)) <3b573b5c-6044-3773-8556-c8979a37ab79> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/regexp.mxo/Contents/MacOS/regexp
       0x3f35d4000 -        0x3f35dbfff com.cycling74.fpic (9.0.7 (b9109490887)) <d94cec57-c5b4-3735-85b3-9b872534684e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/fpic.mxo/Contents/MacOS/fpic
       0x17c7d0000 -        0x17c7d3fff com.cycling74.plugout-tilde (9.0.7 (b9109490887)) <f0dacc3b-3b54-3744-bd22-5809e9e78b67> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/msp/plugout~.mxo/Contents/MacOS/plugout~
       0x17c7e4000 -        0x17c7e7fff com.cycling74.plugin-tilde (9.0.7 (b9109490887)) <559fa5fc-61fe-3204-b6a9-f13a1538a550> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/msp/plugin~.mxo/Contents/MacOS/plugin~
       0x486368000 -        0x486c4bfff com.apple.audio.codecs.Components (7.0) <f7b7e577-5649-37b8-8d18-b9ef3c0b4dc2> /System/Library/Components/AudioCodecs.component/Contents/MacOS/AudioCodecs
       0x1941f7000 -        0x195687e3f com.apple.AppKit (6.9) <860c164c-d04c-30ff-8c6f-e672b74caf11> /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
       0x18fe7c000 -        0x18ff17577 dyld (*) <3247e185-ced2-36ff-9e29-47a77c23e004> /usr/lib/dyld
               0x0 - 0xffffffffffffffff ??? (*) <00000000-0000-0000-0000-000000000000> ???
       0x19021d000 -        0x190229a47 libsystem_pthread.dylib (*) <d6494ba9-171e-39fc-b1aa-28ecf87975d1> /usr/lib/system/libsystem_pthread.dylib
       0x1901e1000 -        0x19021c653 libsystem_kernel.dylib (*) <6e4a96ad-04b8-3e8a-b91d-087e62306246> /usr/lib/system/libsystem_kernel.dylib
       0x1ac874000 -        0x1ac92ed1f com.apple.audio.midi.CoreMIDI (2.0) <504d9a4a-f0a7-348f-a7bc-13fd26b48d99> /System/Library/Frameworks/CoreMIDI.framework/Versions/A/CoreMIDI
       0x19b895000 -        0x19b8bcddf com.apple.audio.caulk (1.0) <42085f32-42e2-3f11-b0b4-0343137b5f72> /System/Library/PrivateFrameworks/caulk.framework/Versions/A/caulk
       0x190136000 -        0x1901c2ff7 libc++.1.dylib (*) <643ed232-ce19-3f63-8015-0aee768c002f> /usr/lib/libc++.1.dylib
       0x190292000 -        0x1907d0fff com.apple.CoreFoundation (6.9) <8d45baee-6cc0-3b89-93fd-ea1c8e15c6d7> /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
       0x192f20000 -        0x19365139f com.apple.audio.CoreAudio (5.0) <52c7f0a2-f403-391b-9b0d-ce498eff4d7e> /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
       0x19006a000 -        0x1900b075f libdispatch.dylib (*) <24ce0d89-4114-30c2-a81a-3db1f5931cff> /usr/lib/system/libdispatch.dylib
       0x1900b4000 -        0x190135243 libsystem_c.dylib (*) <dfea8794-80ce-37c3-8f6a-108aa1d0b1b0> /usr/lib/system/libsystem_c.dylib
       0x193d33000 -        0x194025cbf com.apple.CoreServices.CarbonCore (1333) <18084480-b19d-3142-adbe-40f2aa328977> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/CarbonCore.framework/Versions/A/CarbonCore
       0x195dc3000 -        0x19618ca5f com.apple.CFNetwork (1.0) <45ad6442-531d-3e9a-967e-b3aa0d01f24f> /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
       0x191883000 -        0x19266c59f com.apple.Foundation (6.9) <b9a92060-f21e-3ecf-9ded-94a65c68a6f4> /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
       0x19022a000 -        0x190259ba3 libdyld.dylib (*) <01bcb3f7-ab89-30bd-87ee-91b291eadae8> /usr/lib/system/libdyld.dylib
       0x199bc2000 -        0x199c22d5f com.apple.CoreVideo (1.8) <09d2cfd2-78be-3ab9-bd62-81adfb485fcc> /System/Library/Frameworks/CoreVideo.framework/Versions/A/CoreVideo

External Modification Summary:
  Calls made by other processes targeting this process:
    task_for_pid: 0
    thread_create: 0
    thread_set_state: 0
  Calls made by this process:
    task_for_pid: 0
    thread_create: 0
    thread_set_state: 0
  Calls made by all processes on this machine:
    task_for_pid: 0
    thread_create: 0
    thread_set_state: 0

VM Region Summary:
ReadOnly portion of Libraries: Total=2.3G resident=0K(0%) swapped_out_or_unallocated=2.3G(100%)
Writable regions: Total=11.6G written=7675K(0%) resident=6875K(0%) swapped_out=800K(0%) unallocated=11.6G(100%)

                                VIRTUAL   REGION
REGION TYPE                        SIZE    COUNT (non-coalesced)
===========                     =======  =======
Accelerate framework               128K        1
Activity Tracing                   256K        1
CG image                           112K        7
ColorSync                          544K       28
CoreAnimation                      800K       50
CoreGraphics                        32K        2
CoreServices                       624K        2
CoreUI image data                  880K        6
Foundation                          16K        1
Image IO                            64K        4
Kernel Alloc Once                   32K        1
MALLOC                            10.8G     1015
MALLOC guard page                  384K       24
MALLOC_LARGE (reserved)          563.0M       28         reserved VM address space (unallocated)
SQLite page cache                  384K        3
STACK GUARD                       59.6M      228
Stack                            128.6M      229
VM_ALLOCATE                       58.1M      151
__AUTH                            5480K      699
__AUTH_CONST                      77.0M      942
__CTF                               824        1
__DATA                            59.6M     1087
__DATA_CONST                      51.4M     1078
__DATA_DIRTY                      2766K      340
__FONT_DATA                        2352        1
__INFO_FILTER                         8        1
__LINKEDIT                       740.5M      134
__MFRT                              16K        1
__OBJC_RO                         61.4M        1
__OBJC_RW                         2396K        1
__POVERDDATA                        16K        1
__POVERTEXT                         16K        1
__TEXT                             1.6G     1076
__TEXT (graphics)                 56.5M       22
__TEXT (network)                  18.5M        5
__TPRO_CONST                       128K        2
dyld private memory               1664K        5
libnetwork                         640K       16
mapped file                        1.3G       92
page table in kernel              6875K        1
shared memory                     1024K       19
===========                     =======  =======
TOTAL                             15.5G     7307
TOTAL, minus reserved VM space    14.9G     7307



-----------
Full Report
-----------

{"app_name":"Live","timestamp":"2025-08-24 16:08:39.00 +0000","app_version":"12.2.2 (2025-08-01_7acf90750f)","slice_uuid":"c9ac18e9-0394-35c2-a077-3e9fce2c01c7","build_version":"12.2.2 (2025-08-01_7acf90750f)","platform":1,"bundleID":"com.ableton.live","share_with_app_devs":0,"is_first_party":0,"bug_type":"309","os_version":"macOS 15.6 (24G84)","roots_installed":0,"name":"Live","incident_id":"E7808EEA-DCFA-4076-B04C-CEA3E9549495"}
{
  "uptime" : 260000,
  "procRole" : "Foreground",
  "version" : 2,
  "userID" : 502,
  "deployVersion" : 210,
  "modelCode" : "MacBookPro18,1",
  "coalitionID" : 101679,
  "osVersion" : {
    "train" : "macOS 15.6",
    "build" : "24G84",
    "releaseType" : "User"
  },
  "captureTime" : "2025-08-24 16:08:33.3610 +0000",
  "codeSigningMonitor" : 1,
  "incident" : "E7808EEA-DCFA-4076-B04C-CEA3E9549495",
  "pid" : 88905,
  "translated" : false,
  "cpuType" : "ARM-64",
  "roots_installed" : 0,
  "bug_type" : "309",
  "procLaunch" : "2025-08-24 16:08:00.3624 +0000",
  "procStartAbsTime" : 6456942094827,
  "procExitAbsTime" : 6457730607141,
  "procName" : "Live",
  "procPath" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/MacOS\/Live",
  "bundleInfo" : {"CFBundleShortVersionString":"12.2.2 (2025-08-01_7acf90750f)","CFBundleVersion":"12.2.2 (2025-08-01_7acf90750f)","CFBundleIdentifier":"com.ableton.live"},
  "storeInfo" : {"deviceIdentifierForVendor":"26A5BD1D-6454-5AAE-80E9-9B5CEAC1D8C9","thirdParty":true},
  "parentProc" : "launchd",
  "parentPid" : 1,
  "coalitionName" : "com.ableton.live",
  "crashReporterKey" : "14CE5F82-82B2-5557-92EA-60F9D97DBF72",
  "appleIntelligenceStatus" : {"state":"available"},
  "codeSigningID" : "com.ableton.live",
  "codeSigningTeamID" : "MWR434WD94",
  "codeSigningFlags" : 570491649,
  "codeSigningValidationCategory" : 6,
  "codeSigningTrustLevel" : 4294967295,
  "codeSigningAuxiliaryInfo" : 0,
  "instructionByteStream" : {"beforePC":"4AdA+eEDQPlsAACUAAAAUv17Qan\/gwCRwANf1v9DANHgBwD56AdA+Q==","atPC":"AAlAuf9DAJHAA1\/W\/0MA0eAHAPnoB0D5AA1Auf9DAJHAA1\/W\/4MD0Q=="},
  "bootSessionUUID" : "B4AD054A-A9EB-4985-AC94-8510EEB2115D",
  "wakeTime" : 764,
  "sleepWakeUUID" : "11B52E5A-AE62-42DA-AB7C-DB250CECAAED",
  "sip" : "enabled",
  "vmRegionInfo" : "0x40 is not in any region.  Bytes before following region: 4308467648\n      REGION TYPE                    START - END         [ VSIZE] PRT\/MAX SHRMOD  REGION DETAIL\n      UNUSED SPACE AT START\n--->  \n      __TEXT                      100ce0000-106c94000    [ 95.7M] r-x\/r-x SM=COW  \/Applications\/Ableton Live 12 Suite.app\/Contents\/MacOS\/Live",
  "exception" : {"codes":"0x0000000000000001, 0x0000000000000040","rawCodes":[1,64],"type":"EXC_BAD_ACCESS","signal":"SIGSEGV","subtype":"KERN_INVALID_ADDRESS at 0x0000000000000040"},
  "termination" : {"flags":0,"code":11,"namespace":"SIGNAL","indicator":"Segmentation fault: 11","byProc":"exc handler","byPid":88905},
  "ktriageinfo" : "VM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter\nVM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter\nVM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter\nVM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter\nVM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter\n",
  "vmregioninfo" : "0x40 is not in any region.  Bytes before following region: 4308467648\n      REGION TYPE                    START - END         [ VSIZE] PRT\/MAX SHRMOD  REGION DETAIL\n      UNUSED SPACE AT START\n--->  \n      __TEXT                      100ce0000-106c94000    [ 95.7M] r-x\/r-x SM=COW  \/Applications\/Ableton Live 12 Suite.app\/Contents\/MacOS\/Live",
  "extMods" : {"caller":{"thread_create":0,"thread_set_state":0,"task_for_pid":0},"system":{"thread_create":0,"thread_set_state":0,"task_for_pid":0},"targeted":{"thread_create":0,"thread_set_state":0,"task_for_pid":0},"warnings":0},
  "faultingThread" : 0,
  "threads" : [{"threadState":{"x":[{"value":56},{"value":32},{"value":153},{"value":107},{"value":32},{"value":3142154589},{"value":105553830603648},{"value":6},{"value":56},{"value":0},{"value":8558174400,"symbolLocation":0,"symbol":"_main_thread"},{"value":35462282149888},{"value":32},{"value":105553836314532},{"value":2095104},{"value":2043},{"value":8558174400,"symbolLocation":0,"symbol":"_main_thread"},{"value":8558174400,"symbolLocation":0,"symbol":"_main_thread"},{"value":0},{"value":105554540801600},{"value":105553132765184},{"value":2511639982},{"value":105554709048848},{"value":558},{"value":105554951125664},{"value":105554951125680},{"value":105553734800544},{"value":4416806912,"symbolLocation":736,"symbol":"guard variable for AList<AVirtualFolderGroup>::SClassId()::Id"},{"value":4294934511}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17844891892},"cpsr":{"value":1610616832},"fp":{"value":6158408960},"sp":{"value":6158408928},"esr":{"value":2449473542,"description":"(Data Abort) byte read Translation fault"},"pc":{"value":17844563772,"matchesCrashFrame":1},"far":{"value":64}},"id":6036223,"triggered":true,"name":"MainThread","queue":"com.apple.main-thread","frames":[{"imageOffset":192316,"sourceLine":142,"sourceFile":"juce_Rectangle.h","symbol":"juce::Rectangle<int>::getWidth() const","imageIndex":38,"symbolLocation":12},{"imageOffset":520436,"symbol":"juce::Component::getWidth() const","symbolLocation":28,"imageIndex":38},{"imageOffset":8838968,"symbol":"juce::Component::setBounds(int, int, int, int)","symbolLocation":192,"imageIndex":38},{"imageOffset":520996,"symbol":"SoundCollectorAudioProcessorEditor::resized()","symbolLocation":180,"imageIndex":38},{"imageOffset":8840008,"symbol":"juce::Component::sendMovedResizedMessages(bool, bool)","symbolLocation":156,"imageIndex":38},{"imageOffset":8839836,"symbol":"juce::Component::sendMovedResizedMessagesIfPending()","symbolLocation":148,"imageIndex":38},{"imageOffset":8839592,"symbol":"juce::Component::setBounds(int, int, int, int)","symbolLocation":816,"imageIndex":38},{"imageOffset":8790152,"symbol":"juce::Component::setSize(int, int)","symbolLocation":76,"imageIndex":38},{"imageOffset":510272,"symbol":"SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&)","symbolLocation":996,"imageIndex":38},{"imageOffset":518060,"symbol":"SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&)","symbolLocation":36,"imageIndex":38},{"imageOffset":478800,"symbol":"SoundCollectorAudioProcessor::createEditor()","symbolLocation":44,"imageIndex":38},{"imageOffset":2232048,"symbol":"juce::AudioProcessor::createEditorIfNeeded()","symbolLocation":104,"imageIndex":38},{"imageOffset":187816,"sourceLine":1918,"sourceFile":"juce_audio_plugin_client_AU_1.mm","symbol":"JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::operator()(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize) const","imageIndex":38,"symbolLocation":128},{"imageOffset":188012,"sourceLine":1908,"sourceFile":"juce_audio_plugin_client_AU_1.mm","symbol":"JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::__invoke(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)","imageIndex":38,"symbolLocation":60},{"imageOffset":46849356,"imageIndex":0},{"imageOffset":46851100,"imageIndex":0},{"imageOffset":46853244,"imageIndex":0},{"imageOffset":46852880,"imageIndex":0},{"imageOffset":26018192,"imageIndex":0},{"imageOffset":26017372,"imageIndex":0},{"imageOffset":26079696,"imageIndex":0},{"imageOffset":25904856,"imageIndex":0},{"imageOffset":47879400,"imageIndex":0},{"imageOffset":48431800,"imageIndex":0},{"imageOffset":48431548,"imageIndex":0},{"imageOffset":48431932,"imageIndex":0},{"imageOffset":21021480,"imageIndex":0},{"imageOffset":20982096,"imageIndex":0},{"imageOffset":48431104,"imageIndex":0},{"imageOffset":23540788,"imageIndex":0},{"imageOffset":23540112,"imageIndex":0},{"imageOffset":23200508,"imageIndex":0},{"imageOffset":23208888,"imageIndex":0},{"imageOffset":22468412,"imageIndex":0},{"imageOffset":22467932,"imageIndex":0},{"imageOffset":22354964,"imageIndex":0},{"imageOffset":12580188,"symbol":"_routeMouseUpEvent","symbolLocation":132,"imageIndex":133},{"imageOffset":1444896,"symbol":"-[NSWindow(NSEventRouting) _reallySendEvent:isDelayedEvent:]","symbolLocation":440,"imageIndex":133},{"imageOffset":1444000,"symbol":"-[NSWindow(NSEventRouting) sendEvent:]","symbolLocation":288,"imageIndex":133},{"imageOffset":10323648,"symbol":"-[NSApplication(NSEventRouting) sendEvent:]","symbolLocation":1504,"imageIndex":133},{"imageOffset":22334324,"imageIndex":0},{"imageOffset":6124588,"symbol":"-[NSApplication _handleEvent:]","symbolLocation":60,"imageIndex":133},{"imageOffset":187404,"symbol":"-[NSApplication run]","symbolLocation":520,"imageIndex":133},{"imageOffset":22384456,"imageIndex":0},{"imageOffset":27544,"symbol":"start","symbolLocation":6076,"imageIndex":134}]},{"id":6036237,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":136}],"threadState":{"x":[{"value":6158970880},{"value":5635},{"value":6158434304},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":6158970880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6036304,"name":"NetIoThread","threadState":{"x":[{"value":14},{"value":4325648336},{"value":19411307904},{"value":140},{"value":19411309504},{"value":40},{"value":0},{"value":23},{"value":1},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":19411255424},{"value":59440},{"value":18446744073709551580},{"value":8575318664},{"value":0},{"value":105553165157168},{"value":105553145348376},{"value":11},{"value":6161264456},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4325648368},"cpsr":{"value":1610616832},"fp":{"value":6161264400},"sp":{"value":6161264384},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":21249516,"symbol":"void ableton::utility::detail::CallbackTypes<ANetIoThread, void, TUserData>::CallMemberFunc<&ANetIoThread::Main(TUserData)>(void*, TUserData)","symbolLocation":92,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036306,"frames":[{"imageOffset":3124,"symbol":"mach_msg2_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":78752,"symbol":"mach_msg2_internal","symbolLocation":76,"imageIndex":137},{"imageOffset":38756,"symbol":"mach_msg_overwrite","symbolLocation":484,"imageIndex":137},{"imageOffset":4008,"symbol":"mach_msg","symbolLocation":24,"imageIndex":137},{"imageOffset":257708,"symbol":"XServerMachPort::ReceiveMessage(int&, void*, int&)","symbolLocation":104,"imageIndex":138},{"imageOffset":395072,"symbol":"MIDIProcess::MIDIInPortThread::Run()","symbolLocation":148,"imageIndex":138},{"imageOffset":350060,"symbol":"CADeprecated::XThread::RunHelper(void*)","symbolLocation":48,"imageIndex":138},{"imageOffset":392772,"symbol":"CADeprecated::CAPThread::Entry(CADeprecated::CAPThread*)","symbolLocation":96,"imageIndex":138},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":268451845},{"value":17179869186},{"value":0},{"value":105566001168384},{"value":0},{"value":105566001168384},{"value":100},{"value":0},{"value":0},{"value":17179869184},{"value":100},{"value":0},{"value":0},{"value":0},{"value":24579},{"value":0},{"value":18446744073709551569},{"value":8575310952},{"value":0},{"value":0},{"value":100},{"value":105566001168384},{"value":0},{"value":105566001168384},{"value":6161836500},{"value":0},{"value":17179869186},{"value":18446744073709550527},{"value":2}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6712935328},"cpsr":{"value":4096},"fp":{"value":6161836160},"sp":{"value":6161836080},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859700},"far":{"value":0}}},{"id":6036334,"name":"FileThread","threadState":{"x":[{"value":14},{"value":4325648336},{"value":131584},{"value":28},{"value":26},{"value":0},{"value":338016},{"value":2832},{"value":1},{"value":4909432832},{"value":2352},{"value":2},{"value":14806944},{"value":4901943484},{"value":0},{"value":4901941000},{"value":18446744073709551580},{"value":0},{"value":0},{"value":105553165138816},{"value":4419829760},{"value":4419829760},{"value":6167572296},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4325648368},"cpsr":{"value":1610616832},"fp":{"value":6167572208},"sp":{"value":6167572192},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":33619648,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036356,"name":"IPC Channel Reader","threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":6168144832},{"value":6168144816},{"value":3126903006},{"value":0},{"value":0},{"value":1},{"value":105553832795048},{"value":0},{"value":2},{"value":0},{"value":0},{"value":2095104},{"value":2043},{"value":230},{"value":221},{"value":0},{"value":105553832795040},{"value":500},{"value":105554642000048},{"value":2},{"value":2},{"value":105554642000068},{"value":4},{"value":1},{"value":0},{"value":105554641999952}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4373094860},"cpsr":{"value":1610616832},"fp":{"value":6168144912},"sp":{"value":6168144784},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}},"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":137},{"imageOffset":64627148,"imageIndex":0},{"imageOffset":21448864,"imageIndex":0},{"imageOffset":21450092,"imageIndex":0},{"imageOffset":21455988,"imageIndex":0},{"imageOffset":21454952,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036393,"name":"caulk.messenger.shared:17","threadState":{"x":[{"value":14},{"value":1},{"value":0},{"value":1},{"value":0},{"value":1},{"value":0},{"value":0},{"value":0},{"value":4294967295},{"value":0},{"value":0},{"value":15116091416},{"value":6357315192},{"value":458752},{"value":0},{"value":18446744073709551580},{"value":8575313384},{"value":0},{"value":105553141054528},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904442056},"cpsr":{"value":2147487744},"fp":{"value":6357315456},"sp":{"value":6357315424},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":7368,"symbol":"caulk::semaphore::timed_wait(double)","symbolLocation":224,"imageIndex":139},{"imageOffset":7024,"symbol":"caulk::concurrent::details::worker_thread::run()","symbolLocation":32,"imageIndex":139},{"imageOffset":6212,"symbol":"void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*)","symbolLocation":96,"imageIndex":139},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036394,"name":"caulk.messenger.shared:high","threadState":{"x":[{"value":14},{"value":50947},{"value":50947},{"value":937},{"value":4294967295},{"value":0},{"value":0},{"value":0},{"value":0},{"value":4294967295},{"value":1},{"value":105553153927352},{"value":0},{"value":0},{"value":0},{"value":0},{"value":18446744073709551580},{"value":8575313384},{"value":0},{"value":105553141054944},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904442056},"cpsr":{"value":2147487744},"fp":{"value":6357888896},"sp":{"value":6357888864},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":7368,"symbol":"caulk::semaphore::timed_wait(double)","symbolLocation":224,"imageIndex":139},{"imageOffset":7024,"symbol":"caulk::concurrent::details::worker_thread::run()","symbolLocation":32,"imageIndex":139},{"imageOffset":6212,"symbol":"void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*)","symbolLocation":96,"imageIndex":139},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036443,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":50233216,"imageIndex":0},{"imageOffset":80831348,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":6359035544},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5767023448},{"value":5767023560},{"value":6359036128},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6359035664},"sp":{"value":6359035520},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036445,"name":"browser","threadState":{"x":[{"value":14},{"value":5790409856},{"value":73896},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":4927800880},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":294400},{"value":0},{"value":18446744073709551580},{"value":8575318664},{"value":0},{"value":4927801120},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4373066968},"cpsr":{"value":1610616832},"fp":{"value":6359609120},"sp":{"value":6359609104},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":64599256,"imageIndex":0},{"imageOffset":61370848,"symbol":"ableton::live_library::AsyncLibraryHub::Impl::workerThreadMain(ableton::live_library::AsyncLibraryHub::Impl*)","symbolLocation":368,"imageIndex":0},{"imageOffset":61372816,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036446,"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":13624076,"imageIndex":0},{"imageOffset":13628344,"imageIndex":0},{"imageOffset":13627708,"imageIndex":0},{"imageOffset":13653872,"imageIndex":0},{"imageOffset":13653692,"imageIndex":0},{"imageOffset":13653444,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6360176832},{"value":128},{"value":6360176800},{"value":105553143266328},{"value":105553143266360},{"value":5719060640},{"value":2},{"value":0},{"value":2},{"value":24000000},{"value":2272},{"value":1756051714678873},{"value":2940393519},{"value":363},{"value":8575308792},{"value":0},{"value":6360182320},{"value":1},{"value":0},{"value":5719060600},{"value":5719060544},{"value":6360182320},{"value":5719055248},{"value":5719055248},{"value":1},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4322091788},"cpsr":{"value":1610616832},"fp":{"value":6360182048},"sp":{"value":6360176736},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}}},{"id":6036453,"name":"com.apple.NSEventThread","threadState":{"x":[{"value":268451845},{"value":21592279046},{"value":8589934592},{"value":471703373217792},{"value":0},{"value":471703373217792},{"value":2},{"value":4294967295},{"value":0},{"value":17179869184},{"value":0},{"value":2},{"value":0},{"value":0},{"value":109827},{"value":0},{"value":18446744073709551569},{"value":8575310952},{"value":0},{"value":4294967295},{"value":2},{"value":471703373217792},{"value":0},{"value":471703373217792},{"value":6361899144},{"value":8589934592},{"value":21592279046},{"value":18446744073709550527},{"value":4412409862,"symbolLocation":710518,"symbol":"testing::internal::MatcherBase<std::__1::tuple<TUserValue const&, TUserValue const&> const&>::VTable const* testing::internal::MatcherBase<std::__1::tuple<TUserValue const&, TUserValue const&> const&>::GetVTable<testing::internal::MatcherBase<std::__1::tuple<TUserValue const&, TUserValue const&> const&>::ValuePolicy<testing::internal::AnythingMatcher, true>>()::kVTable"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6712935328},"cpsr":{"value":4096},"fp":{"value":6361898992},"sp":{"value":6361898912},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859700},"far":{"value":0}},"frames":[{"imageOffset":3124,"symbol":"mach_msg2_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":78752,"symbol":"mach_msg2_internal","symbolLocation":76,"imageIndex":137},{"imageOffset":38756,"symbol":"mach_msg_overwrite","symbolLocation":484,"imageIndex":137},{"imageOffset":4008,"symbol":"mach_msg","symbolLocation":24,"imageIndex":137},{"imageOffset":511164,"symbol":"__CFRunLoopServiceMachPort","symbolLocation":160,"imageIndex":141},{"imageOffset":505304,"symbol":"__CFRunLoopRun","symbolLocation":1208,"imageIndex":141},{"imageOffset":502424,"symbol":"CFRunLoopRunSpecific","symbolLocation":572,"imageIndex":141},{"imageOffset":1435532,"symbol":"_NSEventThread","symbolLocation":140,"imageIndex":133},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036495,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4325648336},{"value":6162410784},{"value":68719460488},{"value":128},{"value":32},{"value":0},{"value":17279225360},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6162410896},{"value":64},{"value":0},{"value":14998820864},{"value":18446744073709551580},{"value":30},{"value":0},{"value":105553165297824},{"value":4419438976},{"value":4419438973},{"value":1},{"value":4419436544},{"value":4419438972},{"value":4419436544},{"value":8},{"value":4418230144},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4325648368},"cpsr":{"value":1610616832},"fp":{"value":6162411008},"sp":{"value":6162410992},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036496,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4325648336},{"value":6162984224},{"value":68719460488},{"value":14079007312},{"value":138328},{"value":32},{"value":512},{"value":1},{"value":2},{"value":1},{"value":1},{"value":6162984336},{"value":64},{"value":1},{"value":14998821120},{"value":18446744073709551580},{"value":2},{"value":0},{"value":105553165296576},{"value":4419438976},{"value":4419438973},{"value":2},{"value":4419436544},{"value":4419438972},{"value":4419436544},{"value":16},{"value":4418230144},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4325648368},"cpsr":{"value":1610616832},"fp":{"value":6162984448},"sp":{"value":6162984432},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036497,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4325648336},{"value":6163557664},{"value":138312},{"value":14079001152},{"value":138312},{"value":32},{"value":512},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6163557776},{"value":64},{"value":2},{"value":14998821376},{"value":18446744073709551580},{"value":11},{"value":0},{"value":105553165297856},{"value":4419438976},{"value":4419438973},{"value":3},{"value":4419436544},{"value":4419438972},{"value":4419436544},{"value":24},{"value":4418230144},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4325648368},"cpsr":{"value":1610616832},"fp":{"value":6163557888},"sp":{"value":6163557872},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036498,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4325648336},{"value":6164131104},{"value":138312},{"value":14079005072},{"value":138312},{"value":32},{"value":512},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6164131216},{"value":64},{"value":3},{"value":14998821632},{"value":18446744073709551580},{"value":3},{"value":0},{"value":105553165297792},{"value":4419438976},{"value":4419438973},{"value":4},{"value":4419436544},{"value":4419438972},{"value":4419436544},{"value":32},{"value":4418230144},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4325648368},"cpsr":{"value":1610616832},"fp":{"value":6164131328},"sp":{"value":6164131312},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036499,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4325648336},{"value":6164704544},{"value":68719460488},{"value":128},{"value":32},{"value":0},{"value":15827289104},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6164704656},{"value":64},{"value":4},{"value":14998821888},{"value":18446744073709551580},{"value":3},{"value":0},{"value":105553165297760},{"value":4419438976},{"value":4419438973},{"value":5},{"value":4419436544},{"value":4419438972},{"value":4419436544},{"value":40},{"value":4418230144},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4325648368},"cpsr":{"value":1610616832},"fp":{"value":6164704768},"sp":{"value":6164704752},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036500,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4325648336},{"value":6165277984},{"value":68719460488},{"value":128},{"value":32},{"value":0},{"value":15454072848},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6165278096},{"value":64},{"value":4},{"value":14998821888},{"value":18446744073709551580},{"value":3},{"value":0},{"value":105553165296960},{"value":4419438976},{"value":4419438973},{"value":6},{"value":4419436544},{"value":4419438972},{"value":4419436544},{"value":48},{"value":4418230144},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4325648368},"cpsr":{"value":1610616832},"fp":{"value":6165278208},"sp":{"value":6165278192},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036501,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4325648336},{"value":6165851424},{"value":68719460488},{"value":128},{"value":32},{"value":0},{"value":15447287824},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6165851536},{"value":64},{"value":6},{"value":14998822400},{"value":18446744073709551580},{"value":1},{"value":0},{"value":105553165296544},{"value":4419438976},{"value":4419438973},{"value":7},{"value":4419436544},{"value":4419438972},{"value":4419436544},{"value":56},{"value":4418230144},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4325648368},"cpsr":{"value":1610616832},"fp":{"value":6165851648},"sp":{"value":6165851632},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036502,"name":"com.apple.audio.IOThread.client","threadState":{"x":[{"value":139},{"value":6166420440},{"value":18446724588040846973},{"value":68719460488},{"value":128},{"value":32},{"value":0},{"value":14471485456},{"value":418500},{"value":3000},{"value":1000},{"value":45},{"value":4893336280},{"value":64},{"value":6},{"value":14998822400},{"value":6712860804,"symbolLocation":0,"symbol":"mach_absolute_time"},{"value":1},{"value":0},{"value":321},{"value":1015},{"value":6166420640},{"value":6166422688},{"value":4695555504},{"value":2},{"value":4418293408},{"value":105553121211968},{"value":1},{"value":2}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4342462524},"cpsr":{"value":2147487744},"fp":{"value":6166420560},"sp":{"value":6166420480},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":4342462456},"far":{"value":0}},"frames":[{"imageOffset":33994744,"imageIndex":0},{"imageOffset":33984976,"imageIndex":0},{"imageOffset":2050488,"symbol":"HALC_ProxyIOContext::IOWorkLoop()","symbolLocation":11636,"imageIndex":142},{"imageOffset":2037040,"symbol":"invocation function for block in HALC_ProxyIOContext::HALC_ProxyIOContext(unsigned int, unsigned int)","symbolLocation":172,"imageIndex":142},{"imageOffset":3783156,"symbol":"HALC_IOThread::Entry(void*)","symbolLocation":88,"imageIndex":142},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036538,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":136}],"threadState":{"x":[{"value":6377992192},{"value":163075},{"value":6377455616},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":6377992192},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6036539,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":136}],"threadState":{"x":[{"value":6378565632},{"value":22039},{"value":6378029056},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":6378565632},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6036541,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":10546900,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":9988792},{"value":6379138728},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105553414253032},{"value":105553414252984},{"value":6379139296},{"value":9988792},{"value":0},{"value":0},{"value":620033},{"value":620288},{"value":18437520701672696841},{"value":10000000}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6379138848},"sp":{"value":6379138704},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036549,"name":"Realtime safe async job spooler","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":99999959},{"value":6383349272},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6385961704},{"value":6385961768},{"value":6383349984},{"value":99999959},{"value":0},{"value":0},{"value":60161},{"value":60416},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6383349392},"sp":{"value":6383349248},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":10383204,"imageIndex":8},{"imageOffset":9521384,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036551,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147483111129088000},{"value":499999875},{"value":68719460488},{"value":22403},{"value":3},{"value":10},{"value":0},{"value":499999875},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6457741793831},{"value":105553331296896},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":6423080464},"sp":{"value":6423080432},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":143},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":143},{"imageOffset":651828,"imageIndex":11},{"imageOffset":432288,"imageIndex":11},{"imageOffset":501288,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036552,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6423648272},{"value":128},{"value":6423648240},{"value":365},{"value":18446744073709551125},{"value":6420913616},{"value":2},{"value":0},{"value":2},{"value":208787},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":6423653776},{"value":6420913520},{"value":0},{"value":6423653640},{"value":6419342136},{"value":6419342208},{"value":6419342128},{"value":6423653776},{"value":6419342208},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13673603900},"cpsr":{"value":1610616832},"fp":{"value":6423653488},"sp":{"value":6423648160},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036553,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6424221712},{"value":128},{"value":6424221680},{"value":365},{"value":18446744073709551125},{"value":6420910256},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":600985},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":6424227216},{"value":6420910160},{"value":0},{"value":6424227080},{"value":6420910008},{"value":6420910080},{"value":6420910000},{"value":6424227216},{"value":6420910080},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13673603900},"cpsr":{"value":1610616832},"fp":{"value":6424226928},"sp":{"value":6424221600},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036557,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6424795152},{"value":128},{"value":6424795120},{"value":365},{"value":18446744073709551125},{"value":6420944736},{"value":2},{"value":0},{"value":2},{"value":971323},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":6424800656},{"value":6420944640},{"value":0},{"value":6424800520},{"value":6420944200},{"value":6420944272},{"value":6420944192},{"value":6424800656},{"value":6420944272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13673603900},"cpsr":{"value":1610616832},"fp":{"value":6424800368},"sp":{"value":6424795040},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036558,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6425368592},{"value":128},{"value":6425368560},{"value":0},{"value":0},{"value":6420946448},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":6425374096},{"value":6420946352},{"value":0},{"value":6425373960},{"value":6420944488},{"value":6420944560},{"value":6420944480},{"value":6425374096},{"value":6420944560},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13673603900},"cpsr":{"value":1610616832},"fp":{"value":6425373808},"sp":{"value":6425368480},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036568,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":131328},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998917},{"value":6441954808},{"value":0},{"value":1536},{"value":6597069768194},{"value":6597069768194},{"value":1536},{"value":0},{"value":6597069768192},{"value":305},{"value":8575309072},{"value":0},{"value":6419587800},{"value":6419587864},{"value":6441955552},{"value":299998917},{"value":0},{"value":131328},{"value":131329},{"value":131584},{"value":0},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6441954928},"sp":{"value":6441954784},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":1130452,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036569,"name":"HighResolutionTimerThread","threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":13657665032},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6419588888},{"value":6419588952},{"value":13657665760},{"value":0},{"value":0},{"value":256},{"value":257},{"value":512},{"value":13657665257},{"value":13657665273}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13657665152},"sp":{"value":13657665008},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1019852,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036571,"name":"ContentsListsThread","threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":0},{"value":495998917},{"value":13658238456},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14529071992},{"value":14529072056},{"value":13658239200},{"value":495998917},{"value":0},{"value":256},{"value":28673},{"value":28928},{"value":496},{"value":1756051712850}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13658238576},"sp":{"value":13658238432},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":777552,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036572,"name":"Kick Analysis Thread","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":100000000},{"value":0},{"value":0},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":13658810520},{"value":0},{"value":0},{"value":72057602596210409,"symbolLocation":72057594037927937,"symbol":"OBJC_CLASS_$___NSCFString"},{"value":8558282472,"symbolLocation":0,"symbol":"OBJC_CLASS_$___NSCFString"},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":13658811568},{"value":14556246312,"symbolLocation":160,"symbol":"BinaryData::originalFilenames"},{"value":14555953320},{"value":14529077000},{"value":246},{"value":14529079016},{"value":0},{"value":14555953240},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":13658809520},"sp":{"value":13658809472},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":137},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":3247740,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036573,"name":"Resources Store","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":49999959},{"value":13659385336},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14529080752},{"value":14529080816},{"value":13659386080},{"value":49999959},{"value":0},{"value":0},{"value":111617},{"value":111872},{"value":14529087344},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13659385456},"sp":{"value":13659385312},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2403944,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036574,"name":"Convo Engines Store","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":4999959},{"value":13659958792},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14529100872},{"value":14529100936},{"value":13659959520},{"value":4999959},{"value":0},{"value":0},{"value":1006081},{"value":1006336},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13659958912},"sp":{"value":13659958768},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2404540,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036575,"name":"thumb cache","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":13660532216},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14543594304},{"value":14543594368},{"value":13660532960},{"value":499999958},{"value":0},{"value":0},{"value":10497},{"value":10752},{"value":500},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13660532336},"sp":{"value":13660532192},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":777552,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036576,"name":"ContentsListsThread","threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":0},{"value":494998958},{"value":13662449144},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14543595800},{"value":14543595864},{"value":13662449888},{"value":494998958},{"value":0},{"value":256},{"value":32769},{"value":33024},{"value":495},{"value":1756051712887}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13662449264},"sp":{"value":13662449120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":777552,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036577,"name":"HighResolutionTimerThread","threadState":{"x":[{"value":316},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":988208},{"value":13663022472},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105553880252472},{"value":105553880252536},{"value":13663023328},{"value":988208},{"value":0},{"value":0},{"value":5964289},{"value":5964544},{"value":13663022825},{"value":13663022841}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13663022592},"sp":{"value":13663022448},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":1019676,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036578,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999959},{"value":13663596072},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14410016568},{"value":14410016632},{"value":13663596768},{"value":1999959},{"value":0},{"value":0},{"value":2668289},{"value":2668544},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13663596192},"sp":{"value":13663596048},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036579,"name":"Convo thread","threadState":{"x":[{"value":316},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":13664169512},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":4834341688},{"value":4834341752},{"value":13664170208},{"value":1999958},{"value":0},{"value":0},{"value":2668545},{"value":2668800},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13664169632},"sp":{"value":13664169488},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036580,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1998958},{"value":13664742952},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14477148472},{"value":14477148536},{"value":13664743648},{"value":1998958},{"value":0},{"value":0},{"value":2669313},{"value":2669568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13664743072},"sp":{"value":13664742928},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036581,"name":"Convo thread","threadState":{"x":[{"value":316},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1998959},{"value":13684289064},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5857897272},{"value":5857897336},{"value":13684289760},{"value":1998959},{"value":0},{"value":0},{"value":2667265},{"value":2667520},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13684289184},"sp":{"value":13684289040},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036582,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":13684862504},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14589960504},{"value":14589960568},{"value":13684863200},{"value":1999958},{"value":0},{"value":0},{"value":2666241},{"value":2666496},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13684862624},"sp":{"value":13684862480},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036583,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":13687615016},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14579765560},{"value":14579765624},{"value":13687615712},{"value":1999958},{"value":0},{"value":0},{"value":2668289},{"value":2668544},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13687615136},"sp":{"value":13687614992},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036584,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":13688188536},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441295016},{"value":6441294968},{"value":13688189152},{"value":500000000},{"value":0},{"value":0},{"value":11777},{"value":12032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13688188656},"sp":{"value":13688188512},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036585,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":13688761976},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441295496},{"value":6441295448},{"value":13688762592},{"value":500000000},{"value":0},{"value":0},{"value":11777},{"value":12032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13688762096},"sp":{"value":13688761952},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036586,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":13689335416},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441295976},{"value":6441295928},{"value":13689336032},{"value":500000000},{"value":0},{"value":0},{"value":11777},{"value":12032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13689335536},"sp":{"value":13689335392},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036587,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":13689908856},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441296456},{"value":6441296408},{"value":13689909472},{"value":500000000},{"value":0},{"value":0},{"value":11777},{"value":12032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13689908976},"sp":{"value":13689908832},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036588,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14245457528},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441296936},{"value":6441296888},{"value":14245458144},{"value":500000000},{"value":0},{"value":0},{"value":11777},{"value":12032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14245457648},"sp":{"value":14245457504},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036589,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14246030968},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441297416},{"value":6441297368},{"value":14246031584},{"value":500000000},{"value":0},{"value":0},{"value":11777},{"value":12032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14246031088},"sp":{"value":14246030944},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036590,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14246604408},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441297896},{"value":6441297848},{"value":14246605024},{"value":499999000},{"value":0},{"value":0},{"value":11777},{"value":12032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14246604528},"sp":{"value":14246604384},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036591,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14247177848},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441298376},{"value":6441298328},{"value":14247178464},{"value":500000000},{"value":0},{"value":0},{"value":11777},{"value":12032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14247177968},"sp":{"value":14247177824},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036592,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14247751288},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441298856},{"value":6441298808},{"value":14247751904},{"value":499999000},{"value":0},{"value":0},{"value":11777},{"value":12032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14247751408},"sp":{"value":14247751264},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036593,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14248324728},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441299336},{"value":6441299288},{"value":14248325344},{"value":500000000},{"value":0},{"value":0},{"value":11777},{"value":12032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14248324848},"sp":{"value":14248324704},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036594,"frames":[{"imageOffset":3328,"symbol":"mach_wait_until","symbolLocation":8,"imageIndex":137},{"imageOffset":479004,"symbol":"MPDelayUntil","symbolLocation":20,"imageIndex":145},{"imageOffset":3838128,"imageIndex":13},{"imageOffset":4284548,"imageIndex":13},{"imageOffset":3837264,"imageIndex":13},{"imageOffset":476764,"symbol":"PrivateMPEntryPoint","symbolLocation":60,"imageIndex":145},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":14},{"value":6457730558893},{"value":18446724588040846973},{"value":68719460488},{"value":0},{"value":160},{"value":0},{"value":0},{"value":8558342144,"symbolLocation":32,"symbol":"FSNodeStorageInitUniverseCallbacks.sFSNodeServerCallbacks"},{"value":8287266588132114537},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":18446744073709551526},{"value":8575311488},{"value":0},{"value":1},{"value":6085177488},{"value":6085178304},{"value":14826930188},{"value":0},{"value":0},{"value":0},{"value":14830036869},{"value":6085178308},{"value":14827039020}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6775537436},"cpsr":{"value":1610616832},"fp":{"value":14248898192},"sp":{"value":14248898192},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859904},"far":{"value":0}}},{"id":6036598,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28940,"symbol":"_pthread_cond_wait","symbolLocation":1028,"imageIndex":136},{"imageOffset":659548,"symbol":"TSWaitOnConditionTimedRelative","symbolLocation":32,"imageIndex":145},{"imageOffset":472468,"symbol":"MPWaitForEvent","symbolLocation":208,"imageIndex":145},{"imageOffset":3836672,"imageIndex":13},{"imageOffset":4714744,"imageIndex":13},{"imageOffset":3837264,"imageIndex":13},{"imageOffset":476764,"symbol":"PrivateMPEntryPoint","symbolLocation":60,"imageIndex":145},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":16896},{"value":0},{"value":0},{"value":160},{"value":0},{"value":250000000},{"value":19969},{"value":0},{"value":512},{"value":2199023256066},{"value":2199023256066},{"value":512},{"value":0},{"value":2199023256064},{"value":305},{"value":8575309072},{"value":0},{"value":8519250856,"symbolLocation":0,"symbol":"_MP_AsyncTermGuard"},{"value":105553301104264},{"value":1},{"value":250000000},{"value":0},{"value":16896},{"value":19969},{"value":20224},{"value":105553938063568},{"value":14394122104}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131276},"cpsr":{"value":2684358656},"fp":{"value":14432095696},"sp":{"value":14432095552},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036621,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":5355872,"imageIndex":13},{"imageOffset":5363136,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":5632},{"value":0},{"value":0},{"value":160},{"value":4},{"value":999999958},{"value":14464609896},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14467399184},{"value":14467399024},{"value":14464610528},{"value":999999958},{"value":4},{"value":5632},{"value":5889},{"value":6144},{"value":9223372036854775},{"value":1080975031857041}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14464610016},"sp":{"value":14464609872},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036634,"name":"PerformanceManagers","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":1000000},{"value":0},{"value":0},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":2},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":14465756992},{"value":15151090072},{"value":1000000},{"value":105553433870104},{"value":105553433870104},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":14465756960},"sp":{"value":14465756912},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":137},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":12872504,"imageIndex":15},{"imageOffset":16335680,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036635,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":3230692,"imageIndex":15},{"imageOffset":3258484,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":14465183096},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14953981152},{"value":14953981096},{"value":14465183968},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":15149189248,"symbolLocation":9480,"symbol":"v3_tls_feature"},{"value":15149189120,"symbolLocation":9352,"symbol":"v3_tls_feature"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14465183216},"sp":{"value":14465183072},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036662,"name":"AsyncPresetLoader","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":14544153288},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14469790576},{"value":14469790640},{"value":14544154848},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":14544154072},{"value":14544153808}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14544153408},"sp":{"value":14544153264},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":2597116,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036664,"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":137},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":130872,"symbol":"std::__1::this_thread::sleep_for(std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&)","symbolLocation":84,"imageIndex":140},{"imageOffset":1736456,"imageIndex":17},{"imageOffset":1737308,"imageIndex":17},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":60},{"value":0},{"value":1},{"value":1},{"value":0},{"value":10000000},{"value":52},{"value":0},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":16387},{"value":17},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":14545301280},{"value":14545301280},{"value":15068714024},{"value":1000000},{"value":9223372036000},{"value":9223372036854775807},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":1610616832},"fp":{"value":14545301264},"sp":{"value":14545301216},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}}},{"id":6036667,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147483648000000000},{"value":500000000},{"value":68719460488},{"value":18446744073593044550},{"value":6},{"value":10},{"value":0},{"value":500000000},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6457732928801},{"value":105553599876368},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":14545874448},"sp":{"value":14545874416},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":143},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":143},{"imageOffset":656652,"imageIndex":18},{"imageOffset":437112,"imageIndex":18},{"imageOffset":506112,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036668,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14546442256},{"value":128},{"value":14546442224},{"value":365},{"value":18446744073709551125},{"value":14515008080},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":204800},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":14546447760},{"value":14515007984},{"value":0},{"value":14546447624},{"value":14514994680},{"value":14514994752},{"value":14514994672},{"value":14546447760},{"value":14514994752},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":15102686740},"cpsr":{"value":1610616832},"fp":{"value":14546447472},"sp":{"value":14546442144},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036669,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14547015696},{"value":128},{"value":14547015664},{"value":365},{"value":18446744073709551125},{"value":14466234784},{"value":2},{"value":0},{"value":2},{"value":443647},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":14547021200},{"value":14466234688},{"value":0},{"value":14547021064},{"value":14515002360},{"value":14515002432},{"value":14515002352},{"value":14547021200},{"value":14515002432},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":15102686740},"cpsr":{"value":1610616832},"fp":{"value":14547020912},"sp":{"value":14547015584},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036673,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14577293328},{"value":128},{"value":14577293296},{"value":365},{"value":18446744073709551125},{"value":14515011920},{"value":2},{"value":0},{"value":2},{"value":971179},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":14577298832},{"value":14515011824},{"value":0},{"value":14577298696},{"value":14515009080},{"value":14515009152},{"value":14515009072},{"value":14577298832},{"value":14515009152},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":15102686740},"cpsr":{"value":1610616832},"fp":{"value":14577298544},"sp":{"value":14577293216},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036674,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14577866768},{"value":128},{"value":14577866736},{"value":0},{"value":0},{"value":14515184096},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":14577872272},{"value":14515184000},{"value":0},{"value":14577872136},{"value":14515011000},{"value":14515011072},{"value":14515010992},{"value":14577872272},{"value":14515011072},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":15102686740},"cpsr":{"value":1610616832},"fp":{"value":14577871984},"sp":{"value":14577866656},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036677,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7168},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14578445944},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14467965656},{"value":14467965608},{"value":14578446560},{"value":499999000},{"value":0},{"value":7168},{"value":10241},{"value":10496},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14578446064},"sp":{"value":14578445920},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036678,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7680},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14579019384},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5901476168},{"value":5901476120},{"value":14579020000},{"value":500000000},{"value":0},{"value":7680},{"value":10753},{"value":11008},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14579019504},"sp":{"value":14579019360},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036679,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7680},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14803971704},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441294248},{"value":6441294200},{"value":14803972320},{"value":500000000},{"value":0},{"value":7680},{"value":10753},{"value":11008},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14803971824},"sp":{"value":14803971680},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036680,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7680},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14804545144},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14467969000},{"value":14467968952},{"value":14804545760},{"value":499999000},{"value":0},{"value":7680},{"value":10753},{"value":11008},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14804545264},"sp":{"value":14804545120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036681,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7680},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14805118584},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14467969480},{"value":14467969432},{"value":14805119200},{"value":500000000},{"value":0},{"value":7680},{"value":10753},{"value":11008},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14805118704},"sp":{"value":14805118560},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036682,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7680},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14805692024},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14467969960},{"value":14467969912},{"value":14805692640},{"value":500000000},{"value":0},{"value":7680},{"value":10753},{"value":11008},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14805692144},"sp":{"value":14805692000},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036683,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7680},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14806265464},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14467970440},{"value":14467970392},{"value":14806266080},{"value":499999000},{"value":0},{"value":7680},{"value":10753},{"value":11008},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14806265584},"sp":{"value":14806265440},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036684,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7680},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14806838904},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14467970920},{"value":14467970872},{"value":14806839520},{"value":500000000},{"value":0},{"value":7680},{"value":10753},{"value":11008},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14806839024},"sp":{"value":14806838880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036685,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7680},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14807412344},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14467971400},{"value":14467971352},{"value":14807412960},{"value":500000000},{"value":0},{"value":7680},{"value":10753},{"value":11008},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14807412464},"sp":{"value":14807412320},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036686,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7680},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14903799416},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14467971880},{"value":14467971832},{"value":14903800032},{"value":500000000},{"value":0},{"value":7680},{"value":10753},{"value":11008},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14903799536},"sp":{"value":14903799392},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036687,"frames":[{"imageOffset":3328,"symbol":"mach_wait_until","symbolLocation":8,"imageIndex":137},{"imageOffset":479004,"symbol":"MPDelayUntil","symbolLocation":20,"imageIndex":145},{"imageOffset":3836008,"imageIndex":19},{"imageOffset":4282504,"imageIndex":19},{"imageOffset":3835144,"imageIndex":19},{"imageOffset":476764,"symbol":"PrivateMPEntryPoint","symbolLocation":60,"imageIndex":145},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":14},{"value":6457730560998},{"value":18446724588040846973},{"value":68719460488},{"value":0},{"value":160},{"value":0},{"value":0},{"value":8558342144,"symbolLocation":32,"symbol":"FSNodeStorageInitUniverseCallbacks.sFSNodeServerCallbacks"},{"value":8287266588132114537},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":18446744073709551526},{"value":8575311488},{"value":0},{"value":1},{"value":14433450224},{"value":14433450808},{"value":15213611612},{"value":0},{"value":0},{"value":0},{"value":15216682661},{"value":14433450812},{"value":15213720241}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6775537436},"cpsr":{"value":1610616832},"fp":{"value":14904372880},"sp":{"value":14904372880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859904},"far":{"value":0}}},{"id":6036700,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":5350472,"imageIndex":19},{"imageOffset":5357736,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":1536},{"value":0},{"value":0},{"value":160},{"value":4},{"value":999998958},{"value":6160117352},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094561024},{"value":15094560864},{"value":6160117984},{"value":999998958},{"value":4},{"value":1536},{"value":1793},{"value":2048},{"value":9223372036854775},{"value":1080976674684541}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6160117472},"sp":{"value":6160117328},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036704,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":136}],"threadState":{"x":[{"value":6358462464},{"value":22295},{"value":6357925888},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":6358462464},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6036706,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":136}],"threadState":{"x":[{"value":6361329664},{"value":257803},{"value":6360793088},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":6361329664},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6036715,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998916},{"value":14544727560},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15099030808},{"value":15099030872},{"value":14544728288},{"value":499998916},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15099030088},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14544727680},"sp":{"value":14544727536},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036716,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999834},{"value":15084350984},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15099031288},{"value":15099031352},{"value":15084351712},{"value":499999834},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15099030088},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15084351104},"sp":{"value":15084350960},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036717,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":15102471688},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15099031768},{"value":15099031832},{"value":15102472416},{"value":499999958},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15099030088},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15102471808},"sp":{"value":15102471664},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036718,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15113186824},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15099032248},{"value":15099032312},{"value":15113187552},{"value":499998958},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15099030088},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15113186944},"sp":{"value":15113186800},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036719,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999916},{"value":15113760264},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15099032728},{"value":15099032792},{"value":15113760992},{"value":499999916},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15099030088},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15113760384},"sp":{"value":15113760240},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036720,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999959},{"value":15114333704},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15099033208},{"value":15099033272},{"value":15114334432},{"value":499999959},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15099030088},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15114333824},"sp":{"value":15114333680},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036721,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998833},{"value":15114907144},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15099033688},{"value":15099033752},{"value":15114907872},{"value":499998833},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15099030088},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15114907264},"sp":{"value":15114907120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036722,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998875},{"value":15115480584},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15099034168},{"value":15099034232},{"value":15115481312},{"value":499998875},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15099030088},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15115480704},"sp":{"value":15115480560},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036723,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999875},{"value":15116054024},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15099034648},{"value":15099034712},{"value":15116054752},{"value":499999875},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15099030088},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15116054144},"sp":{"value":15116054000},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036724,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998917},{"value":15125212680},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15099035128},{"value":15099035192},{"value":15125213408},{"value":499998917},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15099030088},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15125212800},"sp":{"value":15125212656},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036725,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999917},{"value":15125786120},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094934984},{"value":15094935048},{"value":15125786848},{"value":499999917},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15094933880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15125786240},"sp":{"value":15125786096},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036726,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15126359560},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094935464},{"value":15094935528},{"value":15126360288},{"value":499998958},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15094933880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15126359680},"sp":{"value":15126359536},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036727,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999875},{"value":15126933000},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094935944},{"value":15094936008},{"value":15126933728},{"value":499999875},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15094933880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15126933120},"sp":{"value":15126932976},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036728,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999959},{"value":15127506440},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094936424},{"value":15094936488},{"value":15127507168},{"value":499999959},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15094933880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15127506560},"sp":{"value":15127506416},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036729,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15128079880},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094936904},{"value":15094936968},{"value":15128080608},{"value":499998958},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15094933880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15128080000},"sp":{"value":15128079856},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036730,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999916},{"value":15187537416},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094937384},{"value":15094937448},{"value":15187538144},{"value":499999916},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15094933880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15187537536},"sp":{"value":15187537392},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036731,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998834},{"value":15188110856},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094937864},{"value":15094937928},{"value":15188111584},{"value":499998834},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15094933880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15188110976},"sp":{"value":15188110832},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036732,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15188684296},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094938344},{"value":15094938408},{"value":15188685024},{"value":499998958},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15094933880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15188684416},"sp":{"value":15188684272},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036733,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499994792},{"value":15189257736},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094938824},{"value":15094938888},{"value":15189258464},{"value":499994792},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15094933880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15189257856},"sp":{"value":15189257712},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036734,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998916},{"value":15189831176},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15094939304},{"value":15094939368},{"value":15189831904},{"value":499998916},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":15094933880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15189831296},"sp":{"value":15189831152},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036735,"name":"AudioRecorder_thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999833},{"value":15190404616},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15439806712},{"value":15439806776},{"value":15190405344},{"value":499999833},{"value":0},{"value":0},{"value":9217},{"value":9472},{"value":500},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15190404736},"sp":{"value":15190404592},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4064104,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036736,"name":"com.u-he.Diva.voice-renderer 0","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15190977976},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739225832},{"value":14739225896},{"value":15190978784},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15190978096},"sp":{"value":15190977952},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036737,"name":"com.u-he.Diva.voice-renderer 1","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15191551416},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739225944},{"value":14739226008},{"value":15191552224},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15191551536},"sp":{"value":15191551392},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036738,"name":"com.u-he.Diva.voice-renderer 2","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15192124856},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739226056},{"value":14739226120},{"value":15192125664},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15192124976},"sp":{"value":15192124832},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036739,"name":"com.u-he.Diva.voice-renderer 3","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15192698296},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739226168},{"value":14739226232},{"value":15192699104},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15192698416},"sp":{"value":15192698272},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036740,"name":"com.u-he.Diva.voice-renderer 4","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15193271736},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739226280},{"value":14739226344},{"value":15193272544},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15193271856},"sp":{"value":15193271712},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036741,"name":"com.u-he.Diva.voice-renderer 5","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15193845176},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739226392},{"value":14739226456},{"value":15193845984},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15193845296},"sp":{"value":15193845152},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036742,"name":"com.u-he.Diva.voice-renderer 6","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15194418616},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739226504},{"value":14739226568},{"value":15194419424},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15194418736},"sp":{"value":15194418592},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036743,"name":"com.u-he.Diva.voice-renderer 7","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15194992056},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739226616},{"value":14739226680},{"value":15194992864},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15194992176},"sp":{"value":15194992032},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036744,"name":"com.u-he.Diva.voice-renderer 8","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15291805112},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739226728},{"value":14739226792},{"value":15291805920},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15291805232},"sp":{"value":15291805088},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036745,"name":"com.u-he.Diva.voice-renderer 9","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15292378552},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739226840},{"value":14739226904},{"value":15292379360},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15292378672},"sp":{"value":15292378528},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036746,"name":"com.u-he.Diva.voice-renderer 10","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15460756920},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739226952},{"value":14739227016},{"value":15460757728},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15460757040},"sp":{"value":15460756896},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036747,"name":"com.u-he.Diva.voice-renderer 11","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15461330360},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739227064},{"value":14739227128},{"value":15461331168},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15461330480},"sp":{"value":15461330336},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036748,"name":"com.u-he.Diva.voice-renderer 12","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15461903800},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739227176},{"value":14739227240},{"value":15461904608},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15461903920},"sp":{"value":15461903776},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036749,"name":"com.u-he.Diva.voice-renderer 13","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15462477240},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739227288},{"value":14739227352},{"value":15462478048},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15462477360},"sp":{"value":15462477216},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036750,"name":"com.u-he.Diva.voice-renderer 14","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15475764664},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739227400},{"value":14739227464},{"value":15475765472},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15475764784},"sp":{"value":15475764640},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036751,"name":"com.u-he.Diva.voice-renderer 15","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15476338104},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14739227512},{"value":14739227576},{"value":15476338912},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15476338224},"sp":{"value":15476338080},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036769,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":2312696,"imageIndex":24},{"imageOffset":2329356,"imageIndex":24},{"imageOffset":2329188,"imageIndex":24},{"imageOffset":2329008,"imageIndex":24},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":1499},{"value":999999000},{"value":15476910952},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14904902872},{"value":14904903048},{"value":15476912352},{"value":999999000},{"value":1499},{"value":256},{"value":257},{"value":512},{"value":15519713280},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15476911072},"sp":{"value":15476910928},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036780,"name":"Internet Monitor","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":50000000},{"value":0},{"value":18446744069415224832},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":1099511627776},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":15518420752},{"value":0},{"value":105553163247664},{"value":16042335800},{"value":16042335232},{"value":3435973837},{"value":15518420760},{"value":0},{"value":16042340064}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":15518419152},"sp":{"value":15518419104},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":137},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":1214152,"symbol":"PSInternet::run()","symbolLocation":46108,"imageIndex":27},{"imageOffset":2449108,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":27},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036781,"name":"thumb cache","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499997917},{"value":15633231384},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16191265568},{"value":16191265632},{"value":15633232096},{"value":499997917},{"value":0},{"value":0},{"value":8705},{"value":8960},{"value":274877907},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15633231504},"sp":{"value":15633231360},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":2379828,"symbol":"juce::WaitableEvent::wait(int) const","symbolLocation":152,"imageIndex":27},{"imageOffset":2378892,"symbol":"juce::TimeSliceThread::run()","symbolLocation":128,"imageIndex":27},{"imageOffset":2449108,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":27},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036784,"name":"com.apple.NSURLConnectionLoader","threadState":{"x":[{"value":268451845},{"value":21592279046},{"value":8589934592},{"value":792760768528384},{"value":0},{"value":792760768528384},{"value":2},{"value":4294967295},{"value":0},{"value":17179869184},{"value":0},{"value":2},{"value":0},{"value":0},{"value":184579},{"value":0},{"value":18446744073709551569},{"value":8575310952},{"value":0},{"value":4294967295},{"value":2},{"value":792760768528384},{"value":0},{"value":792760768528384},{"value":15464193352},{"value":8589934592},{"value":21592279046},{"value":18446744073709550527},{"value":4412409862,"symbolLocation":710518,"symbol":"testing::internal::MatcherBase<std::__1::tuple<TUserValue const&, TUserValue const&> const&>::VTable const* testing::internal::MatcherBase<std::__1::tuple<TUserValue const&, TUserValue const&> const&>::GetVTable<testing::internal::MatcherBase<std::__1::tuple<TUserValue const&, TUserValue const&> const&>::ValuePolicy<testing::internal::AnythingMatcher, true>>()::kVTable"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6712935328},"cpsr":{"value":4096},"fp":{"value":15464193200},"sp":{"value":15464193120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859700},"far":{"value":0}},"frames":[{"imageOffset":3124,"symbol":"mach_msg2_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":78752,"symbol":"mach_msg2_internal","symbolLocation":76,"imageIndex":137},{"imageOffset":38756,"symbol":"mach_msg_overwrite","symbolLocation":484,"imageIndex":137},{"imageOffset":4008,"symbol":"mach_msg","symbolLocation":24,"imageIndex":137},{"imageOffset":511164,"symbol":"__CFRunLoopServiceMachPort","symbolLocation":160,"imageIndex":141},{"imageOffset":505304,"symbol":"__CFRunLoopRun","symbolLocation":1208,"imageIndex":141},{"imageOffset":502424,"symbol":"CFRunLoopRunSpecific","symbolLocation":572,"imageIndex":141},{"imageOffset":2441972,"symbol":"+[__CFN_CoreSchedulingSetRunnable _run:]","symbolLocation":416,"imageIndex":146},{"imageOffset":342952,"symbol":"__NSThread__start__","symbolLocation":732,"imageIndex":147},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036808,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147482574258176000},{"value":499999750},{"value":68719460488},{"value":485958},{"value":6},{"value":10},{"value":0},{"value":499999750},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6457733369550},{"value":105553736339904},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":15463050768},"sp":{"value":15463050736},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":143},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":143},{"imageOffset":654644,"imageIndex":29},{"imageOffset":435104,"imageIndex":29},{"imageOffset":504104,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036809,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15463618576},{"value":128},{"value":15463618544},{"value":365},{"value":18446744073709551125},{"value":14468298528},{"value":2},{"value":0},{"value":2},{"value":213759},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":15463624080},{"value":14468298432},{"value":0},{"value":15463623944},{"value":15099378760},{"value":15099378832},{"value":15099378752},{"value":15463624080},{"value":15099378832},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16360173116},"cpsr":{"value":1610616832},"fp":{"value":15463623792},"sp":{"value":15463618464},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036810,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15464765456},{"value":128},{"value":15464765424},{"value":365},{"value":18446744073709551125},{"value":14468304672},{"value":2},{"value":0},{"value":2},{"value":966291},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":15464770960},{"value":14468304576},{"value":0},{"value":15464770824},{"value":14468305736},{"value":14468305808},{"value":14468305728},{"value":15464770960},{"value":14468305808},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16360173116},"cpsr":{"value":1610616832},"fp":{"value":15464770672},"sp":{"value":15464765344},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036813,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15819364368},{"value":128},{"value":15819364336},{"value":365},{"value":18446744073709551125},{"value":14468269344},{"value":2},{"value":0},{"value":2},{"value":973244},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":15819369872},{"value":14468269248},{"value":0},{"value":15819369736},{"value":14468272968},{"value":14468273040},{"value":14468272960},{"value":15819369872},{"value":14468273040},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16360173116},"cpsr":{"value":1610616832},"fp":{"value":15819369584},"sp":{"value":15819364256},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036814,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15819937808},{"value":128},{"value":15819937776},{"value":0},{"value":0},{"value":15478719392},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":15819943312},{"value":15478719296},{"value":0},{"value":15819943176},{"value":14468269896},{"value":14468269968},{"value":14468269888},{"value":15819943312},{"value":14468269968},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16360173116},"cpsr":{"value":1610616832},"fp":{"value":15819943024},"sp":{"value":15819937696},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036822,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":51072,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":9},{"value":999999000},{"value":16216780392},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554176994816},{"value":105553622425520},{"value":16216781024},{"value":999999000},{"value":9},{"value":256},{"value":513},{"value":768},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16216780512},"sp":{"value":16216780368},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036864,"name":"jq-1","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16233901704},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554173931136},{"value":105553623491584},{"value":16233902304},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16233901824},"sp":{"value":16233901680},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036865,"name":"jq-10","threadState":{"x":[{"value":260},{"value":0},{"value":44288},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16235654792},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554173983040},{"value":105553623703040},{"value":16235655392},{"value":0},{"value":0},{"value":44288},{"value":44289},{"value":44544},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16235654912},"sp":{"value":16235654768},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036866,"name":"jq-2","threadState":{"x":[{"value":260},{"value":0},{"value":44544},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16359861896},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554173983232},{"value":105553623702944},{"value":16359862496},{"value":0},{"value":0},{"value":44544},{"value":44545},{"value":44800},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16359862016},"sp":{"value":16359861872},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036867,"name":"jq-9","threadState":{"x":[{"value":260},{"value":0},{"value":45056},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16863751816},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554173979712},{"value":105553623702992},{"value":16863752416},{"value":0},{"value":0},{"value":45056},{"value":45057},{"value":45312},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16863751936},"sp":{"value":16863751792},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036868,"name":"jq-8","threadState":{"x":[{"value":260},{"value":0},{"value":44288},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16964415112},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554173984064},{"value":105553623702896},{"value":16964415712},{"value":0},{"value":0},{"value":44288},{"value":44289},{"value":44544},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16964415232},"sp":{"value":16964415088},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036869,"name":"jq-3","threadState":{"x":[{"value":260},{"value":0},{"value":47360},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16964988552},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554173984256},{"value":105553623703088},{"value":16964989152},{"value":0},{"value":0},{"value":47360},{"value":47361},{"value":47616},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16964988672},"sp":{"value":16964988528},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036870,"name":"jq-4","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16965561992},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554173984448},{"value":105553623703136},{"value":16965562592},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16965562112},"sp":{"value":16965561968},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036871,"name":"jq-7","threadState":{"x":[{"value":260},{"value":0},{"value":41472},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16966135432},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554173984640},{"value":105553623703184},{"value":16966136032},{"value":0},{"value":0},{"value":41472},{"value":41473},{"value":41728},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16966135552},"sp":{"value":16966135408},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036872,"name":"jq-5","threadState":{"x":[{"value":260},{"value":0},{"value":36864},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16966708872},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554175594816},{"value":105553623703232},{"value":16966709472},{"value":0},{"value":0},{"value":36864},{"value":36865},{"value":37120},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16966708992},"sp":{"value":16966708848},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036873,"name":"jq-6","threadState":{"x":[{"value":260},{"value":0},{"value":41984},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16967282312},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554175594880},{"value":105553623703280},{"value":16967282912},{"value":0},{"value":0},{"value":41984},{"value":41985},{"value":42240},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16967282432},"sp":{"value":16967282288},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036874,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":2378476,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":92416},{"value":0},{"value":0},{"value":160},{"value":0},{"value":500000000},{"value":15820516936},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554177046272},{"value":105553577913264},{"value":15820517600},{"value":500000000},{"value":0},{"value":92416},{"value":95489},{"value":95744},{"value":1},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15820517056},"sp":{"value":15820516912},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036875,"name":"vpuptthd","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":1},{"value":0},{"value":16967855592},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554176994560},{"value":105553622425424},{"value":16967856352},{"value":0},{"value":1},{"value":0},{"value":3841},{"value":4096},{"value":16872665088},{"value":15097047832}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16967855712},"sp":{"value":16967855568},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":37604,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036876,"name":"tith","threadState":{"x":[{"value":260},{"value":0},{"value":254976},{"value":0},{"value":0},{"value":160},{"value":0},{"value":13999000},{"value":17001115144},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554173875520},{"value":105553622425472},{"value":17001115872},{"value":13999000},{"value":0},{"value":254976},{"value":254977},{"value":255232},{"value":4269867153},{"value":1116471296}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17001115264},"sp":{"value":17001115120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":38968,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036878,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147483467611373568},{"value":499999958},{"value":68719460488},{"value":18446744073575158342},{"value":6},{"value":10},{"value":0},{"value":499999958},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6457732311837},{"value":105553733188352},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":17002262032},"sp":{"value":17002262000},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":143},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":143},{"imageOffset":665172,"imageIndex":31},{"imageOffset":445632,"imageIndex":31},{"imageOffset":514632,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036879,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17002829840},{"value":128},{"value":17002829808},{"value":365},{"value":18446744073709551125},{"value":16931583296},{"value":2},{"value":0},{"value":2},{"value":198767},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17002835344},{"value":16931583200},{"value":0},{"value":17002835208},{"value":15099373512},{"value":15099373584},{"value":15099373504},{"value":17002835344},{"value":15099373584},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17042724700},"cpsr":{"value":1610616832},"fp":{"value":17002835056},"sp":{"value":17002829728},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036880,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17003403280},{"value":128},{"value":17003403248},{"value":365},{"value":18446744073709551125},{"value":16931320800},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":858325},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17003408784},{"value":16931320704},{"value":0},{"value":17003408648},{"value":16931605192},{"value":16931605264},{"value":16931605184},{"value":17003408784},{"value":16931605264},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17042724700},"cpsr":{"value":1610616832},"fp":{"value":17003408496},"sp":{"value":17003403168},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036884,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17021032464},{"value":128},{"value":17021032432},{"value":365},{"value":18446744073709551125},{"value":16968199792},{"value":2},{"value":0},{"value":2},{"value":973116},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17021037968},{"value":16968199696},{"value":0},{"value":17021037832},{"value":16968197768},{"value":16968197840},{"value":16968197760},{"value":17021037968},{"value":16968197840},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17042724700},"cpsr":{"value":1610616832},"fp":{"value":17021037680},"sp":{"value":17021032352},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036885,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17021605904},{"value":128},{"value":17021605872},{"value":0},{"value":0},{"value":16968200064},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":17021611408},{"value":16968199968},{"value":0},{"value":17021611272},{"value":16968198056},{"value":16968198128},{"value":16968198048},{"value":17021611408},{"value":16968198128},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17042724700},"cpsr":{"value":1610616832},"fp":{"value":17021611120},"sp":{"value":17021605792},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036897,"name":"com.u-he.Diva.voice-renderer 0","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17040010680},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658775272},{"value":16658775336},{"value":17040011488},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17040010800},"sp":{"value":17040010656},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036898,"name":"com.u-he.Diva.voice-renderer 1","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17040584120},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658775384},{"value":16658775448},{"value":17040584928},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17040584240},"sp":{"value":17040584096},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036899,"name":"com.u-he.Diva.voice-renderer 2","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17041157560},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658775496},{"value":16658775560},{"value":17041158368},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17041157680},"sp":{"value":17041157536},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036900,"name":"com.u-he.Diva.voice-renderer 3","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17041731000},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658775608},{"value":16658775672},{"value":17041731808},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17041731120},"sp":{"value":17041730976},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036901,"name":"com.u-he.Diva.voice-renderer 4","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17042304440},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658775720},{"value":16658775784},{"value":17042305248},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17042304560},"sp":{"value":17042304416},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036902,"name":"com.u-he.Diva.voice-renderer 5","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17054903736},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658775832},{"value":16658775896},{"value":17054904544},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17054903856},"sp":{"value":17054903712},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036903,"name":"com.u-he.Diva.voice-renderer 6","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17055477176},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658775944},{"value":16658776008},{"value":17055477984},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17055477296},"sp":{"value":17055477152},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036904,"name":"com.u-he.Diva.voice-renderer 7","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17056050616},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658776056},{"value":16658776120},{"value":17056051424},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17056050736},"sp":{"value":17056050592},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036905,"name":"com.u-he.Diva.voice-renderer 8","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17056624056},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658776168},{"value":16658776232},{"value":17056624864},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17056624176},"sp":{"value":17056624032},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036906,"name":"com.u-he.Diva.voice-renderer 9","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17057197496},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658776280},{"value":16658776344},{"value":17057198304},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17057197616},"sp":{"value":17057197472},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036907,"name":"com.u-he.Diva.voice-renderer 10","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17057770936},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658776392},{"value":16658776456},{"value":17057771744},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17057771056},"sp":{"value":17057770912},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036908,"name":"com.u-he.Diva.voice-renderer 11","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17058344376},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658776504},{"value":16658776568},{"value":17058345184},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17058344496},"sp":{"value":17058344352},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036909,"name":"com.u-he.Diva.voice-renderer 12","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17058917816},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658776616},{"value":16658776680},{"value":17058918624},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17058917936},"sp":{"value":17058917792},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036910,"name":"com.u-he.Diva.voice-renderer 13","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17059491256},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658776728},{"value":16658776792},{"value":17059492064},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17059491376},"sp":{"value":17059491232},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036911,"name":"com.u-he.Diva.voice-renderer 14","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17060064696},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658776840},{"value":16658776904},{"value":17060065504},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17060064816},"sp":{"value":17060064672},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036912,"name":"com.u-he.Diva.voice-renderer 15","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17060638136},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16658776952},{"value":16658777016},{"value":17060638944},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17060638256},"sp":{"value":17060638112},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036914,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147483287222747136},{"value":499999916},{"value":68719460488},{"value":18446744073634661381},{"value":5},{"value":10},{"value":0},{"value":499999916},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6457731126930},{"value":105553733201296},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":17111313936},"sp":{"value":17111313904},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":143},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":143},{"imageOffset":653012,"imageIndex":32},{"imageOffset":433472,"imageIndex":32},{"imageOffset":502472,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036915,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17131132944},{"value":128},{"value":17131132912},{"value":365},{"value":18446744073709551125},{"value":16996621856},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":208210},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17131138448},{"value":16996621760},{"value":0},{"value":17131138312},{"value":16996597160},{"value":16996597232},{"value":16996597152},{"value":17131138448},{"value":16996597232},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17149454300},"cpsr":{"value":1610616832},"fp":{"value":17131138160},"sp":{"value":17131132832},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036916,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17131706384},{"value":128},{"value":17131706352},{"value":365},{"value":18446744073709551125},{"value":17130016000},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":324197},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17131711888},{"value":17130015904},{"value":0},{"value":17131711752},{"value":16996619208},{"value":16996619280},{"value":16996619200},{"value":17131711888},{"value":16996619280},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17149454300},"cpsr":{"value":1610616832},"fp":{"value":17131711600},"sp":{"value":17131706272},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036920,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17132279824},{"value":128},{"value":17132279792},{"value":365},{"value":18446744073709551125},{"value":16910373840},{"value":2},{"value":0},{"value":2},{"value":973324},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17132285328},{"value":16910373744},{"value":0},{"value":17132285192},{"value":16971228696},{"value":16971228768},{"value":16971228688},{"value":17132285328},{"value":16971228768},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17149454300},"cpsr":{"value":1610616832},"fp":{"value":17132285040},"sp":{"value":17132279712},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036921,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17132853264},{"value":128},{"value":17132853232},{"value":0},{"value":0},{"value":17130017056},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":17132858768},{"value":17130016960},{"value":0},{"value":17132858632},{"value":16971228984},{"value":16971229056},{"value":16971228976},{"value":17132858768},{"value":16971229056},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17149454300},"cpsr":{"value":1610616832},"fp":{"value":17132858480},"sp":{"value":17132853152},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036925,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147482574258176000},{"value":499999750},{"value":68719460488},{"value":126626374},{"value":6},{"value":10},{"value":0},{"value":499999750},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6457733155580},{"value":105553733199696},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":17133432336},"sp":{"value":17133432304},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":143},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":143},{"imageOffset":653740,"imageIndex":33},{"imageOffset":434200,"imageIndex":33},{"imageOffset":503200,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036926,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17147566096},{"value":128},{"value":17147566064},{"value":365},{"value":18446744073709551125},{"value":17135965584},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":204843},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17147571600},{"value":17135965488},{"value":0},{"value":17147571464},{"value":16996667512},{"value":16996667584},{"value":16996667504},{"value":17147571600},{"value":16996667584},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17137052340},"cpsr":{"value":1610616832},"fp":{"value":17147571312},"sp":{"value":17147565984},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036927,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17148139536},{"value":128},{"value":17148139504},{"value":365},{"value":18446744073709551125},{"value":16996672560},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":455976},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17148145040},{"value":16996672464},{"value":0},{"value":17148144904},{"value":16996672312},{"value":16996672384},{"value":16996672304},{"value":17148145040},{"value":16996672384},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17137052340},"cpsr":{"value":1610616832},"fp":{"value":17148144752},"sp":{"value":17148139424},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036930,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17148712976},{"value":128},{"value":17148712944},{"value":365},{"value":18446744073709551125},{"value":16910229968},{"value":2},{"value":0},{"value":2},{"value":971437},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17148718480},{"value":16910229872},{"value":0},{"value":17148718344},{"value":16996692520},{"value":16996692592},{"value":16996692512},{"value":17148718480},{"value":16996692592},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17137052340},"cpsr":{"value":1610616832},"fp":{"value":17148718192},"sp":{"value":17148712864},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036931,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17177761808},{"value":128},{"value":17177761776},{"value":0},{"value":0},{"value":17135968976},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":17177767312},{"value":17135968880},{"value":0},{"value":17177767176},{"value":16971237960},{"value":16971238032},{"value":16971237952},{"value":17177767312},{"value":16971238032},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17137052340},"cpsr":{"value":1610616832},"fp":{"value":17177767024},"sp":{"value":17177761696},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036944,"name":"splice event processor","threadState":{"x":[{"value":260},{"value":0},{"value":50944},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17213992376},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17358511200},{"value":17358511264},{"value":17213993184},{"value":0},{"value":0},{"value":50944},{"value":50945},{"value":51200},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17213992496},"sp":{"value":17213992352},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":3292068,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":108,"imageIndex":35},{"imageOffset":445788,"symbol":"SpliceEventProcessor::process_events_on_thread()","symbolLocation":128,"imageIndex":35},{"imageOffset":445620,"symbol":"SpliceEventProcessor::run()","symbolLocation":44,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036946,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":79104},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999958},{"value":17241533912},{"value":0},{"value":256},{"value":1099511628034},{"value":1099511628034},{"value":256},{"value":0},{"value":1099511628032},{"value":305},{"value":8575309072},{"value":0},{"value":17216381328},{"value":17216381392},{"value":17241534688},{"value":299999958},{"value":0},{"value":79104},{"value":79105},{"value":79360},{"value":4294967295},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17241534032},"sp":{"value":17241533888},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":3292216,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":256,"imageIndex":35},{"imageOffset":2954392,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":480,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036947,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":8819172,"symbol":"gpr_cv_wait","symbolLocation":132,"imageIndex":35},{"imageOffset":7848040,"symbol":"grpc_core::Executor::ThreadMain(void*)","symbolLocation":232,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":1024},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17244384760},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17263502336},{"value":17263502416},{"value":17244385504},{"value":0},{"value":0},{"value":1024},{"value":1025},{"value":1280},{"value":17463457184,"symbolLocation":0,"symbol":"vtable for grpc_core::ExecCtx"},{"value":6713168120,"symbolLocation":0,"symbol":"_tlv_get_addr"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17244384880},"sp":{"value":17244384736},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036948,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":8819172,"symbol":"gpr_cv_wait","symbolLocation":132,"imageIndex":35},{"imageOffset":7848040,"symbol":"grpc_core::Executor::ThreadMain(void*)","symbolLocation":232,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17244958200},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17263506432},{"value":17263506512},{"value":17244958944},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":17463457184,"symbolLocation":0,"symbol":"vtable for grpc_core::ExecCtx"},{"value":6713168120,"symbolLocation":0,"symbol":"_tlv_get_addr"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17244958320},"sp":{"value":17244958176},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036949,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":8819148,"symbol":"gpr_cv_wait","symbolLocation":108,"imageIndex":35},{"imageOffset":7916212,"symbol":"timer_thread(void*)","symbolLocation":724,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":6144},{"value":0},{"value":0},{"value":160},{"value":0},{"value":637162209},{"value":17245531608},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17464413648,"symbolLocation":144,"symbol":"_MergedGlobals"},{"value":17464413552,"symbolLocation":48,"symbol":"_MergedGlobals"},{"value":17245532384},{"value":637162209},{"value":0},{"value":6144},{"value":8192},{"value":8704},{"value":14684},{"value":17464439328,"symbolLocation":0,"symbol":"grpc_timer_check_trace"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17245531728},"sp":{"value":17245531584},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6036950,"name":"grpc communication thread","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":250000000},{"value":103},{"value":105553289016576},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":17246104552},{"value":24000000},{"value":146},{"value":3898691712},{"value":6713168120,"symbolLocation":0,"symbol":"_tlv_get_addr"},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17246105360},{"value":105554250768640},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17246105344},"sp":{"value":17246105296},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":137},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":3076872,"symbol":"juce::Thread::sleep(int)","symbolLocation":80,"imageIndex":35},{"imageOffset":436780,"symbol":"SpliceCommunication::run()","symbolLocation":124,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036951,"name":"audio loading thread","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":100000000},{"value":0},{"value":17460921132},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17246677696},{"value":264},{"value":17246677800},{"value":17358512232},{"value":17463067056,"symbolLocation":24,"symbol":"typeinfo for SpliceSuperPowered"},{"value":1},{"value":4294967295},{"value":5775724544},{"value":17246677976}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17246677680},"sp":{"value":17246677632},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":137},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":3076872,"symbol":"juce::Thread::sleep(int)","symbolLocation":80,"imageIndex":35},{"imageOffset":517744,"symbol":"SpliceSuperPowered::run()","symbolLocation":564,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036955,"name":"JUCE v8.0.8: Timer","threadState":{"x":[{"value":260},{"value":0},{"value":13568},{"value":0},{"value":0},{"value":160},{"value":0},{"value":45999750},{"value":17001687768},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17336435048},{"value":17336435112},{"value":17001689312},{"value":45999750},{"value":0},{"value":13568},{"value":13569},{"value":13824},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17001687888},"sp":{"value":17001687744},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4187960,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&)","symbolLocation":328,"imageIndex":38},{"imageOffset":4187076,"symbol":"void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":38},{"imageOffset":4440732,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&)","symbolLocation":132,"imageIndex":38},{"imageOffset":4440392,"symbol":"bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":72,"imageIndex":38},{"imageOffset":3946192,"symbol":"bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":100,"imageIndex":38},{"imageOffset":3744524,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":188,"imageIndex":38},{"imageOffset":3752276,"symbol":"juce::Thread::wait(double) const","symbolLocation":36,"imageIndex":38},{"imageOffset":4685304,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":420,"imageIndex":38},{"imageOffset":3748076,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":340,"imageIndex":38},{"imageOffset":3749040,"symbol":"juce::juce_threadEntryPoint(void*)","symbolLocation":24,"imageIndex":38},{"imageOffset":4115928,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const","symbolLocation":148,"imageIndex":38},{"imageOffset":4115768,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*)","symbolLocation":28,"imageIndex":38},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036956,"name":"JUCE v8.0.8: thumb cache","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998375},{"value":17337707064},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17535306984},{"value":17535307048},{"value":17337708768},{"value":499998375},{"value":0},{"value":0},{"value":6401},{"value":6656},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17337707184},"sp":{"value":17337707040},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4187960,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&)","symbolLocation":328,"imageIndex":38},{"imageOffset":4187076,"symbol":"void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":38},{"imageOffset":4440732,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&)","symbolLocation":132,"imageIndex":38},{"imageOffset":4440392,"symbol":"bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":72,"imageIndex":38},{"imageOffset":3946192,"symbol":"bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":100,"imageIndex":38},{"imageOffset":3744524,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":188,"imageIndex":38},{"imageOffset":3752276,"symbol":"juce::Thread::wait(double) const","symbolLocation":36,"imageIndex":38},{"imageOffset":3766692,"symbol":"juce::TimeSliceThread::run()","symbolLocation":848,"imageIndex":38},{"imageOffset":3748076,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":340,"imageIndex":38},{"imageOffset":3749040,"symbol":"juce::juce_threadEntryPoint(void*)","symbolLocation":24,"imageIndex":38},{"imageOffset":4115928,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const","symbolLocation":148,"imageIndex":38},{"imageOffset":4115768,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*)","symbolLocation":28,"imageIndex":38},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036958,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":25856},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17338281384},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17839141936},{"value":17839142000},{"value":17338282208},{"value":0},{"value":0},{"value":25856},{"value":25857},{"value":26112},{"value":8192},{"value":17839142848}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17338281504},"sp":{"value":17338281360},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":245472,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036959,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17338854984},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17839143152},{"value":17839143216},{"value":17338855648},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17338855104},"sp":{"value":17338854960},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036960,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17422052936},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17839156352},{"value":17839156416},{"value":17422053600},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17422053056},"sp":{"value":17422052912},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036961,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17422626376},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17839162776},{"value":17839162840},{"value":17422627040},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17422626496},"sp":{"value":17422626352},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036962,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":601088},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17438797304},{"value":0},{"value":1792},{"value":7696581396226},{"value":7696581396226},{"value":1792},{"value":0},{"value":7696581396224},{"value":305},{"value":8575309072},{"value":0},{"value":17839147936},{"value":17839148000},{"value":17438798048},{"value":0},{"value":0},{"value":601088},{"value":601089},{"value":601344},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17438797424},"sp":{"value":17438797280},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036963,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":601088},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17439370744},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17839154216},{"value":17839154280},{"value":17439371488},{"value":0},{"value":0},{"value":601088},{"value":601089},{"value":601344},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17439370864},"sp":{"value":17439370720},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036964,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":25856},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17494371752},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17537474608},{"value":17537474672},{"value":17494372576},{"value":0},{"value":0},{"value":25856},{"value":25857},{"value":26112},{"value":8192},{"value":17537475520}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17494371872},"sp":{"value":17494371728},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":245472,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036965,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17494945352},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17537475824},{"value":17537475888},{"value":17494946016},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17494945472},"sp":{"value":17494945328},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036966,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17495518792},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17537489024},{"value":17537489088},{"value":17495519456},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17495518912},"sp":{"value":17495518768},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036967,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17496092232},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17537495448},{"value":17537495512},{"value":17496092896},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17496092352},"sp":{"value":17496092208},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036968,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":600832},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17496665592},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17537480608},{"value":17537480672},{"value":17496666336},{"value":0},{"value":0},{"value":600832},{"value":600833},{"value":601088},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17496665712},"sp":{"value":17496665568},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036969,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":600832},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17497239032},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17537486888},{"value":17537486952},{"value":17497239776},{"value":0},{"value":0},{"value":600832},{"value":600833},{"value":601088},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17497239152},"sp":{"value":17497239008},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":140},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036970,"name":"DiskTaskFIFO","threadState":{"x":[{"value":60},{"value":0},{"value":1},{"value":1},{"value":0},{"value":10000000},{"value":24},{"value":19437795996,"symbolLocation":0,"symbol":"mp3d_g_arPower43short_new"},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":7424},{"value":2043},{"value":2045},{"value":3351779561},{"value":3349680382},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17497812752},{"value":17216961135462248175},{"value":120},{"value":1},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17497812736},"sp":{"value":17497812688},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":137},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":1868292,"imageIndex":39},{"imageOffset":695192,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036971,"name":"DiskTaskFIFO","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":50000000},{"value":16383},{"value":2},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":7648},{"value":2043},{"value":2045},{"value":1057278192},{"value":1055178908},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17498386192},{"value":17216961135462248175},{"value":120},{"value":1},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17498386176},"sp":{"value":17498386128},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":137},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":1868292,"imageIndex":39},{"imageOffset":695192,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6036992,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":8904508,"symbol":"spdlog::details::mpmc_blocking_queue<spdlog::details::async_msg>::dequeue_for(spdlog::details::async_msg&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l>>)","symbolLocation":136,"imageIndex":41},{"imageOffset":8904160,"symbol":"spdlog::details::thread_pool::process_next_msg_()","symbolLocation":128,"imageIndex":41},{"imageOffset":8903576,"symbol":"void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct>>, spdlog::details::thread_pool::thread_pool(unsigned long, unsigned long, std::__1::function<void ()>, std::__1::function<void ()>)::'lambda'()>>(void*)","symbolLocation":76,"imageIndex":41},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":60416},{"value":0},{"value":0},{"value":160},{"value":9},{"value":999999959},{"value":6166998216},{"value":0},{"value":3584},{"value":15393162792450},{"value":15393162792450},{"value":3584},{"value":0},{"value":15393162792448},{"value":305},{"value":8575309072},{"value":0},{"value":18198334056},{"value":18198334120},{"value":6166999264},{"value":999999959},{"value":9},{"value":60416},{"value":60673},{"value":60928},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6166998336},"sp":{"value":6166998192},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6037069,"name":"RT-InterProcessSenderThread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":144},{"value":0},{"value":0},{"value":18246823464},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18423480632},{"value":18423480744},{"value":18246824160},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18246823584},"sp":{"value":18246823440},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":21243592,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037088,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":177588,"imageIndex":11},{"imageOffset":176236,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":1703824,"imageIndex":11},{"imageOffset":175428,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18569047416},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18185006168},{"value":18185006248},{"value":18569048288},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18185006320},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18569047536},"sp":{"value":18569047392},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6037089,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":182412,"imageIndex":18},{"imageOffset":181060,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":1708648,"imageIndex":18},{"imageOffset":180252,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18754497912},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18198817128},{"value":18198817208},{"value":18754498784},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18198817280},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18754498032},"sp":{"value":18754497888},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6037090,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":180404,"imageIndex":29},{"imageOffset":179052,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":1706640,"imageIndex":29},{"imageOffset":178244,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18764066168},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18185069672},{"value":18185069752},{"value":18764067040},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18185069824},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18764066288},"sp":{"value":18764066144},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6037091,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":190932,"imageIndex":31},{"imageOffset":189580,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":1717168,"imageIndex":31},{"imageOffset":188772,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18764639608},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18196327064},{"value":18196327144},{"value":18764640480},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18196327216},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18764639728},"sp":{"value":18764639584},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6037092,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":178772,"imageIndex":32},{"imageOffset":177420,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":1705008,"imageIndex":32},{"imageOffset":176612,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18765213048},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5701224728},{"value":5701224808},{"value":18765213920},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":5701224880},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18765213168},"sp":{"value":18765213024},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6037093,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":179500,"imageIndex":33},{"imageOffset":178148,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":1705736,"imageIndex":33},{"imageOffset":177340,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18765786488},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18196864136},{"value":18196864216},{"value":18765787360},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18196864288},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18765786608},"sp":{"value":18765786464},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6037094,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":51712},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999917},{"value":18766360104},{"value":0},{"value":512},{"value":2199023256066},{"value":2199023256066},{"value":512},{"value":0},{"value":2199023256064},{"value":305},{"value":8575309072},{"value":0},{"value":5225075192},{"value":5225075256},{"value":18766360800},{"value":299999917},{"value":0},{"value":51712},{"value":51713},{"value":51968},{"value":269072076},{"value":4294967295}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18766360224},"sp":{"value":18766360080},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":10383204,"imageIndex":8},{"imageOffset":10887524,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037095,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":50688},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999958},{"value":18766933544},{"value":0},{"value":1280},{"value":5497558140162},{"value":5497558140162},{"value":1280},{"value":0},{"value":5497558140160},{"value":305},{"value":8575309072},{"value":0},{"value":14467794552},{"value":14467794616},{"value":18766934240},{"value":299999958},{"value":0},{"value":50688},{"value":50689},{"value":50944},{"value":269072065},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18766933664},"sp":{"value":18766933520},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":16242972,"imageIndex":15},{"imageOffset":14264272,"imageIndex":15},{"imageOffset":16335680,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037096,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":99999875},{"value":18767506952},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15096790648},{"value":15096790712},{"value":18767507680},{"value":99999875},{"value":0},{"value":0},{"value":12801},{"value":13056},{"value":223},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18767507072},"sp":{"value":18767506928},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4343196,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037097,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":28160},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999917},{"value":18768080424},{"value":0},{"value":256},{"value":1099511628034},{"value":1099511628034},{"value":256},{"value":0},{"value":1099511628032},{"value":305},{"value":8575309072},{"value":0},{"value":15099356024},{"value":15099356088},{"value":18768081120},{"value":299999917},{"value":0},{"value":28160},{"value":28161},{"value":28416},{"value":269072106},{"value":4294967294}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18768080544},"sp":{"value":18768080400},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":2379828,"symbol":"juce::WaitableEvent::wait(int) const","symbolLocation":152,"imageIndex":27},{"imageOffset":2659784,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":576,"imageIndex":27},{"imageOffset":2449108,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":27},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037098,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":38400},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998916},{"value":18768653864},{"value":0},{"value":768},{"value":3298534884098},{"value":3298534884098},{"value":768},{"value":0},{"value":3298534884096},{"value":305},{"value":8575309072},{"value":0},{"value":15478709864},{"value":15478709928},{"value":18768654560},{"value":299998916},{"value":0},{"value":38400},{"value":38401},{"value":38656},{"value":269072077},{"value":4294967295}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18768653984},"sp":{"value":18768653840},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":129456,"symbol":"juce::WaitableEvent::wait(int) const","symbolLocation":152,"imageIndex":28},{"imageOffset":238792,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":576,"imageIndex":28},{"imageOffset":158180,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":28},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037099,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":122112},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998833},{"value":18769227256},{"value":0},{"value":512},{"value":2199023256066},{"value":2199023256066},{"value":512},{"value":0},{"value":2199023256064},{"value":305},{"value":8575309072},{"value":0},{"value":15818346512},{"value":15818346576},{"value":18769228000},{"value":299998833},{"value":0},{"value":122112},{"value":122113},{"value":122368},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18769227376},"sp":{"value":18769227232},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":6922856,"imageIndex":30},{"imageOffset":7069944,"imageIndex":30},{"imageOffset":6924656,"imageIndex":30},{"imageOffset":7008940,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037101,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1998958},{"value":18769800744},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18190245176},{"value":18190245240},{"value":18769801440},{"value":1998958},{"value":0},{"value":0},{"value":1175297},{"value":1175552},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18769800864},"sp":{"value":18769800720},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037102,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":99999959},{"value":18770374152},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17336599320},{"value":17336599384},{"value":18770374880},{"value":99999959},{"value":0},{"value":0},{"value":12545},{"value":12800},{"value":4294967295},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18770374272},"sp":{"value":18770374128},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":1921980,"imageIndex":39},{"imageOffset":2113740,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037103,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":52992},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999917},{"value":18770947544},{"value":0},{"value":512},{"value":2199023256066},{"value":2199023256066},{"value":512},{"value":0},{"value":2199023256064},{"value":305},{"value":8575309072},{"value":0},{"value":18183817168},{"value":18183817232},{"value":18770948320},{"value":299999917},{"value":0},{"value":52992},{"value":52993},{"value":53248},{"value":18341085184,"symbolLocation":3368,"symbol":"pcre_stack_guard"},{"value":4294967295}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18770947664},"sp":{"value":18770947520},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":140},{"imageOffset":6800588,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":544,"imageIndex":41},{"imageOffset":7009884,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":476,"imageIndex":41},{"imageOffset":6803464,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":292,"imageIndex":41},{"imageOffset":6942472,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":41},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037104,"name":"tcp_listener","threadState":{"x":[{"value":4},{"value":0},{"value":18771521060},{"value":18771521629},{"value":18339859383},{"value":12},{"value":0},{"value":0},{"value":105553990698012},{"value":8558216920,"symbolLocation":0,"symbol":"_current_pid"},{"value":340},{"value":13632},{"value":2043},{"value":2045},{"value":3955786013},{"value":3953686836},{"value":30},{"value":8575317672},{"value":0},{"value":105553928533616},{"value":105553990697984},{"value":18339859518},{"value":18302006480,"symbolLocation":0,"symbol":"tcpconnection_handleconnectionthread(_tcpconnection*)"},{"value":18339859572},{"value":18339859464},{"value":0},{"value":0},{"value":18341400576,"symbolLocation":29640,"symbol":"midiseq_clk.av"},{"value":18341081088,"symbolLocation":0,"symbol":"s_live_mididriver"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":18304197488},"cpsr":{"value":1610616832},"fp":{"value":18771521232},"sp":{"value":18771521040},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894572},"far":{"value":0}},"frames":[{"imageOffset":37996,"symbol":"__accept","symbolLocation":8,"imageIndex":137},{"imageOffset":6742896,"symbol":"juce::StreamingSocket::waitForNextConnection() const","symbolLocation":92,"imageIndex":41},{"imageOffset":4551680,"symbol":"tcpconnection_listenthread(_tcpconnection*)","symbolLocation":168,"imageIndex":41},{"imageOffset":3546592,"symbol":"systhread_threadproc","symbolLocation":232,"imageIndex":41},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037106,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":137},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554206630592},{"value":28},{"value":0},{"value":78},{"value":38},{"value":65531},{"value":105554531027088},{"value":6037106},{"value":0},{"value":2},{"value":0},{"value":3970156937},{"value":230},{"value":8575308792},{"value":0},{"value":18406279680},{"value":6413069187},{"value":105554531027024},{"value":500},{"value":20},{"value":6411103936,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554185157312},{"value":1},{"value":667}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6406048860},"cpsr":{"value":1610616832},"fp":{"value":6416838528},"sp":{"value":6416836336},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6037108,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":137},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554206630592},{"value":28},{"value":0},{"value":207},{"value":58},{"value":65531},{"value":105554531742464},{"value":6037108},{"value":0},{"value":2},{"value":0},{"value":3812872585},{"value":230},{"value":8575308792},{"value":0},{"value":6081355264},{"value":6413069187},{"value":105554531742400},{"value":500},{"value":20},{"value":6411103936,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554185157168},{"value":1},{"value":667}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6406048860},"cpsr":{"value":1610616832},"fp":{"value":6427701120},"sp":{"value":6427698928},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6037109,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":137},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554137165632},{"value":28},{"value":0},{"value":256},{"value":60},{"value":65531},{"value":105554600123008},{"value":6037109},{"value":0},{"value":2},{"value":0},{"value":2152528333},{"value":230},{"value":8575308792},{"value":0},{"value":18192121856},{"value":6413069187},{"value":105554600122944},{"value":500},{"value":20},{"value":6411103936,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554182283440},{"value":1},{"value":667}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6406048860},"cpsr":{"value":1610616832},"fp":{"value":6429372288},"sp":{"value":6429370096},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6037110,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":137},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554206450944},{"value":28},{"value":0},{"value":251},{"value":62},{"value":65531},{"value":105554600404224},{"value":6037110},{"value":0},{"value":2},{"value":0},{"value":3655588233},{"value":230},{"value":8575308792},{"value":0},{"value":14323837440},{"value":6413069187},{"value":105554600404160},{"value":500},{"value":20},{"value":6411103936,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554093075104},{"value":1},{"value":667}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6406048860},"cpsr":{"value":1610616832},"fp":{"value":6436368256},"sp":{"value":6436366064},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6037111,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":137},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554206450944},{"value":28},{"value":0},{"value":161},{"value":64},{"value":65531},{"value":105554600452816},{"value":6037111},{"value":0},{"value":2},{"value":0},{"value":3208929528},{"value":230},{"value":8575308792},{"value":0},{"value":16911991808},{"value":6413069187},{"value":105554600452752},{"value":500},{"value":20},{"value":6411103936,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554093077504},{"value":1},{"value":667}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6406048860},"cpsr":{"value":1610616832},"fp":{"value":6436941696},"sp":{"value":6436939504},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6037112,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":137},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554206450944},{"value":28},{"value":0},{"value":251},{"value":66},{"value":65531},{"value":105554598047504},{"value":6037112},{"value":0},{"value":2},{"value":0},{"value":3051645176},{"value":230},{"value":8575308792},{"value":0},{"value":5811829760},{"value":6413069187},{"value":105554598047440},{"value":500},{"value":20},{"value":6411103936,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554093076064},{"value":1},{"value":667}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6406048860},"cpsr":{"value":1610616832},"fp":{"value":6437515136},"sp":{"value":6437512944},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6037113,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":137},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554206450944},{"value":28},{"value":0},{"value":320},{"value":68},{"value":65531},{"value":105554598921376},{"value":6037113},{"value":0},{"value":2},{"value":0},{"value":2894360824},{"value":230},{"value":8575308792},{"value":0},{"value":5231620096},{"value":6413069187},{"value":105554598921312},{"value":500},{"value":20},{"value":6411103936,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554093075152},{"value":1},{"value":667}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6406048860},"cpsr":{"value":1610616832},"fp":{"value":6438088576},"sp":{"value":6438086384},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6037114,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":137},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105553938059840},{"value":73},{"value":105553832795104},{"value":202},{"value":70},{"value":65531},{"value":105554598048176},{"value":6037114},{"value":0},{"value":2},{"value":0},{"value":2619429344},{"value":230},{"value":8575308792},{"value":0},{"value":14260631552},{"value":6413069187},{"value":105554598048112},{"value":500},{"value":655},{"value":6411103936,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554182217664},{"value":1},{"value":667}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6406048860},"cpsr":{"value":1610616832},"fp":{"value":6439858048},"sp":{"value":6439855856},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6037122,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":136},{"imageOffset":8819172,"symbol":"gpr_cv_wait","symbolLocation":132,"imageIndex":35},{"imageOffset":7916212,"symbol":"timer_thread(void*)","symbolLocation":724,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":260},{"value":0},{"value":6144},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":19046886872},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17464413648,"symbolLocation":144,"symbol":"_MergedGlobals"},{"value":17464413552,"symbolLocation":48,"symbol":"_MergedGlobals"},{"value":19046887648},{"value":0},{"value":0},{"value":6144},{"value":6144},{"value":6656},{"value":9223372036854775807},{"value":17464439328,"symbolLocation":0,"symbol":"grpc_timer_check_trace"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19046886992},"sp":{"value":19046886848},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6037127,"name":"caulk::deferred_logger","threadState":{"x":[{"value":14},{"value":105556213221079},{"value":0},{"value":19398160487},{"value":105556213221056},{"value":22},{"value":0},{"value":0},{"value":0},{"value":4294967295},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":18446744073709551580},{"value":8575313384},{"value":0},{"value":105554880356952},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904442056},"cpsr":{"value":2147487744},"fp":{"value":19398160256},"sp":{"value":19398160224},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":137},{"imageOffset":7368,"symbol":"caulk::semaphore::timed_wait(double)","symbolLocation":224,"imageIndex":139},{"imageOffset":7024,"symbol":"caulk::concurrent::details::worker_thread::run()","symbolLocation":32,"imageIndex":139},{"imageOffset":6212,"symbol":"void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*)","symbolLocation":96,"imageIndex":139},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037162,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":136}],"threadState":{"x":[{"value":19561836544},{"value":0},{"value":19561299968},{"value":0},{"value":278532},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":19561836544},"esr":{"value":0,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6037163,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":136}],"threadState":{"x":[{"value":20021456896},{"value":0},{"value":20020920320},{"value":0},{"value":278532},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":20021456896},"esr":{"value":0,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6037164,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":136}],"threadState":{"x":[{"value":20020883456},{"value":0},{"value":20020346880},{"value":0},{"value":278532},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":20020883456},"esr":{"value":0,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6037165,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":136}],"threadState":{"x":[{"value":20022030336},{"value":0},{"value":20021493760},{"value":0},{"value":278532},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":20022030336},"esr":{"value":0,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6037180,"name":"CVDisplayLink","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":65704},{"value":0},{"value":7378375},{"value":156161},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5775853624},{"value":5775853688},{"value":1},{"value":7378375},{"value":0},{"value":0},{"value":156161},{"value":156416},{"value":6457730698708},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131276},"cpsr":{"value":2684358656},"fp":{"value":6362475952},"sp":{"value":6362475808},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":137},{"imageOffset":28940,"symbol":"_pthread_cond_wait","symbolLocation":1028,"imageIndex":136},{"imageOffset":12788,"symbol":"CVDisplayLink::waitUntil(unsigned long long)","symbolLocation":336,"imageIndex":149},{"imageOffset":8924,"symbol":"CVDisplayLink::runIOThread()","symbolLocation":500,"imageIndex":149},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}]},{"id":6037182,"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":137},{"imageOffset":64740672,"imageIndex":0},{"imageOffset":64615780,"imageIndex":0},{"imageOffset":64739196,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":136},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":136}],"threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":4420330092},{"value":32},{"value":0},{"value":0},{"value":0},{"value":19839610592},{"value":18446744073708551616},{"value":1000000},{"value":2},{"value":0},{"value":0},{"value":2095104},{"value":2043},{"value":363},{"value":22},{"value":0},{"value":4420330080},{"value":4420330080},{"value":4420331128},{"value":4420330072},{"value":4420330048},{"value":0},{"value":4420331116},{"value":4420330064},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4373208384},"cpsr":{"value":2684358656},"fp":{"value":19839610640},"sp":{"value":19839610560},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}}}],
  "usedImages" : [
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4308467712,
    "CFBundleShortVersionString" : "12.2.2 (2025-08-01_7acf90750f)",
    "CFBundleIdentifier" : "com.ableton.live",
    "size" : 100352000,
    "uuid" : "c9ac18e9-0394-35c2-a077-3e9fce2c01c7",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/MacOS\/Live",
    "name" : "Live",
    "CFBundleVersion" : "12.2.2 (2025-08-01_7acf90750f)"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4459692032,
    "size" : 1572864,
    "uuid" : "8038ea9a-f0aa-3323-b68f-f754b5f98e85",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/Frameworks\/libonnxruntime_abl.dylib",
    "name" : "libonnxruntime_abl.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4453466112,
    "size" : 81920,
    "uuid" : "98c8293a-4285-31c6-8154-ffa7b4a47a9f",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/Frameworks\/libusb-1.0.dylib",
    "name" : "libusb-1.0.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4455858176,
    "CFBundleIdentifier" : "se.propellerheads.rex.library",
    "size" : 294912,
    "uuid" : "ddfec8a2-ead4-3fab-9674-1be6f6e189c9",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/Frameworks\/REX Shared Library.framework\/Versions\/A\/REX Shared Library",
    "name" : "REX Shared Library",
    "CFBundleVersion" : "1.9.1"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 4459020288,
    "size" : 49152,
    "uuid" : "a3faee04-0f8b-3428-9497-560c97eca6fb",
    "path" : "\/usr\/lib\/libobjc-trampolines.dylib",
    "name" : "libobjc-trampolines.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 5135663104,
    "CFBundleShortVersionString" : "329.2",
    "CFBundleIdentifier" : "com.apple.AGXMetalG13X",
    "size" : 6914048,
    "uuid" : "6b497f3b-6583-398c-9d05-5f30a1c1bae5",
    "path" : "\/System\/Library\/Extensions\/AGXMetalG13X.bundle\/Contents\/MacOS\/AGXMetalG13X",
    "name" : "AGXMetalG13X",
    "CFBundleVersion" : "329.2"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6381010944,
    "CFBundleShortVersionString" : "3.26",
    "CFBundleIdentifier" : "com.fabfilter.Pro-Q.AU.3",
    "size" : 1507328,
    "uuid" : "e6e002dd-8240-37cd-922f-dbb4e84b4aa1",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/FabFilter Pro-Q 3.component\/Contents\/MacOS\/FabFilter Pro-Q 3",
    "name" : "FabFilter Pro-Q 3",
    "CFBundleVersion" : "3.26"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 5756682240,
    "CFBundleShortVersionString" : "3.0",
    "CFBundleIdentifier" : "com.apple.security.csparser",
    "size" : 131072,
    "uuid" : "3a905673-ada9-3c57-992e-b83f555baa61",
    "path" : "\/System\/Library\/Frameworks\/Security.framework\/Versions\/A\/PlugIns\/csparser.bundle\/Contents\/MacOS\/csparser",
    "name" : "csparser",
    "CFBundleVersion" : "61439.140.12"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6392119296,
    "CFBundleShortVersionString" : "1.0.0",
    "CFBundleIdentifier" : "com.sonible.smarteq4",
    "size" : 21233664,
    "uuid" : "1497c372-617f-3735-8171-efe1e72c4385",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/smartEQ4.component\/Contents\/MacOS\/smartEQ4",
    "name" : "smartEQ4",
    "CFBundleVersion" : "1.0.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6429720576,
    "size" : 5816320,
    "uuid" : "bb2e5f66-2caf-35eb-87f3-706dc1a8a6f2",
    "path" : "\/Library\/Application Support\/sonible\/*\/libonnxruntime.1.15.1.dylib",
    "name" : "libonnxruntime.1.15.1.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6425624576,
    "CFBundleShortVersionString" : "1.14",
    "CFBundleIdentifier" : "com.apple.audio.units.Components",
    "size" : 1294336,
    "uuid" : "351a431e-1520-3b3b-bb1e-f034da294ecd",
    "path" : "\/System\/Library\/Components\/CoreAudio.component\/Contents\/MacOS\/CoreAudio",
    "name" : "CoreAudio",
    "CFBundleVersion" : "1.14"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 13673431040,
    "CFBundleShortVersionString" : "1.0.8",
    "CFBundleIdentifier" : "com.uaudio.effects.U3C4",
    "size" : 8798208,
    "uuid" : "db952c5a-48af-3c07-984c-10c83e67ff28",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/uaudio_distressor.component\/Contents\/MacOS\/uaudio_distressor",
    "name" : "uaudio_distressor",
    "CFBundleVersion" : "799"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 14547517440,
    "CFBundleShortVersionString" : "1.1.2",
    "CFBundleIdentifier" : "com.SonicAcademy.Kick3",
    "size" : 8290304,
    "uuid" : "0fd687cb-5ac8-3e3c-aac9-2cf99381d245",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/Kick 3.component\/Contents\/MacOS\/Kick 3",
    "name" : "Kick 3",
    "CFBundleVersion" : "1.1.2"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 14807924736,
    "CFBundleShortVersionString" : "2.7.0",
    "CFBundleIdentifier" : "com.xlnaudio.addictivedrums2",
    "size" : 19759104,
    "uuid" : "679d782c-d5d2-3902-844f-5e102be52be3",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/Addictive Drums 2.component\/Contents\/MacOS\/Addictive Drums 2",
    "name" : "Addictive Drums 2",
    "CFBundleVersion" : "2.7.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6362497024,
    "CFBundleShortVersionString" : "67328",
    "CFBundleIdentifier" : "com.arturia.component.Rev-PLATE-140",
    "size" : 180224,
    "uuid" : "2ea5456b-7ed1-3b94-adca-db0cbe7183cd",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/Rev PLATE-140.component\/Contents\/MacOS\/Rev PLATE-140",
    "name" : "Rev PLATE-140",
    "CFBundleVersion" : "67328"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15128559616,
    "CFBundleShortVersionString" : "1.7.0.5460",
    "CFBundleIdentifier" : "com.Arturia.Rev-PLATE-140.vst3",
    "size" : 20414464,
    "uuid" : "fb34ef9c-a26c-331d-a9bb-d84e67eec9cf",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/Rev PLATE-140.component\/Contents\/Resources\/plugin.vst3\/Contents\/MacOS\/Rev PLATE-140",
    "name" : "Rev PLATE-140",
    "CFBundleVersion" : "1.7.0.5460"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 14575435776,
    "size" : 1212416,
    "uuid" : "c6fdd249-ac24-385a-85a0-d3e91bfbb179",
    "path" : "\/Library\/Arturia\/*\/libsqlite.dylib",
    "name" : "libsqlite.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15026176000,
    "size" : 3948544,
    "uuid" : "9d9fe136-36bd-3683-858c-e1dad60cfed7",
    "path" : "\/Library\/Arturia\/*\/libplateverbProcessor.dylib",
    "name" : "libplateverbProcessor.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15102509056,
    "CFBundleShortVersionString" : "1.3.15",
    "CFBundleIdentifier" : "com.uaudio.effects.U39Z",
    "size" : 8617984,
    "uuid" : "b995f721-0177-3bb0-835d-1f4b4078bb19",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/uaudio_ua_1176ae.component\/Contents\/MacOS\/uaudio_ua_1176ae",
    "name" : "uaudio_ua_1176ae",
    "CFBundleVersion" : "1535"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15195144192,
    "CFBundleShortVersionString" : "1.7.6",
    "CFBundleIdentifier" : "com.xlnaudio.xo",
    "size" : 19202048,
    "uuid" : "97f45523-4c60-3f63-b228-371ade2d3ad9",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/XO.component\/Contents\/MacOS\/XO",
    "name" : "XO",
    "CFBundleVersion" : "1.7.6"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15100542976,
    "CFBundleShortVersionString" : "2.23",
    "CFBundleIdentifier" : "com.fabfilter.Pro-Q.AU.2",
    "size" : 1163264,
    "uuid" : "490c8b97-fdf6-3b01-a27e-a23537bec4da",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/FabFilter Pro-Q 2.component\/Contents\/MacOS\/FabFilter Pro-Q 2",
    "name" : "FabFilter Pro-Q 2",
    "CFBundleVersion" : "2.23"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15633530880,
    "CFBundleShortVersionString" : "1.0.4",
    "CFBundleIdentifier" : "com.FutureAudioWorkshop.SubLabXL",
    "size" : 88735744,
    "uuid" : "f0499087-d400-3cca-909d-9d8dda7bfd52",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/SubLabXL.component\/Contents\/MacOS\/SubLabXL",
    "name" : "SubLabXL",
    "CFBundleVersion" : "1.0.4"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15799812096,
    "CFBundleShortVersionString" : "V1.4.7",
    "CFBundleIdentifier" : "com.u-he.Diva.au",
    "size" : 10993664,
    "uuid" : "d3f4b734-1172-357b-97e3-af161d31b490",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/Diva.component\/Contents\/MacOS\/Diva",
    "name" : "Diva",
    "CFBundleVersion" : "1.4.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15774416896,
    "CFBundleShortVersionString" : "5.4.3.17500 Authorization: Decapitator",
    "CFBundleIdentifier" : "com.soundtoys.audiounit.Decapitator",
    "size" : 13271040,
    "uuid" : "c1140d38-4035-3453-8d99-b393da9727a0",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/Decapitator.component\/Contents\/MacOS\/Decapitator",
    "name" : "Decapitator",
    "CFBundleVersion" : "5.4.3.17500"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15502491648,
    "CFBundleShortVersionString" : "5.10.1 GM (b5284, 8eb337be)",
    "CFBundleIdentifier" : "com.paceap.eden.WrapPersist",
    "size" : 3080192,
    "uuid" : "84667690-b93b-30ad-9737-5e65be8a4d93",
    "path" : "\/Library\/Frameworks\/PACEEdenExperience.framework\/Versions\/A\/WrapPersist.bundle\/Contents\/MacOS\/WrapPersist",
    "name" : "WrapPersist",
    "CFBundleVersion" : "5.10.1.5284"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16050929664,
    "CFBundleShortVersionString" : "1.363",
    "CFBundleIdentifier" : "com.xfer.serum.AU",
    "size" : 6881280,
    "uuid" : "111913f2-ace3-302c-a1ef-6a124d64e18b",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/Serum.component\/Contents\/MacOS\/Serum",
    "name" : "Serum",
    "CFBundleVersion" : "1.363"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15629107200,
    "CFBundleShortVersionString" : "3.0.0",
    "CFBundleIdentifier" : "com.ValhallaDSP.ValhallaVintageVerb",
    "size" : 2621440,
    "uuid" : "6f23cc3b-cbc0-3483-8a2e-8636f440060c",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/ValhallaVintageVerbAU64.component\/Contents\/MacOS\/ValhallaVintageVerb",
    "name" : "ValhallaVintageVerb",
    "CFBundleVersion" : "3.0.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16236052480,
    "CFBundleShortVersionString" : "1.0.11",
    "CFBundleIdentifier" : "com.cherryaudio.stardust201",
    "size" : 6864896,
    "uuid" : "cc6b57e0-7066-3d3d-845c-93c64697ec32",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/Stardust 201 Tape Echo.component\/Contents\/MacOS\/Stardust 201 Tape Echo",
    "name" : "Stardust 201 Tape Echo",
    "CFBundleVersion" : "1.0.11"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16229498880,
    "size" : 2408448,
    "uuid" : "a113d629-e07f-3385-bf0b-8680c31a6854",
    "path" : "\/private\/tmp\/NSCreateObjectFileImageFromMemory-SyAuO9Bw",
    "name" : "NSCreateObjectFileImageFromMemory-SyAuO9Bw"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16359997440,
    "CFBundleShortVersionString" : "1.2.15",
    "CFBundleIdentifier" : "com.uaudio.effects.U3BM",
    "size" : 8519680,
    "uuid" : "fc1b963a-365e-3712-9148-f40a126181b2",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/uaudio_studio_d_chorus.component\/Contents\/MacOS\/uaudio_studio_d_chorus",
    "name" : "uaudio_studio_d_chorus",
    "CFBundleVersion" : "1166"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16863805440,
    "CFBundleShortVersionString" : "8.3.1",
    "CFBundleIdentifier" : "com.modartt.Pianoteq8STAGE.AudioUnit",
    "size" : 8486912,
    "uuid" : "caf476aa-3cdc-3bfd-93aa-57eedc7dac58",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/Pianoteq 8 STAGE.component\/Contents\/MacOS\/Pianoteq 8 STAGE",
    "name" : "Pianoteq 8 STAGE",
    "CFBundleVersion" : "8.3.1\/20240625"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17042538496,
    "CFBundleShortVersionString" : "1.0.11",
    "CFBundleIdentifier" : "com.uaudio.effects.UI07",
    "size" : 10272768,
    "uuid" : "3be207e7-1234-3c87-a820-12e3b15be352",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/uaudio_electra.component\/Contents\/MacOS\/uaudio_electra",
    "name" : "uaudio_electra",
    "CFBundleVersion" : "1569"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17149280256,
    "CFBundleShortVersionString" : "1.3.15",
    "CFBundleIdentifier" : "com.uaudio.effects.U39X",
    "size" : 8601600,
    "uuid" : "0f52ecc6-3aa1-3479-a79b-1988e593bfcb",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/uaudio_ua_1176ln_rev_e.component\/Contents\/MacOS\/uaudio_ua_1176ln_rev_e",
    "name" : "uaudio_ua_1176ln_rev_e",
    "CFBundleVersion" : "1581"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17136877568,
    "CFBundleShortVersionString" : "1.3.15",
    "CFBundleIdentifier" : "com.uaudio.effects.U3A7",
    "size" : 8634368,
    "uuid" : "8f9c2d2a-e232-370c-a2ba-e2e99a5f9094",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/uaudio_teletronix_la-2a_gray.component\/Contents\/MacOS\/uaudio_teletronix_la-2a_gray",
    "name" : "uaudio_teletronix_la-2a_gray",
    "CFBundleVersion" : "1460"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17220026368,
    "CFBundleShortVersionString" : "1.6.8",
    "CFBundleIdentifier" : "com.ValhallaDSP.ValhallaRoom",
    "size" : 2244608,
    "uuid" : "34896efb-7d7c-380a-a6c7-3337a639c98d",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/ValhallaRoomAU64.component\/Contents\/MacOS\/ValhallaRoom",
    "name" : "ValhallaRoom",
    "CFBundleVersion" : "1.6.8"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17439473664,
    "CFBundleShortVersionString" : "5.1.1",
    "CFBundleIdentifier" : "com.splice.bridge",
    "size" : 23543808,
    "uuid" : "8e7b1830-3932-3675-b0b9-1191e06d9ae4",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/SpliceBridge.component\/Contents\/MacOS\/SpliceBridge",
    "name" : "SpliceBridge",
    "CFBundleVersion" : "5.1.1"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17417895936,
    "CFBundleShortVersionString" : "2.5.1",
    "CFBundleIdentifier" : "com.ValhallaDSP.ValhallaDelay",
    "size" : 3358720,
    "uuid" : "6c906a52-3c28-3fd0-94aa-03f36901f2d3",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/ValhallaDelay.component\/Contents\/MacOS\/ValhallaDelay",
    "name" : "ValhallaDelay",
    "CFBundleVersion" : "2.5.1"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17431527424,
    "CFBundleShortVersionString" : "2.4.4",
    "CFBundleIdentifier" : "com.Youlean.audiounit.Youlean-Loudness-Meter-2",
    "size" : 5324800,
    "uuid" : "dec4f989-8b60-35e0-8809-553a3acf4d25",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/Youlean Loudness Meter 2.component\/Contents\/MacOS\/Youlean Loudness Meter 2",
    "name" : "Youlean Loudness Meter 2",
    "CFBundleVersion" : "2.4.4"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17844371456,
    "CFBundleShortVersionString" : "1.0.0",
    "CFBundleIdentifier" : "com.yourcompany.SoundCollector",
    "size" : 15122432,
    "uuid" : "20d10ad5-4c9a-3777-8f8a-ef1bc8df26d5",
    "path" : "\/Users\/USER\/Library\/Audio\/Plug-Ins\/Components\/SoundCollector.component\/Contents\/MacOS\/SoundCollector",
    "name" : "SoundCollector",
    "CFBundleVersion" : "1.0.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17889640448,
    "CFBundleShortVersionString" : "1.4.1",
    "CFBundleIdentifier" : "com.adptr.MetricAB",
    "size" : 11567104,
    "uuid" : "49f6a5ae-93e4-306d-87ca-7d0adcd88007",
    "path" : "\/Library\/Audio\/Plug-Ins\/Components\/ADPTR MetricAB.component\/Contents\/MacOS\/ADPTR MetricAB",
    "name" : "ADPTR MetricAB",
    "CFBundleVersion" : "1.4.1"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4932042752,
    "CFBundleShortVersionString" : "1.01",
    "CFBundleIdentifier" : "com.cycling74.maxchecker",
    "size" : 16384,
    "uuid" : "3d903238-500c-32e8-b9b3-5abede64af6b",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/support\/maxchecker.bundle\/Contents\/MacOS\/maxchecker",
    "name" : "maxchecker",
    "CFBundleVersion" : "1.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18297454592,
    "CFBundleShortVersionString" : " (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.MaxPlugLib",
    "size" : 42860544,
    "uuid" : "b6cc4fcf-93c9-3f93-91e1-f5a3840f0914",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/support\/MaxPlugLib.bundle\/Contents\/MacOS\/MaxPlugLib",
    "name" : "MaxPlugLib",
    "CFBundleVersion" : ""
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17843617792,
    "CFBundleIdentifier" : "com.cycling74.MaxAudioAPIImpl",
    "size" : 491520,
    "uuid" : "0732b043-c55b-35a2-bf3c-98d25964a33e",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/MaxAudioAPIImpl.framework\/Versions\/A\/MaxAudioAPIImpl",
    "name" : "MaxAudioAPIImpl",
    "CFBundleVersion" : "1.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18168086528,
    "CFBundleIdentifier" : "com.cycling74.MaxLuaImpl",
    "size" : 573440,
    "uuid" : "f1a09173-bfe2-3fcc-a4d8-16c736bfd8c2",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/MaxLuaImpl.framework\/Versions\/A\/MaxLuaImpl",
    "name" : "MaxLuaImpl",
    "CFBundleVersion" : "1.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18202312704,
    "CFBundleShortVersionString" : "1.7.0",
    "CFBundleIdentifier" : "com.cycling74.JitterAPIImpl",
    "size" : 1130496,
    "uuid" : "eb73be27-c373-3012-8c2a-87df119182e9",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/JitterAPIImpl.framework\/Versions\/A\/JitterAPIImpl",
    "name" : "JitterAPIImpl",
    "CFBundleVersion" : "1.7.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6160252928,
    "CFBundleIdentifier" : "com.cycling74.MaxLua",
    "size" : 16384,
    "uuid" : "8dcd9c4f-c7d7-3aae-9894-65ff549d114f",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/MaxLua.framework\/Versions\/A\/MaxLua",
    "name" : "MaxLua",
    "CFBundleVersion" : "1.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18199085056,
    "size" : 1310720,
    "uuid" : "919cbda1-301b-36a8-877b-dd0e4552c71c",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/libmozjs185_impl.dylib",
    "name" : "libmozjs185_impl.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6158991360,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.patcher",
    "size" : 163840,
    "uuid" : "d5c02bf1-706c-3017-b19a-c745c32e3619",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/support\/patcher.bundle\/Contents\/MacOS\/patcher",
    "name" : "patcher",
    "CFBundleVersion" : "b9109490887"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6159433728,
    "CFBundleIdentifier" : "com.cycling74.MaxAudioAPI",
    "size" : 16384,
    "uuid" : "4f56d925-cc1a-345a-9f38-df723f6175e7",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/MaxAudioAPI.framework\/Versions\/A\/MaxAudioAPI",
    "name" : "MaxAudioAPI",
    "CFBundleVersion" : "1.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6159482880,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.fseventwatcher",
    "size" : 16384,
    "uuid" : "21d1ce4b-79c9-36ea-9d2e-49d8843b9f76",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/fseventwatcher.mxo\/Contents\/MacOS\/fseventwatcher",
    "name" : "fseventwatcher",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15464841216,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.cefaudio",
    "size" : 16384,
    "uuid" : "7ca48c89-d341-37ed-980d-1cef562f3000",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/msp\/cefaudio.mxo\/Contents\/MacOS\/cefaudio",
    "name" : "cefaudio",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18217893888,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.gl2",
    "size" : 1277952,
    "uuid" : "4e7cb2d7-2d29-35a0-aa40-f3a36b132993",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/jitter\/gl2.mxo\/Contents\/MacOS\/gl2",
    "name" : "gl2",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15476932608,
    "CFBundleShortVersionString" : "1.7.0",
    "CFBundleIdentifier" : "com.cycling74.JitterAPI",
    "size" : 16384,
    "uuid" : "22a2aee2-383c-317a-bdef-c0b99a459e29",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/JitterAPI.framework\/Versions\/A\/JitterAPI",
    "name" : "JitterAPI",
    "CFBundleVersion" : "1.7.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18216108032,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.sketch",
    "size" : 671744,
    "uuid" : "ad424434-84a2-3b3f-95fd-0b5fd80f5e4a",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/jitter\/sketch.mxo\/Contents\/MacOS\/sketch",
    "name" : "sketch",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15479078912,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.live.guilib",
    "size" : 229376,
    "uuid" : "e173c13c-b3aa-3dce-8263-057da7df3197",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/m4l\/live.guilib.mxo\/Contents\/MacOS\/live.guilib",
    "name" : "live.guilib",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15479422976,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.autohelp",
    "size" : 32768,
    "uuid" : "6a85940d-a6c3-3c7b-83ad-a9594e2a516e",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/autohelp.mxo\/Contents\/MacOS\/autohelp",
    "name" : "autohelp",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15485370368,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.debugwindow",
    "size" : 16384,
    "uuid" : "c05f164c-2898-3ee9-bd20-1112cb226b5d",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/debugwindow.mxo\/Contents\/MacOS\/debugwindow",
    "name" : "debugwindow",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18214387712,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.genpatcher",
    "size" : 966656,
    "uuid" : "b205c9af-3e5c-33d0-82f8-82d17b440cd5",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/genpatcher.mxo\/Contents\/MacOS\/genpatcher",
    "name" : "genpatcher",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15505883136,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsrepl",
    "size" : 16384,
    "uuid" : "9d093fd9-335c-3f22-9e06-513ab299279e",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/jsrepl.mxo\/Contents\/MacOS\/jsrepl",
    "name" : "jsrepl",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18497290240,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.maxclang",
    "size" : 51937280,
    "uuid" : "37622245-5b39-333d-bc04-1a8cf81387a7",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/maxclang.mxo\/Contents\/MacOS\/maxclang",
    "name" : "maxclang",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18216976384,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.maxurl",
    "size" : 589824,
    "uuid" : "38529482-7204-37b5-9000-d2b66ae5a25b",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/maxurl.mxo\/Contents\/MacOS\/maxurl",
    "name" : "maxurl",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18345852928,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.maxxslt",
    "size" : 32292864,
    "uuid" : "c1eb4c91-83e7-3c7b-a234-a4331941d5b4",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/maxxslt.mxo\/Contents\/MacOS\/maxxslt",
    "name" : "maxxslt",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15516663808,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.maxzlib",
    "size" : 98304,
    "uuid" : "6dd0952b-f5f8-30a5-b47d-2243d2d17e51",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/maxzlib.mxo\/Contents\/MacOS\/maxzlib",
    "name" : "maxzlib",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15516483584,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.objectview",
    "size" : 16384,
    "uuid" : "49fe8b49-a629-3833-b315-6b414300a378",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/objectview.mxo\/Contents\/MacOS\/objectview",
    "name" : "objectview",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15516303360,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.palblocks",
    "size" : 32768,
    "uuid" : "c68e6a5f-80bd-3662-b837-cfd8275a7342",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/palblocks.mxo\/Contents\/MacOS\/palblocks",
    "name" : "palblocks",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15516565504,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.paramview",
    "size" : 32768,
    "uuid" : "1702c166-2b64-30ce-925d-c8bfad05458f",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/paramview.mxo\/Contents\/MacOS\/paramview",
    "name" : "paramview",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15518695424,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.pianoroll",
    "size" : 49152,
    "uuid" : "ae43e3ff-6d8b-33ed-8a38-488be7f9566d",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/pianoroll.mxo\/Contents\/MacOS\/pianoroll",
    "name" : "pianoroll",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15518810112,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.querylib",
    "size" : 32768,
    "uuid" : "3ccf65e7-edbe-39d8-a439-cece09461fb0",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/querylib.mxo\/Contents\/MacOS\/querylib",
    "name" : "querylib",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15633383424,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.setplugpath",
    "size" : 32768,
    "uuid" : "54adbd9a-4125-3976-be4f-f793dd79b3ca",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/setplugpath.mxo\/Contents\/MacOS\/setplugpath",
    "name" : "setplugpath",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18231525376,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.sqlite",
    "size" : 1327104,
    "uuid" : "bd9536ff-96a3-3f3c-855d-bfec7b3fb78a",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/sqlite.mxo\/Contents\/MacOS\/sqlite",
    "name" : "sqlite",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15799255040,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.synophrys",
    "size" : 196608,
    "uuid" : "c278dae1-d11c-376b-b6e7-7b732ecd9e37",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/synophrys.mxo\/Contents\/MacOS\/synophrys",
    "name" : "synophrys",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18378702848,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.v8",
    "size" : 15892480,
    "uuid" : "02ec3450-9c1a-31ca-87ef-d7ede5c5ac0c",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/v8.mxo\/Contents\/MacOS\/v8",
    "name" : "v8",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15815163904,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.yaml",
    "size" : 196608,
    "uuid" : "f55d5407-47a7-3beb-ab74-273416439b1c",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/yaml.mxo\/Contents\/MacOS\/yaml",
    "name" : "yaml",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15516401664,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.zoomer",
    "size" : 16384,
    "uuid" : "3bf1b8a0-5c1c-31c1-9007-b9e3baea5826",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/max\/zoomer.mxo\/Contents\/MacOS\/zoomer",
    "name" : "zoomer",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15518449664,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.max-tilde",
    "size" : 49152,
    "uuid" : "18f0eb06-9865-3c72-952d-41f35a4622da",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/msp\/max~.mxo\/Contents\/MacOS\/max~",
    "name" : "max~",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15518580736,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.polybuffer",
    "size" : 49152,
    "uuid" : "65d11a2d-4569-3df2-a42d-145b567dc951",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/msp\/polybuffer.mxo\/Contents\/MacOS\/polybuffer",
    "name" : "polybuffer",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15799730176,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.probe.history-tilde",
    "size" : 16384,
    "uuid" : "517a6822-8290-3b6b-bf75-cf8cd7676dc5",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/msp\/probe.history~.mxo\/Contents\/MacOS\/probe.history~",
    "name" : "probe.history~",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15815524352,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.probe.meter-tilde",
    "size" : 16384,
    "uuid" : "9bb3a25c-ae42-3746-9d0f-0a22ede04794",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/msp\/probe.meter~.mxo\/Contents\/MacOS\/probe.meter~",
    "name" : "probe.meter~",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15799549952,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.probe.scope-tilde",
    "size" : 16384,
    "uuid" : "a9b3274a-0d9c-3e5c-84c9-8a971ed87567",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/extensions\/msp\/probe.scope~.mxo\/Contents\/MacOS\/probe.scope~",
    "name" : "probe.scope~",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18229493760,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.gl3",
    "size" : 1310720,
    "uuid" : "42dc0237-9e6c-38bd-b5fb-963875766eac",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/packages\/Jitter Tools\/extensions\/gl3.mxo\/Contents\/MacOS\/gl3",
    "name" : "gl3",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15799631872,
    "CFBundleShortVersionString" : "8.2.0",
    "CFBundleIdentifier" : "com.acme.${PRODUCT_NAME:rfc1034identifier}",
    "size" : 16384,
    "uuid" : "11e2f200-6641-3c87-b652-6fdc3b7afca1",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/packages\/max-mxj\/extensions\/mxj_safe.mxo\/Contents\/MacOS\/mxj_safe",
    "name" : "mxj_safe",
    "CFBundleVersion" : "8.2.0"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 18247122944,
    "CFBundleIdentifier" : "com.cycling74.rnbopatcher",
    "size" : 3833856,
    "uuid" : "de1ffce1-b977-36e2-870c-ac4dc80aec2e",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/packages\/RNBO\/extensions\/rnbopatcher.mxo\/Contents\/MacOS\/rnbopatcher",
    "name" : "rnbopatcher",
    "CFBundleVersion" : "1.3.4"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15820783616,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.comment",
    "size" : 32768,
    "uuid" : "26b3d8ff-e0a5-3077-9f17-0cf1adf385f2",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/comment.mxo\/Contents\/MacOS\/comment",
    "name" : "comment",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15820537856,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.js",
    "size" : 131072,
    "uuid" : "e314a8cc-72ee-3daa-b782-3d037d621fa7",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/js.mxo\/Contents\/MacOS\/js",
    "name" : "js",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15505965056,
    "size" : 16384,
    "uuid" : "bfc682c9-649e-31ae-9e95-2209a5ff1702",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/libmozjs185.dylib",
    "name" : "libmozjs185.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16049045504,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsjitter",
    "size" : 32768,
    "uuid" : "e83b29d6-ce1f-3835-9618-8764c4a5da0c",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/jitter\/jsjitter.mxo\/Contents\/MacOS\/jsjitter",
    "name" : "jsjitter",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16049143808,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsliveapi",
    "size" : 32768,
    "uuid" : "06e52919-0fa6-3bee-a360-2c6207367be8",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/m4l\/jsliveapi.mxo\/Contents\/MacOS\/jsliveapi",
    "name" : "jsliveapi",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16049242112,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsfolder",
    "size" : 16384,
    "uuid" : "41150e82-11ff-3ded-a5cf-11bb8c9f980b",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jsfolder.mxo\/Contents\/MacOS\/jsfolder",
    "name" : "jsfolder",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16049324032,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsmaxobjlistener",
    "size" : 16384,
    "uuid" : "9765142b-2d49-3d4c-a658-dd47cd5a88f5",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jsmaxobjlistener.mxo\/Contents\/MacOS\/jsmaxobjlistener",
    "name" : "jsmaxobjlistener",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16049405952,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsparaminfoprovider",
    "size" : 16384,
    "uuid" : "4fefb063-ba42-30ed-8c2f-a110bfd1f883",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jsparaminfoprovider.mxo\/Contents\/MacOS\/jsparaminfoprovider",
    "name" : "jsparaminfoprovider",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16050552832,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsparamlistener",
    "size" : 16384,
    "uuid" : "612efa73-5628-37d3-a5fc-0b5807614d4e",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jsparamlistener.mxo\/Contents\/MacOS\/jsparamlistener",
    "name" : "jsparamlistener",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16050634752,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsrequire",
    "size" : 16384,
    "uuid" : "e28319e4-a960-347f-b755-4370b4503424",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jsrequire.mxo\/Contents\/MacOS\/jsrequire",
    "name" : "jsrequire",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16050716672,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsrx256",
    "size" : 16384,
    "uuid" : "07911bce-cfca-369e-b75d-002eba5dad46",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jsrx256.mxo\/Contents\/MacOS\/jsrx256",
    "name" : "jsrx256",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16050798592,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jssnapshotapi",
    "size" : 16384,
    "uuid" : "4ef5252f-0e92-3efc-9d27-78a71ebe84b8",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jssnapshotapi.mxo\/Contents\/MacOS\/jssnapshotapi",
    "name" : "jssnapshotapi",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16179068928,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jssqlite",
    "size" : 16384,
    "uuid" : "04d3289a-7d72-3a3d-b392-bd203bbff6a2",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jssqlite.mxo\/Contents\/MacOS\/jssqlite",
    "name" : "jssqlite",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16179150848,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jssqlresult",
    "size" : 16384,
    "uuid" : "efffca0c-e4ab-3719-895b-cad04ab6eb86",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jssqlresult.mxo\/Contents\/MacOS\/jssqlresult",
    "name" : "jssqlresult",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16179232768,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jstrigger",
    "size" : 16384,
    "uuid" : "034d76a3-99de-3cda-96f7-1b4c869571dc",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jstrigger.mxo\/Contents\/MacOS\/jstrigger",
    "name" : "jstrigger",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16179314688,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsxmlhttprequest",
    "size" : 16384,
    "uuid" : "e8eff39a-5f8d-327d-8c42-2a02e24cae32",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/max\/jsxmlhttprequest.mxo\/Contents\/MacOS\/jsxmlhttprequest",
    "name" : "jsxmlhttprequest",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16179396608,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jsbuffer",
    "size" : 16384,
    "uuid" : "8bba6d9b-f22d-3098-b1df-08d06c7e157c",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/jsextensions\/msp\/jsbuffer.mxo\/Contents\/MacOS\/jsbuffer",
    "name" : "jsbuffer",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6360383488,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.delay",
    "size" : 16384,
    "uuid" : "229d5dc5-2748-376b-89e7-b15ae4b4642d",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/delay.mxo\/Contents\/MacOS\/delay",
    "name" : "delay",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6360465408,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.ubutton",
    "size" : 16384,
    "uuid" : "fa3ce921-0824-3628-b823-14aaba2ab6d7",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/ubutton.mxo\/Contents\/MacOS\/ubutton",
    "name" : "ubutton",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6360203264,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.message",
    "size" : 49152,
    "uuid" : "df31d34d-d90a-3998-bfb9-2fbb643f598a",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/message.mxo\/Contents\/MacOS\/message",
    "name" : "message",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6360547328,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.panel",
    "size" : 49152,
    "uuid" : "0a076c00-4321-37a1-9410-e7a7d8d5ce44",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/panel.mxo\/Contents\/MacOS\/panel",
    "name" : "panel",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6360678400,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.deferlow",
    "size" : 16384,
    "uuid" : "ec700477-2893-3703-a136-d0e8f55f97b0",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/deferlow.mxo\/Contents\/MacOS\/deferlow",
    "name" : "deferlow",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16022011904,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.textbutton",
    "size" : 49152,
    "uuid" : "bd12696d-76b3-3658-9669-bfc914236917",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/textbutton.mxo\/Contents\/MacOS\/textbutton",
    "name" : "textbutton",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16022142976,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.counter",
    "size" : 16384,
    "uuid" : "df6bd178-ac8c-3a2a-a5ae-af902f9137d7",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/counter.mxo\/Contents\/MacOS\/counter",
    "name" : "counter",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16217047040,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.zl",
    "size" : 49152,
    "uuid" : "98216fc3-0f97-36a1-bc86-a80617fe27a4",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/zl.mxo\/Contents\/MacOS\/zl",
    "name" : "zl",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16217161728,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.live.observer",
    "size" : 16384,
    "uuid" : "493596ba-a7c9-3e97-8d7c-6a419426b59b",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/m4l\/live.observer.mxo\/Contents\/MacOS\/live.observer",
    "name" : "live.observer",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16222519296,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.prepend",
    "size" : 16384,
    "uuid" : "42c7f221-923a-3e22-a3b7-9f725b667906",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/prepend.mxo\/Contents\/MacOS\/prepend",
    "name" : "prepend",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16222601216,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.live.object",
    "size" : 16384,
    "uuid" : "92f67c94-5a0e-3ca8-9ce5-34a3f6b63c8b",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/m4l\/live.object.mxo\/Contents\/MacOS\/live.object",
    "name" : "live.object",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16229269504,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.live.path",
    "size" : 16384,
    "uuid" : "f63d96c3-eac1-3af4-b6c0-40cd84f5ddb5",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/m4l\/live.path.mxo\/Contents\/MacOS\/live.path",
    "name" : "live.path",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16229351424,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.coll",
    "size" : 49152,
    "uuid" : "3da68a89-d0e7-3c19-a9e8-0dc45a1da40e",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/coll.mxo\/Contents\/MacOS\/coll",
    "name" : "coll",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16233922560,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.listfunnel",
    "size" : 16384,
    "uuid" : "4827fa72-9461-3125-841d-d9ba53fd3291",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/listfunnel.mxo\/Contents\/MacOS\/listfunnel",
    "name" : "listfunnel",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16235675648,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.append",
    "size" : 16384,
    "uuid" : "fe7e2812-a932-3ed5-a356-d33fdb3fad22",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/append.mxo\/Contents\/MacOS\/append",
    "name" : "append",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16235757568,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.iter",
    "size" : 16384,
    "uuid" : "a7fead0b-252f-354a-b254-d262dd04f70a",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/iter.mxo\/Contents\/MacOS\/iter",
    "name" : "iter",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16235839488,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.button",
    "size" : 32768,
    "uuid" : "ed8dcd9a-a9e0-3fcf-8d59-a91249742749",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/button.mxo\/Contents\/MacOS\/button",
    "name" : "button",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16235937792,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.uzi",
    "size" : 16384,
    "uuid" : "f99cf39b-6d90-3f25-889f-5527e6cf09d4",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/uzi.mxo\/Contents\/MacOS\/uzi",
    "name" : "uzi",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16359882752,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.combine",
    "size" : 16384,
    "uuid" : "d58a8b8a-b71e-3b0f-bbc1-5d01125b409d",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/combine.mxo\/Contents\/MacOS\/combine",
    "name" : "combine",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16370024448,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.translate",
    "size" : 16384,
    "uuid" : "6c119b4e-6452-3276-9f67-92d7546cc739",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/translate.mxo\/Contents\/MacOS\/translate",
    "name" : "translate",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16370106368,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.rdiv",
    "size" : 16384,
    "uuid" : "acb5eeb9-2644-3300-b0c8-1ea5509dbc29",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/rdiv.mxo\/Contents\/MacOS\/rdiv",
    "name" : "rdiv",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16370188288,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.plugsync-tilde",
    "size" : 16384,
    "uuid" : "5f658dd4-5789-3c62-8a5c-3b4e4a860661",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/msp\/plugsync~.mxo\/Contents\/MacOS\/plugsync~",
    "name" : "plugsync~",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16370270208,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.live.thisdevice",
    "size" : 32768,
    "uuid" : "26b7f3b2-3166-3842-9140-9b210157f00e",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/m4l\/live.thisdevice.mxo\/Contents\/MacOS\/live.thisdevice",
    "name" : "live.thisdevice",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16216801280,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.jit.cellblock",
    "size" : 131072,
    "uuid" : "f1f2cd9f-dd2a-33e6-bc24-9a5ef321cf53",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/jit.cellblock.mxo\/Contents\/MacOS\/jit.cellblock",
    "name" : "jit.cellblock",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17003429888,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.tosymbol",
    "size" : 16384,
    "uuid" : "14bc2cd5-6c54-3beb-942a-173d13407e8c",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/tosymbol.mxo\/Contents\/MacOS\/tosymbol",
    "name" : "tosymbol",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17003511808,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.fromsymbol",
    "size" : 16384,
    "uuid" : "36013942-a602-3c2f-8121-277f3457652d",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/fromsymbol.mxo\/Contents\/MacOS\/fromsymbol",
    "name" : "fromsymbol",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17003593728,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.atoi",
    "size" : 16384,
    "uuid" : "7265ae34-95a1-3d85-8a77-774d3036d9ff",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/atoi.mxo\/Contents\/MacOS\/atoi",
    "name" : "atoi",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17042325504,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.itoa",
    "size" : 16384,
    "uuid" : "60cb4f23-199c-3b3c-a238-c10014821f37",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/itoa.mxo\/Contents\/MacOS\/itoa",
    "name" : "itoa",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17042407424,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.join",
    "size" : 16384,
    "uuid" : "78511710-06a4-34bc-8eff-79241ebe0910",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/join.mxo\/Contents\/MacOS\/join",
    "name" : "join",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 17111334912,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.regexp",
    "size" : 16384,
    "uuid" : "3b573b5c-6044-3773-8556-c8979a37ab79",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/regexp.mxo\/Contents\/MacOS\/regexp",
    "name" : "regexp",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16967876608,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.fpic",
    "size" : 32768,
    "uuid" : "d94cec57-c5b4-3735-85b3-9b872534684e",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/max\/fpic.mxo\/Contents\/MacOS\/fpic",
    "name" : "fpic",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6383534080,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.plugout-tilde",
    "size" : 16384,
    "uuid" : "f0dacc3b-3b54-3744-bd22-5809e9e78b67",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/msp\/plugout~.mxo\/Contents\/MacOS\/plugout~",
    "name" : "plugout~",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6383616000,
    "CFBundleShortVersionString" : "9.0.7 (b9109490887)",
    "CFBundleIdentifier" : "com.cycling74.plugin-tilde",
    "size" : 16384,
    "uuid" : "559fa5fc-61fe-3204-b6a9-f13a1538a550",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Resources\/C74\/externals\/msp\/plugin~.mxo\/Contents\/MacOS\/plugin~",
    "name" : "plugin~",
    "CFBundleVersion" : "9.0.7"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 19431587840,
    "CFBundleShortVersionString" : "7.0",
    "CFBundleIdentifier" : "com.apple.audio.codecs.Components",
    "size" : 9322496,
    "uuid" : "f7b7e577-5649-37b8-8d18-b9ef3c0b4dc2",
    "path" : "\/System\/Library\/Components\/AudioCodecs.component\/Contents\/MacOS\/AudioCodecs",
    "name" : "AudioCodecs",
    "CFBundleVersion" : "7.0"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6780055552,
    "CFBundleShortVersionString" : "6.9",
    "CFBundleIdentifier" : "com.apple.AppKit",
    "size" : 21564992,
    "uuid" : "860c164c-d04c-30ff-8c6f-e672b74caf11",
    "path" : "\/System\/Library\/Frameworks\/AppKit.framework\/Versions\/C\/AppKit",
    "name" : "AppKit",
    "CFBundleVersion" : "2575.70.52"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6709297152,
    "size" : 636280,
    "uuid" : "3247e185-ced2-36ff-9e29-47a77c23e004",
    "path" : "\/usr\/lib\/dyld",
    "name" : "dyld"
  },
  {
    "size" : 0,
    "source" : "A",
    "base" : 0,
    "uuid" : "00000000-0000-0000-0000-000000000000"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6713102336,
    "size" : 51784,
    "uuid" : "d6494ba9-171e-39fc-b1aa-28ecf87975d1",
    "path" : "\/usr\/lib\/system\/libsystem_pthread.dylib",
    "name" : "libsystem_pthread.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6712856576,
    "size" : 243284,
    "uuid" : "6e4a96ad-04b8-3e8a-b91d-087e62306246",
    "path" : "\/usr\/lib\/system\/libsystem_kernel.dylib",
    "name" : "libsystem_kernel.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 7189512192,
    "CFBundleShortVersionString" : "2.0",
    "CFBundleIdentifier" : "com.apple.audio.midi.CoreMIDI",
    "size" : 765216,
    "uuid" : "504d9a4a-f0a7-348f-a7bc-13fd26b48d99",
    "path" : "\/System\/Library\/Frameworks\/CoreMIDI.framework\/Versions\/A\/CoreMIDI",
    "name" : "CoreMIDI",
    "CFBundleVersion" : "88"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6904434688,
    "CFBundleShortVersionString" : "1.0",
    "CFBundleIdentifier" : "com.apple.audio.caulk",
    "size" : 163296,
    "uuid" : "42085f32-42e2-3f11-b0b4-0343137b5f72",
    "path" : "\/System\/Library\/PrivateFrameworks\/caulk.framework\/Versions\/A\/caulk",
    "name" : "caulk"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6712156160,
    "size" : 577528,
    "uuid" : "643ed232-ce19-3f63-8015-0aee768c002f",
    "path" : "\/usr\/lib\/libc++.1.dylib",
    "name" : "libc++.1.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6713581568,
    "CFBundleShortVersionString" : "6.9",
    "CFBundleIdentifier" : "com.apple.CoreFoundation",
    "size" : 5500928,
    "uuid" : "8d45baee-6cc0-3b89-93fd-ea1c8e15c6d7",
    "path" : "\/System\/Library\/Frameworks\/CoreFoundation.framework\/Versions\/A\/CoreFoundation",
    "name" : "CoreFoundation",
    "CFBundleVersion" : "3603"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6760300544,
    "CFBundleShortVersionString" : "5.0",
    "CFBundleIdentifier" : "com.apple.audio.CoreAudio",
    "size" : 7541664,
    "uuid" : "52c7f0a2-f403-391b-9b0d-ce498eff4d7e",
    "path" : "\/System\/Library\/Frameworks\/CoreAudio.framework\/Versions\/A\/CoreAudio",
    "name" : "CoreAudio",
    "CFBundleVersion" : "5.0"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6711320576,
    "size" : 288608,
    "uuid" : "24ce0d89-4114-30c2-a81a-3db1f5931cff",
    "path" : "\/usr\/lib\/system\/libdispatch.dylib",
    "name" : "libdispatch.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6711623680,
    "size" : 528964,
    "uuid" : "dfea8794-80ce-37c3-8f6a-108aa1d0b1b0",
    "path" : "\/usr\/lib\/system\/libsystem_c.dylib",
    "name" : "libsystem_c.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6775058432,
    "CFBundleShortVersionString" : "1333",
    "CFBundleIdentifier" : "com.apple.CoreServices.CarbonCore",
    "size" : 3091648,
    "uuid" : "18084480-b19d-3142-adbe-40f2aa328977",
    "path" : "\/System\/Library\/Frameworks\/CoreServices.framework\/Versions\/A\/Frameworks\/CarbonCore.framework\/Versions\/A\/CarbonCore",
    "name" : "CarbonCore",
    "CFBundleVersion" : "1333"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6809202688,
    "CFBundleShortVersionString" : "1.0",
    "CFBundleIdentifier" : "com.apple.CFNetwork",
    "size" : 3971680,
    "uuid" : "45ad6442-531d-3e9a-967e-b3aa0d01f24f",
    "path" : "\/System\/Library\/Frameworks\/CFNetwork.framework\/Versions\/A\/CFNetwork",
    "name" : "CFNetwork",
    "CFBundleVersion" : "3826.600.41"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6736588800,
    "CFBundleShortVersionString" : "6.9",
    "CFBundleIdentifier" : "com.apple.Foundation",
    "size" : 14587296,
    "uuid" : "b9a92060-f21e-3ecf-9ded-94a65c68a6f4",
    "path" : "\/System\/Library\/Frameworks\/Foundation.framework\/Versions\/C\/Foundation",
    "name" : "Foundation",
    "CFBundleVersion" : "3603"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6713155584,
    "size" : 195492,
    "uuid" : "01bcb3f7-ab89-30bd-87ee-91b291eadae8",
    "path" : "\/usr\/lib\/system\/libdyld.dylib",
    "name" : "libdyld.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 6874210304,
    "CFBundleShortVersionString" : "1.8",
    "CFBundleIdentifier" : "com.apple.CoreVideo",
    "size" : 396640,
    "uuid" : "09d2cfd2-78be-3ab9-bd62-81adfb485fcc",
    "path" : "\/System\/Library\/Frameworks\/CoreVideo.framework\/Versions\/A\/CoreVideo",
    "name" : "CoreVideo",
    "CFBundleVersion" : "692.1"
  }
],
  "sharedCache" : {
  "base" : 6708461568,
  "size" : 5040898048,
  "uuid" : "032c7bce-a479-35b8-97bc-ce7f8f80ccab"
},
  "vmSummary" : "ReadOnly portion of Libraries: Total=2.3G resident=0K(0%) swapped_out_or_unallocated=2.3G(100%)\nWritable regions: Total=11.6G written=7675K(0%) resident=6875K(0%) swapped_out=800K(0%) unallocated=11.6G(100%)\n\n                                VIRTUAL   REGION \nREGION TYPE                        SIZE    COUNT (non-coalesced) \n===========                     =======  ======= \nAccelerate framework               128K        1 \nActivity Tracing                   256K        1 \nCG image                           112K        7 \nColorSync                          544K       28 \nCoreAnimation                      800K       50 \nCoreGraphics                        32K        2 \nCoreServices                       624K        2 \nCoreUI image data                  880K        6 \nFoundation                          16K        1 \nImage IO                            64K        4 \nKernel Alloc Once                   32K        1 \nMALLOC                            10.8G     1015 \nMALLOC guard page                  384K       24 \nMALLOC_LARGE (reserved)          563.0M       28         reserved VM address space (unallocated)\nSQLite page cache                  384K        3 \nSTACK GUARD                       59.6M      228 \nStack                            128.6M      229 \nVM_ALLOCATE                       58.1M      151 \n__AUTH                            5480K      699 \n__AUTH_CONST                      77.0M      942 \n__CTF                               824        1 \n__DATA                            59.6M     1087 \n__DATA_CONST                      51.4M     1078 \n__DATA_DIRTY                      2766K      340 \n__FONT_DATA                        2352        1 \n__INFO_FILTER                         8        1 \n__LINKEDIT                       740.5M      134 \n__MFRT                              16K        1 \n__OBJC_RO                         61.4M        1 \n__OBJC_RW                         2396K        1 \n__POVERDDATA                        16K        1 \n__POVERTEXT                         16K        1 \n__TEXT                             1.6G     1076 \n__TEXT (graphics)                 56.5M       22 \n__TEXT (network)                  18.5M        5 \n__TPRO_CONST                       128K        2 \ndyld private memory               1664K        5 \nlibnetwork                         640K       16 \nmapped file                        1.3G       92 \npage table in kernel              6875K        1 \nshared memory                     1024K       19 \n===========                     =======  ======= \nTOTAL                             15.5G     7307 \nTOTAL, minus reserved VM space    14.9G     7307 \n",
  "legacyInfo" : {
  "threadTriggered" : {
    "name" : "MainThread",
    "queue" : "com.apple.main-thread"
  }
},
  "logWritingSignature" : "d74478b73f4f4c6f28abaf8dde3d4526fca7074f",
  "trialInfo" : {
  "rollouts" : [
    {
      "rolloutId" : "670e9bd77a111748a97092a1",
      "factorPackIds" : {
        "SIRI_TTS_DEVICE_TRAINING" : "67d07fb744f1a3655d87002b"
      },
      "deploymentId" : 240000016
    },
    {
      "rolloutId" : "6425c75e4327780c10cc4252",
      "factorPackIds" : {
        "SIRI_HOME_AUTOMATION_INTENT_SELECTION_CACHE" : "642600a457e7664b1698eb32"
      },
      "deploymentId" : 240000004
    }
  ],
  "experiments" : [

  ]
}
}

