-------------------------------------
Translated Report (Full Report Below)
-------------------------------------

Process:               Live [90722]
Path:                  /Applications/Ableton Live 12 Suite.app/Contents/MacOS/Live
Identifier:            com.ableton.live
Version:               12.2.2 (2025-08-01_7acf90750f) (12.2.2 (2025-08-01_7acf90750f))
Code Type:             ARM-64 (Native)
Parent Process:        launchd [1]
User ID:               502

Date/Time:             2025-08-24 16:26:58.4865 +0000
OS Version:            macOS 15.6 (24G84)
Report Version:        12
Anonymous UUID:        14CE5F82-82B2-5557-92EA-60F9D97DBF72

Sleep/Wake UUID:       11B52E5A-AE62-42DA-AB7C-DB250CECAAED

Time Awake Since Boot: 270000 seconds
Time Since Wake:       1869 seconds

System Integrity Protection: enabled

Crashed Thread:        0  MainThread  Dispatch queue: com.apple.main-thread

Exception Type:        EXC_BAD_ACCESS (SIGSEGV)
Exception Codes:       KERN_INVALID_ADDRESS at 0x0000000000000040
Exception Codes:       0x0000000000000001, 0x0000000000000040

Termination Reason:    Namespace SIGNAL, Code 11 Segmentation fault: 11
Terminating Process:   exc handler [90722]

VM Region Info: 0x40 is not in any region.  Bytes before following region: 4306993088
      REGION TYPE                    START - END         [ VSIZE] PRT/MAX SHRMOD  REGION DETAIL
      UNUSED SPACE AT START
--->
      __TEXT                      100b78000-106b2c000    [ 95.7M] r-x/r-x SM=COW  /Applications/Ableton Live 12 Suite.app/Contents/MacOS/Live

Kernel Triage:
VM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter


Thread 0 Crashed:: MainThread Dispatch queue: com.apple.main-thread
0   SoundCollector                	       0x42f126f3c juce::Rectangle<int>::getWidth() const + 12 (juce_Rectangle.h:142)
1   SoundCollector                	       0x42f1770f4 juce::Component::getWidth() const + 28
2   SoundCollector                	       0x42f965f38 juce::Component::setBounds(int, int, int, int) + 192
3   SoundCollector                	       0x42f177324 SoundCollectorAudioProcessorEditor::resized() + 180
4   SoundCollector                	       0x42f966348 juce::Component::sendMovedResizedMessages(bool, bool) + 156
5   SoundCollector                	       0x42f96629c juce::Component::sendMovedResizedMessagesIfPending() + 148
6   SoundCollector                	       0x42f9661a8 juce::Component::setBounds(int, int, int, int) + 816
7   SoundCollector                	       0x42f95a088 juce::Component::setSize(int, int) + 76
8   SoundCollector                	       0x42f174940 SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&) + 996
9   SoundCollector                	       0x42f1767ac SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&) + 36
10  SoundCollector                	       0x42f16ce50 SoundCollectorAudioProcessor::createEditor() + 44
11  SoundCollector                	       0x42f318ef0 juce::AudioProcessor::createEditorIfNeeded() + 104
12  SoundCollector                	       0x42f125da8 JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::operator()(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize) const + 128 (juce_audio_plugin_client_AU_1.mm:1918)
13  SoundCollector                	       0x42f125e6c JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::__invoke(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize) + 60 (juce_audio_plugin_client_AU_1.mm:1908)
14  Live                          	       0x103825d4c 0x100b78000 + 46849356
15  Live                          	       0x10382641c 0x100b78000 + 46851100
16  Live                          	       0x103826c7c 0x100b78000 + 46853244
17  Live                          	       0x103826b10 0x100b78000 + 46852880
18  Live                          	       0x102448190 0x100b78000 + 26018192
19  Live                          	       0x102447e5c 0x100b78000 + 26017372
20  Live                          	       0x1024571d0 0x100b78000 + 26079696
21  Live                          	       0x10242c6d8 0x100b78000 + 25904856
22  Live                          	       0x1039214e8 0x100b78000 + 47879400
23  Live                          	       0x1039a82b8 0x100b78000 + 48431800
24  Live                          	       0x1039a81bc 0x100b78000 + 48431548
25  Live                          	       0x1039a833c 0x100b78000 + 48431932
26  Live                          	       0x101f84328 0x100b78000 + 21021480
27  Live                          	       0x101f7a950 0x100b78000 + 20982096
28  Live                          	       0x1039a8000 0x100b78000 + 48431104
29  Live                          	       0x1039be3b0 0x100b78000 + 48522160
30  Live                          	       0x102160ffc 0x100b78000 + 22974460
31  Live                          	       0x10216113c void ableton::utility::detail::CallbackTypes<TOneShotTimer, void>::CallMemberFunc<&TOneShotTimer::OnTimer()>(void*) + 76
32  Live                          	       0x101e5fba0 0x100b78000 + 19823520
33  Live                          	       0x101e5f8d8 0x100b78000 + 19822808
34  Live                          	       0x1020d1284 0x100b78000 + 22385284
35  Foundation                    	       0x191916fcc __NSFireTimer + 104
36  CoreFoundation                	       0x190327c50 __CFRUNLOOP_IS_CALLING_OUT_TO_A_TIMER_CALLBACK_FUNCTION__ + 32
37  CoreFoundation                	       0x190327910 __CFRunLoopDoTimer + 980
38  CoreFoundation                	       0x19032744c __CFRunLoopDoTimers + 332
39  CoreFoundation                	       0x19030d858 __CFRunLoopRun + 1848
40  CoreFoundation                	       0x19030ca98 CFRunLoopRunSpecific + 572
41  HIToolbox                     	       0x19bdaf27c RunCurrentEventLoopInMode + 324
42  HIToolbox                     	       0x19bdb24e8 ReceiveNextEventCommon + 676
43  HIToolbox                     	       0x19bf3d484 _BlockUntilNextEventMatchingListInModeWithFilter + 76
44  AppKit                        	       0x194231a34 _DPSNextEvent + 684
45  AppKit                        	       0x194bd0940 -[NSApplication(NSEventRouting) _nextEventMatchingEventMask:untilDate:inMode:dequeue:] + 688
46  AppKit                        	       0x194224be4 -[NSApplication run] + 480
47  Live                          	       0x1020d0f48 0x100b78000 + 22384456
48  dyld                          	       0x18fe82b98 start + 6076

Thread 1:: NetIoThread
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101bda7f0 0x100b78000 + 17180656
2   Live                          	       0x101fbbdec void ableton::utility::detail::CallbackTypes<ANetIoThread, void, TUserData>::CallMemberFunc<&ANetIoThread::Main(TUserData)>(void*, TUserData) + 92
3   Live                          	       0x101bf5790 0x100b78000 + 17291152
4   Live                          	       0x101bf6468 0x100b78000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 2:
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

Thread 3:: FileThread
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101bda7f0 0x100b78000 + 17180656
2   Live                          	       0x102b87ec0 0x100b78000 + 33619648
3   Live                          	       0x101bf5790 0x100b78000 + 17291152
4   Live                          	       0x101bf6468 0x100b78000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 4:: IPC Channel Reader
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   Live                          	       0x10491a1cc 0x100b78000 + 64627148
2   Live                          	       0x101fec8a0 0x100b78000 + 21448864
3   Live                          	       0x101fecd6c 0x100b78000 + 21450092
4   Live                          	       0x101fee474 0x100b78000 + 21455988
5   Live                          	       0x101fee068 0x100b78000 + 21454952
6   Live                          	       0x101bf5790 0x100b78000 + 17291152
7   Live                          	       0x101bf6468 0x100b78000 + 17294440
8   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
9   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 5:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

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
3   Live                          	       0x103b5ff80 0x100b78000 + 50233216
4   Live                          	       0x10588e374 0x100b78000 + 80831348
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 9:: browser
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x1049134d8 0x100b78000 + 64599256
2   Live                          	       0x1045ff1e0 ableton::live_library::AsyncLibraryHub::Impl::workerThreadMain(ableton::live_library::AsyncLibraryHub::Impl*) + 368
3   Live                          	       0x1045ff990 0x100b78000 + 61372816
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 10:
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   Live                          	       0x10187630c 0x100b78000 + 13624076
2   Live                          	       0x1018773b8 0x100b78000 + 13628344
3   Live                          	       0x10187713c 0x100b78000 + 13627708
4   Live                          	       0x10187d770 0x100b78000 + 13653872
5   Live                          	       0x10187d6bc 0x100b78000 + 13653692
6   Live                          	       0x10187d5c4 0x100b78000 + 13653444
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
1   Live                          	       0x101bda7f0 0x100b78000 + 17180656
2   Live                          	       0x10241e2d4 0x100b78000 + 25846484
3   Live                          	       0x101bf5790 0x100b78000 + 17291152
4   Live                          	       0x101bf6468 0x100b78000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 13:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101bda7f0 0x100b78000 + 17180656
2   Live                          	       0x10241e2d4 0x100b78000 + 25846484
3   Live                          	       0x101bf5790 0x100b78000 + 17291152
4   Live                          	       0x101bf6468 0x100b78000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 14:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101bda7f0 0x100b78000 + 17180656
2   Live                          	       0x10241e2d4 0x100b78000 + 25846484
3   Live                          	       0x101bf5790 0x100b78000 + 17291152
4   Live                          	       0x101bf6468 0x100b78000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 15:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101bda7f0 0x100b78000 + 17180656
2   Live                          	       0x10241e2d4 0x100b78000 + 25846484
3   Live                          	       0x101bf5790 0x100b78000 + 17291152
4   Live                          	       0x101bf6468 0x100b78000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 16:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101bda7f0 0x100b78000 + 17180656
2   Live                          	       0x10241e2d4 0x100b78000 + 25846484
3   Live                          	       0x101bf5790 0x100b78000 + 17291152
4   Live                          	       0x101bf6468 0x100b78000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 17:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101bda7f0 0x100b78000 + 17180656
2   Live                          	       0x10241e2d4 0x100b78000 + 25846484
3   Live                          	       0x101bf5790 0x100b78000 + 17291152
4   Live                          	       0x101bf6468 0x100b78000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 18:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x101bda7f0 0x100b78000 + 17180656
2   Live                          	       0x10241e2d4 0x100b78000 + 25846484
3   Live                          	       0x101bf5790 0x100b78000 + 17291152
4   Live                          	       0x101bf6468 0x100b78000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 19:: com.apple.audio.IOThread.client
0   libsystem_kernel.dylib        	       0x1901e1bbc semaphore_wait_signal_trap + 8
1   caulk                         	       0x19b8b32f8 caulk::mach::semaphore::wait_signal_or_error(caulk::mach::semaphore&) + 36
2   CoreAudio                     	       0x1931130e0 HALC_ProxyIOContext::IOWorkLoop() + 5276
3   CoreAudio                     	       0x193111530 invocation function for block in HALC_ProxyIOContext::HALC_ProxyIOContext(unsigned int, unsigned int) + 172
4   CoreAudio                     	       0x1932bb9f4 HALC_IOThread::Entry(void*) + 88
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 20:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   smartEQ4                      	       0x157056ed4 0x156648000 + 10546900
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 21:: Realtime safe async job spooler
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   smartEQ4                      	       0x15702ef64 0x156648000 + 10383204
4   smartEQ4                      	       0x156f5c8e8 0x156648000 + 9521384
5   smartEQ4                      	       0x157039e1c 0x156648000 + 10427932
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 22:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_distressor             	       0x1784ff234 0x178460000 + 651828
4   uaudio_distressor             	       0x1784c98a0 0x178460000 + 432288
5   uaudio_distressor             	       0x1784da628 0x178460000 + 501288
6   uaudio_distressor             	       0x1784daff8 0x178460000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 23:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x17848a33c 0x178460000 + 172860
2   uaudio_distressor             	       0x17848b0c8 0x178460000 + 176328
3   uaudio_distressor             	       0x17848aeac 0x178460000 + 175788
4   uaudio_distressor             	       0x17848e21c 0x178460000 + 188956
5   uaudio_distressor             	       0x1784da614 0x178460000 + 501268
6   uaudio_distressor             	       0x1784daff8 0x178460000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 24:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x17848a33c 0x178460000 + 172860
2   uaudio_distressor             	       0x17848b0c8 0x178460000 + 176328
3   uaudio_distressor             	       0x17848aeac 0x178460000 + 175788
4   uaudio_distressor             	       0x17848e21c 0x178460000 + 188956
5   uaudio_distressor             	       0x1784da614 0x178460000 + 501268
6   uaudio_distressor             	       0x1784daff8 0x178460000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 25:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x17848a33c 0x178460000 + 172860
2   uaudio_distressor             	       0x17848b0c8 0x178460000 + 176328
3   uaudio_distressor             	       0x17848aeac 0x178460000 + 175788
4   uaudio_distressor             	       0x17848e21c 0x178460000 + 188956
5   uaudio_distressor             	       0x1784da614 0x178460000 + 501268
6   uaudio_distressor             	       0x1784daff8 0x178460000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 26:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x17848a33c 0x178460000 + 172860
2   uaudio_distressor             	       0x17848b0c8 0x178460000 + 176328
3   uaudio_distressor             	       0x17848aeac 0x178460000 + 175788
4   uaudio_distressor             	       0x17848e21c 0x178460000 + 188956
5   uaudio_distressor             	       0x1784da614 0x178460000 + 501268
6   uaudio_distressor             	       0x1784daff8 0x178460000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 27:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3632abfd4 0x363198000 + 1130452
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 28:: HighResolutionTimerThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Kick 3                        	       0x363290fcc 0x363198000 + 1019852
4   Kick 3                        	       0x3632668a0 0x363198000 + 845984
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 29:: ContentsListsThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x363255d50 0x363198000 + 777552
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 30:: Kick Analysis Thread
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   Kick 3                        	       0x3634b0e7c 0x363198000 + 3247740
3   Kick 3                        	       0x3632668a0 0x363198000 + 845984
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 31:: Resources Store
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633e2e68 0x363198000 + 2403944
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 32:: Convo Engines Store
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633e30bc 0x363198000 + 2404540
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 33:: thumb cache
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x363255d50 0x363198000 + 777552
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 34:: ContentsListsThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x363255d50 0x363198000 + 777552
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 35:: HighResolutionTimerThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x363290f1c 0x363198000 + 1019676
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 36:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633fa130 0x363198000 + 2498864
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 37:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633fa130 0x363198000 + 2498864
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

Thread 42:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3692d3d5c 0x3691f0000 + 933212
3   Addictive Drums 2             	       0x3692f63e0 0x3691f0000 + 1074144
4   Addictive Drums 2             	       0x3692d4c14 0x3691f0000 + 936980
5   Addictive Drums 2             	       0x3692ea2dc 0x3691f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 43:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3692d3d5c 0x3691f0000 + 933212
3   Addictive Drums 2             	       0x3692f63e0 0x3691f0000 + 1074144
4   Addictive Drums 2             	       0x3692d4c14 0x3691f0000 + 936980
5   Addictive Drums 2             	       0x3692ea2dc 0x3691f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 44:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3692d3d5c 0x3691f0000 + 933212
3   Addictive Drums 2             	       0x3692f63e0 0x3691f0000 + 1074144
4   Addictive Drums 2             	       0x3692d4c14 0x3691f0000 + 936980
5   Addictive Drums 2             	       0x3692ea2dc 0x3691f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 45:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3692d3d5c 0x3691f0000 + 933212
3   Addictive Drums 2             	       0x3692f63e0 0x3691f0000 + 1074144
4   Addictive Drums 2             	       0x3692d4c14 0x3691f0000 + 936980
5   Addictive Drums 2             	       0x3692ea2dc 0x3691f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 46:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3692d3d5c 0x3691f0000 + 933212
3   Addictive Drums 2             	       0x3692f63e0 0x3691f0000 + 1074144
4   Addictive Drums 2             	       0x3692d4c14 0x3691f0000 + 936980
5   Addictive Drums 2             	       0x3692ea2dc 0x3691f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 47:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3692d3d5c 0x3691f0000 + 933212
3   Addictive Drums 2             	       0x3692f63e0 0x3691f0000 + 1074144
4   Addictive Drums 2             	       0x3692d4c14 0x3691f0000 + 936980
5   Addictive Drums 2             	       0x3692ea2dc 0x3691f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 48:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3692d3d5c 0x3691f0000 + 933212
3   Addictive Drums 2             	       0x3692f63e0 0x3691f0000 + 1074144
4   Addictive Drums 2             	       0x3692d4c14 0x3691f0000 + 936980
5   Addictive Drums 2             	       0x3692ea2dc 0x3691f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 49:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3692d3d5c 0x3691f0000 + 933212
3   Addictive Drums 2             	       0x3692f63e0 0x3691f0000 + 1074144
4   Addictive Drums 2             	       0x3692d4c14 0x3691f0000 + 936980
5   Addictive Drums 2             	       0x3692ea2dc 0x3691f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 50:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3692d3d5c 0x3691f0000 + 933212
3   Addictive Drums 2             	       0x3692f63e0 0x3691f0000 + 1074144
4   Addictive Drums 2             	       0x3692d4c14 0x3691f0000 + 936980
5   Addictive Drums 2             	       0x3692ea2dc 0x3691f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 51:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3692d3d5c 0x3691f0000 + 933212
3   Addictive Drums 2             	       0x3692f63e0 0x3691f0000 + 1074144
4   Addictive Drums 2             	       0x3692d4c14 0x3691f0000 + 936980
5   Addictive Drums 2             	       0x3692ea2dc 0x3691f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 52:
0   libsystem_kernel.dylib        	       0x1901e1d00 mach_wait_until + 8
1   CarbonCore                    	       0x193da7f1c MPDelayUntil + 20
2   Addictive Drums 2             	       0x3695990b0 0x3691f0000 + 3838128
3   Addictive Drums 2             	       0x369606084 0x3691f0000 + 4284548
4   Addictive Drums 2             	       0x369598d50 0x3691f0000 + 3837264
5   CarbonCore                    	       0x193da765c PrivateMPEntryPoint + 60
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 53:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x19022410c _pthread_cond_wait + 1028
2   CarbonCore                    	       0x193dd405c TSWaitOnConditionTimedRelative + 32
3   CarbonCore                    	       0x193da6594 MPWaitForEvent + 208
4   Addictive Drums 2             	       0x369598b00 0x3691f0000 + 3836672
5   Addictive Drums 2             	       0x36966f0f8 0x3691f0000 + 4714744
6   Addictive Drums 2             	       0x369598d50 0x3691f0000 + 3837264
7   CarbonCore                    	       0x193da765c PrivateMPEntryPoint + 60
8   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
9   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 54:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Addictive Drums 2             	       0x36970b960 0x3691f0000 + 5355872
4   Addictive Drums 2             	       0x36970d5c0 0x3691f0000 + 5363136
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 55:: PerformanceManagers
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   Rev PLATE-140                 	       0x3857feb38 0x384bb8000 + 12872504
3   Rev PLATE-140                 	       0x385b4c340 0x384bb8000 + 16335680
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 56:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Rev PLATE-140                 	       0x384eccbe4 0x384bb8000 + 3230692
4   Rev PLATE-140                 	       0x384ed3874 0x384bb8000 + 3258484
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 57:: AsyncPresetLoader
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Rev PLATE-140                 	       0x384e320fc 0x384bb8000 + 2597116
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 58:
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   libc++.1.dylib                	       0x190155f38 std::__1::this_thread::sleep_for(std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&) + 84
3   libplateverbProcessor.dylib   	       0x37fcfbf08 0x37fb54000 + 1736456
4   libplateverbProcessor.dylib   	       0x37fcfc25c 0x37fb54000 + 1737308
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 59:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_ua_1176ae              	       0x38631450c 0x386274000 + 656652
4   uaudio_ua_1176ae              	       0x3862deb78 0x386274000 + 437112
5   uaudio_ua_1176ae              	       0x3862ef900 0x386274000 + 506112
6   uaudio_ua_1176ae              	       0x3862f02d0 0x386274000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 60:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x38629f614 0x386274000 + 177684
2   uaudio_ua_1176ae              	       0x3862a03a0 0x386274000 + 181152
3   uaudio_ua_1176ae              	       0x3862a0184 0x386274000 + 180612
4   uaudio_ua_1176ae              	       0x3862a34f4 0x386274000 + 193780
5   uaudio_ua_1176ae              	       0x3862ef8ec 0x386274000 + 506092
6   uaudio_ua_1176ae              	       0x3862f02d0 0x386274000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 61:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x38629f614 0x386274000 + 177684
2   uaudio_ua_1176ae              	       0x3862a03a0 0x386274000 + 181152
3   uaudio_ua_1176ae              	       0x3862a0184 0x386274000 + 180612
4   uaudio_ua_1176ae              	       0x3862a34f4 0x386274000 + 193780
5   uaudio_ua_1176ae              	       0x3862ef8ec 0x386274000 + 506092
6   uaudio_ua_1176ae              	       0x3862f02d0 0x386274000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 62:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x38629f614 0x386274000 + 177684
2   uaudio_ua_1176ae              	       0x3862a03a0 0x386274000 + 181152
3   uaudio_ua_1176ae              	       0x3862a0184 0x386274000 + 180612
4   uaudio_ua_1176ae              	       0x3862a34f4 0x386274000 + 193780
5   uaudio_ua_1176ae              	       0x3862ef8ec 0x386274000 + 506092
6   uaudio_ua_1176ae              	       0x3862f02d0 0x386274000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 63:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x38629f614 0x386274000 + 177684
2   uaudio_ua_1176ae              	       0x3862a03a0 0x386274000 + 181152
3   uaudio_ua_1176ae              	       0x3862a0184 0x386274000 + 180612
4   uaudio_ua_1176ae              	       0x3862a34f4 0x386274000 + 193780
5   uaudio_ua_1176ae              	       0x3862ef8ec 0x386274000 + 506092
6   uaudio_ua_1176ae              	       0x3862f02d0 0x386274000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 64:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x3929a8bfc 0x3928c4000 + 936956
3   XO                            	       0x3929cb280 0x3928c4000 + 1077888
4   XO                            	       0x3929a9ab4 0x3928c4000 + 940724
5   XO                            	       0x3929bf17c 0x3928c4000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 65:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x3929a8bfc 0x3928c4000 + 936956
3   XO                            	       0x3929cb280 0x3928c4000 + 1077888
4   XO                            	       0x3929a9ab4 0x3928c4000 + 940724
5   XO                            	       0x3929bf17c 0x3928c4000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 66:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x3929a8bfc 0x3928c4000 + 936956
3   XO                            	       0x3929cb280 0x3928c4000 + 1077888
4   XO                            	       0x3929a9ab4 0x3928c4000 + 940724
5   XO                            	       0x3929bf17c 0x3928c4000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 67:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x3929a8bfc 0x3928c4000 + 936956
3   XO                            	       0x3929cb280 0x3928c4000 + 1077888
4   XO                            	       0x3929a9ab4 0x3928c4000 + 940724
5   XO                            	       0x3929bf17c 0x3928c4000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 68:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x3929a8bfc 0x3928c4000 + 936956
3   XO                            	       0x3929cb280 0x3928c4000 + 1077888
4   XO                            	       0x3929a9ab4 0x3928c4000 + 940724
5   XO                            	       0x3929bf17c 0x3928c4000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 69:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x3929a8bfc 0x3928c4000 + 936956
3   XO                            	       0x3929cb280 0x3928c4000 + 1077888
4   XO                            	       0x3929a9ab4 0x3928c4000 + 940724
5   XO                            	       0x3929bf17c 0x3928c4000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 70:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x3929a8bfc 0x3928c4000 + 936956
3   XO                            	       0x3929cb280 0x3928c4000 + 1077888
4   XO                            	       0x3929a9ab4 0x3928c4000 + 940724
5   XO                            	       0x3929bf17c 0x3928c4000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 71:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x3929a8bfc 0x3928c4000 + 936956
3   XO                            	       0x3929cb280 0x3928c4000 + 1077888
4   XO                            	       0x3929a9ab4 0x3928c4000 + 940724
5   XO                            	       0x3929bf17c 0x3928c4000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 72:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x3929a8bfc 0x3928c4000 + 936956
3   XO                            	       0x3929cb280 0x3928c4000 + 1077888
4   XO                            	       0x3929a9ab4 0x3928c4000 + 940724
5   XO                            	       0x3929bf17c 0x3928c4000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 73:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x3929a8bfc 0x3928c4000 + 936956
3   XO                            	       0x3929cb280 0x3928c4000 + 1077888
4   XO                            	       0x3929a9ab4 0x3928c4000 + 940724
5   XO                            	       0x3929bf17c 0x3928c4000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 74:
0   libsystem_kernel.dylib        	       0x1901e1d00 mach_wait_until + 8
1   CarbonCore                    	       0x193da7f1c MPDelayUntil + 20
2   XO                            	       0x392c6c868 0x3928c4000 + 3836008
3   XO                            	       0x392cd9888 0x3928c4000 + 4282504
4   XO                            	       0x392c6c508 0x3928c4000 + 3835144
5   CarbonCore                    	       0x193da765c PrivateMPEntryPoint + 60
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 75:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   XO                            	       0x392dde448 0x3928c4000 + 5350472
4   XO                            	       0x392de00a8 0x3928c4000 + 5357736
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 76:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 77:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 78:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 79:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 80:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 81:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 82:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 83:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 84:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 85:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 86:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 87:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 88:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 89:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 90:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 91:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 92:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 93:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 94:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 95:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 96:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 97:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 98:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 99:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad957e38 0x3ad54c000 + 4243000
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 100:: AudioRecorder_thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad92c368 0x3ad54c000 + 4064104
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 101:: com.u-he.Diva.voice-renderer 0
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 102:: com.u-he.Diva.voice-renderer 1
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 103:: com.u-he.Diva.voice-renderer 2
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 104:: com.u-he.Diva.voice-renderer 3
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 105:: com.u-he.Diva.voice-renderer 4
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 106:: com.u-he.Diva.voice-renderer 5
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 107:: com.u-he.Diva.voice-renderer 6
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 108:: com.u-he.Diva.voice-renderer 7
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 109:: com.u-he.Diva.voice-renderer 8
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 110:: com.u-he.Diva.voice-renderer 9
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 111:: com.u-he.Diva.voice-renderer 10
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 112:: com.u-he.Diva.voice-renderer 11
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 113:: com.u-he.Diva.voice-renderer 12
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 114:: com.u-he.Diva.voice-renderer 13
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 115:: com.u-he.Diva.voice-renderer 14
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 116:: com.u-he.Diva.voice-renderer 15
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 117:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   WrapPersist                   	       0x3a40189f8 0x3a3de4000 + 2312696
4   WrapPersist                   	       0x3a401cb0c 0x3a3de4000 + 2329356
5   WrapPersist                   	       0x3a401ca64 0x3a3de4000 + 2329188
6   WrapPersist                   	       0x3a401c9b0 0x3a3de4000 + 2329008
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 118:: Internet Monitor
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   Stardust 201 Tape Echo        	       0x3c51306c8 PSInternet::run() + 46108
3   Stardust 201 Tape Echo        	       0x3c525ded4 juce::threadEntryProc(void*) + 528
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 119:: thumb cache
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Stardust 201 Tape Echo        	       0x3c524d034 juce::WaitableEvent::wait(int) const + 152
4   Stardust 201 Tape Echo        	       0x3c524cc8c juce::TimeSliceThread::run() + 128
5   Stardust 201 Tape Echo        	       0x3c525ded4 juce::threadEntryProc(void*) + 528
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
3   uaudio_studio_d_chorus        	       0x3d997fd34 0x3d98e0000 + 654644
4   uaudio_studio_d_chorus        	       0x3d994a3a0 0x3d98e0000 + 435104
5   uaudio_studio_d_chorus        	       0x3d995b128 0x3d98e0000 + 504104
6   uaudio_studio_d_chorus        	       0x3d995baf8 0x3d98e0000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 122:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3d990ae3c 0x3d98e0000 + 175676
2   uaudio_studio_d_chorus        	       0x3d990bbc8 0x3d98e0000 + 179144
3   uaudio_studio_d_chorus        	       0x3d990b9ac 0x3d98e0000 + 178604
4   uaudio_studio_d_chorus        	       0x3d990ed1c 0x3d98e0000 + 191772
5   uaudio_studio_d_chorus        	       0x3d995b114 0x3d98e0000 + 504084
6   uaudio_studio_d_chorus        	       0x3d995baf8 0x3d98e0000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 123:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3d990ae3c 0x3d98e0000 + 175676
2   uaudio_studio_d_chorus        	       0x3d990bbc8 0x3d98e0000 + 179144
3   uaudio_studio_d_chorus        	       0x3d990b9ac 0x3d98e0000 + 178604
4   uaudio_studio_d_chorus        	       0x3d990ed1c 0x3d98e0000 + 191772
5   uaudio_studio_d_chorus        	       0x3d995b114 0x3d98e0000 + 504084
6   uaudio_studio_d_chorus        	       0x3d995baf8 0x3d98e0000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 124:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3d990ae3c 0x3d98e0000 + 175676
2   uaudio_studio_d_chorus        	       0x3d990bbc8 0x3d98e0000 + 179144
3   uaudio_studio_d_chorus        	       0x3d990b9ac 0x3d98e0000 + 178604
4   uaudio_studio_d_chorus        	       0x3d990ed1c 0x3d98e0000 + 191772
5   uaudio_studio_d_chorus        	       0x3d995b114 0x3d98e0000 + 504084
6   uaudio_studio_d_chorus        	       0x3d995baf8 0x3d98e0000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 125:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3d990ae3c 0x3d98e0000 + 175676
2   uaudio_studio_d_chorus        	       0x3d990bbc8 0x3d98e0000 + 179144
3   uaudio_studio_d_chorus        	       0x3d990b9ac 0x3d98e0000 + 178604
4   uaudio_studio_d_chorus        	       0x3d990ed1c 0x3d98e0000 + 191772
5   uaudio_studio_d_chorus        	       0x3d995b114 0x3d98e0000 + 504084
6   uaudio_studio_d_chorus        	       0x3d995baf8 0x3d98e0000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 126:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3de8d60cc 0x3de394000 + 5513420
4   Pianoteq 8 STAGE              	       0x3de3a0780 0x3de394000 + 51072
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 127:: jq-1
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3de8d5f78 0x3de394000 + 5513080
4   Pianoteq 8 STAGE              	       0x3de8d77dc 0x3de394000 + 5519324
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 128:: jq-10
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3de8d5f78 0x3de394000 + 5513080
4   Pianoteq 8 STAGE              	       0x3de8d77dc 0x3de394000 + 5519324
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 129:: jq-2
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3de8d5f78 0x3de394000 + 5513080
4   Pianoteq 8 STAGE              	       0x3de8d77dc 0x3de394000 + 5519324
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 130:: jq-9
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3de8d5f78 0x3de394000 + 5513080
4   Pianoteq 8 STAGE              	       0x3de8d77dc 0x3de394000 + 5519324
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 131:: jq-8
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3de8d5f78 0x3de394000 + 5513080
4   Pianoteq 8 STAGE              	       0x3de8d77dc 0x3de394000 + 5519324
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 132:: jq-3
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3de8d5f78 0x3de394000 + 5513080
4   Pianoteq 8 STAGE              	       0x3de8d77dc 0x3de394000 + 5519324
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 133:: jq-4
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3de8d5f78 0x3de394000 + 5513080
4   Pianoteq 8 STAGE              	       0x3de8d77dc 0x3de394000 + 5519324
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 134:: jq-7
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3de8d5f78 0x3de394000 + 5513080
4   Pianoteq 8 STAGE              	       0x3de8d77dc 0x3de394000 + 5519324
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 135:: jq-6
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3de8d5f78 0x3de394000 + 5513080
4   Pianoteq 8 STAGE              	       0x3de8d77dc 0x3de394000 + 5519324
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 136:: jq-5
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3de8d5f78 0x3de394000 + 5513080
4   Pianoteq 8 STAGE              	       0x3de8d77dc 0x3de394000 + 5519324
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 137:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3de8d60cc 0x3de394000 + 5513420
4   Pianoteq 8 STAGE              	       0x3de5d8aec 0x3de394000 + 2378476
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 138:: vpuptthd
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3de8d60cc 0x3de394000 + 5513420
4   Pianoteq 8 STAGE              	       0x3de39d2e4 0x3de394000 + 37604
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 139:: tith
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3de8d60cc 0x3de394000 + 5513420
4   Pianoteq 8 STAGE              	       0x3de39d838 0x3de394000 + 38968
5   Pianoteq 8 STAGE              	       0x3de8d6358 0x3de394000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 140:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_electra                	       0x3f00a2654 0x3f0000000 + 665172
4   uaudio_electra                	       0x3f006ccc0 0x3f0000000 + 445632
5   uaudio_electra                	       0x3f007da48 0x3f0000000 + 514632
6   uaudio_electra                	       0x3f007e418 0x3f0000000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 141:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3f002d75c 0x3f0000000 + 186204
2   uaudio_electra                	       0x3f002e4e8 0x3f0000000 + 189672
3   uaudio_electra                	       0x3f002e2cc 0x3f0000000 + 189132
4   uaudio_electra                	       0x3f003163c 0x3f0000000 + 202300
5   uaudio_electra                	       0x3f007da34 0x3f0000000 + 514612
6   uaudio_electra                	       0x3f007e418 0x3f0000000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 142:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3f002d75c 0x3f0000000 + 186204
2   uaudio_electra                	       0x3f002e4e8 0x3f0000000 + 189672
3   uaudio_electra                	       0x3f002e2cc 0x3f0000000 + 189132
4   uaudio_electra                	       0x3f003163c 0x3f0000000 + 202300
5   uaudio_electra                	       0x3f007da34 0x3f0000000 + 514612
6   uaudio_electra                	       0x3f007e418 0x3f0000000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 143:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3f002d75c 0x3f0000000 + 186204
2   uaudio_electra                	       0x3f002e4e8 0x3f0000000 + 189672
3   uaudio_electra                	       0x3f002e2cc 0x3f0000000 + 189132
4   uaudio_electra                	       0x3f003163c 0x3f0000000 + 202300
5   uaudio_electra                	       0x3f007da34 0x3f0000000 + 514612
6   uaudio_electra                	       0x3f007e418 0x3f0000000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 144:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3f002d75c 0x3f0000000 + 186204
2   uaudio_electra                	       0x3f002e4e8 0x3f0000000 + 189672
3   uaudio_electra                	       0x3f002e2cc 0x3f0000000 + 189132
4   uaudio_electra                	       0x3f003163c 0x3f0000000 + 202300
5   uaudio_electra                	       0x3f007da34 0x3f0000000 + 514612
6   uaudio_electra                	       0x3f007e418 0x3f0000000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 145:: com.u-he.Diva.voice-renderer 0
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 146:: com.u-he.Diva.voice-renderer 1
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 147:: com.u-he.Diva.voice-renderer 2
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 148:: com.u-he.Diva.voice-renderer 3
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 149:: com.u-he.Diva.voice-renderer 4
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 150:: com.u-he.Diva.voice-renderer 5
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 151:: com.u-he.Diva.voice-renderer 6
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 152:: com.u-he.Diva.voice-renderer 7
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 153:: com.u-he.Diva.voice-renderer 8
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 154:: com.u-he.Diva.voice-renderer 9
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 155:: com.u-he.Diva.voice-renderer 10
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 156:: com.u-he.Diva.voice-renderer 11
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 157:: com.u-he.Diva.voice-renderer 12
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 158:: com.u-he.Diva.voice-renderer 13
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 159:: com.u-he.Diva.voice-renderer 14
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 160:: com.u-he.Diva.voice-renderer 15
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b682ff74 0x3b63dc000 + 4538228
3   Diva                          	       0x3b68a3f34 0x3b63dc000 + 5013300
4   Diva                          	       0x3b6c75178 0x3b63dc000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 161:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_ua_1176ln_rev_e        	       0x3f62736d4 0x3f61d4000 + 653012
4   uaudio_ua_1176ln_rev_e        	       0x3f623dd40 0x3f61d4000 + 433472
5   uaudio_ua_1176ln_rev_e        	       0x3f624eac8 0x3f61d4000 + 502472
6   uaudio_ua_1176ln_rev_e        	       0x3f624f498 0x3f61d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 162:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3f61fe7dc 0x3f61d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3f61ff568 0x3f61d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3f61ff34c 0x3f61d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3f62026bc 0x3f61d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3f624eab4 0x3f61d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3f624f498 0x3f61d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 163:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3f61fe7dc 0x3f61d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3f61ff568 0x3f61d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3f61ff34c 0x3f61d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3f62026bc 0x3f61d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3f624eab4 0x3f61d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3f624f498 0x3f61d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 164:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3f61fe7dc 0x3f61d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3f61ff568 0x3f61d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3f61ff34c 0x3f61d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3f62026bc 0x3f61d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3f624eab4 0x3f61d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3f624f498 0x3f61d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 165:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3f61fe7dc 0x3f61d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3f61ff568 0x3f61d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3f61ff34c 0x3f61d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3f62026bc 0x3f61d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3f624eab4 0x3f61d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3f624f498 0x3f61d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 166:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_teletronix_la-2a_gray  	       0x3f92839ac 0x3f91e4000 + 653740
4   uaudio_teletronix_la-2a_gray  	       0x3f924e018 0x3f91e4000 + 434200
5   uaudio_teletronix_la-2a_gray  	       0x3f925eda0 0x3f91e4000 + 503200
6   uaudio_teletronix_la-2a_gray  	       0x3f925f770 0x3f91e4000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 167:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3f920eab4 0x3f91e4000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3f920f840 0x3f91e4000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3f920f624 0x3f91e4000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3f9212994 0x3f91e4000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3f925ed8c 0x3f91e4000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3f925f770 0x3f91e4000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 168:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3f920eab4 0x3f91e4000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3f920f840 0x3f91e4000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3f920f624 0x3f91e4000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3f9212994 0x3f91e4000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3f925ed8c 0x3f91e4000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3f925f770 0x3f91e4000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 169:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3f920eab4 0x3f91e4000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3f920f840 0x3f91e4000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3f920f624 0x3f91e4000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3f9212994 0x3f91e4000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3f925ed8c 0x3f91e4000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3f925f770 0x3f91e4000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 170:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3f920eab4 0x3f91e4000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3f920f840 0x3f91e4000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3f920f624 0x3f91e4000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3f9212994 0x3f91e4000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3f925ed8c 0x3f91e4000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3f925f770 0x3f91e4000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 171:: splice event processor
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   SpliceBridge                  	       0x410ab7ba4 juce::WaitableEvent::wait(double) const + 108
4   SpliceBridge                  	       0x410800d5c SpliceEventProcessor::process_events_on_thread() + 128
5   SpliceBridge                  	       0x410800cb4 SpliceEventProcessor::run() + 44
6   SpliceBridge                  	       0x410ab8960 juce::Thread::threadEntryPoint() + 296
7   SpliceBridge                  	       0x410b26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
8   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
9   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 172:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SpliceBridge                  	       0x410ab7c38 juce::WaitableEvent::wait(double) const + 256
4   SpliceBridge                  	       0x410a65498 juce::Timer::TimerThread::run() + 480
5   SpliceBridge                  	       0x410ab8960 juce::Thread::threadEntryPoint() + 296
6   SpliceBridge                  	       0x410b26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 173:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x410ffd1e4 gpr_cv_wait + 132
3   SpliceBridge                  	       0x410f10068 grpc_core::Executor::ThreadMain(void*) + 232
4   SpliceBridge                  	       0x4110019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 174:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x410ffd1e4 gpr_cv_wait + 132
3   SpliceBridge                  	       0x410f10068 grpc_core::Executor::ThreadMain(void*) + 232
4   SpliceBridge                  	       0x4110019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 175:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x410ffd1e4 gpr_cv_wait + 132
3   SpliceBridge                  	       0x410f20ab4 timer_thread(void*) + 724
4   SpliceBridge                  	       0x4110019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 176:: grpc communication thread
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   SpliceBridge                  	       0x410a83308 juce::Thread::sleep(int) + 80
3   SpliceBridge                  	       0x4107fea2c SpliceCommunication::run() + 124
4   SpliceBridge                  	       0x410ab8960 juce::Thread::threadEntryPoint() + 296
5   SpliceBridge                  	       0x410b26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 177:: audio loading thread
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   SpliceBridge                  	       0x410a83308 juce::Thread::sleep(int) + 80
3   SpliceBridge                  	       0x410812670 SpliceSuperPowered::run() + 564
4   SpliceBridge                  	       0x410ab8960 juce::Thread::threadEntryPoint() + 296
5   SpliceBridge                  	       0x410b26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 178:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c5fee0 0x431c24000 + 245472
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 179:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c46e24 0x431c24000 + 142884
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 180:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c46e24 0x431c24000 + 142884
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 181:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c46e24 0x431c24000 + 142884
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 182:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c4810c 0x431c24000 + 147724
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 183:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c4810c 0x431c24000 + 147724
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 184:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c5fee0 0x431c24000 + 245472
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 185:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c46e24 0x431c24000 + 142884
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 186:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c46e24 0x431c24000 + 142884
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 187:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c46e24 0x431c24000 + 142884
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 188:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c4810c 0x431c24000 + 147724
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 189:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x431df9498 0x431c24000 + 1922200
4   ADPTR MetricAB                	       0x431c4810c 0x431c24000 + 147724
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 190:: DiskTaskFIFO
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   ADPTR MetricAB                	       0x431dec204 0x431c24000 + 1868292
3   ADPTR MetricAB                	       0x431ccdb98 0x431c24000 + 695192
4   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
5   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 191:: DiskTaskFIFO
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   ADPTR MetricAB                	       0x431dec204 0x431c24000 + 1868292
3   ADPTR MetricAB                	       0x431ccdb98 0x431c24000 + 695192
4   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
5   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 192:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   MaxPlugLib                    	       0x44c54df3c spdlog::details::mpmc_blocking_queue<spdlog::details::async_msg>::dequeue_for(spdlog::details::async_msg&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l>>) + 136
4   MaxPlugLib                    	       0x44c54dde0 spdlog::details::thread_pool::process_next_msg_() + 128
5   MaxPlugLib                    	       0x44c54db98 void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct>>, spdlog::details::thread_pool::thread_pool(unsigned long, unsigned long, std::__1::function<void ()>, std::__1::function<void ()>)::'lambda'()>>(void*) + 76
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 193:: RT-InterProcessSenderThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Live                          	       0x101fba6c8 0x100b78000 + 21243592
3   Live                          	       0x101bf5790 0x100b78000 + 17291152
4   Live                          	       0x101bf6468 0x100b78000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 194:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_distressor             	       0x17848b5b4 0x178460000 + 177588
3   uaudio_distressor             	       0x17848b06c 0x178460000 + 176236
4   uaudio_distressor             	       0x17848aeac 0x178460000 + 175788
5   uaudio_distressor             	       0x1785fff90 0x178460000 + 1703824
6   uaudio_distressor             	       0x17848ad44 0x178460000 + 175428
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 195:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_ua_1176ae              	       0x3862a088c 0x386274000 + 182412
3   uaudio_ua_1176ae              	       0x3862a0344 0x386274000 + 181060
4   uaudio_ua_1176ae              	       0x3862a0184 0x386274000 + 180612
5   uaudio_ua_1176ae              	       0x386415268 0x386274000 + 1708648
6   uaudio_ua_1176ae              	       0x3862a001c 0x386274000 + 180252
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 196:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_studio_d_chorus        	       0x3d990c0b4 0x3d98e0000 + 180404
3   uaudio_studio_d_chorus        	       0x3d990bb6c 0x3d98e0000 + 179052
4   uaudio_studio_d_chorus        	       0x3d990b9ac 0x3d98e0000 + 178604
5   uaudio_studio_d_chorus        	       0x3d9a80a90 0x3d98e0000 + 1706640
6   uaudio_studio_d_chorus        	       0x3d990b844 0x3d98e0000 + 178244
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 197:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_electra                	       0x3f002e9d4 0x3f0000000 + 190932
3   uaudio_electra                	       0x3f002e48c 0x3f0000000 + 189580
4   uaudio_electra                	       0x3f002e2cc 0x3f0000000 + 189132
5   uaudio_electra                	       0x3f01a33b0 0x3f0000000 + 1717168
6   uaudio_electra                	       0x3f002e164 0x3f0000000 + 188772
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 198:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_ua_1176ln_rev_e        	       0x3f61ffa54 0x3f61d4000 + 178772
3   uaudio_ua_1176ln_rev_e        	       0x3f61ff50c 0x3f61d4000 + 177420
4   uaudio_ua_1176ln_rev_e        	       0x3f61ff34c 0x3f61d4000 + 176972
5   uaudio_ua_1176ln_rev_e        	       0x3f6374430 0x3f61d4000 + 1705008
6   uaudio_ua_1176ln_rev_e        	       0x3f61ff1e4 0x3f61d4000 + 176612
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 199:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_teletronix_la-2a_gray  	       0x3f920fd2c 0x3f91e4000 + 179500
3   uaudio_teletronix_la-2a_gray  	       0x3f920f7e4 0x3f91e4000 + 178148
4   uaudio_teletronix_la-2a_gray  	       0x3f920f624 0x3f91e4000 + 177700
5   uaudio_teletronix_la-2a_gray  	       0x3f9384708 0x3f91e4000 + 1705736
6   uaudio_teletronix_la-2a_gray  	       0x3f920f4bc 0x3f91e4000 + 177340
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 200:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   smartEQ4                      	       0x15702ef64 0x156648000 + 10383204
4   smartEQ4                      	       0x1570aa164 0x156648000 + 10887524
5   smartEQ4                      	       0x157039e1c 0x156648000 + 10427932
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 201:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Rev PLATE-140                 	       0x385b3591c 0x384bb8000 + 16242972
4   Rev PLATE-140                 	       0x3859527d0 0x384bb8000 + 14264272
5   Rev PLATE-140                 	       0x385b4c340 0x384bb8000 + 16335680
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 202:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3ad92c894 0x3ad54c000 + 4065428
4   SubLabXL                      	       0x3ad970738 0x3ad54c000 + 4343608
5   SubLabXL                      	       0x3ad93aef8 0x3ad54c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 203:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Stardust 201 Tape Echo        	       0x3c524d034 juce::WaitableEvent::wait(int) const + 152
4   Stardust 201 Tape Echo        	       0x3c52915c8 juce::Timer::TimerThread::run() + 576
5   Stardust 201 Tape Echo        	       0x3c525ded4 juce::threadEntryProc(void*) + 528
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 204:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   NSCreateObjectFileImageFromMemory-fl4HFjfE	       0x3b601f9b0 juce::WaitableEvent::wait(int) const + 152
4   NSCreateObjectFileImageFromMemory-fl4HFjfE	       0x3b603a4c8 juce::Timer::TimerThread::run() + 576
5   NSCreateObjectFileImageFromMemory-fl4HFjfE	       0x3b60269e4 juce::threadEntryProc(void*) + 528
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 205:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3dea2e268 0x3de394000 + 6922856
4   Pianoteq 8 STAGE              	       0x3dea520f8 0x3de394000 + 7069944
5   Pianoteq 8 STAGE              	       0x3dea2e970 0x3de394000 + 6924656
6   Pianoteq 8 STAGE              	       0x3dea432ac 0x3de394000 + 7008940
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 206:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x363256274 0x363198000 + 778868
4   Kick 3                        	       0x3633fa130 0x363198000 + 2498864
5   Kick 3                        	       0x3632668a0 0x363198000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 207:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   ADPTR MetricAB                	       0x431df93bc 0x431c24000 + 1921980
4   ADPTR MetricAB                	       0x431e2821c 0x431c24000 + 2114076
5   ADPTR MetricAB                	       0x431df9ff4 0x431c24000 + 1925108
6   ADPTR MetricAB                	       0x431e0f6e8 0x431c24000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 208:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   MaxPlugLib                    	       0x44c34c4cc juce::WaitableEvent::wait(double) const + 544
4   MaxPlugLib                    	       0x44c37f65c juce::Timer::TimerThread::run() + 476
5   MaxPlugLib                    	       0x44c34d008 juce::Thread::threadEntryPoint() + 292
6   MaxPlugLib                    	       0x44c36ef08 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 209:: tcp_listener
0   libsystem_kernel.dylib        	       0x1901ea46c __accept + 8
1   MaxPlugLib                    	       0x44c33e370 juce::StreamingSocket::waitForNextConnection() const + 92
2   MaxPlugLib                    	       0x44c127400 tcpconnection_listenthread(_tcpconnection*) + 168
3   MaxPlugLib                    	       0x44c031de0 systhread_threadproc + 232
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 210:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x157390c5c 0x156648000 + 13929564
2   smartEQ4                      	       0x157039e1c 0x156648000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 211:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x157390c5c 0x156648000 + 13929564
2   smartEQ4                      	       0x157039e1c 0x156648000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 212:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x157390c5c 0x156648000 + 13929564
2   smartEQ4                      	       0x157039e1c 0x156648000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 213:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x157390c5c 0x156648000 + 13929564
2   smartEQ4                      	       0x157039e1c 0x156648000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 214:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x157390c5c 0x156648000 + 13929564
2   smartEQ4                      	       0x157039e1c 0x156648000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 215:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x157390c5c 0x156648000 + 13929564
2   smartEQ4                      	       0x157039e1c 0x156648000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 216:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x157390c5c 0x156648000 + 13929564
2   smartEQ4                      	       0x157039e1c 0x156648000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 217:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x157390c5c 0x156648000 + 13929564
2   smartEQ4                      	       0x157039e1c 0x156648000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 218:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x410ffd1cc gpr_cv_wait + 108
3   SpliceBridge                  	       0x410f20ab4 timer_thread(void*) + 724
4   SpliceBridge                  	       0x4110019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 219:: caulk::deferred_logger
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   caulk                         	       0x19b896cc8 caulk::semaphore::timed_wait(double) + 224
2   caulk                         	       0x19b896b70 caulk::concurrent::details::worker_thread::run() + 32
3   caulk                         	       0x19b896844 void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*) + 96
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 220:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 221:
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   Live                          	       0x104935d40 0x100b78000 + 64740672
2   Live                          	       0x104917564 0x100b78000 + 64615780
3   Live                          	       0x10493577c 0x100b78000 + 64739196
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 222:: CVDisplayLink
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x19022410c _pthread_cond_wait + 1028
2   CoreVideo                     	       0x199bc51f4 CVDisplayLink::waitUntil(unsigned long long) + 336
3   CoreVideo                     	       0x199bc42dc CVDisplayLink::runIOThread() + 500
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 223:: JUCE v8.0.8: Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SoundCollector                	       0x42f4f6738 std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&) + 328
4   SoundCollector                	       0x42f4f63c4 void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
5   SoundCollector                	       0x42f53429c std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&) + 132
6   SoundCollector                	       0x42f534148 bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1) + 72
7   SoundCollector                	       0x42f4bb6d0 bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1) + 100
8   SoundCollector                	       0x42f48a30c juce::WaitableEvent::wait(double) const + 188
9   SoundCollector                	       0x42f56fda8 juce::Timer::TimerThread::run() + 340
10  SoundCollector                	       0x42f48b0ec juce::Thread::threadEntryPoint() + 340
11  SoundCollector                	       0x42f48b4b0 juce::juce_threadEntryPoint(void*) + 24
12  SoundCollector                	       0x42f4e4dd8 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const + 148
13  SoundCollector                	       0x42f4e4d38 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*) + 28
14  libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
15  libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 224:: JUCE v8.0.8: thumb cache
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SoundCollector                	       0x42f4f6738 std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&) + 328
4   SoundCollector                	       0x42f4f63c4 void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
5   SoundCollector                	       0x42f53429c std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&) + 132
6   SoundCollector                	       0x42f534148 bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1) + 72
7   SoundCollector                	       0x42f4bb6d0 bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1) + 100
8   SoundCollector                	       0x42f48a30c juce::WaitableEvent::wait(double) const + 188
9   SoundCollector                	       0x42f48c154 juce::Thread::wait(double) const + 36
10  SoundCollector                	       0x42f48f9a4 juce::TimeSliceThread::run() + 848
11  SoundCollector                	       0x42f48b0ec juce::Thread::threadEntryPoint() + 340
12  SoundCollector                	       0x42f48b4b0 juce::juce_threadEntryPoint(void*) + 24
13  SoundCollector                	       0x42f4e4dd8 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const + 148
14  SoundCollector                	       0x42f4e4d38 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*) + 28
15  libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
16  libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8


Thread 0 crashed with ARM Thread State (64-bit):
    x0: 0x0000000000000038   x1: 0x0000000000000020   x2: 0x0000000000000099   x3: 0x000000000000006b
    x4: 0x0000000000000020   x5: 0x00000000ba0ba881   x6: 0x000060002b2d9000   x7: 0x0000000000000006
    x8: 0x0000000000000038   x9: 0x0000000000000000  x10: 0x00000001fe1b60c0  x11: 0x00001785e2b80000
   x12: 0x0000000000000020  x13: 0x000060002ba9b6c8  x14: 0x00000000001ff800  x15: 0x00000000000007fb
   x16: 0x00000001fe1b60c0  x17: 0x00000001fe1b60c0  x18: 0x0000000000000000  x19: 0x000060005dadc280
   x20: 0x0000600001b98820  x21: 0x0000000096262683  x22: 0x000060005ba00580  x23: 0x00000000ffffffff
   x24: 0x000060006c1c96c0  x25: 0x000060006c1c96d0  x26: 0x000060003d969f90  x27: 0x000005e5ba1583a1
   x28: 0x0000000191915808   fp: 0x000000016f284ce0   lr: 0x000000042f1770f4
    sp: 0x000000016f284cc0   pc: 0x000000042f126f3c cpsr: 0x60001000
   far: 0x0000000000000040  esr: 0x92000006 (Data Abort) byte read Translation fault

Binary Images:
       0x100b78000 -        0x106b2bfff com.ableton.live (12.2.2 (2025-08-01_7acf90750f)) <c9ac18e9-0394-35c2-a077-3e9fce2c01c7> /Applications/Ableton Live 12 Suite.app/Contents/MacOS/Live
       0x109c30000 -        0x109daffff libonnxruntime_abl.dylib (*) <8038ea9a-f0aa-3323-b68f-f754b5f98e85> /Applications/Ableton Live 12 Suite.app/Contents/Frameworks/libonnxruntime_abl.dylib
       0x1095c0000 -        0x1095d3fff libusb-1.0.dylib (*) <98c8293a-4285-31c6-8154-ffa7b4a47a9f> /Applications/Ableton Live 12 Suite.app/Contents/Frameworks/libusb-1.0.dylib
       0x1095e8000 -        0x10962ffff se.propellerheads.rex.library (*) <ddfec8a2-ead4-3fab-9674-1be6f6e189c9> /Applications/Ableton Live 12 Suite.app/Contents/Frameworks/REX Shared Library.framework/Versions/A/REX Shared Library
       0x109acc000 -        0x109ad7fff libobjc-trampolines.dylib (*) <a3faee04-0f8b-3428-9497-560c97eca6fb> /usr/lib/libobjc-trampolines.dylib
       0x1299c0000 -        0x12a057fff com.apple.AGXMetalG13X (329.2) <6b497f3b-6583-398c-9d05-5f30a1c1bae5> /System/Library/Extensions/AGXMetalG13X.bundle/Contents/MacOS/AGXMetalG13X
       0x152868000 -        0x1529d7fff com.fabfilter.Pro-Q.AU.3 (3.26) <e6e002dd-8240-37cd-922f-dbb4e84b4aa1> /Library/Audio/Plug-Ins/Components/FabFilter Pro-Q 3.component/Contents/MacOS/FabFilter Pro-Q 3
       0x13c700000 -        0x13c71ffff com.apple.security.csparser (3.0) <3a905673-ada9-3c57-992e-b83f555baa61> /System/Library/Frameworks/Security.framework/Versions/A/PlugIns/csparser.bundle/Contents/MacOS/csparser
       0x156648000 -        0x157a87fff com.sonible.smarteq4 (1.0.0) <1497c372-617f-3735-8171-efe1e72c4385> /Library/Audio/Plug-Ins/Components/smartEQ4.component/Contents/MacOS/smartEQ4
       0x1536ec000 -        0x153c77fff libonnxruntime.1.15.1.dylib (*) <bb2e5f66-2caf-35eb-87f3-706dc1a8a6f2> /Library/Application Support/sonible/*/libonnxruntime.1.15.1.dylib
       0x1530f4000 -        0x15322ffff com.apple.audio.units.Components (1.14) <351a431e-1520-3b3b-bb1e-f034da294ecd> /System/Library/Components/CoreAudio.component/Contents/MacOS/CoreAudio
       0x178460000 -        0x178cc3fff com.uaudio.effects.U3C4 (1.0.8) <db952c5a-48af-3c07-984c-10c83e67ff28> /Library/Audio/Plug-Ins/Components/uaudio_distressor.component/Contents/MacOS/uaudio_distressor
       0x363198000 -        0x36397ffff com.SonicAcademy.Kick3 (1.1.2) <0fd687cb-5ac8-3e3c-aac9-2cf99381d245> /Library/Audio/Plug-Ins/Components/Kick 3.component/Contents/MacOS/Kick 3
       0x3691f0000 -        0x36a4c7fff com.xlnaudio.addictivedrums2 (2.7.0) <679d782c-d5d2-3902-844f-5e102be52be3> /Library/Audio/Plug-Ins/Components/Addictive Drums 2.component/Contents/MacOS/Addictive Drums 2
       0x13e2a4000 -        0x13e2cffff com.arturia.component.Rev-PLATE-140 (67328) <2ea5456b-7ed1-3b94-adca-db0cbe7183cd> /Library/Audio/Plug-Ins/Components/Rev PLATE-140.component/Contents/MacOS/Rev PLATE-140
       0x384bb8000 -        0x385f2ffff com.Arturia.Rev-PLATE-140.vst3 (1.7.0.5460) <fb34ef9c-a26c-331d-a9bb-d84e67eec9cf> /Library/Audio/Plug-Ins/Components/Rev PLATE-140.component/Contents/Resources/plugin.vst3/Contents/MacOS/Rev PLATE-140
       0x37fa14000 -        0x37fb3bfff libsqlite.dylib (*) <c6fdd249-ac24-385a-85a0-d3e91bfbb179> /Library/Arturia/*/libsqlite.dylib
       0x37fb54000 -        0x37ff17fff libplateverbProcessor.dylib (*) <9d9fe136-36bd-3683-858c-e1dad60cfed7> /Library/Arturia/*/libplateverbProcessor.dylib
       0x386274000 -        0x386aabfff com.uaudio.effects.U39Z (1.3.15) <b995f721-0177-3bb0-835d-1f4b4078bb19> /Library/Audio/Plug-Ins/Components/uaudio_ua_1176ae.component/Contents/MacOS/uaudio_ua_1176ae
       0x3928c4000 -        0x393b13fff com.xlnaudio.xo (1.7.6) <97f45523-4c60-3f63-b228-371ade2d3ad9> /Library/Audio/Plug-Ins/Components/XO.component/Contents/MacOS/XO
       0x3849a4000 -        0x384abffff com.fabfilter.Pro-Q.AU.2 (2.23) <490c8b97-fdf6-3b01-a27e-a23537bec4da> /Library/Audio/Plug-Ins/Components/FabFilter Pro-Q 2.component/Contents/MacOS/FabFilter Pro-Q 2
       0x3ad54c000 -        0x3b29ebfff com.FutureAudioWorkshop.SubLabXL (1.0.4) <f0499087-d400-3cca-909d-9d8dda7bfd52> /Library/Audio/Plug-Ins/Components/SubLabXL.component/Contents/MacOS/SubLabXL
       0x3b63dc000 -        0x3b6e57fff com.u-he.Diva.au (V1.4.7) <d3f4b734-1172-357b-97e3-af161d31b490> /Library/Audio/Plug-Ins/Components/Diva.component/Contents/MacOS/Diva
       0x3c5f28000 -        0x3c6bcffff com.soundtoys.audiounit.Decapitator (5.4.3.17500 Authorization: Decapitator) <c1140d38-4035-3453-8d99-b393da9727a0> /Library/Audio/Plug-Ins/Components/Decapitator.component/Contents/MacOS/Decapitator
       0x3a3de4000 -        0x3a40d3fff com.paceap.eden.WrapPersist (5.10.1 GM (b5284, 8eb337be)) <84667690-b93b-30ad-9737-5e65be8a4d93> /Library/Frameworks/PACEEdenExperience.framework/Versions/A/WrapPersist.bundle/Contents/MacOS/WrapPersist
       0x3b7164000 -        0x3b77f3fff com.xfer.serum.AU (1.363) <111913f2-ace3-302c-a1ef-6a124d64e18b> /Library/Audio/Plug-Ins/Components/Serum.component/Contents/MacOS/Serum
       0x3b4ba4000 -        0x3b4e23fff com.ValhallaDSP.ValhallaVintageVerb (3.0.0) <6f23cc3b-cbc0-3483-8a2e-8636f440060c> /Library/Audio/Plug-Ins/Components/ValhallaVintageVerbAU64.component/Contents/MacOS/ValhallaVintageVerb
       0x3c5008000 -        0x3c5693fff com.cherryaudio.stardust201 (1.0.11) <cc6b57e0-7066-3d3d-845c-93c64697ec32> /Library/Audio/Plug-Ins/Components/Stardust 201 Tape Echo.component/Contents/MacOS/Stardust 201 Tape Echo
       0x3b6000000 -        0x3b624bfff NSCreateObjectFileImageFromMemory-fl4HFjfE (*) <a113d629-e07f-3385-bf0b-8680c31a6854> /private/tmp/NSCreateObjectFileImageFromMemory-fl4HFjfE
       0x3d98e0000 -        0x3da0fffff com.uaudio.effects.U3BM (1.2.15) <fc1b963a-365e-3712-9148-f40a126181b2> /Library/Audio/Plug-Ins/Components/uaudio_studio_d_chorus.component/Contents/MacOS/uaudio_studio_d_chorus
       0x3de394000 -        0x3debabfff com.modartt.Pianoteq8STAGE.AudioUnit (8.3.1) <caf476aa-3cdc-3bfd-93aa-57eedc7dac58> /Library/Audio/Plug-Ins/Components/Pianoteq 8 STAGE.component/Contents/MacOS/Pianoteq 8 STAGE
       0x3f0000000 -        0x3f09cbfff com.uaudio.effects.UI07 (1.0.11) <3be207e7-1234-3c87-a820-12e3b15be352> /Library/Audio/Plug-Ins/Components/uaudio_electra.component/Contents/MacOS/uaudio_electra
       0x3f61d4000 -        0x3f6a07fff com.uaudio.effects.U39X (1.3.15) <0f52ecc6-3aa1-3479-a79b-1988e593bfcb> /Library/Audio/Plug-Ins/Components/uaudio_ua_1176ln_rev_e.component/Contents/MacOS/uaudio_ua_1176ln_rev_e
       0x3f91e4000 -        0x3f9a1ffff com.uaudio.effects.U3A7 (1.3.15) <8f9c2d2a-e232-370c-a2ba-e2e99a5f9094> /Library/Audio/Plug-Ins/Components/uaudio_teletronix_la-2a_gray.component/Contents/MacOS/uaudio_teletronix_la-2a_gray
       0x3fb2d8000 -        0x3fb4fbfff com.ValhallaDSP.ValhallaRoom (1.6.8) <34896efb-7d7c-380a-a6c7-3337a639c98d> /Library/Audio/Plug-Ins/Components/ValhallaRoomAU64.component/Contents/MacOS/ValhallaRoom
       0x410794000 -        0x411e07fff com.splice.bridge (5.1.1) <8e7b1830-3932-3675-b0b9-1191e06d9ae4> /Library/Audio/Plug-Ins/Components/SpliceBridge.component/Contents/MacOS/SpliceBridge
       0x40aa00000 -        0x40ad33fff com.ValhallaDSP.ValhallaDelay (2.5.1) <6c906a52-3c28-3fd0-94aa-03f36901f2d3> /Library/Audio/Plug-Ins/Components/ValhallaDelay.component/Contents/MacOS/ValhallaDelay
       0x4148f0000 -        0x414e03fff com.Youlean.audiounit.Youlean-Loudness-Meter-2 (2.4.4) <dec4f989-8b60-35e0-8809-553a3acf4d25> /Library/Audio/Plug-Ins/Components/Youlean Loudness Meter 2.component/Contents/MacOS/Youlean Loudness Meter 2
       0x42f0f8000 -        0x42ff63fff com.yourcompany.SoundCollector (1.0.0) <20d10ad5-4c9a-3777-8f8a-ef1bc8df26d5> /Users/USER/Library/Audio/Plug-Ins/Components/SoundCollector.component/Contents/MacOS/SoundCollector
       0x431c24000 -        0x43272bfff com.adptr.MetricAB (1.4.1) <49f6a5ae-93e4-306d-87ca-7d0adcd88007> /Library/Audio/Plug-Ins/Components/ADPTR MetricAB.component/Contents/MacOS/ADPTR MetricAB
       0x16f3cc000 -        0x16f3cffff com.cycling74.maxchecker (1.01) <3d903238-500c-32e8-b9b3-5abede64af6b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/support/maxchecker.bundle/Contents/MacOS/maxchecker
       0x44bcd0000 -        0x44e5affff com.cycling74.MaxPlugLib ( (b9109490887)) <b6cc4fcf-93c9-3f93-91e1-f5a3840f0914> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/support/MaxPlugLib.bundle/Contents/MacOS/MaxPlugLib
       0x414808000 -        0x41487ffff com.cycling74.MaxAudioAPIImpl (*) <0732b043-c55b-35a2-bf3c-98d25964a33e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxAudioAPIImpl.framework/Versions/A/MaxAudioAPIImpl
       0x42f000000 -        0x42f08bfff com.cycling74.MaxLuaImpl (*) <f1a09173-bfe2-3fcc-a4d8-16c736bfd8c2> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxLuaImpl.framework/Versions/A/MaxLuaImpl
       0x444c00000 -        0x444d13fff com.cycling74.JitterAPIImpl (1.7.0) <eb73be27-c373-3012-8c2a-87df119182e9> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/JitterAPIImpl.framework/Versions/A/JitterAPIImpl
       0x16f330000 -        0x16f333fff com.cycling74.MaxLua (*) <8dcd9c4f-c7d7-3aae-9894-65ff549d114f> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxLua.framework/Versions/A/MaxLua
       0x4465ec000 -        0x44672bfff libmozjs185_impl.dylib (*) <919cbda1-301b-36a8-877b-dd0e4552c71c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/libmozjs185_impl.dylib
       0x16f33c000 -        0x16f363fff com.cycling74.patcher (9.0.7 (b9109490887)) <d5c02bf1-706c-3017-b19a-c745c32e3619> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/support/patcher.bundle/Contents/MacOS/patcher
       0x16f38c000 -        0x16f38ffff com.cycling74.MaxAudioAPI (*) <4f56d925-cc1a-345a-9f38-df723f6175e7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxAudioAPI.framework/Versions/A/MaxAudioAPI
       0x16f3e0000 -        0x16f3e3fff com.cycling74.fseventwatcher (9.0.7 (b9109490887)) <21d1ce4b-79c9-36ea-9d2e-49d8843b9f76> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/fseventwatcher.mxo/Contents/MacOS/fseventwatcher
       0x36918c000 -        0x36918ffff com.cycling74.cefaudio (9.0.7 (b9109490887)) <7ca48c89-d341-37ed-980d-1cef562f3000> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/cefaudio.mxo/Contents/MacOS/cefaudio
       0x44715c000 -        0x447293fff com.cycling74.gl2 (9.0.7 (b9109490887)) <4e7cb2d7-2d29-35a0-aa40-f3a36b132993> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/jitter/gl2.mxo/Contents/MacOS/gl2
       0x368be4000 -        0x368be7fff com.cycling74.JitterAPI (1.7.0) <22a2aee2-383c-317a-bdef-c0b99a459e29> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/JitterAPI.framework/Versions/A/JitterAPI
       0x446fa8000 -        0x44704bfff com.cycling74.sketch (9.0.7 (b9109490887)) <ad424434-84a2-3b3f-95fd-0b5fd80f5e4a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/jitter/sketch.mxo/Contents/MacOS/sketch
       0x36f998000 -        0x36f9cffff com.cycling74.live.guilib (9.0.7 (b9109490887)) <e173c13c-b3aa-3dce-8263-057da7df3197> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/m4l/live.guilib.mxo/Contents/MacOS/live.guilib
       0x368bc8000 -        0x368bcffff com.cycling74.autohelp (9.0.7 (b9109490887)) <6a85940d-a6c3-3c7b-83ad-a9594e2a516e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/autohelp.mxo/Contents/MacOS/autohelp
       0x3691cc000 -        0x3691cffff com.cycling74.debugwindow (9.0.7 (b9109490887)) <c05f164c-2898-3ee9-bd20-1112cb226b5d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/debugwindow.mxo/Contents/MacOS/debugwindow
       0x446e04000 -        0x446eeffff com.cycling74.genpatcher (9.0.7 (b9109490887)) <b205c9af-3e5c-33d0-82f8-82d17b440cd5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/genpatcher.mxo/Contents/MacOS/genpatcher
       0x36f9ec000 -        0x36f9effff com.cycling74.jsrepl (9.0.7 (b9109490887)) <9d093fd9-335c-3f22-9e06-513ab299279e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/jsrepl.mxo/Contents/MacOS/jsrepl
       0x4472fc000 -        0x44a483fff com.cycling74.maxclang (9.0.7 (b9109490887)) <37622245-5b39-333d-bc04-1a8cf81387a7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxclang.mxo/Contents/MacOS/maxclang
       0x44707c000 -        0x44710bfff com.cycling74.maxurl (9.0.7 (b9109490887)) <38529482-7204-37b5-9000-d2b66ae5a25b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxurl.mxo/Contents/MacOS/maxurl
       0x4529bc000 -        0x454887fff com.cycling74.maxxslt (9.0.7 (b9109490887)) <c1eb4c91-83e7-3c7b-a234-a4331941d5b4> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxxslt.mxo/Contents/MacOS/maxxslt
       0x3691a0000 -        0x3691b7fff com.cycling74.maxzlib (9.0.7 (b9109490887)) <6dd0952b-f5f8-30a5-b47d-2243d2d17e51> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxzlib.mxo/Contents/MacOS/maxzlib
       0x36ffe8000 -        0x36ffebfff com.cycling74.objectview (9.0.7 (b9109490887)) <49fe8b49-a629-3833-b315-6b414300a378> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/objectview.mxo/Contents/MacOS/objectview
       0x36ffbc000 -        0x36ffc3fff com.cycling74.palblocks (9.0.7 (b9109490887)) <c68e6a5f-80bd-3662-b837-cfd8275a7342> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/palblocks.mxo/Contents/MacOS/palblocks
       0x3829c8000 -        0x3829cffff com.cycling74.paramview (9.0.7 (b9109490887)) <1702c166-2b64-30ce-925d-c8bfad05458f> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/paramview.mxo/Contents/MacOS/paramview
       0x382994000 -        0x38299ffff com.cycling74.pianoroll (9.0.7 (b9109490887)) <ae43e3ff-6d8b-33ed-8a38-488be7f9566d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/pianoroll.mxo/Contents/MacOS/pianoroll
       0x3829b0000 -        0x3829b7fff com.cycling74.querylib (9.0.7 (b9109490887)) <3ccf65e7-edbe-39d8-a439-cece09461fb0> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/querylib.mxo/Contents/MacOS/querylib
       0x3829e0000 -        0x3829e7fff com.cycling74.setplugpath (9.0.7 (b9109490887)) <54adbd9a-4125-3976-be4f-f793dd79b3ca> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/setplugpath.mxo/Contents/MacOS/setplugpath
       0x44b9d4000 -        0x44bb17fff com.cycling74.sqlite (9.0.7 (b9109490887)) <bd9536ff-96a3-3f3c-855d-bfec7b3fb78a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/sqlite.mxo/Contents/MacOS/sqlite
       0x397c84000 -        0x397cb3fff com.cycling74.synophrys (9.0.7 (b9109490887)) <c278dae1-d11c-376b-b6e7-7b732ecd9e37> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/synophrys.mxo/Contents/MacOS/synophrys
       0x454910000 -        0x455837fff com.cycling74.v8 (9.0.7 (b9109490887)) <02ec3450-9c1a-31ca-87ef-d7ede5c5ac0c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/v8.mxo/Contents/MacOS/v8
       0x3ad29c000 -        0x3ad2cbfff com.cycling74.yaml (9.0.7 (b9109490887)) <f55d5407-47a7-3beb-ab74-273416439b1c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/yaml.mxo/Contents/MacOS/yaml
       0x36ffd4000 -        0x36ffd7fff com.cycling74.zoomer (9.0.7 (b9109490887)) <3bf1b8a0-5c1c-31c1-9007-b9e3baea5826> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/zoomer.mxo/Contents/MacOS/zoomer
       0x3839a4000 -        0x3839affff com.cycling74.max-tilde (9.0.7 (b9109490887)) <18f0eb06-9865-3c72-952d-41f35a4622da> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/max~.mxo/Contents/MacOS/max~
       0x3839e4000 -        0x3839effff com.cycling74.polybuffer (9.0.7 (b9109490887)) <65d11a2d-4569-3df2-a42d-145b567dc951> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/polybuffer.mxo/Contents/MacOS/polybuffer
       0x382fec000 -        0x382feffff com.cycling74.probe.history-tilde (9.0.7 (b9109490887)) <517a6822-8290-3b6b-bf75-cf8cd7676dc5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/probe.history~.mxo/Contents/MacOS/probe.history~
       0x3925e8000 -        0x3925ebfff com.cycling74.probe.meter-tilde (9.0.7 (b9109490887)) <9bb3a25c-ae42-3746-9d0f-0a22ede04794> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/probe.meter~.mxo/Contents/MacOS/probe.meter~
       0x3928a4000 -        0x3928a7fff com.cycling74.probe.scope-tilde (9.0.7 (b9109490887)) <a9b3274a-0d9c-3e5c-84c9-8a971ed87567> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/probe.scope~.mxo/Contents/MacOS/probe.scope~
       0x44b800000 -        0x44b93ffff com.cycling74.gl3 (9.0.7 (b9109490887)) <42dc0237-9e6c-38bd-b5fb-963875766eac> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/packages/Jitter Tools/extensions/gl3.mxo/Contents/MacOS/gl3
       0x397ccc000 -        0x397ccffff com.acme.${PRODUCT_NAME:rfc1034identifier} (8.2.0) <11e2f200-6641-3c87-b652-6fdc3b7afca1> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/packages/max-mxj/extensions/mxj_safe.mxo/Contents/MacOS/mxj_safe
       0x44f860000 -        0x44fc07fff com.cycling74.rnbopatcher (*) <de1ffce1-b977-36e2-870c-ac4dc80aec2e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/packages/RNBO/extensions/rnbopatcher.mxo/Contents/MacOS/rnbopatcher
       0x384b80000 -        0x384b87fff com.cycling74.comment (9.0.7 (b9109490887)) <26b3d8ff-e0a5-3077-9f17-0cf1adf385f2> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/comment.mxo/Contents/MacOS/comment
       0x397e8c000 -        0x397eabfff com.cycling74.js (9.0.7 (b9109490887)) <e314a8cc-72ee-3daa-b782-3d037d621fa7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/js.mxo/Contents/MacOS/js
       0x368bf0000 -        0x368bf3fff libmozjs185.dylib (*) <bfc682c9-649e-31ae-9e95-2209a5ff1702> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/libmozjs185.dylib
       0x384b9c000 -        0x384ba3fff com.cycling74.jsjitter (9.0.7 (b9109490887)) <e83b29d6-ce1f-3835-9618-8764c4a5da0c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/jitter/jsjitter.mxo/Contents/MacOS/jsjitter
       0x397ce0000 -        0x397ce7fff com.cycling74.jsliveapi (9.0.7 (b9109490887)) <06e52919-0fa6-3bee-a360-2c6207367be8> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/m4l/jsliveapi.mxo/Contents/MacOS/jsliveapi
       0x397ec4000 -        0x397ec7fff com.cycling74.jsfolder (9.0.7 (b9109490887)) <41150e82-11ff-3ded-a5cf-11bb8c9f980b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsfolder.mxo/Contents/MacOS/jsfolder
       0x3a0dec000 -        0x3a0deffff com.cycling74.jsmaxobjlistener (9.0.7 (b9109490887)) <9765142b-2d49-3d4c-a658-dd47cd5a88f5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsmaxobjlistener.mxo/Contents/MacOS/jsmaxobjlistener
       0x3a41d8000 -        0x3a41dbfff com.cycling74.jsparaminfoprovider (9.0.7 (b9109490887)) <4fefb063-ba42-30ed-8c2f-a110bfd1f883> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsparaminfoprovider.mxo/Contents/MacOS/jsparaminfoprovider
       0x3a41ec000 -        0x3a41effff com.cycling74.jsparamlistener (9.0.7 (b9109490887)) <612efa73-5628-37d3-a5fc-0b5807614d4e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsparamlistener.mxo/Contents/MacOS/jsparamlistener
       0x3a5700000 -        0x3a5703fff com.cycling74.jsrequire (9.0.7 (b9109490887)) <e28319e4-a960-347f-b755-4370b4503424> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsrequire.mxo/Contents/MacOS/jsrequire
       0x3a5714000 -        0x3a5717fff com.cycling74.jsrx256 (9.0.7 (b9109490887)) <07911bce-cfca-369e-b75d-002eba5dad46> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsrx256.mxo/Contents/MacOS/jsrx256
       0x3ad518000 -        0x3ad51bfff com.cycling74.jssnapshotapi (9.0.7 (b9109490887)) <4ef5252f-0e92-3efc-9d27-78a71ebe84b8> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jssnapshotapi.mxo/Contents/MacOS/jssnapshotapi
       0x3ad52c000 -        0x3ad52ffff com.cycling74.jssqlite (9.0.7 (b9109490887)) <04d3289a-7d72-3a3d-b392-bd203bbff6a2> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jssqlite.mxo/Contents/MacOS/jssqlite
       0x3b4f98000 -        0x3b4f9bfff com.cycling74.jssqlresult (9.0.7 (b9109490887)) <efffca0c-e4ab-3719-895b-cad04ab6eb86> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jssqlresult.mxo/Contents/MacOS/jssqlresult
       0x3b4fac000 -        0x3b4faffff com.cycling74.jstrigger (9.0.7 (b9109490887)) <034d76a3-99de-3cda-96f7-1b4c869571dc> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jstrigger.mxo/Contents/MacOS/jstrigger
       0x3b4fc0000 -        0x3b4fc3fff com.cycling74.jsxmlhttprequest (9.0.7 (b9109490887)) <e8eff39a-5f8d-327d-8c42-2a02e24cae32> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsxmlhttprequest.mxo/Contents/MacOS/jsxmlhttprequest
       0x3b4fd4000 -        0x3b4fd7fff com.cycling74.jsbuffer (9.0.7 (b9109490887)) <8bba6d9b-f22d-3098-b1df-08d06c7e157c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/msp/jsbuffer.mxo/Contents/MacOS/jsbuffer
       0x1781d0000 -        0x1781d3fff com.cycling74.delay (9.0.7 (b9109490887)) <229d5dc5-2748-376b-89e7-b15ae4b4642d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/delay.mxo/Contents/MacOS/delay
       0x1781e4000 -        0x1781e7fff com.cycling74.ubutton (9.0.7 (b9109490887)) <fa3ce921-0824-3628-b823-14aaba2ab6d7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/ubutton.mxo/Contents/MacOS/ubutton
       0x1781a4000 -        0x1781affff com.cycling74.message (9.0.7 (b9109490887)) <df31d34d-d90a-3998-bfb9-2fbb643f598a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/message.mxo/Contents/MacOS/message
       0x1781f8000 -        0x178203fff com.cycling74.panel (9.0.7 (b9109490887)) <0a076c00-4321-37a1-9410-e7a7d8d5ce44> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/panel.mxo/Contents/MacOS/panel
       0x178218000 -        0x17821bfff com.cycling74.deferlow (9.0.7 (b9109490887)) <ec700477-2893-3703-a136-d0e8f55f97b0> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/deferlow.mxo/Contents/MacOS/deferlow
       0x3a41ac000 -        0x3a41b7fff com.cycling74.textbutton (9.0.7 (b9109490887)) <bd12696d-76b3-3658-9669-bfc914236917> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/textbutton.mxo/Contents/MacOS/textbutton
       0x3b4fe8000 -        0x3b4febfff com.cycling74.counter (9.0.7 (b9109490887)) <df6bd178-ac8c-3a2a-a5ae-af902f9137d7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/counter.mxo/Contents/MacOS/counter
       0x3b63ac000 -        0x3b63b7fff com.cycling74.zl (9.0.7 (b9109490887)) <98216fc3-0f97-36a1-bc86-a80617fe27a4> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/zl.mxo/Contents/MacOS/zl
       0x3b63c8000 -        0x3b63cbfff com.cycling74.live.observer (9.0.7 (b9109490887)) <493596ba-a7c9-3e97-8d7c-6a419426b59b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.observer.mxo/Contents/MacOS/live.observer
       0x3b7ae0000 -        0x3b7ae3fff com.cycling74.prepend (9.0.7 (b9109490887)) <42c7f221-923a-3e22-a3b7-9f725b667906> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/prepend.mxo/Contents/MacOS/prepend
       0x3b7c00000 -        0x3b7c03fff com.cycling74.live.object (9.0.7 (b9109490887)) <92f67c94-5a0e-3ca8-9ce5-34a3f6b63c8b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.object.mxo/Contents/MacOS/live.object
       0x3b7c14000 -        0x3b7c17fff com.cycling74.live.path (9.0.7 (b9109490887)) <f63d96c3-eac1-3af4-b6c0-40cd84f5ddb5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.path.mxo/Contents/MacOS/live.path
       0x3b7ab4000 -        0x3b7abffff com.cycling74.coll (9.0.7 (b9109490887)) <3da68a89-d0e7-3c19-a9e8-0dc45a1da40e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/coll.mxo/Contents/MacOS/coll
       0x3b7c28000 -        0x3b7c2bfff com.cycling74.listfunnel (9.0.7 (b9109490887)) <4827fa72-9461-3125-841d-d9ba53fd3291> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/listfunnel.mxo/Contents/MacOS/listfunnel
       0x3b7dd8000 -        0x3b7ddbfff com.cycling74.append (9.0.7 (b9109490887)) <fe7e2812-a932-3ed5-a356-d33fdb3fad22> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/append.mxo/Contents/MacOS/append
       0x3b7dec000 -        0x3b7deffff com.cycling74.iter (9.0.7 (b9109490887)) <a7fead0b-252f-354a-b254-d262dd04f70a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/iter.mxo/Contents/MacOS/iter
       0x3c59e4000 -        0x3c59ebfff com.cycling74.button (9.0.7 (b9109490887)) <ed8dcd9a-a9e0-3fcf-8d59-a91249742749> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/button.mxo/Contents/MacOS/button
       0x3c5f00000 -        0x3c5f03fff com.cycling74.uzi (9.0.7 (b9109490887)) <f99cf39b-6d90-3f25-889f-5527e6cf09d4> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/uzi.mxo/Contents/MacOS/uzi
       0x3c5f14000 -        0x3c5f17fff com.cycling74.combine (9.0.7 (b9109490887)) <d58a8b8a-b71e-3b0f-bbc1-5d01125b409d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/combine.mxo/Contents/MacOS/combine
       0x3cd7b4000 -        0x3cd7b7fff com.cycling74.translate (9.0.7 (b9109490887)) <6c119b4e-6452-3276-9f67-92d7546cc739> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/translate.mxo/Contents/MacOS/translate
       0x3cd7c8000 -        0x3cd7cbfff com.cycling74.rdiv (9.0.7 (b9109490887)) <acb5eeb9-2644-3300-b0c8-1ea5509dbc29> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/rdiv.mxo/Contents/MacOS/rdiv
       0x3cd7dc000 -        0x3cd7dffff com.cycling74.plugsync-tilde (9.0.7 (b9109490887)) <5f658dd4-5789-3c62-8a5c-3b4e4a860661> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/msp/plugsync~.mxo/Contents/MacOS/plugsync~
       0x3d5ac8000 -        0x3d5acffff com.cycling74.live.thisdevice (9.0.7 (b9109490887)) <26b7f3b2-3166-3842-9140-9b210157f00e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.thisdevice.mxo/Contents/MacOS/live.thisdevice
       0x3c2fc8000 -        0x3c2fe7fff com.cycling74.jit.cellblock (9.0.7 (b9109490887)) <f1f2cd9f-dd2a-33e6-bc24-9a5ef321cf53> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/jit.cellblock.mxo/Contents/MacOS/jit.cellblock
       0x3d5ae0000 -        0x3d5ae3fff com.cycling74.tosymbol (9.0.7 (b9109490887)) <14bc2cd5-6c54-3beb-942a-173d13407e8c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/tosymbol.mxo/Contents/MacOS/tosymbol
       0x3d98c4000 -        0x3d98c7fff com.cycling74.fromsymbol (9.0.7 (b9109490887)) <36013942-a602-3c2f-8121-277f3457652d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/fromsymbol.mxo/Contents/MacOS/fromsymbol
       0x3e31e8000 -        0x3e31ebfff com.cycling74.atoi (9.0.7 (b9109490887)) <7265ae34-95a1-3d85-8a77-774d3036d9ff> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/atoi.mxo/Contents/MacOS/atoi
       0x3e7f90000 -        0x3e7f93fff com.cycling74.itoa (9.0.7 (b9109490887)) <60cb4f23-199c-3b3c-a238-c10014821f37> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/itoa.mxo/Contents/MacOS/itoa
       0x3e7fa4000 -        0x3e7fa7fff com.cycling74.join (9.0.7 (b9109490887)) <78511710-06a4-34bc-8eff-79241ebe0910> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/join.mxo/Contents/MacOS/join
       0x3e7fb8000 -        0x3e7fbbfff com.cycling74.regexp (9.0.7 (b9109490887)) <3b573b5c-6044-3773-8556-c8979a37ab79> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/regexp.mxo/Contents/MacOS/regexp
       0x3e31bc000 -        0x3e31c3fff com.cycling74.fpic (9.0.7 (b9109490887)) <d94cec57-c5b4-3735-85b3-9b872534684e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/fpic.mxo/Contents/MacOS/fpic
       0x152828000 -        0x15282bfff com.cycling74.plugout-tilde (9.0.7 (b9109490887)) <f0dacc3b-3b54-3744-bd22-5809e9e78b67> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/msp/plugout~.mxo/Contents/MacOS/plugout~
       0x15283c000 -        0x15283ffff com.cycling74.plugin-tilde (9.0.7 (b9109490887)) <559fa5fc-61fe-3204-b6a9-f13a1538a550> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/msp/plugin~.mxo/Contents/MacOS/plugin~
       0x485368000 -        0x485c4bfff com.apple.audio.codecs.Components (7.0) <f7b7e577-5649-37b8-8d18-b9ef3c0b4dc2> /System/Library/Components/AudioCodecs.component/Contents/MacOS/AudioCodecs
       0x191883000 -        0x19266c59f com.apple.Foundation (6.9) <b9a92060-f21e-3ecf-9ded-94a65c68a6f4> /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
       0x190292000 -        0x1907d0fff com.apple.CoreFoundation (6.9) <8d45baee-6cc0-3b89-93fd-ea1c8e15c6d7> /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
       0x19bcec000 -        0x19bff2fdf com.apple.HIToolbox (2.1.1) <1a037942-11e0-3fc8-aad2-20b11e7ae1a4> /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
       0x1941f7000 -        0x195687e3f com.apple.AppKit (6.9) <860c164c-d04c-30ff-8c6f-e672b74caf11> /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
       0x18fe7c000 -        0x18ff17577 dyld (*) <3247e185-ced2-36ff-9e29-47a77c23e004> /usr/lib/dyld
               0x0 - 0xffffffffffffffff ??? (*) <00000000-0000-0000-0000-000000000000> ???
       0x1901e1000 -        0x19021c653 libsystem_kernel.dylib (*) <6e4a96ad-04b8-3e8a-b91d-087e62306246> /usr/lib/system/libsystem_kernel.dylib
       0x19021d000 -        0x190229a47 libsystem_pthread.dylib (*) <d6494ba9-171e-39fc-b1aa-28ecf87975d1> /usr/lib/system/libsystem_pthread.dylib
       0x1ac874000 -        0x1ac92ed1f com.apple.audio.midi.CoreMIDI (2.0) <504d9a4a-f0a7-348f-a7bc-13fd26b48d99> /System/Library/Frameworks/CoreMIDI.framework/Versions/A/CoreMIDI
       0x19b895000 -        0x19b8bcddf com.apple.audio.caulk (1.0) <42085f32-42e2-3f11-b0b4-0343137b5f72> /System/Library/PrivateFrameworks/caulk.framework/Versions/A/caulk
       0x190136000 -        0x1901c2ff7 libc++.1.dylib (*) <643ed232-ce19-3f63-8015-0aee768c002f> /usr/lib/libc++.1.dylib
       0x192f20000 -        0x19365139f com.apple.audio.CoreAudio (5.0) <52c7f0a2-f403-391b-9b0d-ce498eff4d7e> /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
       0x19006a000 -        0x1900b075f libdispatch.dylib (*) <24ce0d89-4114-30c2-a81a-3db1f5931cff> /usr/lib/system/libdispatch.dylib
       0x1900b4000 -        0x190135243 libsystem_c.dylib (*) <dfea8794-80ce-37c3-8f6a-108aa1d0b1b0> /usr/lib/system/libsystem_c.dylib
       0x193d33000 -        0x194025cbf com.apple.CoreServices.CarbonCore (1333) <18084480-b19d-3142-adbe-40f2aa328977> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/CarbonCore.framework/Versions/A/CarbonCore
       0x195dc3000 -        0x19618ca5f com.apple.CFNetwork (1.0) <45ad6442-531d-3e9a-967e-b3aa0d01f24f> /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
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
ReadOnly portion of Libraries: Total=2.4G resident=0K(0%) swapped_out_or_unallocated=2.4G(100%)
Writable regions: Total=11.5G written=7675K(0%) resident=6907K(0%) swapped_out=768K(0%) unallocated=11.5G(100%)

                                VIRTUAL   REGION
REGION TYPE                        SIZE    COUNT (non-coalesced)
===========                     =======  =======
Accelerate framework               128K        1
Activity Tracing                   256K        1
CG image                           112K        6
ColorSync                          544K       28
CoreAnimation                      800K       50
CoreGraphics                        32K        2
CoreServices                       624K        2
CoreUI image data                  880K        6
Foundation                          16K        1
Image IO                           160K       10
Kernel Alloc Once                   32K        1
MALLOC                            10.7G     1014
MALLOC guard page                  384K       24
MALLOC_LARGE (reserved)          546.0M       28         reserved VM address space (unallocated)
SQLite page cache                  384K        3
STACK GUARD                       59.5M      225
Stack                            127.0M      226
VM_ALLOCATE                       58.1M      148
VM_ALLOCATE (reserved)              32K        1         reserved VM address space (unallocated)
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
__TEXT                             1.6G     1103
__TPRO_CONST                       128K        2
dyld private memory               1664K        5
libnetwork                         640K       16
mapped file                        1.3G       99
page table in kernel              6907K        1
shared memory                     1024K       19
===========                     =======  =======
TOTAL                             15.4G     7310
TOTAL, minus reserved VM space    14.9G     7310



-----------
Full Report
-----------

{"app_name":"Live","timestamp":"2025-08-24 16:27:04.00 +0000","app_version":"12.2.2 (2025-08-01_7acf90750f)","slice_uuid":"c9ac18e9-0394-35c2-a077-3e9fce2c01c7","build_version":"12.2.2 (2025-08-01_7acf90750f)","platform":1,"bundleID":"com.ableton.live","share_with_app_devs":0,"is_first_party":0,"bug_type":"309","os_version":"macOS 15.6 (24G84)","roots_installed":0,"name":"Live","incident_id":"B0DB346B-142F-4378-98EE-72919383C474"}
{
  "uptime" : 270000,
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
  "captureTime" : "2025-08-24 16:26:58.4865 +0000",
  "codeSigningMonitor" : 1,
  "incident" : "B0DB346B-142F-4378-98EE-72919383C474",
  "pid" : 90722,
  "translated" : false,
  "cpuType" : "ARM-64",
  "roots_installed" : 0,
  "bug_type" : "309",
  "procLaunch" : "2025-08-24 16:26:01.3287 +0000",
  "procStartAbsTime" : 6482884839938,
  "procExitAbsTime" : 6484253599931,
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
  "wakeTime" : 1869,
  "sleepWakeUUID" : "11B52E5A-AE62-42DA-AB7C-DB250CECAAED",
  "sip" : "enabled",
  "vmRegionInfo" : "0x40 is not in any region.  Bytes before following region: 4306993088\n      REGION TYPE                    START - END         [ VSIZE] PRT\/MAX SHRMOD  REGION DETAIL\n      UNUSED SPACE AT START\n--->  \n      __TEXT                      100b78000-106b2c000    [ 95.7M] r-x\/r-x SM=COW  \/Applications\/Ableton Live 12 Suite.app\/Contents\/MacOS\/Live",
  "exception" : {"codes":"0x0000000000000001, 0x0000000000000040","rawCodes":[1,64],"type":"EXC_BAD_ACCESS","signal":"SIGSEGV","subtype":"KERN_INVALID_ADDRESS at 0x0000000000000040"},
  "termination" : {"flags":0,"code":11,"namespace":"SIGNAL","indicator":"Segmentation fault: 11","byProc":"exc handler","byPid":90722},
  "ktriageinfo" : "VM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter\n",
  "vmregioninfo" : "0x40 is not in any region.  Bytes before following region: 4306993088\n      REGION TYPE                    START - END         [ VSIZE] PRT\/MAX SHRMOD  REGION DETAIL\n      UNUSED SPACE AT START\n--->  \n      __TEXT                      100b78000-106b2c000    [ 95.7M] r-x\/r-x SM=COW  \/Applications\/Ableton Live 12 Suite.app\/Contents\/MacOS\/Live",
  "extMods" : {"caller":{"thread_create":0,"thread_set_state":0,"task_for_pid":0},"system":{"thread_create":0,"thread_set_state":0,"task_for_pid":0},"targeted":{"thread_create":0,"thread_set_state":0,"task_for_pid":0},"warnings":0},
  "faultingThread" : 0,
  "threads" : [{"threadState":{"x":[{"value":56},{"value":32},{"value":153},{"value":107},{"value":32},{"value":3121326209},{"value":105553840672768},{"value":6},{"value":56},{"value":0},{"value":8558174400,"symbolLocation":0,"symbol":"_main_thread"},{"value":25863801798656},{"value":32},{"value":105553848809160},{"value":2095104},{"value":2043},{"value":8558174400,"symbolLocation":0,"symbol":"_main_thread"},{"value":8558174400,"symbolLocation":0,"symbol":"_main_thread"},{"value":0},{"value":105554687935104},{"value":105553145202720},{"value":2519082627},{"value":105554653480320},{"value":4294967295},{"value":105554930079424},{"value":105554930079440},{"value":105554149547920},{"value":6484227621793},{"value":6737188872,"symbolLocation":0,"symbol":"_timerRelease"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17969934580},"cpsr":{"value":1610616832},"fp":{"value":6159879392},"sp":{"value":6159879360},"esr":{"value":2449473542,"description":"(Data Abort) byte read Translation fault"},"pc":{"value":17969606460,"matchesCrashFrame":1},"far":{"value":64}},"id":6068211,"triggered":true,"name":"MainThread","queue":"com.apple.main-thread","frames":[{"imageOffset":192316,"sourceLine":142,"sourceFile":"juce_Rectangle.h","symbol":"juce::Rectangle<int>::getWidth() const","imageIndex":38,"symbolLocation":12},{"imageOffset":520436,"symbol":"juce::Component::getWidth() const","symbolLocation":28,"imageIndex":38},{"imageOffset":8838968,"symbol":"juce::Component::setBounds(int, int, int, int)","symbolLocation":192,"imageIndex":38},{"imageOffset":520996,"symbol":"SoundCollectorAudioProcessorEditor::resized()","symbolLocation":180,"imageIndex":38},{"imageOffset":8840008,"symbol":"juce::Component::sendMovedResizedMessages(bool, bool)","symbolLocation":156,"imageIndex":38},{"imageOffset":8839836,"symbol":"juce::Component::sendMovedResizedMessagesIfPending()","symbolLocation":148,"imageIndex":38},{"imageOffset":8839592,"symbol":"juce::Component::setBounds(int, int, int, int)","symbolLocation":816,"imageIndex":38},{"imageOffset":8790152,"symbol":"juce::Component::setSize(int, int)","symbolLocation":76,"imageIndex":38},{"imageOffset":510272,"symbol":"SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&)","symbolLocation":996,"imageIndex":38},{"imageOffset":518060,"symbol":"SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&)","symbolLocation":36,"imageIndex":38},{"imageOffset":478800,"symbol":"SoundCollectorAudioProcessor::createEditor()","symbolLocation":44,"imageIndex":38},{"imageOffset":2232048,"symbol":"juce::AudioProcessor::createEditorIfNeeded()","symbolLocation":104,"imageIndex":38},{"imageOffset":187816,"sourceLine":1918,"sourceFile":"juce_audio_plugin_client_AU_1.mm","symbol":"JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::operator()(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize) const","imageIndex":38,"symbolLocation":128},{"imageOffset":188012,"sourceLine":1908,"sourceFile":"juce_audio_plugin_client_AU_1.mm","symbol":"JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::__invoke(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)","imageIndex":38,"symbolLocation":60},{"imageOffset":46849356,"imageIndex":0},{"imageOffset":46851100,"imageIndex":0},{"imageOffset":46853244,"imageIndex":0},{"imageOffset":46852880,"imageIndex":0},{"imageOffset":26018192,"imageIndex":0},{"imageOffset":26017372,"imageIndex":0},{"imageOffset":26079696,"imageIndex":0},{"imageOffset":25904856,"imageIndex":0},{"imageOffset":47879400,"imageIndex":0},{"imageOffset":48431800,"imageIndex":0},{"imageOffset":48431548,"imageIndex":0},{"imageOffset":48431932,"imageIndex":0},{"imageOffset":21021480,"imageIndex":0},{"imageOffset":20982096,"imageIndex":0},{"imageOffset":48431104,"imageIndex":0},{"imageOffset":48522160,"imageIndex":0},{"imageOffset":22974460,"imageIndex":0},{"imageOffset":22974780,"symbol":"void ableton::utility::detail::CallbackTypes<TOneShotTimer, void>::CallMemberFunc<&TOneShotTimer::OnTimer()>(void*)","symbolLocation":76,"imageIndex":0},{"imageOffset":19823520,"imageIndex":0},{"imageOffset":19822808,"imageIndex":0},{"imageOffset":22385284,"imageIndex":0},{"imageOffset":606156,"symbol":"__NSFireTimer","symbolLocation":104,"imageIndex":133},{"imageOffset":613456,"symbol":"__CFRUNLOOP_IS_CALLING_OUT_TO_A_TIMER_CALLBACK_FUNCTION__","symbolLocation":32,"imageIndex":134},{"imageOffset":612624,"symbol":"__CFRunLoopDoTimer","symbolLocation":980,"imageIndex":134},{"imageOffset":611404,"symbol":"__CFRunLoopDoTimers","symbolLocation":332,"imageIndex":134},{"imageOffset":505944,"symbol":"__CFRunLoopRun","symbolLocation":1848,"imageIndex":134},{"imageOffset":502424,"symbol":"CFRunLoopRunSpecific","symbolLocation":572,"imageIndex":134},{"imageOffset":799356,"symbol":"RunCurrentEventLoopInMode","symbolLocation":324,"imageIndex":135},{"imageOffset":812264,"symbol":"ReceiveNextEventCommon","symbolLocation":676,"imageIndex":135},{"imageOffset":2430084,"symbol":"_BlockUntilNextEventMatchingListInModeWithFilter","symbolLocation":76,"imageIndex":135},{"imageOffset":240180,"symbol":"_DPSNextEvent","symbolLocation":684,"imageIndex":136},{"imageOffset":10328384,"symbol":"-[NSApplication(NSEventRouting) _nextEventMatchingEventMask:untilDate:inMode:dequeue:]","symbolLocation":688,"imageIndex":136},{"imageOffset":187364,"symbol":"-[NSApplication run]","symbolLocation":480,"imageIndex":136},{"imageOffset":22384456,"imageIndex":0},{"imageOffset":27544,"symbol":"start","symbolLocation":6076,"imageIndex":137}]},{"id":6068277,"name":"NetIoThread","threadState":{"x":[{"value":14},{"value":4324173776},{"value":18525244752},{"value":0},{"value":18525244752},{"value":40},{"value":0},{"value":6},{"value":1},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":5283774464},{"value":0},{"value":18446744073709551580},{"value":8575318664},{"value":0},{"value":105553177728208},{"value":105553132585944},{"value":11},{"value":6162165576},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4324173808},"cpsr":{"value":1610616832},"fp":{"value":6162165520},"sp":{"value":6162165504},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":21249516,"symbol":"void ableton::utility::detail::CallbackTypes<ANetIoThread, void, TUserData>::CallMemberFunc<&ANetIoThread::Main(TUserData)>(void*, TUserData)","symbolLocation":92,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068278,"frames":[{"imageOffset":3124,"symbol":"mach_msg2_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":78752,"symbol":"mach_msg2_internal","symbolLocation":76,"imageIndex":139},{"imageOffset":38756,"symbol":"mach_msg_overwrite","symbolLocation":484,"imageIndex":139},{"imageOffset":4008,"symbol":"mach_msg","symbolLocation":24,"imageIndex":139},{"imageOffset":257708,"symbol":"XServerMachPort::ReceiveMessage(int&, void*, int&)","symbolLocation":104,"imageIndex":141},{"imageOffset":395072,"symbol":"MIDIProcess::MIDIInPortThread::Run()","symbolLocation":148,"imageIndex":141},{"imageOffset":350060,"symbol":"CADeprecated::XThread::RunHelper(void*)","symbolLocation":48,"imageIndex":141},{"imageOffset":392772,"symbol":"CADeprecated::CAPThread::Entry(CADeprecated::CAPThread*)","symbolLocation":96,"imageIndex":141},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":268451845},{"value":17179869186},{"value":0},{"value":103366977912832},{"value":0},{"value":103366977912832},{"value":100},{"value":0},{"value":0},{"value":17179869184},{"value":100},{"value":0},{"value":0},{"value":0},{"value":24067},{"value":0},{"value":18446744073709551569},{"value":8575310952},{"value":0},{"value":0},{"value":100},{"value":103366977912832},{"value":0},{"value":103366977912832},{"value":6162737620},{"value":0},{"value":17179869186},{"value":18446744073709550527},{"value":2}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6712935328},"cpsr":{"value":4096},"fp":{"value":6162737280},"sp":{"value":6162737200},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859700},"far":{"value":0}}},{"id":6068307,"name":"FileThread","threadState":{"x":[{"value":14},{"value":4324173776},{"value":131584},{"value":28},{"value":26},{"value":0},{"value":338016},{"value":2832},{"value":1},{"value":4761583616},{"value":2352},{"value":2},{"value":14806944},{"value":4752864700},{"value":0},{"value":4752862216},{"value":18446744073709551580},{"value":0},{"value":0},{"value":105553177625152},{"value":4418355200},{"value":4418355200},{"value":6168473416},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4324173808},"cpsr":{"value":1610616832},"fp":{"value":6168473328},"sp":{"value":6168473312},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":33619648,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068318,"name":"IPC Channel Reader","threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":6169045952},{"value":6169045936},{"value":3752083498},{"value":0},{"value":0},{"value":1},{"value":105553847010600},{"value":0},{"value":2},{"value":0},{"value":0},{"value":2095104},{"value":2043},{"value":230},{"value":41},{"value":0},{"value":105553847010592},{"value":500},{"value":105554653922656},{"value":2},{"value":2},{"value":105554653922676},{"value":4},{"value":1},{"value":0},{"value":105554653922480}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4371620300},"cpsr":{"value":1610616832},"fp":{"value":6169046032},"sp":{"value":6169045904},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}},"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":64627148,"imageIndex":0},{"imageOffset":21448864,"imageIndex":0},{"imageOffset":21450092,"imageIndex":0},{"imageOffset":21455988,"imageIndex":0},{"imageOffset":21454952,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068319,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":140}],"threadState":{"x":[{"value":6169620480},{"value":51459},{"value":6169083904},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":6169620480},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6068337,"name":"caulk.messenger.shared:17","threadState":{"x":[{"value":14},{"value":1},{"value":0},{"value":1},{"value":0},{"value":1},{"value":0},{"value":0},{"value":0},{"value":4294967295},{"value":0},{"value":0},{"value":14543634456},{"value":6171340408},{"value":1792},{"value":0},{"value":18446744073709551580},{"value":8575313384},{"value":0},{"value":105553120136272},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904442056},"cpsr":{"value":2147487744},"fp":{"value":6171340672},"sp":{"value":6171340640},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":7368,"symbol":"caulk::semaphore::timed_wait(double)","symbolLocation":224,"imageIndex":142},{"imageOffset":7024,"symbol":"caulk::concurrent::details::worker_thread::run()","symbolLocation":32,"imageIndex":142},{"imageOffset":6212,"symbol":"void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*)","symbolLocation":96,"imageIndex":142},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068338,"name":"caulk.messenger.shared:high","threadState":{"x":[{"value":14},{"value":55555},{"value":55555},{"value":939},{"value":4294967295},{"value":0},{"value":0},{"value":0},{"value":0},{"value":4294967295},{"value":1},{"value":105553174741720},{"value":0},{"value":0},{"value":0},{"value":0},{"value":18446744073709551580},{"value":8575313384},{"value":0},{"value":105553120137728},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904442056},"cpsr":{"value":2147487744},"fp":{"value":6171914112},"sp":{"value":6171914080},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":7368,"symbol":"caulk::semaphore::timed_wait(double)","symbolLocation":224,"imageIndex":142},{"imageOffset":7024,"symbol":"caulk::concurrent::details::worker_thread::run()","symbolLocation":32,"imageIndex":142},{"imageOffset":6212,"symbol":"void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*)","symbolLocation":96,"imageIndex":142},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068413,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":50233216,"imageIndex":0},{"imageOffset":80831348,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":6172487320},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5312983896},{"value":5312984008},{"value":6172487904},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6172487440},"sp":{"value":6172487296},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068414,"name":"browser","threadState":{"x":[{"value":14},{"value":5081420256},{"value":73896},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":4985873392},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":2694656},{"value":0},{"value":18446744073709551580},{"value":8575318664},{"value":0},{"value":4985873632},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4371592408},"cpsr":{"value":1610616832},"fp":{"value":6173060896},"sp":{"value":6173060880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":64599256,"imageIndex":0},{"imageOffset":61370848,"symbol":"ableton::live_library::AsyncLibraryHub::Impl::workerThreadMain(ableton::live_library::AsyncLibraryHub::Impl*)","symbolLocation":368,"imageIndex":0},{"imageOffset":61372816,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068415,"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":13624076,"imageIndex":0},{"imageOffset":13628344,"imageIndex":0},{"imageOffset":13627708,"imageIndex":0},{"imageOffset":13653872,"imageIndex":0},{"imageOffset":13653692,"imageIndex":0},{"imageOffset":13653444,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6173628608},{"value":128},{"value":6173628576},{"value":105553130621784},{"value":105553130621816},{"value":5287804816},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":24000000},{"value":3885},{"value":1756052820659335},{"value":2778796055},{"value":363},{"value":8575308792},{"value":0},{"value":6173634096},{"value":1},{"value":0},{"value":5287804776},{"value":5287804720},{"value":6173634096},{"value":5287799808},{"value":5287799808},{"value":1},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4320617228},"cpsr":{"value":1610616832},"fp":{"value":6173633824},"sp":{"value":6173628512},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}}},{"id":6068417,"name":"com.apple.NSEventThread","threadState":{"x":[{"value":268451845},{"value":21592279046},{"value":8589934592},{"value":482698489495552},{"value":0},{"value":482698489495552},{"value":2},{"value":4294967295},{"value":0},{"value":17179869184},{"value":0},{"value":2},{"value":0},{"value":0},{"value":112387},{"value":0},{"value":18446744073709551569},{"value":8575310952},{"value":0},{"value":4294967295},{"value":2},{"value":482698489495552},{"value":0},{"value":482698489495552},{"value":6309355656},{"value":8589934592},{"value":21592279046},{"value":18446744073709550527},{"value":4412409862,"symbolLocation":421982,"symbol":"NLomPathUtils::KTracksStr"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6712935328},"cpsr":{"value":4096},"fp":{"value":6309355504},"sp":{"value":6309355424},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859700},"far":{"value":0}},"frames":[{"imageOffset":3124,"symbol":"mach_msg2_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":78752,"symbol":"mach_msg2_internal","symbolLocation":76,"imageIndex":139},{"imageOffset":38756,"symbol":"mach_msg_overwrite","symbolLocation":484,"imageIndex":139},{"imageOffset":4008,"symbol":"mach_msg","symbolLocation":24,"imageIndex":139},{"imageOffset":511164,"symbol":"__CFRunLoopServiceMachPort","symbolLocation":160,"imageIndex":134},{"imageOffset":505304,"symbol":"__CFRunLoopRun","symbolLocation":1208,"imageIndex":134},{"imageOffset":502424,"symbol":"CFRunLoopRunSpecific","symbolLocation":572,"imageIndex":134},{"imageOffset":1435532,"symbol":"_NSEventThread","symbolLocation":140,"imageIndex":136},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068471,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4324173776},{"value":6163311904},{"value":586704},{"value":18698962032},{"value":586704},{"value":32},{"value":496},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6163312016},{"value":64},{"value":0},{"value":15085580800},{"value":18446744073709551580},{"value":30},{"value":0},{"value":105553178083776},{"value":4417964416},{"value":4417964413},{"value":1},{"value":4417961984},{"value":4417964412},{"value":4417961984},{"value":8},{"value":4416755584},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4324173808},"cpsr":{"value":1610616832},"fp":{"value":6163312128},"sp":{"value":6163312112},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068472,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4324173776},{"value":6163885344},{"value":68719460488},{"value":18698967072},{"value":586720},{"value":32},{"value":512},{"value":1},{"value":2},{"value":1},{"value":1},{"value":6163885456},{"value":64},{"value":1},{"value":15085581056},{"value":18446744073709551580},{"value":8},{"value":0},{"value":105553178083904},{"value":4417964416},{"value":4417964413},{"value":2},{"value":4417961984},{"value":4417964412},{"value":4417961984},{"value":16},{"value":4416755584},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4324173808},"cpsr":{"value":1610616832},"fp":{"value":6163885568},"sp":{"value":6163885552},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068473,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4324173776},{"value":6164458784},{"value":586674},{"value":18698963712},{"value":586674},{"value":32},{"value":512},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6164458896},{"value":64},{"value":2},{"value":15085581312},{"value":18446744073709551580},{"value":2},{"value":0},{"value":105553178083824},{"value":4417964416},{"value":4417964413},{"value":3},{"value":4417961984},{"value":4417964412},{"value":4417961984},{"value":24},{"value":4416755584},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4324173808},"cpsr":{"value":1610616832},"fp":{"value":6164459008},"sp":{"value":6164458992},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068474,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4324173776},{"value":6165032224},{"value":586690},{"value":18698963712},{"value":586690},{"value":32},{"value":512},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6165032336},{"value":64},{"value":2},{"value":15085581312},{"value":18446744073709551580},{"value":2},{"value":0},{"value":105553178083856},{"value":4417964416},{"value":4417964413},{"value":4},{"value":4417961984},{"value":4417964412},{"value":4417961984},{"value":32},{"value":4416755584},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4324173808},"cpsr":{"value":1610616832},"fp":{"value":6165032448},"sp":{"value":6165032432},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068475,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4324173776},{"value":6165605664},{"value":586706},{"value":18698965392},{"value":586706},{"value":32},{"value":512},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6165605776},{"value":64},{"value":2},{"value":15085581312},{"value":18446744073709551580},{"value":2},{"value":0},{"value":105553178083936},{"value":4417964416},{"value":4417964413},{"value":5},{"value":4417961984},{"value":4417964412},{"value":4417961984},{"value":40},{"value":4416755584},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4324173808},"cpsr":{"value":1610616832},"fp":{"value":6165605888},"sp":{"value":6165605872},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068476,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4324173776},{"value":6166179104},{"value":68719460488},{"value":128},{"value":32},{"value":0},{"value":15045218320},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6166179216},{"value":64},{"value":5},{"value":15085582080},{"value":18446744073709551580},{"value":4},{"value":0},{"value":105553178083712},{"value":4417964416},{"value":4417964413},{"value":6},{"value":4417961984},{"value":4417964412},{"value":4417961984},{"value":48},{"value":4416755584},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4324173808},"cpsr":{"value":1610616832},"fp":{"value":6166179328},"sp":{"value":6166179312},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068477,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4324173776},{"value":6166752544},{"value":68719460488},{"value":128},{"value":32},{"value":0},{"value":16994416656},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6166752656},{"value":64},{"value":6},{"value":15085582336},{"value":18446744073709551580},{"value":1},{"value":0},{"value":105553178083744},{"value":4417964416},{"value":4417964413},{"value":7},{"value":4417961984},{"value":4417964412},{"value":4417961984},{"value":56},{"value":4416755584},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4324173808},"cpsr":{"value":1610616832},"fp":{"value":6166752768},"sp":{"value":6166752752},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068478,"name":"com.apple.audio.IOThread.client","threadState":{"x":[{"value":14},{"value":142851},{"value":0},{"value":0},{"value":0},{"value":32},{"value":0},{"value":17368528400},{"value":1},{"value":14666475971070066747},{"value":1099511628032},{"value":1099511628034},{"value":48},{"value":64},{"value":7},{"value":15085582592},{"value":18446744073709551579},{"value":8575313392},{"value":0},{"value":4546976032},{"value":4546976024},{"value":5641962496},{"value":105553182020512},{"value":8558329856,"symbolLocation":0,"symbol":"AMCP::Log::Scope_Registry::get()::s_registry"},{"value":8519204864,"symbolLocation":448,"symbol":"sVarispeedRateTable"},{"value":128},{"value":166659},{"value":0},{"value":6767195284}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904558328},"cpsr":{"value":1610616832},"fp":{"value":6167325952},"sp":{"value":6167325936},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859580},"far":{"value":0}},"frames":[{"imageOffset":3004,"symbol":"semaphore_wait_signal_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":123640,"symbol":"caulk::mach::semaphore::wait_signal_or_error(caulk::mach::semaphore&)","symbolLocation":36,"imageIndex":142},{"imageOffset":2044128,"symbol":"HALC_ProxyIOContext::IOWorkLoop()","symbolLocation":5276,"imageIndex":144},{"imageOffset":2037040,"symbol":"invocation function for block in HALC_ProxyIOContext::HALC_ProxyIOContext(unsigned int, unsigned int)","symbolLocation":172,"imageIndex":144},{"imageOffset":3783156,"symbol":"HALC_IOThread::Entry(void*)","symbolLocation":88,"imageIndex":144},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068502,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":10546900,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":9935667},{"value":6311653032},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105553393185800},{"value":105553393185752},{"value":6311653600},{"value":9935667},{"value":0},{"value":0},{"value":1230849},{"value":1231104},{"value":18437520701672696841},{"value":10000000}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6311653152},"sp":{"value":6311653008},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068511,"name":"Realtime safe async job spooler","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":99999958},{"value":6312226328},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5640881896},{"value":5640881960},{"value":6312227040},{"value":99999958},{"value":0},{"value":0},{"value":121089},{"value":121344},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6312226448},"sp":{"value":6312226304},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":10383204,"imageIndex":8},{"imageOffset":9521384,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068513,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147482393869549568},{"value":499999708},{"value":68719460488},{"value":393631107},{"value":3},{"value":10},{"value":0},{"value":499999708},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6484263929584},{"value":105553344012800},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":6323678736},"sp":{"value":6323678704},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":145},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":145},{"imageOffset":651828,"imageIndex":11},{"imageOffset":432288,"imageIndex":11},{"imageOffset":501288,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068514,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6324246544},{"value":128},{"value":6324246512},{"value":365},{"value":18446744073709551125},{"value":5675757472},{"value":2},{"value":0},{"value":2},{"value":355322},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":6324252048},{"value":5675757376},{"value":0},{"value":6324251912},{"value":5685030888},{"value":5685030960},{"value":5685030880},{"value":6324252048},{"value":5685030960},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6312993596},"cpsr":{"value":1610616832},"fp":{"value":6324251760},"sp":{"value":6324246432},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068515,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6324819984},{"value":128},{"value":6324819952},{"value":365},{"value":18446744073709551125},{"value":5685210064},{"value":2},{"value":0},{"value":2},{"value":746534},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":6324825488},{"value":5685209968},{"value":0},{"value":6324825352},{"value":5685209816},{"value":5685209888},{"value":5685209808},{"value":6324825488},{"value":5685209888},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6312993596},"cpsr":{"value":1610616832},"fp":{"value":6324825200},"sp":{"value":6324819872},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068518,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6325393424},{"value":128},{"value":6325393392},{"value":365},{"value":18446744073709551125},{"value":5678672624},{"value":2},{"value":0},{"value":2},{"value":37673},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":6325398928},{"value":5678672528},{"value":0},{"value":6325398792},{"value":5685240072},{"value":5685240144},{"value":5685240064},{"value":6325398928},{"value":5685240144},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6312993596},"cpsr":{"value":1610616832},"fp":{"value":6325398640},"sp":{"value":6325393312},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068519,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6325966864},{"value":128},{"value":6325966832},{"value":0},{"value":0},{"value":5678672896},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":6325972368},{"value":5678672800},{"value":0},{"value":6325972232},{"value":5678672376},{"value":5678672448},{"value":5678672368},{"value":6325972368},{"value":5678672448},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6312993596},"cpsr":{"value":1610616832},"fp":{"value":6325972080},"sp":{"value":6325966752},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068532,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":865792},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998958},{"value":6348385784},{"value":0},{"value":11520},{"value":49478023261442},{"value":49478023261442},{"value":11520},{"value":0},{"value":49478023261440},{"value":305},{"value":8575309072},{"value":0},{"value":5691653656},{"value":5691653720},{"value":6348386528},{"value":299998958},{"value":0},{"value":865792},{"value":866561},{"value":866816},{"value":4294966381},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6348385904},"sp":{"value":6348385760},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":1130452,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068533,"name":"HighResolutionTimerThread","threadState":{"x":[{"value":260},{"value":0},{"value":512},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":6348959240},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5691654744},{"value":5691654808},{"value":6348959968},{"value":0},{"value":0},{"value":512},{"value":513},{"value":768},{"value":6348959465},{"value":6348959481}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6348959360},"sp":{"value":6348959216},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1019852,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068535,"name":"ContentsListsThread","threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":0},{"value":494998958},{"value":6349532664},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14529071992},{"value":14529072056},{"value":6349533408},{"value":494998958},{"value":0},{"value":256},{"value":45313},{"value":45568},{"value":495},{"value":1756052818289}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6349532784},"sp":{"value":6349532640},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":777552,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068536,"name":"Kick Analysis Thread","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":100000000},{"value":0},{"value":0},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":6350104728},{"value":0},{"value":0},{"value":72057602596210409,"symbolLocation":72057594037927937,"symbol":"OBJC_CLASS_$___NSCFString"},{"value":8558282472,"symbolLocation":0,"symbol":"OBJC_CLASS_$___NSCFString"},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":6350105776},{"value":14556246312,"symbolLocation":160,"symbol":"BinaryData::originalFilenames"},{"value":14555953320},{"value":14529077000},{"value":246},{"value":14529079016},{"value":0},{"value":14555953240},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":6350103728},"sp":{"value":6350103680},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":146},{"imageOffset":3247740,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068537,"name":"Resources Store","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":49999958},{"value":6385331704},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14529080752},{"value":14529080816},{"value":6385332448},{"value":49999958},{"value":0},{"value":0},{"value":226049},{"value":226304},{"value":14529087344},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6385331824},"sp":{"value":6385331680},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2403944,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068538,"name":"Convo Engines Store","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":4999959},{"value":6385905160},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14529100872},{"value":14529100936},{"value":6385905888},{"value":4999959},{"value":0},{"value":0},{"value":2051329},{"value":2051584},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6385905280},"sp":{"value":6385905136},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2404540,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068539,"name":"thumb cache","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":6386478584},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14543594304},{"value":14543594368},{"value":6386479328},{"value":499999958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":500},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6386478704},"sp":{"value":6386478560},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":777552,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068540,"name":"ContentsListsThread","threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":0},{"value":495998958},{"value":6387052024},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14543595800},{"value":14543595864},{"value":6387052768},{"value":495998958},{"value":0},{"value":256},{"value":50433},{"value":50688},{"value":496},{"value":1756052817851}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6387052144},"sp":{"value":6387052000},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":777552,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068543,"name":"HighResolutionTimerThread","threadState":{"x":[{"value":316},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":993624},{"value":6387625352},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105553867589048},{"value":105553867589112},{"value":6387626208},{"value":993624},{"value":0},{"value":0},{"value":12102657},{"value":12102912},{"value":6387625705},{"value":6387625721}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6387625472},"sp":{"value":6387625328},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":1019676,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068544,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":6388198952},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":6441400120},{"value":6441400184},{"value":6388199648},{"value":1999958},{"value":0},{"value":0},{"value":5416705},{"value":5416960},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6388199072},"sp":{"value":6388198928},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068545,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999959},{"value":6388772392},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13861390648},{"value":13861390712},{"value":6388773088},{"value":1999959},{"value":0},{"value":0},{"value":5413121},{"value":5413376},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6388772512},"sp":{"value":6388772368},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068546,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999959},{"value":6389345832},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14521846072},{"value":14521846136},{"value":6389346528},{"value":1999959},{"value":0},{"value":0},{"value":5413377},{"value":5413632},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6389345952},"sp":{"value":6389345808},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068547,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":6389919272},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14579845432},{"value":14579845496},{"value":6389919968},{"value":1999958},{"value":0},{"value":0},{"value":5413889},{"value":5414144},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6389919392},"sp":{"value":6389919248},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068548,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1998959},{"value":6390492712},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5720912184},{"value":5720912248},{"value":6390493408},{"value":1998959},{"value":0},{"value":0},{"value":5414401},{"value":5414656},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6390492832},"sp":{"value":6390492688},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068551,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":6391066152},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5666486072},{"value":5666486136},{"value":6391066848},{"value":1999958},{"value":0},{"value":0},{"value":5412353},{"value":5412608},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6391066272},"sp":{"value":6391066128},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068552,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":6391639672},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5687238760},{"value":5687238712},{"value":6391640288},{"value":499999000},{"value":0},{"value":0},{"value":24065},{"value":24320},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6391639792},"sp":{"value":6391639648},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068553,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":6418886264},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5702800040},{"value":5702799992},{"value":6418886880},{"value":500000000},{"value":0},{"value":0},{"value":24065},{"value":24320},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6418886384},"sp":{"value":6418886240},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068554,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":6419459704},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5702800520},{"value":5702800472},{"value":6419460320},{"value":500000000},{"value":0},{"value":0},{"value":24065},{"value":24320},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6419459824},"sp":{"value":6419459680},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068555,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":6420033144},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5702801000},{"value":5702800952},{"value":6420033760},{"value":499999000},{"value":0},{"value":0},{"value":24065},{"value":24320},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6420033264},"sp":{"value":6420033120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068556,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":6420606584},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5702801480},{"value":5702801432},{"value":6420607200},{"value":499999000},{"value":0},{"value":0},{"value":24065},{"value":24320},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6420606704},"sp":{"value":6420606560},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068557,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":6421180024},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5702801960},{"value":5702801912},{"value":6421180640},{"value":500000000},{"value":0},{"value":0},{"value":24065},{"value":24320},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6421180144},"sp":{"value":6421180000},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068558,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":6421753464},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5702802440},{"value":5702802392},{"value":6421754080},{"value":499999000},{"value":0},{"value":0},{"value":24065},{"value":24320},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6421753584},"sp":{"value":6421753440},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068559,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":6422326904},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5702802920},{"value":5702802872},{"value":6422327520},{"value":500000000},{"value":0},{"value":0},{"value":24065},{"value":24320},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6422327024},"sp":{"value":6422326880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068560,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":6422900344},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5702803400},{"value":5702803352},{"value":6422900960},{"value":500000000},{"value":0},{"value":0},{"value":24065},{"value":24320},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6422900464},"sp":{"value":6422900320},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068561,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":6423473784},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5702803880},{"value":5702803832},{"value":6423474400},{"value":499999000},{"value":0},{"value":0},{"value":24065},{"value":24320},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6423473904},"sp":{"value":6423473760},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068562,"frames":[{"imageOffset":3328,"symbol":"mach_wait_until","symbolLocation":8,"imageIndex":139},{"imageOffset":479004,"symbol":"MPDelayUntil","symbolLocation":20,"imageIndex":147},{"imageOffset":3838128,"imageIndex":13},{"imageOffset":4284548,"imageIndex":13},{"imageOffset":3837264,"imageIndex":13},{"imageOffset":476764,"symbol":"PrivateMPEntryPoint","symbolLocation":60,"imageIndex":147},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":0},{"value":6484253540630},{"value":18446724588040846973},{"value":68719460488},{"value":0},{"value":160},{"value":0},{"value":0},{"value":8558342144,"symbolLocation":32,"symbol":"FSNodeStorageInitUniverseCallbacks.sFSNodeServerCallbacks"},{"value":14666475971070066747},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":18446744073709551526},{"value":8575311488},{"value":0},{"value":1},{"value":5691782304},{"value":5691783120},{"value":14667546636},{"value":0},{"value":0},{"value":0},{"value":14670653317},{"value":5691783124},{"value":14667655468}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6775537436},"cpsr":{"value":1610616832},"fp":{"value":6424047248},"sp":{"value":6424047248},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859904},"far":{"value":0}}},{"id":6068567,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28940,"symbol":"_pthread_cond_wait","symbolLocation":1028,"imageIndex":140},{"imageOffset":659548,"symbol":"TSWaitOnConditionTimedRelative","symbolLocation":32,"imageIndex":147},{"imageOffset":472468,"symbol":"MPWaitForEvent","symbolLocation":208,"imageIndex":147},{"imageOffset":3836672,"imageIndex":13},{"imageOffset":4714744,"imageIndex":13},{"imageOffset":3837264,"imageIndex":13},{"imageOffset":476764,"symbol":"PrivateMPEntryPoint","symbolLocation":60,"imageIndex":147},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":16896},{"value":0},{"value":0},{"value":160},{"value":0},{"value":250000000},{"value":44801},{"value":0},{"value":1024},{"value":4398046512130},{"value":4398046512130},{"value":1024},{"value":0},{"value":4398046512128},{"value":305},{"value":8575309072},{"value":0},{"value":8519250856,"symbolLocation":0,"symbol":"_MP_AsyncTermGuard"},{"value":105553289864904},{"value":1},{"value":250000000},{"value":0},{"value":16896},{"value":44801},{"value":45056},{"value":105554149219280},{"value":5691855752}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131276},"cpsr":{"value":2684358656},"fp":{"value":13846253008},"sp":{"value":13846252864},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068587,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":5355872,"imageIndex":13},{"imageOffset":5363136,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":6912},{"value":0},{"value":0},{"value":160},{"value":4},{"value":999999959},{"value":14547447400},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14519464576},{"value":14519464416},{"value":14547448032},{"value":999999959},{"value":4},{"value":6912},{"value":8449},{"value":8704},{"value":9223372036854775},{"value":1082081025128750}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14547447520},"sp":{"value":14547447376},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068595,"name":"PerformanceManagers","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":1000000},{"value":0},{"value":0},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":2},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":14575988544},{"value":15134312856},{"value":1000000},{"value":105553446292728},{"value":105553446292728},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":14575988512},"sp":{"value":14575988464},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":146},{"imageOffset":12872504,"imageIndex":15},{"imageOffset":16335680,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068596,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":3230692,"imageIndex":15},{"imageOffset":3258484,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":14620011896},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15006742240},{"value":15006742184},{"value":14620012768},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":15132412032,"symbolLocation":9480,"symbol":"v3_tls_feature"},{"value":15132411904,"symbolLocation":9352,"symbol":"v3_tls_feature"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14620012016},"sp":{"value":14620011872},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068627,"name":"AsyncPresetLoader","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":14648109768},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14519339136},{"value":14519339200},{"value":14648111328},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":14648110552},{"value":14648110288}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14648109888},"sp":{"value":14648109744},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":2597116,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068629,"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":146},{"imageOffset":130872,"symbol":"std::__1::this_thread::sleep_for(std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&)","symbolLocation":84,"imageIndex":143},{"imageOffset":1736456,"imageIndex":17},{"imageOffset":1737308,"imageIndex":17},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":10000000},{"value":52},{"value":0},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":16387},{"value":17},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":14761357088},{"value":14761357088},{"value":14980322344},{"value":1000000},{"value":9223372036000},{"value":9223372036854775807},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":1610616832},"fp":{"value":14761357072},"sp":{"value":14761357024},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}}},{"id":6068631,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147483111129088000},{"value":499999875},{"value":68719460488},{"value":18446744073651455046},{"value":6},{"value":10},{"value":0},{"value":499999875},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6484256276936},{"value":105553612443536},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":14761930256},"sp":{"value":14761930224},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":145},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":145},{"imageOffset":656652,"imageIndex":18},{"imageOffset":437112,"imageIndex":18},{"imageOffset":506112,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068632,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14762498064},{"value":128},{"value":14762498032},{"value":365},{"value":18446744073709551125},{"value":14546279072},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":346779},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":14762503568},{"value":14546278976},{"value":0},{"value":14762503432},{"value":14546242040},{"value":14546242112},{"value":14546242032},{"value":14762503568},{"value":14546242112},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":15135798804},"cpsr":{"value":1610616832},"fp":{"value":14762503280},"sp":{"value":14762497952},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068633,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14763071504},{"value":128},{"value":14763071472},{"value":365},{"value":18446744073709551125},{"value":14519483872},{"value":2},{"value":0},{"value":2},{"value":583713},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":14763077008},{"value":14519483776},{"value":0},{"value":14763076872},{"value":14519305208},{"value":14519305280},{"value":14519305200},{"value":14763077008},{"value":14519305280},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":15135798804},"cpsr":{"value":1610616832},"fp":{"value":14763076720},"sp":{"value":14763071392},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068636,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14763644944},{"value":128},{"value":14763644912},{"value":365},{"value":18446744073709551125},{"value":14519540768},{"value":2},{"value":0},{"value":2},{"value":37444},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":14763650448},{"value":14519540672},{"value":0},{"value":14763650312},{"value":14519538888},{"value":14519538960},{"value":14519538880},{"value":14763650448},{"value":14519538960},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":15135798804},"cpsr":{"value":1610616832},"fp":{"value":14763650160},"sp":{"value":14763644832},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068637,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15075956752},{"value":128},{"value":15075956720},{"value":0},{"value":0},{"value":14546280032},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":15075962256},{"value":14546279936},{"value":0},{"value":15075962120},{"value":14519540168},{"value":14519540240},{"value":14519540160},{"value":15075962256},{"value":14519540240},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":15135798804},"cpsr":{"value":1610616832},"fp":{"value":15075961968},"sp":{"value":15075956640},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068640,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7424},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":15078026872},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14546222008},{"value":14546221960},{"value":15078027488},{"value":499999000},{"value":0},{"value":7424},{"value":22529},{"value":22784},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15078026992},"sp":{"value":15078026848},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068641,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7936},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":15078600312},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14546222488},{"value":14546222440},{"value":15078600928},{"value":500000000},{"value":0},{"value":7936},{"value":23041},{"value":23296},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15078600432},"sp":{"value":15078600288},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068642,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7936},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":15079173752},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14546225208},{"value":14546225160},{"value":15079174368},{"value":500000000},{"value":0},{"value":7936},{"value":23041},{"value":23296},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15079173872},"sp":{"value":15079173728},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068643,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7936},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":15079747192},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14546225688},{"value":14546225640},{"value":15079747808},{"value":500000000},{"value":0},{"value":7936},{"value":23041},{"value":23296},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15079747312},"sp":{"value":15079747168},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068644,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7936},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":15080320632},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14546232568},{"value":14546232520},{"value":15080321248},{"value":499999000},{"value":0},{"value":7936},{"value":23041},{"value":23296},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15080320752},"sp":{"value":15080320608},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068645,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7936},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":15080894072},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14546233048},{"value":14546233000},{"value":15080894688},{"value":500000000},{"value":0},{"value":7936},{"value":23041},{"value":23296},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15080894192},"sp":{"value":15080894048},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068646,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7936},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":15081467512},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14546235448},{"value":14546235400},{"value":15081468128},{"value":499999000},{"value":0},{"value":7936},{"value":23041},{"value":23296},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15081467632},"sp":{"value":15081467488},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068647,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7936},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":15082040952},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14546235928},{"value":14546235880},{"value":15082041568},{"value":500000000},{"value":0},{"value":7936},{"value":23041},{"value":23296},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15082041072},"sp":{"value":15082040928},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068648,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7936},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":15082614392},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14546238648},{"value":14546238600},{"value":15082615008},{"value":500000000},{"value":0},{"value":7936},{"value":23041},{"value":23296},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15082614512},"sp":{"value":15082614368},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068649,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":7936},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":15091658360},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14546239128},{"value":14546239080},{"value":15091658976},{"value":500000000},{"value":0},{"value":7936},{"value":23041},{"value":23296},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15091658480},"sp":{"value":15091658336},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068650,"frames":[{"imageOffset":3328,"symbol":"mach_wait_until","symbolLocation":8,"imageIndex":139},{"imageOffset":479004,"symbol":"MPDelayUntil","symbolLocation":20,"imageIndex":147},{"imageOffset":3836008,"imageIndex":19},{"imageOffset":4282504,"imageIndex":19},{"imageOffset":3835144,"imageIndex":19},{"imageOffset":476764,"symbol":"PrivateMPEntryPoint","symbolLocation":60,"imageIndex":147},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":14},{"value":6484253560434},{"value":18446724588040846973},{"value":68719460488},{"value":0},{"value":160},{"value":0},{"value":0},{"value":8558342144,"symbolLocation":32,"symbol":"FSNodeStorageInitUniverseCallbacks.sFSNodeServerCallbacks"},{"value":14666475971070066747},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":18446744073709551526},{"value":8575311488},{"value":0},{"value":1},{"value":14646464784},{"value":14646465368},{"value":15362034268},{"value":0},{"value":0},{"value":0},{"value":15365105317},{"value":14646465372},{"value":15362142897}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6775537436},"cpsr":{"value":1610616832},"fp":{"value":15092231824},"sp":{"value":15092231824},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859904},"far":{"value":0}}},{"id":6068659,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":5350472,"imageIndex":19},{"imageOffset":5357736,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":1536},{"value":0},{"value":0},{"value":160},{"value":4},{"value":999999958},{"value":6160445032},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14642418016},{"value":14642417856},{"value":6160445664},{"value":999999958},{"value":4},{"value":1536},{"value":3073},{"value":3328},{"value":9223372036854775},{"value":1082082805962583}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6160445152},"sp":{"value":6160445008},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068665,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":140}],"threadState":{"x":[{"value":6170193920},{"value":143891},{"value":6169657344},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":6170193920},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6068666,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":140}],"threadState":{"x":[{"value":6170767360},{"value":145675},{"value":6170230784},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":6170767360},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6068667,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":140}],"threadState":{"x":[{"value":6308786176},{"value":5127},{"value":6308249600},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":6308786176},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6068668,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":140}],"threadState":{"x":[{"value":6311079936},{"value":32523},{"value":6310543360},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":6311079936},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6068682,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":14757211656},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106927992},{"value":15106928056},{"value":14757212384},{"value":499999958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":15106927272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14757211776},"sp":{"value":14757211632},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068683,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998875},{"value":15092805128},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106928472},{"value":15106928536},{"value":15092805856},{"value":499998875},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":15106927272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15092805248},"sp":{"value":15092805104},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068684,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998959},{"value":15108435464},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106928952},{"value":15106929016},{"value":15108436192},{"value":499998959},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":15106927272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15108435584},"sp":{"value":15108435440},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068685,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":15109008904},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106929432},{"value":15106929496},{"value":15109009632},{"value":499999958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":15106927272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15109009024},"sp":{"value":15109008880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068686,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15109582344},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106929912},{"value":15106929976},{"value":15109583072},{"value":499998958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":15106927272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15109582464},"sp":{"value":15109582320},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068687,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999959},{"value":15111532040},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106930392},{"value":15106930456},{"value":15111532768},{"value":499999959},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":15106927272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15111532160},"sp":{"value":15111532016},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068688,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998834},{"value":15146298888},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106930872},{"value":15106930936},{"value":15146299616},{"value":499998834},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":15106927272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15146299008},"sp":{"value":15146298864},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068689,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15146872328},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106931352},{"value":15106931416},{"value":15146873056},{"value":499998958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":15106927272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15146872448},"sp":{"value":15146872304},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068690,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":15147445768},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106931832},{"value":15106931896},{"value":15147446496},{"value":499999958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":15106927272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15147445888},"sp":{"value":15147445744},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068691,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998917},{"value":15148019208},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106932312},{"value":15106932376},{"value":15148019936},{"value":499998917},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":15106927272},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15148019328},"sp":{"value":15148019184},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068692,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999959},{"value":15148592648},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14577790632},{"value":14577790696},{"value":15148593376},{"value":499999959},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":14577788776},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15148592768},"sp":{"value":15148592624},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068693,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":15149166088},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14577875320},{"value":14577875384},{"value":15149166816},{"value":499999958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":14577788776},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15149166208},"sp":{"value":15149166064},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068694,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999959},{"value":15149739528},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14577875800},{"value":14577875864},{"value":15149740256},{"value":499999959},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":14577788776},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15149739648},"sp":{"value":15149739504},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068695,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":15335960072},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14577876280},{"value":14577876344},{"value":15335960800},{"value":499999958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":14577788776},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15335960192},"sp":{"value":15335960048},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068696,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":15336533512},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14577876760},{"value":14577876824},{"value":15336534240},{"value":499999958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":14577788776},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15336533632},"sp":{"value":15336533488},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068697,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998917},{"value":15337106952},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14577877240},{"value":14577877304},{"value":15337107680},{"value":499998917},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":14577788776},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15337107072},"sp":{"value":15337106928},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068698,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999834},{"value":15337680392},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14577877720},{"value":14577877784},{"value":15337681120},{"value":499999834},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":14577788776},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15337680512},"sp":{"value":15337680368},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068699,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":15338253832},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14577878200},{"value":14577878264},{"value":15338254560},{"value":499999958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":14577788776},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15338253952},"sp":{"value":15338253808},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068700,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499953958},{"value":15338827272},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14577878680},{"value":14577878744},{"value":15338828000},{"value":499953958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":14577788776},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15338827392},"sp":{"value":15338827248},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068701,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":15339400712},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14577879160},{"value":14577879224},{"value":15339401440},{"value":499999958},{"value":0},{"value":0},{"value":21505},{"value":21760},{"value":14577788776},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15339400832},"sp":{"value":15339400688},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068703,"name":"AudioRecorder_thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998833},{"value":15339974152},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15589290232},{"value":15589290296},{"value":15339974880},{"value":499998833},{"value":0},{"value":0},{"value":21249},{"value":21504},{"value":500},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15339974272},"sp":{"value":15339974128},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4064104,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068704,"name":"com.u-he.Diva.voice-renderer 0","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15340547512},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898085096},{"value":14898085160},{"value":15340548320},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15340547632},"sp":{"value":15340547488},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068705,"name":"com.u-he.Diva.voice-renderer 1","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15342267832},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898085208},{"value":14898085272},{"value":15342268640},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15342267952},"sp":{"value":15342267808},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068706,"name":"com.u-he.Diva.voice-renderer 2","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15342841272},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898085320},{"value":14898085384},{"value":15342842080},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15342841392},"sp":{"value":15342841248},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068707,"name":"com.u-he.Diva.voice-renderer 3","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15343414712},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898085432},{"value":14898085496},{"value":15343415520},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15343414832},"sp":{"value":15343414688},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068708,"name":"com.u-he.Diva.voice-renderer 4","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15429643704},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898085544},{"value":14898085608},{"value":15429644512},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15429643824},"sp":{"value":15429643680},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068709,"name":"com.u-he.Diva.voice-renderer 5","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15430217144},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898085656},{"value":14898085720},{"value":15430217952},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15430217264},"sp":{"value":15430217120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068710,"name":"com.u-he.Diva.voice-renderer 6","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15430790584},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898085768},{"value":14898085832},{"value":15430791392},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15430790704},"sp":{"value":15430790560},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068711,"name":"com.u-he.Diva.voice-renderer 7","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15431364024},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898085880},{"value":14898085944},{"value":15431364832},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15431364144},"sp":{"value":15431364000},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068712,"name":"com.u-he.Diva.voice-renderer 8","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15434395064},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898085992},{"value":14898086056},{"value":15434395872},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15434395184},"sp":{"value":15434395040},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068713,"name":"com.u-he.Diva.voice-renderer 9","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15434968504},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898086104},{"value":14898086168},{"value":15434969312},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15434968624},"sp":{"value":15434968480},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068714,"name":"com.u-he.Diva.voice-renderer 10","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15580392888},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898086216},{"value":14898086280},{"value":15580393696},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15580393008},"sp":{"value":15580392864},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068715,"name":"com.u-he.Diva.voice-renderer 11","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15580966328},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898086328},{"value":14898086392},{"value":15580967136},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15580966448},"sp":{"value":15580966304},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068716,"name":"com.u-he.Diva.voice-renderer 12","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15581539768},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898086440},{"value":14898086504},{"value":15581540576},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15581539888},"sp":{"value":15581539744},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068717,"name":"com.u-he.Diva.voice-renderer 13","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15582113208},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898086552},{"value":14898086616},{"value":15582114016},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15582113328},"sp":{"value":15582113184},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068718,"name":"com.u-he.Diva.voice-renderer 14","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15582686648},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898086664},{"value":14898086728},{"value":15582687456},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15582686768},"sp":{"value":15582686624},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068719,"name":"com.u-he.Diva.voice-renderer 15","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15583260088},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14898086776},{"value":14898086840},{"value":15583260896},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15583260208},"sp":{"value":15583260064},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068742,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":2312696,"imageIndex":24},{"imageOffset":2329356,"imageIndex":24},{"imageOffset":2329188,"imageIndex":24},{"imageOffset":2329008,"imageIndex":24},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":1500},{"value":0},{"value":15583832936},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14643883976},{"value":14643884152},{"value":15583834336},{"value":0},{"value":1500},{"value":256},{"value":257},{"value":512},{"value":15611590656},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15583833056},"sp":{"value":15583832912},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068752,"name":"Internet Monitor","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":50000000},{"value":0},{"value":18446744069415224320},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":1099511627776},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":15638089488},{"value":0},{"value":105553175060080},{"value":16334796856},{"value":16334796288},{"value":3435973837},{"value":15638089496},{"value":0},{"value":16334801120}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":15638087888},"sp":{"value":15638087840},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":146},{"imageOffset":1214152,"symbol":"PSInternet::run()","symbolLocation":46108,"imageIndex":27},{"imageOffset":2449108,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":27},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068753,"name":"thumb cache","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15640063512},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16332764448},{"value":16332764512},{"value":15640064224},{"value":499998958},{"value":0},{"value":0},{"value":20737},{"value":20992},{"value":274877907},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15640063632},"sp":{"value":15640063488},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":2379828,"symbol":"juce::WaitableEvent::wait(int) const","symbolLocation":152,"imageIndex":27},{"imageOffset":2378892,"symbol":"juce::TimeSliceThread::run()","symbolLocation":128,"imageIndex":27},{"imageOffset":2449108,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":27},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068756,"name":"com.apple.NSURLConnectionLoader","threadState":{"x":[{"value":268451845},{"value":21592279046},{"value":8589934592},{"value":1083031838261248},{"value":0},{"value":1083031838261248},{"value":2},{"value":4294967295},{"value":0},{"value":17179869184},{"value":0},{"value":2},{"value":0},{"value":0},{"value":252163},{"value":0},{"value":18446744073709551569},{"value":8575310952},{"value":0},{"value":4294967295},{"value":2},{"value":1083031838261248},{"value":0},{"value":1083031838261248},{"value":15657672008},{"value":8589934592},{"value":21592279046},{"value":18446744073709550527},{"value":4412409862,"symbolLocation":421982,"symbol":"NLomPathUtils::KTracksStr"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6712935328},"cpsr":{"value":4096},"fp":{"value":15657671856},"sp":{"value":15657671776},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859700},"far":{"value":0}},"frames":[{"imageOffset":3124,"symbol":"mach_msg2_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":78752,"symbol":"mach_msg2_internal","symbolLocation":76,"imageIndex":139},{"imageOffset":38756,"symbol":"mach_msg_overwrite","symbolLocation":484,"imageIndex":139},{"imageOffset":4008,"symbol":"mach_msg","symbolLocation":24,"imageIndex":139},{"imageOffset":511164,"symbol":"__CFRunLoopServiceMachPort","symbolLocation":160,"imageIndex":134},{"imageOffset":505304,"symbol":"__CFRunLoopRun","symbolLocation":1208,"imageIndex":134},{"imageOffset":502424,"symbol":"CFRunLoopRunSpecific","symbolLocation":572,"imageIndex":134},{"imageOffset":2441972,"symbol":"+[__CFN_CoreSchedulingSetRunnable _run:]","symbolLocation":416,"imageIndex":148},{"imageOffset":342952,"symbol":"__NSThread__start__","symbolLocation":732,"imageIndex":133},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068773,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147482574258176000},{"value":499999750},{"value":68719460488},{"value":18446744073700999238},{"value":6},{"value":10},{"value":0},{"value":499999750},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6484257924377},{"value":105553748565808},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":15433494032},"sp":{"value":15433494000},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":145},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":145},{"imageOffset":654644,"imageIndex":29},{"imageOffset":435104,"imageIndex":29},{"imageOffset":504104,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068774,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15659407376},{"value":128},{"value":15659407344},{"value":365},{"value":18446744073709551125},{"value":15639368704},{"value":2},{"value":0},{"value":2},{"value":352994},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":15659412880},{"value":15639368608},{"value":0},{"value":15659412744},{"value":15639361256},{"value":15639361328},{"value":15639361248},{"value":15659412880},{"value":15639361328},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16535039548},"cpsr":{"value":1610616832},"fp":{"value":15659412592},"sp":{"value":15659407264},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068775,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15790069776},{"value":128},{"value":15790069744},{"value":365},{"value":18446744073709551125},{"value":15639365344},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":160128},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":15790075280},{"value":15639365248},{"value":0},{"value":15790075144},{"value":15639365096},{"value":15639365168},{"value":15639365088},{"value":15790075280},{"value":15639365168},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16535039548},"cpsr":{"value":1610616832},"fp":{"value":15790074992},"sp":{"value":15790069664},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068784,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15792674832},{"value":128},{"value":15792674800},{"value":365},{"value":18446744073709551125},{"value":14621078560},{"value":2},{"value":0},{"value":2},{"value":38397},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":15792680336},{"value":14621078464},{"value":0},{"value":15792680200},{"value":15639384088},{"value":15639384160},{"value":15639384080},{"value":15792680336},{"value":15639384160},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16535039548},"cpsr":{"value":1610616832},"fp":{"value":15792680048},"sp":{"value":15792674720},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068785,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15921125392},{"value":128},{"value":15921125360},{"value":0},{"value":0},{"value":15639384336},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":15921130896},{"value":15639384240},{"value":0},{"value":15921130760},{"value":15432713000},{"value":15432713072},{"value":15432712992},{"value":15921130896},{"value":15432713072},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16535039548},"cpsr":{"value":1610616832},"fp":{"value":15921130608},"sp":{"value":15921125280},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068791,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":51072,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":10},{"value":0},{"value":16200363624},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554163606080},{"value":105553565443984},{"value":16200364256},{"value":0},{"value":10},{"value":256},{"value":1025},{"value":1280},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16200363744},"sp":{"value":16200363600},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068819,"name":"jq-1","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15792107144},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164106624},{"value":105553642909648},{"value":15792107744},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15792107264},"sp":{"value":15792107120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068820,"name":"jq-10","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16469733000},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164111680},{"value":105553642913248},{"value":16469733600},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16469733120},"sp":{"value":16469732976},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068821,"name":"jq-2","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16534728328},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164111744},{"value":105553642913152},{"value":16534728928},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16534728448},"sp":{"value":16534728304},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068822,"name":"jq-9","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16563269256},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164111808},{"value":105553642913200},{"value":16563269856},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16563269376},"sp":{"value":16563269232},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068823,"name":"jq-8","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16613142152},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164111872},{"value":105553642913104},{"value":16613142752},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16613142272},"sp":{"value":16613142128},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068824,"name":"jq-3","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16692833928},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164111936},{"value":105553642913296},{"value":16692834528},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16692834048},"sp":{"value":16692833904},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068825,"name":"jq-4","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16693407368},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164112000},{"value":105553642913344},{"value":16693407968},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16693407488},"sp":{"value":16693407344},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068826,"name":"jq-7","threadState":{"x":[{"value":260},{"value":0},{"value":43776},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16693980808},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164112064},{"value":105553642913392},{"value":16693981408},{"value":0},{"value":0},{"value":43776},{"value":43777},{"value":44032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16693980928},"sp":{"value":16693980784},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068827,"name":"jq-6","threadState":{"x":[{"value":260},{"value":0},{"value":42496},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16694554248},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164112128},{"value":105553642913440},{"value":16694554848},{"value":0},{"value":0},{"value":42496},{"value":42497},{"value":42752},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16694554368},"sp":{"value":16694554224},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068828,"name":"jq-5","threadState":{"x":[{"value":260},{"value":0},{"value":43776},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16695127688},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164112192},{"value":105553642913488},{"value":16695128288},{"value":0},{"value":0},{"value":43776},{"value":43777},{"value":44032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16695127808},"sp":{"value":16695127664},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068831,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":2378476,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":92160},{"value":0},{"value":0},{"value":160},{"value":0},{"value":500000000},{"value":16752602696},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554163606656},{"value":105553565444512},{"value":16752603360},{"value":500000000},{"value":0},{"value":92160},{"value":107521},{"value":107776},{"value":1},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16752602816},"sp":{"value":16752602672},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068832,"name":"vpuptthd","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":999999000},{"value":16753176040},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554163605824},{"value":105553565443888},{"value":16753176800},{"value":999999000},{"value":0},{"value":0},{"value":9985},{"value":10240},{"value":16622055424},{"value":15966867672}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16753176160},"sp":{"value":16753176016},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":37604,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068833,"name":"tith","threadState":{"x":[{"value":260},{"value":0},{"value":296192},{"value":0},{"value":0},{"value":160},{"value":0},{"value":100000000},{"value":16753749512},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554164219904},{"value":105553565443936},{"value":16753750240},{"value":100000000},{"value":0},{"value":296192},{"value":350209},{"value":350464},{"value":4269867153},{"value":1116471296}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16753749632},"sp":{"value":16753749488},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":38968,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068835,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147482750351835136},{"value":499999791},{"value":68719460488},{"value":8646214},{"value":6},{"value":10},{"value":0},{"value":499999791},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6484255383757},{"value":105553745428544},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":16754322960},"sp":{"value":16754322928},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":145},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":145},{"imageOffset":665172,"imageIndex":31},{"imageOffset":445632,"imageIndex":31},{"imageOffset":514632,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068836,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16754890768},{"value":128},{"value":16754890736},{"value":365},{"value":18446744073709551125},{"value":16695870576},{"value":2},{"value":0},{"value":2},{"value":352142},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16754896272},{"value":16695870480},{"value":0},{"value":16754896136},{"value":16670912168},{"value":16670912240},{"value":16670912160},{"value":16754896272},{"value":16670912240},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16911619932},"cpsr":{"value":1610616832},"fp":{"value":16754895984},"sp":{"value":16754890656},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068837,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16755464208},{"value":128},{"value":16755464176},{"value":365},{"value":18446744073709551125},{"value":16659614960},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":53346},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16755469712},{"value":16659614864},{"value":0},{"value":16755469576},{"value":16659614712},{"value":16659614784},{"value":16659614704},{"value":16755469712},{"value":16659614784},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16911619932},"cpsr":{"value":1610616832},"fp":{"value":16755469424},"sp":{"value":16755464096},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068841,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16756611088},{"value":128},{"value":16756611056},{"value":365},{"value":18446744073709551125},{"value":16696112496},{"value":2},{"value":0},{"value":2},{"value":37793},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16756616592},{"value":16696112400},{"value":0},{"value":16756616456},{"value":16696111960},{"value":16696112032},{"value":16696111952},{"value":16756616592},{"value":16696112032},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16911619932},"cpsr":{"value":1610616832},"fp":{"value":16756616304},"sp":{"value":16756610976},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068842,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16757184528},{"value":128},{"value":16757184496},{"value":0},{"value":0},{"value":16696114208},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":16757190032},{"value":16696114112},{"value":0},{"value":16757189896},{"value":16696112248},{"value":16696112320},{"value":16696112240},{"value":16757190032},{"value":16696112320},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16911619932},"cpsr":{"value":1610616832},"fp":{"value":16757189744},"sp":{"value":16757184416},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068849,"name":"com.u-he.Diva.voice-renderer 0","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16756043192},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279635688},{"value":15279635752},{"value":16756044000},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16756043312},"sp":{"value":16756043168},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068850,"name":"com.u-he.Diva.voice-renderer 1","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16775589304},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279635800},{"value":15279635864},{"value":16775590112},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16775589424},"sp":{"value":16775589280},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068851,"name":"com.u-he.Diva.voice-renderer 2","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16776162744},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279635912},{"value":15279635976},{"value":16776163552},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16776162864},"sp":{"value":16776162720},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068852,"name":"com.u-he.Diva.voice-renderer 3","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16776736184},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279636024},{"value":15279636088},{"value":16776736992},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16776736304},"sp":{"value":16776736160},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068853,"name":"com.u-he.Diva.voice-renderer 4","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16923798968},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279636136},{"value":15279636200},{"value":16923799776},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16923799088},"sp":{"value":16923798944},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068854,"name":"com.u-he.Diva.voice-renderer 5","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16924372408},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279636248},{"value":15279636312},{"value":16924373216},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16924372528},"sp":{"value":16924372384},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068855,"name":"com.u-he.Diva.voice-renderer 6","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16924945848},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279636360},{"value":15279636424},{"value":16924946656},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16924945968},"sp":{"value":16924945824},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068856,"name":"com.u-he.Diva.voice-renderer 7","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16925519288},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279636472},{"value":15279636536},{"value":16925520096},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16925519408},"sp":{"value":16925519264},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068857,"name":"com.u-he.Diva.voice-renderer 8","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16926092728},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279636584},{"value":15279636648},{"value":16926093536},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16926092848},"sp":{"value":16926092704},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068858,"name":"com.u-he.Diva.voice-renderer 9","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16926666168},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279636696},{"value":15279636760},{"value":16926666976},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16926666288},"sp":{"value":16926666144},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068859,"name":"com.u-he.Diva.voice-renderer 10","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16927239608},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279636808},{"value":15279636872},{"value":16927240416},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16927239728},"sp":{"value":16927239584},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068860,"name":"com.u-he.Diva.voice-renderer 11","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16927813048},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279636920},{"value":15279636984},{"value":16927813856},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16927813168},"sp":{"value":16927813024},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068861,"name":"com.u-he.Diva.voice-renderer 12","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16928386488},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279637032},{"value":15279637096},{"value":16928387296},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16928386608},"sp":{"value":16928386464},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068862,"name":"com.u-he.Diva.voice-renderer 13","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16928959928},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279637144},{"value":15279637208},{"value":16928960736},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16928960048},"sp":{"value":16928959904},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068863,"name":"com.u-he.Diva.voice-renderer 14","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16929533368},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279637256},{"value":15279637320},{"value":16929534176},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16929533488},"sp":{"value":16929533344},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068864,"name":"com.u-he.Diva.voice-renderer 15","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16930106808},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15279637368},{"value":15279637432},{"value":16930107616},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16930106928},"sp":{"value":16930106784},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068866,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147483467611373568},{"value":499999958},{"value":68719460488},{"value":18446744073675517957},{"value":5},{"value":10},{"value":0},{"value":499999958},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6484254359169},{"value":105553745865568},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":16982814224},"sp":{"value":16982814192},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":145},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":145},{"imageOffset":653012,"imageIndex":32},{"imageOffset":433472,"imageIndex":32},{"imageOffset":502472,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068867,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16983382032},{"value":128},{"value":16983382000},{"value":365},{"value":18446744073709551125},{"value":16698521216},{"value":2},{"value":0},{"value":2},{"value":355169},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16983387536},{"value":16698521120},{"value":0},{"value":16983387400},{"value":16698517528},{"value":16698517600},{"value":16698517520},{"value":16983387536},{"value":16698517600},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17014187996},"cpsr":{"value":1610616832},"fp":{"value":16983387248},"sp":{"value":16983381920},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068868,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16983955472},{"value":128},{"value":16983955440},{"value":365},{"value":18446744073709551125},{"value":16691264592},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":510442},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16983960976},{"value":16691264496},{"value":0},{"value":16983960840},{"value":16691264344},{"value":16691264416},{"value":16691264336},{"value":16983960976},{"value":16691264416},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17014187996},"cpsr":{"value":1610616832},"fp":{"value":16983960688},"sp":{"value":16983955360},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068871,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16984528912},{"value":128},{"value":16984528880},{"value":365},{"value":18446744073709551125},{"value":16698527008},{"value":2},{"value":0},{"value":2},{"value":37522},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16984534416},{"value":16698526912},{"value":0},{"value":16984534280},{"value":16698526472},{"value":16698526544},{"value":16698526464},{"value":16984534416},{"value":16698526544},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17014187996},"cpsr":{"value":1610616832},"fp":{"value":16984534128},"sp":{"value":16984528800},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068872,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16985102352},{"value":128},{"value":16985102320},{"value":0},{"value":0},{"value":16698528736},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":16985107856},{"value":16698528640},{"value":0},{"value":16985107720},{"value":16698526760},{"value":16698526832},{"value":16698526752},{"value":16985107856},{"value":16698526832},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17014187996},"cpsr":{"value":1610616832},"fp":{"value":16985107568},"sp":{"value":16985102240},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068875,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147482037387264000},{"value":499999625},{"value":68719460488},{"value":18446744073428944966},{"value":6},{"value":10},{"value":0},{"value":499999625},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6484256376711},{"value":105553747091808},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":16985681424},"sp":{"value":16985681392},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":145},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":145},{"imageOffset":653740,"imageIndex":33},{"imageOffset":434200,"imageIndex":33},{"imageOffset":503200,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068876,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17013692432},{"value":128},{"value":17013692400},{"value":365},{"value":18446744073709551125},{"value":16730008496},{"value":2},{"value":0},{"value":2},{"value":353420},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17013697936},{"value":16730008400},{"value":0},{"value":17013697800},{"value":16729944776},{"value":16729944848},{"value":16729944768},{"value":17013697936},{"value":16729944848},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17064585908},"cpsr":{"value":1610616832},"fp":{"value":17013697648},"sp":{"value":17013692320},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068877,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17026275344},{"value":128},{"value":17026275312},{"value":365},{"value":18446744073709551125},{"value":16730880944},{"value":2},{"value":0},{"value":2},{"value":641836},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17026280848},{"value":16730880848},{"value":0},{"value":17026280712},{"value":16730880696},{"value":16730880768},{"value":16730880688},{"value":17026280848},{"value":16730880768},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17064585908},"cpsr":{"value":1610616832},"fp":{"value":17026280560},"sp":{"value":17026275232},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068880,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17026848784},{"value":128},{"value":17026848752},{"value":365},{"value":18446744073709551125},{"value":16730884096},{"value":2},{"value":0},{"value":2},{"value":37391},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":17026854288},{"value":16730884000},{"value":0},{"value":17026854152},{"value":16730027256},{"value":16730027328},{"value":16730027248},{"value":17026854288},{"value":16730027328},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17064585908},"cpsr":{"value":1610616832},"fp":{"value":17026854000},"sp":{"value":17026848672},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068881,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":17027422224},{"value":128},{"value":17027422192},{"value":0},{"value":0},{"value":16696120768},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":17027427728},{"value":16696120672},{"value":0},{"value":17027427592},{"value":16730027544},{"value":16730027616},{"value":16730027536},{"value":17027427728},{"value":16730027616},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17064585908},"cpsr":{"value":1610616832},"fp":{"value":17027427440},"sp":{"value":17027422112},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068896,"name":"splice event processor","threadState":{"x":[{"value":260},{"value":0},{"value":362496},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16982240696},{"value":0},{"value":2816},{"value":12094627908354},{"value":12094627908354},{"value":2816},{"value":0},{"value":12094627908352},{"value":305},{"value":8575309072},{"value":0},{"value":17320636512},{"value":17320636576},{"value":16982241504},{"value":0},{"value":0},{"value":362496},{"value":362497},{"value":362752},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16982240816},"sp":{"value":16982240672},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":3292068,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":108,"imageIndex":35},{"imageOffset":445788,"symbol":"SpliceEventProcessor::process_events_on_thread()","symbolLocation":128,"imageIndex":35},{"imageOffset":445620,"symbol":"SpliceEventProcessor::run()","symbolLocation":44,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068897,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":521216},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998916},{"value":17064029656},{"value":0},{"value":2560},{"value":10995116280322},{"value":10995116280322},{"value":2560},{"value":0},{"value":10995116280320},{"value":305},{"value":8575309072},{"value":0},{"value":16669563408},{"value":16669563472},{"value":17064030432},{"value":299998916},{"value":0},{"value":521216},{"value":521985},{"value":522240},{"value":4294967295},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17064029776},"sp":{"value":17064029632},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":3292216,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":256,"imageIndex":35},{"imageOffset":2954392,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":480,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068898,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":8819172,"symbol":"gpr_cv_wait","symbolLocation":132,"imageIndex":35},{"imageOffset":7848040,"symbol":"grpc_core::Executor::ThreadMain(void*)","symbolLocation":232,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":1792},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17098632696},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17365577216},{"value":17365577296},{"value":17098633440},{"value":0},{"value":0},{"value":1792},{"value":1793},{"value":2048},{"value":17480234400,"symbolLocation":0,"symbol":"vtable for grpc_core::ExecCtx"},{"value":6713168120,"symbolLocation":0,"symbol":"_tlv_get_addr"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17098632816},"sp":{"value":17098632672},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068899,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":8819172,"symbol":"gpr_cv_wait","symbolLocation":132,"imageIndex":35},{"imageOffset":7848040,"symbol":"grpc_core::Executor::ThreadMain(void*)","symbolLocation":232,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17173081592},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17365581312},{"value":17365581392},{"value":17173082336},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":17480234400,"symbolLocation":0,"symbol":"vtable for grpc_core::ExecCtx"},{"value":6713168120,"symbolLocation":0,"symbol":"_tlv_get_addr"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17173081712},"sp":{"value":17173081568},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068900,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":8819172,"symbol":"gpr_cv_wait","symbolLocation":132,"imageIndex":35},{"imageOffset":7916212,"symbol":"timer_thread(void*)","symbolLocation":724,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":23552},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17173655000},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17481190864,"symbolLocation":144,"symbol":"_MergedGlobals"},{"value":17481190768,"symbolLocation":48,"symbol":"_MergedGlobals"},{"value":17173655776},{"value":0},{"value":0},{"value":23552},{"value":23552},{"value":24064},{"value":9223372036854775807},{"value":17481216544,"symbolLocation":0,"symbol":"grpc_timer_check_trace"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17173655120},"sp":{"value":17173654976},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6068901,"name":"grpc communication thread","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":250000000},{"value":103},{"value":105553301603008},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":17174227944},{"value":24000000},{"value":418},{"value":2785167457},{"value":6713168120,"symbolLocation":0,"symbol":"_tlv_get_addr"},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17174228752},{"value":105554237985984},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17174228736},"sp":{"value":17174228688},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":146},{"imageOffset":3076872,"symbol":"juce::Thread::sleep(int)","symbolLocation":80,"imageIndex":35},{"imageOffset":436780,"symbol":"SpliceCommunication::run()","symbolLocation":124,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068902,"name":"audio loading thread","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":100000000},{"value":0},{"value":17477698348},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17174801088},{"value":264},{"value":17174801192},{"value":17320637544},{"value":17479844272,"symbolLocation":24,"symbol":"typeinfo for SpliceSuperPowered"},{"value":1},{"value":4294967295},{"value":18534831616},{"value":17174801368}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17174801072},"sp":{"value":17174801024},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":146},{"imageOffset":3076872,"symbol":"juce::Thread::sleep(int)","symbolLocation":80,"imageIndex":35},{"imageOffset":517744,"symbol":"SpliceSuperPowered::run()","symbolLocation":564,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068909,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":118528},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17453051304},{"value":0},{"value":1024},{"value":4398046512130},{"value":4398046512130},{"value":1024},{"value":0},{"value":4398046512128},{"value":305},{"value":8575309072},{"value":0},{"value":17371449392},{"value":17371449456},{"value":17453052128},{"value":0},{"value":0},{"value":118528},{"value":118529},{"value":118784},{"value":8192},{"value":17371450304}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17453051424},"sp":{"value":17453051280},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":245472,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068910,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17453624904},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17371450608},{"value":17371450672},{"value":17453625568},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17453625024},"sp":{"value":17453624880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068911,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17454198344},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17371463808},{"value":17371463872},{"value":17454199008},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17454198464},"sp":{"value":17454198320},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068912,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17454771784},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17371470232},{"value":17371470296},{"value":17454772448},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17454771904},"sp":{"value":17454771760},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068913,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":2727936},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17455345144},{"value":0},{"value":7424},{"value":31885837212930},{"value":31885837212930},{"value":7424},{"value":0},{"value":31885837212928},{"value":305},{"value":8575309072},{"value":0},{"value":17371455392},{"value":17371455456},{"value":17455345888},{"value":0},{"value":0},{"value":2727936},{"value":2727937},{"value":2728192},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17455345264},"sp":{"value":17455345120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068914,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":2727936},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17455918584},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17371461672},{"value":17371461736},{"value":17455919328},{"value":0},{"value":0},{"value":2727936},{"value":2727937},{"value":2728192},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17455918704},"sp":{"value":17455918560},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068915,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":118528},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17519799720},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18050348592},{"value":18050348656},{"value":17519800544},{"value":0},{"value":0},{"value":118528},{"value":118529},{"value":118784},{"value":8192},{"value":18050349504}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17519799840},"sp":{"value":17519799696},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":245472,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068916,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17520373320},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18050349808},{"value":18050349872},{"value":17520373984},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17520373440},"sp":{"value":17520373296},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068917,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17520946760},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18050363008},{"value":18050363072},{"value":17520947424},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17520946880},"sp":{"value":17520946736},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068918,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17521520200},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18050369432},{"value":18050369496},{"value":17521520864},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17521520320},"sp":{"value":17521520176},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068919,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":2727680},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17522093560},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18050354592},{"value":18050354656},{"value":17522094304},{"value":0},{"value":0},{"value":2727680},{"value":2727681},{"value":2727936},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17522093680},"sp":{"value":17522093536},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068920,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":2727680},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17522667000},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18050360872},{"value":18050360936},{"value":17522667744},{"value":0},{"value":0},{"value":2727680},{"value":2727681},{"value":2727936},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17522667120},"sp":{"value":17522666976},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":143},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068921,"name":"DiskTaskFIFO","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":10000000},{"value":24},{"value":19421018780,"symbolLocation":0,"symbol":"mp3d_g_arPower43short_new"},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":8352},{"value":2043},{"value":2045},{"value":3175627014},{"value":3173527813},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17523240720},{"value":17216961135462248175},{"value":120},{"value":1},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17523240704},"sp":{"value":17523240656},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":146},{"imageOffset":1868292,"imageIndex":39},{"imageOffset":695192,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068922,"name":"DiskTaskFIFO","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":50000000},{"value":16383},{"value":2},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":7744},{"value":2043},{"value":2045},{"value":1141371123},{"value":1139271895},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17523814160},{"value":17216961135462248175},{"value":120},{"value":1},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17523814144},"sp":{"value":17523814096},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":146},{"imageOffset":1868292,"imageIndex":39},{"imageOffset":695192,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6068931,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":8904508,"symbol":"spdlog::details::mpmc_blocking_queue<spdlog::details::async_msg>::dequeue_for(spdlog::details::async_msg&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l>>)","symbolLocation":136,"imageIndex":41},{"imageOffset":8904160,"symbol":"spdlog::details::thread_pool::process_next_msg_()","symbolLocation":128,"imageIndex":41},{"imageOffset":8903576,"symbol":"void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct>>, spdlog::details::thread_pool::thread_pool(unsigned long, unsigned long, std::__1::function<void ()>, std::__1::function<void ()>)::'lambda'()>>(void*)","symbolLocation":76,"imageIndex":41},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":61184},{"value":0},{"value":0},{"value":160},{"value":9},{"value":999999958},{"value":6167899336},{"value":0},{"value":4096},{"value":17592186048514},{"value":17592186048514},{"value":4096},{"value":0},{"value":17592186048512},{"value":305},{"value":8575309072},{"value":0},{"value":18349812392},{"value":18349812456},{"value":6167900384},{"value":999999958},{"value":9},{"value":61184},{"value":61953},{"value":62208},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6167899456},"sp":{"value":6167899312},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6069027,"name":"RT-InterProcessSenderThread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":144},{"value":0},{"value":0},{"value":18512588328},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18790482232},{"value":18790482344},{"value":18512589024},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18512588448},"sp":{"value":18512588304},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":21243592,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069040,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":177588,"imageIndex":11},{"imageOffset":176236,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":1703824,"imageIndex":11},{"imageOffset":175428,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18652917112},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18358486280},{"value":18358486360},{"value":18652917984},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18358486432},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18652917232},"sp":{"value":18652917088},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6069042,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":182412,"imageIndex":18},{"imageOffset":181060,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":1708648,"imageIndex":18},{"imageOffset":180252,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18653490552},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18350731224},{"value":18350731304},{"value":18653491424},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18350731376},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18653490672},"sp":{"value":18653490528},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6069043,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":180404,"imageIndex":29},{"imageOffset":179052,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":1706640,"imageIndex":29},{"imageOffset":178244,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18654063992},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":4985926744},{"value":4985926824},{"value":18654064864},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":4985926896},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18654064112},"sp":{"value":18654063968},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6069044,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":190932,"imageIndex":31},{"imageOffset":189580,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":1717168,"imageIndex":31},{"imageOffset":188772,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18654637432},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18350882904},{"value":18350882984},{"value":18654638304},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18350883056},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18654637552},"sp":{"value":18654637408},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6069045,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":178772,"imageIndex":32},{"imageOffset":177420,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":1705008,"imageIndex":32},{"imageOffset":176612,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18655210872},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18350067000},{"value":18350067080},{"value":18655211744},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18350067152},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18655210992},"sp":{"value":18655210848},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6069046,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":179500,"imageIndex":33},{"imageOffset":178148,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":1705736,"imageIndex":33},{"imageOffset":177340,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18655784312},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18357451336},{"value":18357451416},{"value":18655785184},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18357451488},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18655784432},"sp":{"value":18655784288},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6069047,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":336896},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299997959},{"value":19043839528},{"value":0},{"value":2048},{"value":8796093024258},{"value":8796093024258},{"value":2048},{"value":0},{"value":8796093024256},{"value":305},{"value":8575309072},{"value":0},{"value":4814043672},{"value":4814043736},{"value":19043840224},{"value":299997959},{"value":0},{"value":336896},{"value":337665},{"value":337920},{"value":270177054},{"value":4294966393}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19043839648},"sp":{"value":19043839504},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":10383204,"imageIndex":8},{"imageOffset":10887524,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069048,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":317952},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999958},{"value":19044412968},{"value":0},{"value":2816},{"value":12094627908354},{"value":12094627908354},{"value":2816},{"value":0},{"value":12094627908352},{"value":305},{"value":8575309072},{"value":0},{"value":14518022456},{"value":14518022520},{"value":19044413664},{"value":299999958},{"value":0},{"value":317952},{"value":318721},{"value":318976},{"value":270177060},{"value":4294966393}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19044413088},"sp":{"value":19044412944},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":16242972,"imageIndex":15},{"imageOffset":14264272,"imageIndex":15},{"imageOffset":16335680,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069049,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":25088},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999917},{"value":19044986376},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":15106744112},{"value":15106744176},{"value":19044987104},{"value":299999917},{"value":0},{"value":25088},{"value":25857},{"value":26112},{"value":4294966383},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19044986496},"sp":{"value":19044986352},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4343608,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069050,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":193536},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299997916},{"value":19045559848},{"value":0},{"value":3072},{"value":13194139536386},{"value":13194139536386},{"value":3072},{"value":0},{"value":13194139536384},{"value":305},{"value":8575309072},{"value":0},{"value":15584912536},{"value":15584912600},{"value":19045560544},{"value":299997916},{"value":0},{"value":193536},{"value":194305},{"value":194560},{"value":270177086},{"value":4294966393}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19045559968},"sp":{"value":19045559824},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":2379828,"symbol":"juce::WaitableEvent::wait(int) const","symbolLocation":152,"imageIndex":27},{"imageOffset":2659784,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":576,"imageIndex":27},{"imageOffset":2449108,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":27},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069051,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":241152},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998917},{"value":19046133288},{"value":0},{"value":3072},{"value":13194139536386},{"value":13194139536386},{"value":3072},{"value":0},{"value":13194139536384},{"value":305},{"value":8575309072},{"value":0},{"value":15639357160},{"value":15639357224},{"value":19046133984},{"value":299998917},{"value":0},{"value":241152},{"value":241921},{"value":242176},{"value":270177075},{"value":4294966393}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19046133408},"sp":{"value":19046133264},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":129456,"symbol":"juce::WaitableEvent::wait(int) const","symbolLocation":152,"imageIndex":28},{"imageOffset":238792,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":576,"imageIndex":28},{"imageOffset":158180,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":28},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069052,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":863744},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999917},{"value":19046706680},{"value":0},{"value":8960},{"value":38482906981122},{"value":38482906981122},{"value":8960},{"value":0},{"value":38482906981120},{"value":305},{"value":8575309072},{"value":0},{"value":15970944320},{"value":15970944384},{"value":19046707424},{"value":299999917},{"value":0},{"value":863744},{"value":864513},{"value":864768},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19046706800},"sp":{"value":19046706656},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":6922856,"imageIndex":30},{"imageOffset":7069944,"imageIndex":30},{"imageOffset":6924656,"imageIndex":30},{"imageOffset":7008940,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069054,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":19047280168},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":4554582840},{"value":4554582904},{"value":19047280864},{"value":1999958},{"value":0},{"value":0},{"value":3931649},{"value":3931904},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19047280288},"sp":{"value":19047280144},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069055,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":22272},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998958},{"value":19047853576},{"value":0},{"value":256},{"value":1099511628034},{"value":1099511628034},{"value":256},{"value":0},{"value":1099511628032},{"value":305},{"value":8575309072},{"value":0},{"value":17097939536},{"value":17097939600},{"value":19047854304},{"value":299998958},{"value":0},{"value":22272},{"value":22785},{"value":23040},{"value":4294967295},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19047853696},"sp":{"value":19047853552},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":1921980,"imageIndex":39},{"imageOffset":2114076,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069056,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":336640},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999959},{"value":19048426968},{"value":0},{"value":2816},{"value":12094627908354},{"value":12094627908354},{"value":2816},{"value":0},{"value":12094627908352},{"value":305},{"value":8575309072},{"value":0},{"value":18350039440},{"value":18350039504},{"value":19048427744},{"value":299999959},{"value":0},{"value":336640},{"value":337409},{"value":337664},{"value":18495225856,"symbolLocation":3368,"symbol":"pcre_stack_guard"},{"value":4294967295}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19048427088},"sp":{"value":19048426944},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":6800588,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":544,"imageIndex":41},{"imageOffset":7009884,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":476,"imageIndex":41},{"imageOffset":6803464,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":292,"imageIndex":41},{"imageOffset":6942472,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":41},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069057,"name":"tcp_listener","threadState":{"x":[{"value":4},{"value":0},{"value":19049000484},{"value":19049001053},{"value":18494000055},{"value":12},{"value":0},{"value":0},{"value":105554011335196},{"value":8558216920,"symbolLocation":0,"symbol":"_current_pid"},{"value":340},{"value":15936},{"value":2043},{"value":2045},{"value":2552248653},{"value":2550149456},{"value":30},{"value":8575317672},{"value":0},{"value":105553873500048},{"value":105554011335168},{"value":18494000190},{"value":18456147152,"symbolLocation":0,"symbol":"tcpconnection_handleconnectionthread(_tcpconnection*)"},{"value":18494000244},{"value":18494000136},{"value":0},{"value":0},{"value":18495541248,"symbolLocation":29640,"symbol":"midiseq_clk.av"},{"value":18495221760,"symbolLocation":0,"symbol":"s_live_mididriver"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":18458338160},"cpsr":{"value":1610616832},"fp":{"value":19049000656},"sp":{"value":19049000464},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894572},"far":{"value":0}},"frames":[{"imageOffset":37996,"symbol":"__accept","symbolLocation":8,"imageIndex":139},{"imageOffset":6742896,"symbol":"juce::StreamingSocket::waitForNextConnection() const","symbolLocation":92,"imageIndex":41},{"imageOffset":4551680,"symbol":"tcpconnection_listenthread(_tcpconnection*)","symbolLocation":168,"imageIndex":41},{"imageOffset":3546592,"symbol":"systhread_threadproc","symbolLocation":232,"imageIndex":41},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069062,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554155116416},{"value":28},{"value":0},{"value":85},{"value":38},{"value":65531},{"value":105554475827264},{"value":6069062},{"value":0},{"value":2},{"value":0},{"value":4059007478},{"value":230},{"value":8575308792},{"value":0},{"value":19062840320},{"value":5765344131},{"value":105554475827200},{"value":500},{"value":20},{"value":5763378880,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554304106704},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":5758323804},"cpsr":{"value":1610616832},"fp":{"value":6312800128},"sp":{"value":6312797936},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6069063,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554149345344},{"value":73},{"value":105553840673376},{"value":17},{"value":58},{"value":65531},{"value":105554613437488},{"value":6069063},{"value":0},{"value":2},{"value":0},{"value":3010224153},{"value":230},{"value":8575308792},{"value":0},{"value":6072876032},{"value":5765344131},{"value":105554613437424},{"value":500},{"value":665},{"value":5763378880,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554303804432},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":5758323804},"cpsr":{"value":1610616832},"fp":{"value":6326546304},"sp":{"value":6326544112},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6069064,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554154935360},{"value":28},{"value":0},{"value":2047},{"value":60},{"value":65531},{"value":105554543601904},{"value":6069064},{"value":0},{"value":2},{"value":0},{"value":3353952668},{"value":230},{"value":8575308792},{"value":0},{"value":16487458304},{"value":5765344131},{"value":105554543601840},{"value":500},{"value":20},{"value":5763378880,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554304156288},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":5758323804},"cpsr":{"value":1610616832},"fp":{"value":6344945536},"sp":{"value":6344943344},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6069065,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554154935360},{"value":28},{"value":0},{"value":2047},{"value":62},{"value":65531},{"value":105554543441760},{"value":6069065},{"value":0},{"value":2},{"value":0},{"value":3181990300},{"value":230},{"value":8575308792},{"value":0},{"value":6073044992},{"value":5765344131},{"value":105554543441696},{"value":500},{"value":20},{"value":5763378880,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554304157248},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":5758323804},"cpsr":{"value":1610616832},"fp":{"value":6345518976},"sp":{"value":6345516784},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6069066,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554148350400},{"value":28},{"value":0},{"value":0},{"value":64},{"value":65531},{"value":105554610410928},{"value":6069066},{"value":0},{"value":2},{"value":0},{"value":2477523063},{"value":230},{"value":8575308792},{"value":0},{"value":6431555584},{"value":5765344131},{"value":105554610410864},{"value":500},{"value":20},{"value":5763378880,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554306841856},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":5758323804},"cpsr":{"value":1610616832},"fp":{"value":6346092416},"sp":{"value":6346090224},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6069068,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554148350400},{"value":28},{"value":0},{"value":2047},{"value":66},{"value":65531},{"value":105554610396000},{"value":6069068},{"value":0},{"value":2},{"value":0},{"value":2305560695},{"value":230},{"value":8575308792},{"value":0},{"value":16487456768},{"value":5765344131},{"value":105554610395936},{"value":500},{"value":20},{"value":5763378880,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554306841280},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":5758323804},"cpsr":{"value":1610616832},"fp":{"value":6346665856},"sp":{"value":6346663664},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6069069,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554154935360},{"value":28},{"value":0},{"value":0},{"value":68},{"value":65531},{"value":105554610398240},{"value":6069069},{"value":0},{"value":2},{"value":0},{"value":3010027932},{"value":230},{"value":8575308792},{"value":0},{"value":18536270336},{"value":5765344131},{"value":105554610398176},{"value":500},{"value":20},{"value":5763378880,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554304157488},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":5758323804},"cpsr":{"value":1610616832},"fp":{"value":6347239296},"sp":{"value":6347237104},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6069073,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554148350400},{"value":28},{"value":0},{"value":56},{"value":70},{"value":65531},{"value":105554610414288},{"value":6069073},{"value":0},{"value":2},{"value":0},{"value":4281081975},{"value":230},{"value":8575308792},{"value":0},{"value":6436962304},{"value":5765344131},{"value":105554610414224},{"value":500},{"value":20},{"value":5763378880,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554306841520},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":5758323804},"cpsr":{"value":1610616832},"fp":{"value":6347812736},"sp":{"value":6347810544},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6069075,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":8819148,"symbol":"gpr_cv_wait","symbolLocation":108,"imageIndex":35},{"imageOffset":7916212,"symbol":"timer_thread(void*)","symbolLocation":724,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":260},{"value":0},{"value":23552},{"value":0},{"value":0},{"value":160},{"value":0},{"value":322709916},{"value":19173764568},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17481190864,"symbolLocation":144,"symbol":"_MergedGlobals"},{"value":17481190768,"symbolLocation":48,"symbol":"_MergedGlobals"},{"value":19173765344},{"value":322709916},{"value":0},{"value":23552},{"value":25344},{"value":25856},{"value":38453},{"value":17481216544,"symbolLocation":0,"symbol":"grpc_timer_check_trace"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":19173764688},"sp":{"value":19173764544},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6069087,"name":"caulk::deferred_logger","threadState":{"x":[{"value":14},{"value":105556234428311},{"value":0},{"value":19381383271},{"value":105556234428288},{"value":22},{"value":0},{"value":0},{"value":0},{"value":4294967295},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":18446744073709551580},{"value":8575313384},{"value":0},{"value":105554867793784},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904442056},"cpsr":{"value":2147487744},"fp":{"value":19381383040},"sp":{"value":19381383008},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":7368,"symbol":"caulk::semaphore::timed_wait(double)","symbolLocation":224,"imageIndex":142},{"imageOffset":7024,"symbol":"caulk::concurrent::details::worker_thread::run()","symbolLocation":32,"imageIndex":142},{"imageOffset":6212,"symbol":"void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*)","symbolLocation":96,"imageIndex":142},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069116,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":140}],"threadState":{"x":[{"value":19561836544},{"value":201735},{"value":19561299968},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":19561836544},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6069161,"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":64740672,"imageIndex":0},{"imageOffset":64615780,"imageIndex":0},{"imageOffset":64739196,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}],"threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":4418855532},{"value":32},{"value":0},{"value":35295918502798906},{"value":46},{"value":6309932768},{"value":18446744073708551616},{"value":1000000},{"value":2},{"value":0},{"value":0},{"value":2524971054},{"value":45},{"value":363},{"value":2524971054},{"value":0},{"value":4418855520},{"value":4418855520},{"value":4418856568},{"value":4418855512},{"value":4418855488},{"value":0},{"value":4418856556},{"value":4418855504},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4371733824},"cpsr":{"value":2684358656},"fp":{"value":6309932816},"sp":{"value":6309932736},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}}},{"id":6069163,"name":"CVDisplayLink","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":65704},{"value":0},{"value":7605208},{"value":899073},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5310555704},{"value":5310555768},{"value":1},{"value":7605208},{"value":0},{"value":0},{"value":899073},{"value":899328},{"value":6484253683924},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131276},"cpsr":{"value":2684358656},"fp":{"value":19686075824},"sp":{"value":19686075680},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28940,"symbol":"_pthread_cond_wait","symbolLocation":1028,"imageIndex":140},{"imageOffset":12788,"symbol":"CVDisplayLink::waitUntil(unsigned long long)","symbolLocation":336,"imageIndex":150},{"imageOffset":8924,"symbol":"CVDisplayLink::runIOThread()","symbolLocation":500,"imageIndex":150},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069694,"name":"JUCE v8.0.8: Timer","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998667},{"value":17175374584},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":19885964024},{"value":19885964088},{"value":17175376096},{"value":299998667},{"value":0},{"value":0},{"value":769},{"value":1024},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17175374704},"sp":{"value":17175374560},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4187960,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&)","symbolLocation":328,"imageIndex":38},{"imageOffset":4187076,"symbol":"void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":38},{"imageOffset":4440732,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&)","symbolLocation":132,"imageIndex":38},{"imageOffset":4440392,"symbol":"bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":72,"imageIndex":38},{"imageOffset":3946192,"symbol":"bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":100,"imageIndex":38},{"imageOffset":3744524,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":188,"imageIndex":38},{"imageOffset":4685224,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":340,"imageIndex":38},{"imageOffset":3748076,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":340,"imageIndex":38},{"imageOffset":3749040,"symbol":"juce::juce_threadEntryPoint(void*)","symbolLocation":24,"imageIndex":38},{"imageOffset":4115928,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const","symbolLocation":148,"imageIndex":38},{"imageOffset":4115768,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*)","symbolLocation":28,"imageIndex":38},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]},{"id":6069695,"name":"JUCE v8.0.8: thumb cache","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998542},{"value":17362283064},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":19290253544},{"value":19290253608},{"value":17362284768},{"value":499998542},{"value":0},{"value":0},{"value":257},{"value":512},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17362283184},"sp":{"value":17362283040},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":140},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":143},{"imageOffset":4187960,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&)","symbolLocation":328,"imageIndex":38},{"imageOffset":4187076,"symbol":"void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":38},{"imageOffset":4440732,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&)","symbolLocation":132,"imageIndex":38},{"imageOffset":4440392,"symbol":"bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":72,"imageIndex":38},{"imageOffset":3946192,"symbol":"bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":100,"imageIndex":38},{"imageOffset":3744524,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":188,"imageIndex":38},{"imageOffset":3752276,"symbol":"juce::Thread::wait(double) const","symbolLocation":36,"imageIndex":38},{"imageOffset":3766692,"symbol":"juce::TimeSliceThread::run()","symbolLocation":848,"imageIndex":38},{"imageOffset":3748076,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":340,"imageIndex":38},{"imageOffset":3749040,"symbol":"juce::juce_threadEntryPoint(void*)","symbolLocation":24,"imageIndex":38},{"imageOffset":4115928,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const","symbolLocation":148,"imageIndex":38},{"imageOffset":4115768,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*)","symbolLocation":28,"imageIndex":38},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":140},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":140}]}],
  "usedImages" : [
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4306993152,
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
    "base" : 4458741760,
    "size" : 1572864,
    "uuid" : "8038ea9a-f0aa-3323-b68f-f754b5f98e85",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/Frameworks\/libonnxruntime_abl.dylib",
    "name" : "libonnxruntime_abl.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4451991552,
    "size" : 81920,
    "uuid" : "98c8293a-4285-31c6-8154-ffa7b4a47a9f",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/Frameworks\/libusb-1.0.dylib",
    "name" : "libusb-1.0.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4452155392,
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
    "base" : 4457283584,
    "size" : 49152,
    "uuid" : "a3faee04-0f8b-3428-9497-560c97eca6fb",
    "path" : "\/usr\/lib\/libobjc-trampolines.dylib",
    "name" : "libobjc-trampolines.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 4993056768,
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
    "base" : 5679513600,
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
    "base" : 5308940288,
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
    "base" : 5744394240,
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
    "base" : 5694734336,
    "size" : 5816320,
    "uuid" : "bb2e5f66-2caf-35eb-87f3-706dc1a8a6f2",
    "path" : "\/Library\/Application Support\/sonible\/*\/libonnxruntime.1.15.1.dylib",
    "name" : "libonnxruntime.1.15.1.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 5688475648,
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
    "base" : 6312820736,
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
    "base" : 14648541184,
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
    "base" : 5337923584,
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
    "base" : 15111782400,
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
    "base" : 15026176000,
    "size" : 1212416,
    "uuid" : "c6fdd249-ac24-385a-85a0-d3e91bfbb179",
    "path" : "\/Library\/Arturia\/*\/libsqlite.dylib",
    "name" : "libsqlite.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15027486720,
    "size" : 3948544,
    "uuid" : "9d9fe136-36bd-3683-858c-e1dad60cfed7",
    "path" : "\/Library\/Arturia\/*\/libplateverbProcessor.dylib",
    "name" : "libplateverbProcessor.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15135621120,
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
    "base" : 15343566848,
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
    "base" : 15109603328,
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
    "base" : 15792914432,
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
    "base" : 15942402048,
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
    "base" : 16205905920,
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
    "base" : 15634153472,
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
    "base" : 15956590592,
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
    "base" : 15917006848,
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
    "base" : 16190046208,
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
    "base" : 15938355200,
    "size" : 2408448,
    "uuid" : "a113d629-e07f-3385-bf0b-8680c31a6854",
    "path" : "\/private\/tmp\/NSCreateObjectFileImageFromMemory-fl4HFjfE",
    "name" : "NSCreateObjectFileImageFromMemory-fl4HFjfE"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16534863872,
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
    "base" : 16613195776,
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
    "base" : 16911433728,
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
    "base" : 17014013952,
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
    "base" : 17064411136,
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
    "base" : 17098964992,
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
    "base" : 17456250880,
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
    "base" : 17358127104,
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
    "base" : 17524785152,
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
    "base" : 17969414144,
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
    "base" : 18014683136,
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
    "base" : 6161219584,
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
    "base" : 18451595264,
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
    "base" : 17523834880,
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
    "base" : 17968398336,
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
    "base" : 18333302784,
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
    "base" : 6160580608,
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
    "base" : 18360483840,
    "size" : 1310720,
    "uuid" : "919cbda1-301b-36a8-877b-dd0e4552c71c",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/libmozjs185_impl.dylib",
    "name" : "libmozjs185_impl.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 6160629760,
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
    "base" : 6160957440,
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
    "base" : 6161301504,
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
    "base" : 14648131584,
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
    "base" : 18372476928,
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
    "base" : 14642200576,
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
    "base" : 18370691072,
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
    "base" : 14757232640,
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
    "base" : 14642085888,
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
    "base" : 14648393728,
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
    "base" : 18368970752,
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
    "base" : 14757576704,
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
    "base" : 18374180864,
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
    "base" : 18371559424,
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
    "base" : 18565808128,
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
    "base" : 14648213504,
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
    "base" : 14763851776,
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
    "base" : 14763671552,
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
    "base" : 15076196352,
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
    "base" : 15075983360,
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
    "base" : 15076098048,
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
    "base" : 15076294656,
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
    "base" : 18448465920,
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
    "base" : 15431385088,
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
    "base" : 18598658048,
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
    "base" : 15790096384,
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
    "base" : 14763769856,
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
    "base" : 15092826112,
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
    "base" : 15093088256,
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
    "base" : 15082635264,
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
    "base" : 15340568576,
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
    "base" : 15343435776,
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
    "base" : 18446548992,
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
    "base" : 15431680000,
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
    "base" : 18514051072,
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
    "base" : 15111553024,
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
    "base" : 15433515008,
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
    "base" : 14642249728,
    "size" : 16384,
    "uuid" : "bfc682c9-649e-31ae-9e95-2209a5ff1702",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/libmozjs185.dylib",
    "name" : "libmozjs185.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15111667712,
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
    "base" : 15431761920,
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
    "base" : 15433744384,
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
    "base" : 15583854592,
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
    "base" : 15638298624,
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
    "base" : 15638380544,
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
    "base" : 15660482560,
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
    "base" : 15660564480,
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
    "base" : 15792701440,
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
    "base" : 15792783360,
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
    "base" : 15921152000,
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
    "base" : 15921233920,
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
    "base" : 15921315840,
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
    "base" : 15921397760,
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
    "base" : 6310133760,
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
    "base" : 6310215680,
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
    "base" : 6309953536,
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
    "base" : 6310297600,
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
    "base" : 6310428672,
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
    "base" : 15638118400,
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
    "base" : 15921479680,
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
    "base" : 15942205440,
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
    "base" : 15942320128,
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
    "base" : 15966535680,
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
    "base" : 15967715328,
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
    "base" : 15967797248,
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
    "base" : 15966355456,
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
    "base" : 15967879168,
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
    "base" : 15969648640,
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
    "base" : 15969730560,
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
    "base" : 16200384512,
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
    "base" : 16205742080,
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
    "base" : 16205824000,
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
    "base" : 16332308480,
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
    "base" : 16332390400,
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
    "base" : 16332472320,
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
    "base" : 16469753856,
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
    "base" : 16156229632,
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
    "base" : 16469852160,
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
    "base" : 16534749184,
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
    "base" : 16695328768,
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
    "base" : 16776757248,
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
    "base" : 16776839168,
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
    "base" : 16776921088,
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
    "base" : 16695148544,
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
    "base" : 5679251456,
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
    "base" : 5679333376,
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
    "base" : 19414810624,
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
    "base" : 6908985344,
    "CFBundleShortVersionString" : "2.1.1",
    "CFBundleIdentifier" : "com.apple.HIToolbox",
    "size" : 3174368,
    "uuid" : "1a037942-11e0-3fc8-aad2-20b11e7ae1a4",
    "path" : "\/System\/Library\/Frameworks\/Carbon.framework\/Versions\/A\/Frameworks\/HIToolbox.framework\/Versions\/A\/HIToolbox",
    "name" : "HIToolbox"
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
    "base" : 6712856576,
    "size" : 243284,
    "uuid" : "6e4a96ad-04b8-3e8a-b91d-087e62306246",
    "path" : "\/usr\/lib\/system\/libsystem_kernel.dylib",
    "name" : "libsystem_kernel.dylib"
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
  "vmSummary" : "ReadOnly portion of Libraries: Total=2.4G resident=0K(0%) swapped_out_or_unallocated=2.4G(100%)\nWritable regions: Total=11.5G written=7675K(0%) resident=6907K(0%) swapped_out=768K(0%) unallocated=11.5G(100%)\n\n                                VIRTUAL   REGION \nREGION TYPE                        SIZE    COUNT (non-coalesced) \n===========                     =======  ======= \nAccelerate framework               128K        1 \nActivity Tracing                   256K        1 \nCG image                           112K        6 \nColorSync                          544K       28 \nCoreAnimation                      800K       50 \nCoreGraphics                        32K        2 \nCoreServices                       624K        2 \nCoreUI image data                  880K        6 \nFoundation                          16K        1 \nImage IO                           160K       10 \nKernel Alloc Once                   32K        1 \nMALLOC                            10.7G     1014 \nMALLOC guard page                  384K       24 \nMALLOC_LARGE (reserved)          546.0M       28         reserved VM address space (unallocated)\nSQLite page cache                  384K        3 \nSTACK GUARD                       59.5M      225 \nStack                            127.0M      226 \nVM_ALLOCATE                       58.1M      148 \nVM_ALLOCATE (reserved)              32K        1         reserved VM address space (unallocated)\n__AUTH                            5480K      699 \n__AUTH_CONST                      77.0M      942 \n__CTF                               824        1 \n__DATA                            59.6M     1087 \n__DATA_CONST                      51.4M     1078 \n__DATA_DIRTY                      2766K      340 \n__FONT_DATA                        2352        1 \n__INFO_FILTER                         8        1 \n__LINKEDIT                       740.5M      134 \n__MFRT                              16K        1 \n__OBJC_RO                         61.4M        1 \n__OBJC_RW                         2396K        1 \n__POVERDDATA                        16K        1 \n__POVERTEXT                         16K        1 \n__TEXT                             1.6G     1103 \n__TPRO_CONST                       128K        2 \ndyld private memory               1664K        5 \nlibnetwork                         640K       16 \nmapped file                        1.3G       99 \npage table in kernel              6907K        1 \nshared memory                     1024K       19 \n===========                     =======  ======= \nTOTAL                             15.4G     7310 \nTOTAL, minus reserved VM space    14.9G     7310 \n",
  "legacyInfo" : {
  "threadTriggered" : {
    "name" : "MainThread",
    "queue" : "com.apple.main-thread"
  }
},
  "logWritingSignature" : "9d79e212e4c8ee9107fc7fa81469c054e43ada10",
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

