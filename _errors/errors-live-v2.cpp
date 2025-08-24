-------------------------------------
Translated Report (Full Report Below)
-------------------------------------

Process:               Live [88054]
Path:                  /Applications/Ableton Live 12 Suite.app/Contents/MacOS/Live
Identifier:            com.ableton.live
Version:               12.2.2 (2025-08-01_7acf90750f) (12.2.2 (2025-08-01_7acf90750f))
Code Type:             ARM-64 (Native)
Parent Process:        launchd [1]
User ID:               502

Date/Time:             2025-08-24 16:01:59.2144 +0000
OS Version:            macOS 15.6 (24G84)
Report Version:        12
Anonymous UUID:        14CE5F82-82B2-5557-92EA-60F9D97DBF72

Sleep/Wake UUID:       11B52E5A-AE62-42DA-AB7C-DB250CECAAED

Time Awake Since Boot: 260000 seconds
Time Since Wake:       369 seconds

System Integrity Protection: enabled

Crashed Thread:        0  MainThread  Dispatch queue: com.apple.main-thread

Exception Type:        EXC_BAD_ACCESS (SIGSEGV)
Exception Codes:       KERN_INVALID_ADDRESS at 0x0000000000000040
Exception Codes:       0x0000000000000001, 0x0000000000000040

Termination Reason:    Namespace SIGNAL, Code 11 Segmentation fault: 11
Terminating Process:   exc handler [88054]

VM Region Info: 0x40 is not in any region.  Bytes before following region: 4300423104
      REGION TYPE                    START - END         [ VSIZE] PRT/MAX SHRMOD  REGION DETAIL
      UNUSED SPACE AT START
--->
      __TEXT                      100534000-1064e8000    [ 95.7M] r-x/r-x SM=COW  /Applications/Ableton Live 12 Suite.app/Contents/MacOS/Live

Kernel Triage:
VM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter


Thread 0 Crashed:: MainThread Dispatch queue: com.apple.main-thread
0   SoundCollector                	       0x42502ef3c juce::Rectangle<int>::getWidth() const + 12 (juce_Rectangle.h:142)
1   SoundCollector                	       0x42507f0f4 juce::Component::getWidth() const + 28
2   SoundCollector                	       0x42586df38 juce::Component::setBounds(int, int, int, int) + 192
3   SoundCollector                	       0x42507f324 SoundCollectorAudioProcessorEditor::resized() + 180
4   SoundCollector                	       0x42586e348 juce::Component::sendMovedResizedMessages(bool, bool) + 156
5   SoundCollector                	       0x42586e29c juce::Component::sendMovedResizedMessagesIfPending() + 148
6   SoundCollector                	       0x42586e1a8 juce::Component::setBounds(int, int, int, int) + 816
7   SoundCollector                	       0x425862088 juce::Component::setSize(int, int) + 76
8   SoundCollector                	       0x42507c940 SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&) + 996
9   SoundCollector                	       0x42507e7ac SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&) + 36
10  SoundCollector                	       0x425074e50 SoundCollectorAudioProcessor::createEditor() + 44
11  SoundCollector                	       0x425220ef0 juce::AudioProcessor::createEditorIfNeeded() + 104
12  SoundCollector                	       0x42502dda8 JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::operator()(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize) const + 128 (juce_audio_plugin_client_AU_1.mm:1918)
13  SoundCollector                	       0x42502de6c JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::__invoke(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize) + 60 (juce_audio_plugin_client_AU_1.mm:1908)
14  Live                          	       0x1031e1d4c 0x100534000 + 46849356
15  Live                          	       0x1031e241c 0x100534000 + 46851100
16  Live                          	       0x1031e2c7c 0x100534000 + 46853244
17  Live                          	       0x1031e2b10 0x100534000 + 46852880
18  Live                          	       0x101e04190 0x100534000 + 26018192
19  Live                          	       0x101e03e5c 0x100534000 + 26017372
20  Live                          	       0x101e131d0 0x100534000 + 26079696
21  Live                          	       0x101de86d8 0x100534000 + 25904856
22  Live                          	       0x1032dd4e8 0x100534000 + 47879400
23  Live                          	       0x1033642b8 0x100534000 + 48431800
24  Live                          	       0x1033641bc 0x100534000 + 48431548
25  Live                          	       0x10336433c 0x100534000 + 48431932
26  Live                          	       0x101940328 0x100534000 + 21021480
27  Live                          	       0x101936950 0x100534000 + 20982096
28  Live                          	       0x103364000 0x100534000 + 48431104
29  Live                          	       0x101ba7434 0x100534000 + 23540788
30  Live                          	       0x101ba7190 0x100534000 + 23540112
31  Live                          	       0x101b542fc 0x100534000 + 23200508
32  Live                          	       0x101b563b8 0x100534000 + 23208888
33  Live                          	       0x101aa173c 0x100534000 + 22468412
34  Live                          	       0x101aa155c 0x100534000 + 22467932
35  Live                          	       0x101a85c14 0x100534000 + 22354964
36  AppKit                        	       0x194df655c _routeMouseUpEvent + 132
37  AppKit                        	       0x194357c20 -[NSWindow(NSEventRouting) _reallySendEvent:isDelayedEvent:] + 440
38  AppKit                        	       0x1943578a0 -[NSWindow(NSEventRouting) sendEvent:] + 288
39  AppKit                        	       0x194bcf6c0 -[NSApplication(NSEventRouting) sendEvent:] + 1504
40  Live                          	       0x101a80b74 0x100534000 + 22334324
41  AppKit                        	       0x1947ce42c -[NSApplication _handleEvent:] + 60
42  AppKit                        	       0x194224c0c -[NSApplication run] + 520
43  Live                          	       0x101a8cf48 0x100534000 + 22384456
44  dyld                          	       0x18fe82b98 start + 6076

Thread 1::  Dispatch queue: com.apple.CoreText.InitShapingGlyphs
0   CoreText                      	       0x192d1cad4 UniversalClassTable::AddShapingGlyphsForScript(TFont const&, unsigned int, std::__1::function<void (unsigned short, unsigned short)>) + 108
1   CoreText                      	       0x192e6d018 UniversalShapingEngine::AddShapingGlyphsForScript(TFont const&, unsigned int, std::__1::function<void (unsigned short, unsigned short)>) + 88
2   CoreText                      	       0x192e04124 std::__1::__function::__func<TOpenTypeMorph::AddShapingGlyphs(TFont const&, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned int)>, std::__1::function<void ()>)::$_0::operator()(unsigned int, OTL::ScriptTable const*, bool&) const::'lambda'(unsigned int, OTL::LangSysTable const*, bool&), std::__1::allocator<TOpenTypeMorph::AddShapingGlyphs(TFont const&, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned int)>, std::__1::function<void ()>)::$_0::operator()(unsigned int, OTL::ScriptTable const*, bool&) const::'lambda'(unsigned int, OTL::LangSysTable const*, bool&)>, bool (unsigned int, OTL::LangSysTable const*, bool&)>::operator()(unsigned int&&, OTL::LangSysTable const*&&, bool&) + 920
3   CoreText                      	       0x192d1651c std::__1::function<bool (unsigned int, OTL::LangSysTable const*, bool&)>::operator()(unsigned int, OTL::LangSysTable const*, bool&) const + 72
4   CoreText                      	       0x192d16624 OTL::GCommon::IterateLangSysTables(OTL::GCommon::Header const*, OTL::ScriptTable const*, void const*, std::__1::function<bool (unsigned int, OTL::LangSysTable const*, bool&)>) + 248
5   CoreText                      	       0x192e03c84 std::__1::__function::__func<TOpenTypeMorph::AddShapingGlyphs(TFont const&, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned int)>, std::__1::function<void ()>)::$_0, std::__1::allocator<TOpenTypeMorph::AddShapingGlyphs(TFont const&, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned int)>, std::__1::function<void ()>)::$_0>, bool (unsigned int, OTL::ScriptTable const*, bool&)>::operator()(unsigned int&&, OTL::ScriptTable const*&&, bool&) + 160
6   CoreText                      	       0x192d5418c std::__1::function<bool (unsigned int, OTL::ScriptTable const*, bool&)>::operator()(unsigned int, OTL::ScriptTable const*, bool&) const + 76
7   CoreText                      	       0x192d16494 OTL::GCommon::IterateScriptTables(OTL::GCommon::Header const*, void const*, std::__1::function<bool (unsigned int, OTL::ScriptTable const*, bool&)>) + 228
8   CoreText                      	       0x192e004b0 TOpenTypeMorph::AddShapingGlyphs(TFont const&, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned int)>, std::__1::function<void ()>) + 304
9   CoreText                      	       0x192d18f00 TFont::InitShapingGlyphs() const + 916
10  CoreText                      	       0x192da7700 InitShapingGlyphsOnQueue(__CTFont const*, NSObject<OS_dispatch_queue>*)::$_0::__invoke(void*) + 40
11  libdispatch.dylib             	       0x19008585c _dispatch_client_callout + 16
12  libdispatch.dylib             	       0x190074350 _dispatch_lane_serial_drain + 740
13  libdispatch.dylib             	       0x190074e2c _dispatch_lane_invoke + 388
14  libdispatch.dylib             	       0x19007f264 _dispatch_root_queue_drain_deferred_wlh + 292
15  libdispatch.dylib             	       0x19007eae8 _dispatch_workloop_worker_thread + 540
16  libsystem_pthread.dylib       	       0x19021fe64 _pthread_wqthread + 292
17  libsystem_pthread.dylib       	       0x19021eb74 start_wqthread + 8

Thread 2:: NetIoThread
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x1015967f0 0x100534000 + 17180656
2   Live                          	       0x101977dec void ableton::utility::detail::CallbackTypes<ANetIoThread, void, TUserData>::CallMemberFunc<&ANetIoThread::Main(TUserData)>(void*, TUserData) + 92
3   Live                          	       0x1015b1790 0x100534000 + 17291152
4   Live                          	       0x1015b2468 0x100534000 + 17294440
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
1   Live                          	       0x1015967f0 0x100534000 + 17180656
2   Live                          	       0x102543ec0 0x100534000 + 33619648
3   Live                          	       0x1015b1790 0x100534000 + 17291152
4   Live                          	       0x1015b2468 0x100534000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 5:: IPC Channel Reader
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   Live                          	       0x1042d61cc 0x100534000 + 64627148
2   Live                          	       0x1019a88a0 0x100534000 + 21448864
3   Live                          	       0x1019a8d6c 0x100534000 + 21450092
4   Live                          	       0x1019aa474 0x100534000 + 21455988
5   Live                          	       0x1019aa068 0x100534000 + 21454952
6   Live                          	       0x1015b1790 0x100534000 + 17291152
7   Live                          	       0x1015b2468 0x100534000 + 17294440
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
3   Live                          	       0x10351bf80 0x100534000 + 50233216
4   Live                          	       0x10524a374 0x100534000 + 80831348
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 9:: browser
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x1042cf4d8 0x100534000 + 64599256
2   Live                          	       0x103fbb1e0 ableton::live_library::AsyncLibraryHub::Impl::workerThreadMain(ableton::live_library::AsyncLibraryHub::Impl*) + 368
3   Live                          	       0x103fbb990 0x100534000 + 61372816
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 10:
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   Live                          	       0x10123230c 0x100534000 + 13624076
2   Live                          	       0x1012333b8 0x100534000 + 13628344
3   Live                          	       0x10123313c 0x100534000 + 13627708
4   Live                          	       0x101239770 0x100534000 + 13653872
5   Live                          	       0x1012396bc 0x100534000 + 13653692
6   Live                          	       0x1012395c4 0x100534000 + 13653444
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 11:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x1015967f0 0x100534000 + 17180656
2   Live                          	       0x101dda2d4 0x100534000 + 25846484
3   Live                          	       0x1015b1790 0x100534000 + 17291152
4   Live                          	       0x1015b2468 0x100534000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 12:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x1015967f0 0x100534000 + 17180656
2   Live                          	       0x101dda2d4 0x100534000 + 25846484
3   Live                          	       0x1015b1790 0x100534000 + 17291152
4   Live                          	       0x1015b2468 0x100534000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 13:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x1015967f0 0x100534000 + 17180656
2   Live                          	       0x101dda2d4 0x100534000 + 25846484
3   Live                          	       0x1015b1790 0x100534000 + 17291152
4   Live                          	       0x1015b2468 0x100534000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 14:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x1015967f0 0x100534000 + 17180656
2   Live                          	       0x101dda2d4 0x100534000 + 25846484
3   Live                          	       0x1015b1790 0x100534000 + 17291152
4   Live                          	       0x1015b2468 0x100534000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 15:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x1015967f0 0x100534000 + 17180656
2   Live                          	       0x101dda2d4 0x100534000 + 25846484
3   Live                          	       0x1015b1790 0x100534000 + 17291152
4   Live                          	       0x1015b2468 0x100534000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 16:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x1015967f0 0x100534000 + 17180656
2   Live                          	       0x101dda2d4 0x100534000 + 25846484
3   Live                          	       0x1015b1790 0x100534000 + 17291152
4   Live                          	       0x1015b2468 0x100534000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 17:: AudioCalc
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   Live                          	       0x1015967f0 0x100534000 + 17180656
2   Live                          	       0x101dda2d4 0x100534000 + 25846484
3   Live                          	       0x1015b1790 0x100534000 + 17291152
4   Live                          	       0x1015b2468 0x100534000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 18:: com.apple.audio.IOThread.client
0   libsystem_kernel.dylib        	       0x1901e1bbc semaphore_wait_signal_trap + 8
1   caulk                         	       0x19b8b32f8 caulk::mach::semaphore::wait_signal_or_error(caulk::mach::semaphore&) + 36
2   CoreAudio                     	       0x1931130e0 HALC_ProxyIOContext::IOWorkLoop() + 5276
3   CoreAudio                     	       0x193111530 invocation function for block in HALC_ProxyIOContext::HALC_ProxyIOContext(unsigned int, unsigned int) + 172
4   CoreAudio                     	       0x1932bb9f4 HALC_IOThread::Entry(void*) + 88
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 19:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 20:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   smartEQ4                      	       0x33d63aed4 0x33cc2c000 + 10546900
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 21:: Realtime safe async job spooler
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   smartEQ4                      	       0x33d612f64 0x33cc2c000 + 10383204
4   smartEQ4                      	       0x33d5408e8 0x33cc2c000 + 9521384
5   smartEQ4                      	       0x33d61de1c 0x33cc2c000 + 10427932
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 22:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_distressor             	       0x33c19f234 0x33c100000 + 651828
4   uaudio_distressor             	       0x33c1698a0 0x33c100000 + 432288
5   uaudio_distressor             	       0x33c17a628 0x33c100000 + 501288
6   uaudio_distressor             	       0x33c17aff8 0x33c100000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 23:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x33c12a33c 0x33c100000 + 172860
2   uaudio_distressor             	       0x33c12b0c8 0x33c100000 + 176328
3   uaudio_distressor             	       0x33c12aeac 0x33c100000 + 175788
4   uaudio_distressor             	       0x33c12e21c 0x33c100000 + 188956
5   uaudio_distressor             	       0x33c17a614 0x33c100000 + 501268
6   uaudio_distressor             	       0x33c17aff8 0x33c100000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 24:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x33c12a33c 0x33c100000 + 172860
2   uaudio_distressor             	       0x33c12b0c8 0x33c100000 + 176328
3   uaudio_distressor             	       0x33c12aeac 0x33c100000 + 175788
4   uaudio_distressor             	       0x33c12e21c 0x33c100000 + 188956
5   uaudio_distressor             	       0x33c17a614 0x33c100000 + 501268
6   uaudio_distressor             	       0x33c17aff8 0x33c100000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 25:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x33c12a33c 0x33c100000 + 172860
2   uaudio_distressor             	       0x33c12b0c8 0x33c100000 + 176328
3   uaudio_distressor             	       0x33c12aeac 0x33c100000 + 175788
4   uaudio_distressor             	       0x33c12e21c 0x33c100000 + 188956
5   uaudio_distressor             	       0x33c17a614 0x33c100000 + 501268
6   uaudio_distressor             	       0x33c17aff8 0x33c100000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 26:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_distressor             	       0x33c12a33c 0x33c100000 + 172860
2   uaudio_distressor             	       0x33c12b0c8 0x33c100000 + 176328
3   uaudio_distressor             	       0x33c12aeac 0x33c100000 + 175788
4   uaudio_distressor             	       0x33c12e21c 0x33c100000 + 188956
5   uaudio_distressor             	       0x33c17a614 0x33c100000 + 501268
6   uaudio_distressor             	       0x33c17aff8 0x33c100000 + 503800
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 27:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359aabfd4 0x359998000 + 1130452
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 28:: HighResolutionTimerThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Kick 3                        	       0x359a90fcc 0x359998000 + 1019852
4   Kick 3                        	       0x359a668a0 0x359998000 + 845984
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 29:: ContentsListsThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359a55d50 0x359998000 + 777552
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 30:: Kick Analysis Thread
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   Kick 3                        	       0x359cb0e7c 0x359998000 + 3247740
3   Kick 3                        	       0x359a668a0 0x359998000 + 845984
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 31:: Resources Store
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359be2e68 0x359998000 + 2403944
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 32:: Convo Engines Store
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359be30bc 0x359998000 + 2404540
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 33:: thumb cache
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359a55d50 0x359998000 + 777552
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 34:: ContentsListsThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359a55d50 0x359998000 + 777552
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 35:: HighResolutionTimerThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359a90f1c 0x359998000 + 1019676
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 36:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359bfa130 0x359998000 + 2498864
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 37:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359bfa130 0x359998000 + 2498864
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 38:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359bfa130 0x359998000 + 2498864
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 39:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359bfa130 0x359998000 + 2498864
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 40:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359bfa130 0x359998000 + 2498864
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 41:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359bfa130 0x359998000 + 2498864
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 42:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3612d3d5c 0x3611f0000 + 933212
3   Addictive Drums 2             	       0x3612f63e0 0x3611f0000 + 1074144
4   Addictive Drums 2             	       0x3612d4c14 0x3611f0000 + 936980
5   Addictive Drums 2             	       0x3612ea2dc 0x3611f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 43:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3612d3d5c 0x3611f0000 + 933212
3   Addictive Drums 2             	       0x3612f63e0 0x3611f0000 + 1074144
4   Addictive Drums 2             	       0x3612d4c14 0x3611f0000 + 936980
5   Addictive Drums 2             	       0x3612ea2dc 0x3611f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 44:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3612d3d5c 0x3611f0000 + 933212
3   Addictive Drums 2             	       0x3612f63e0 0x3611f0000 + 1074144
4   Addictive Drums 2             	       0x3612d4c14 0x3611f0000 + 936980
5   Addictive Drums 2             	       0x3612ea2dc 0x3611f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 45:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3612d3d5c 0x3611f0000 + 933212
3   Addictive Drums 2             	       0x3612f63e0 0x3611f0000 + 1074144
4   Addictive Drums 2             	       0x3612d4c14 0x3611f0000 + 936980
5   Addictive Drums 2             	       0x3612ea2dc 0x3611f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 46:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3612d3d5c 0x3611f0000 + 933212
3   Addictive Drums 2             	       0x3612f63e0 0x3611f0000 + 1074144
4   Addictive Drums 2             	       0x3612d4c14 0x3611f0000 + 936980
5   Addictive Drums 2             	       0x3612ea2dc 0x3611f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 47:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3612d3d5c 0x3611f0000 + 933212
3   Addictive Drums 2             	       0x3612f63e0 0x3611f0000 + 1074144
4   Addictive Drums 2             	       0x3612d4c14 0x3611f0000 + 936980
5   Addictive Drums 2             	       0x3612ea2dc 0x3611f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 48:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3612d3d5c 0x3611f0000 + 933212
3   Addictive Drums 2             	       0x3612f63e0 0x3611f0000 + 1074144
4   Addictive Drums 2             	       0x3612d4c14 0x3611f0000 + 936980
5   Addictive Drums 2             	       0x3612ea2dc 0x3611f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 49:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3612d3d5c 0x3611f0000 + 933212
3   Addictive Drums 2             	       0x3612f63e0 0x3611f0000 + 1074144
4   Addictive Drums 2             	       0x3612d4c14 0x3611f0000 + 936980
5   Addictive Drums 2             	       0x3612ea2dc 0x3611f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 50:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3612d3d5c 0x3611f0000 + 933212
3   Addictive Drums 2             	       0x3612f63e0 0x3611f0000 + 1074144
4   Addictive Drums 2             	       0x3612d4c14 0x3611f0000 + 936980
5   Addictive Drums 2             	       0x3612ea2dc 0x3611f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 51:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Addictive Drums 2             	       0x3612d3d5c 0x3611f0000 + 933212
3   Addictive Drums 2             	       0x3612f63e0 0x3611f0000 + 1074144
4   Addictive Drums 2             	       0x3612d4c14 0x3611f0000 + 936980
5   Addictive Drums 2             	       0x3612ea2dc 0x3611f0000 + 1024732
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 52:
0   libsystem_kernel.dylib        	       0x1901e1d00 mach_wait_until + 8
1   CarbonCore                    	       0x193da7f1c MPDelayUntil + 20
2   Addictive Drums 2             	       0x3615990b0 0x3611f0000 + 3838128
3   Addictive Drums 2             	       0x361606084 0x3611f0000 + 4284548
4   Addictive Drums 2             	       0x361598d50 0x3611f0000 + 3837264
5   CarbonCore                    	       0x193da765c PrivateMPEntryPoint + 60
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 53:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x19022410c _pthread_cond_wait + 1028
2   CarbonCore                    	       0x193dd405c TSWaitOnConditionTimedRelative + 32
3   CarbonCore                    	       0x193da6594 MPWaitForEvent + 208
4   Addictive Drums 2             	       0x361598b00 0x3611f0000 + 3836672
5   Addictive Drums 2             	       0x36166f0f8 0x3611f0000 + 4714744
6   Addictive Drums 2             	       0x361598d50 0x3611f0000 + 3837264
7   CarbonCore                    	       0x193da765c PrivateMPEntryPoint + 60
8   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
9   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 54:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Addictive Drums 2             	       0x36170b960 0x3611f0000 + 5355872
4   Addictive Drums 2             	       0x36170d5c0 0x3611f0000 + 5363136
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 55:: PerformanceManagers
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   Rev PLATE-140                 	       0x37d7feb38 0x37cbb8000 + 12872504
3   Rev PLATE-140                 	       0x37db4c340 0x37cbb8000 + 16335680
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 56:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Rev PLATE-140                 	       0x37ceccbe4 0x37cbb8000 + 3230692
4   Rev PLATE-140                 	       0x37ced3874 0x37cbb8000 + 3258484
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 57:: AsyncPresetLoader
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Rev PLATE-140                 	       0x37ce320fc 0x37cbb8000 + 2597116
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 58:
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   libc++.1.dylib                	       0x190155f38 std::__1::this_thread::sleep_for(std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&) + 84
3   libplateverbProcessor.dylib   	       0x36f3bbf08 0x36f214000 + 1736456
4   libplateverbProcessor.dylib   	       0x36f3bc25c 0x36f214000 + 1737308
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 59:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_ua_1176ae              	       0x37b38050c 0x37b2e0000 + 656652
4   uaudio_ua_1176ae              	       0x37b34ab78 0x37b2e0000 + 437112
5   uaudio_ua_1176ae              	       0x37b35b900 0x37b2e0000 + 506112
6   uaudio_ua_1176ae              	       0x37b35c2d0 0x37b2e0000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 60:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x37b30b614 0x37b2e0000 + 177684
2   uaudio_ua_1176ae              	       0x37b30c3a0 0x37b2e0000 + 181152
3   uaudio_ua_1176ae              	       0x37b30c184 0x37b2e0000 + 180612
4   uaudio_ua_1176ae              	       0x37b30f4f4 0x37b2e0000 + 193780
5   uaudio_ua_1176ae              	       0x37b35b8ec 0x37b2e0000 + 506092
6   uaudio_ua_1176ae              	       0x37b35c2d0 0x37b2e0000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 61:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x37b30b614 0x37b2e0000 + 177684
2   uaudio_ua_1176ae              	       0x37b30c3a0 0x37b2e0000 + 181152
3   uaudio_ua_1176ae              	       0x37b30c184 0x37b2e0000 + 180612
4   uaudio_ua_1176ae              	       0x37b30f4f4 0x37b2e0000 + 193780
5   uaudio_ua_1176ae              	       0x37b35b8ec 0x37b2e0000 + 506092
6   uaudio_ua_1176ae              	       0x37b35c2d0 0x37b2e0000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 62:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x37b30b614 0x37b2e0000 + 177684
2   uaudio_ua_1176ae              	       0x37b30c3a0 0x37b2e0000 + 181152
3   uaudio_ua_1176ae              	       0x37b30c184 0x37b2e0000 + 180612
4   uaudio_ua_1176ae              	       0x37b30f4f4 0x37b2e0000 + 193780
5   uaudio_ua_1176ae              	       0x37b35b8ec 0x37b2e0000 + 506092
6   uaudio_ua_1176ae              	       0x37b35c2d0 0x37b2e0000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 63:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ae              	       0x37b30b614 0x37b2e0000 + 177684
2   uaudio_ua_1176ae              	       0x37b30c3a0 0x37b2e0000 + 181152
3   uaudio_ua_1176ae              	       0x37b30c184 0x37b2e0000 + 180612
4   uaudio_ua_1176ae              	       0x37b30f4f4 0x37b2e0000 + 193780
5   uaudio_ua_1176ae              	       0x37b35b8ec 0x37b2e0000 + 506092
6   uaudio_ua_1176ae              	       0x37b35c2d0 0x37b2e0000 + 508624
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 64:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x380c1cbfc 0x380b38000 + 936956
3   XO                            	       0x380c3f280 0x380b38000 + 1077888
4   XO                            	       0x380c1dab4 0x380b38000 + 940724
5   XO                            	       0x380c3317c 0x380b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 65:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x380c1cbfc 0x380b38000 + 936956
3   XO                            	       0x380c3f280 0x380b38000 + 1077888
4   XO                            	       0x380c1dab4 0x380b38000 + 940724
5   XO                            	       0x380c3317c 0x380b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 66:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x380c1cbfc 0x380b38000 + 936956
3   XO                            	       0x380c3f280 0x380b38000 + 1077888
4   XO                            	       0x380c1dab4 0x380b38000 + 940724
5   XO                            	       0x380c3317c 0x380b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 67:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x380c1cbfc 0x380b38000 + 936956
3   XO                            	       0x380c3f280 0x380b38000 + 1077888
4   XO                            	       0x380c1dab4 0x380b38000 + 940724
5   XO                            	       0x380c3317c 0x380b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 68:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x380c1cbfc 0x380b38000 + 936956
3   XO                            	       0x380c3f280 0x380b38000 + 1077888
4   XO                            	       0x380c1dab4 0x380b38000 + 940724
5   XO                            	       0x380c3317c 0x380b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 69:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x380c1cbfc 0x380b38000 + 936956
3   XO                            	       0x380c3f280 0x380b38000 + 1077888
4   XO                            	       0x380c1dab4 0x380b38000 + 940724
5   XO                            	       0x380c3317c 0x380b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 70:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x380c1cbfc 0x380b38000 + 936956
3   XO                            	       0x380c3f280 0x380b38000 + 1077888
4   XO                            	       0x380c1dab4 0x380b38000 + 940724
5   XO                            	       0x380c3317c 0x380b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 71:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x380c1cbfc 0x380b38000 + 936956
3   XO                            	       0x380c3f280 0x380b38000 + 1077888
4   XO                            	       0x380c1dab4 0x380b38000 + 940724
5   XO                            	       0x380c3317c 0x380b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 72:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x380c1cbfc 0x380b38000 + 936956
3   XO                            	       0x380c3f280 0x380b38000 + 1077888
4   XO                            	       0x380c1dab4 0x380b38000 + 940724
5   XO                            	       0x380c3317c 0x380b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 73:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   XO                            	       0x380c1cbfc 0x380b38000 + 936956
3   XO                            	       0x380c3f280 0x380b38000 + 1077888
4   XO                            	       0x380c1dab4 0x380b38000 + 940724
5   XO                            	       0x380c3317c 0x380b38000 + 1028476
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 74:
0   libsystem_kernel.dylib        	       0x1901e1d00 mach_wait_until + 8
1   CarbonCore                    	       0x193da7f1c MPDelayUntil + 20
2   XO                            	       0x380ee0868 0x380b38000 + 3836008
3   XO                            	       0x380f4d888 0x380b38000 + 4282504
4   XO                            	       0x380ee0508 0x380b38000 + 3835144
5   CarbonCore                    	       0x193da765c PrivateMPEntryPoint + 60
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 75:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   XO                            	       0x381052448 0x380b38000 + 5350472
4   XO                            	       0x3810540a8 0x380b38000 + 5357736
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 76:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 77:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 78:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 79:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 80:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 81:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 82:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 83:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 84:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 85:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 86:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 87:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 88:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 89:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 90:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 91:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 92:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 93:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 94:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 95:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 96:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 97:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 98:: Pool
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3157e38 0x3a2d4c000 + 4243000
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 99:: AudioRecorder_thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a312c368 0x3a2d4c000 + 4064104
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 100:: com.u-he.Diva.voice-renderer 0
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 101:: com.u-he.Diva.voice-renderer 1
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 102:: com.u-he.Diva.voice-renderer 2
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 103:: com.u-he.Diva.voice-renderer 3
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 104:: com.u-he.Diva.voice-renderer 4
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 105:: com.u-he.Diva.voice-renderer 5
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 106:: com.u-he.Diva.voice-renderer 6
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 107:: com.u-he.Diva.voice-renderer 7
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 108:: com.u-he.Diva.voice-renderer 8
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 109:: com.u-he.Diva.voice-renderer 9
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 110:: com.u-he.Diva.voice-renderer 10
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 111:: com.u-he.Diva.voice-renderer 11
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 112:: com.u-he.Diva.voice-renderer 12
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 113:: com.u-he.Diva.voice-renderer 13
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 114:: com.u-he.Diva.voice-renderer 14
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 115:: com.u-he.Diva.voice-renderer 15
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 116:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   WrapPersist                   	       0x3a8c3c9f8 0x3a8a08000 + 2312696
4   WrapPersist                   	       0x3a8c40b0c 0x3a8a08000 + 2329356
5   WrapPersist                   	       0x3a8c40a64 0x3a8a08000 + 2329188
6   WrapPersist                   	       0x3a8c409b0 0x3a8a08000 + 2329008
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 117:: Internet Monitor
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   Stardust 201 Tape Echo        	       0x3c8c106c8 PSInternet::run() + 46108
3   Stardust 201 Tape Echo        	       0x3c8d3ded4 juce::threadEntryProc(void*) + 528
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 118:: thumb cache
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Stardust 201 Tape Echo        	       0x3c8d2d034 juce::WaitableEvent::wait(int) const + 152
4   Stardust 201 Tape Echo        	       0x3c8d2cc8c juce::TimeSliceThread::run() + 128
5   Stardust 201 Tape Echo        	       0x3c8d3ded4 juce::threadEntryProc(void*) + 528
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 119:: com.apple.NSURLConnectionLoader
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

Thread 120:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_studio_d_chorus        	       0x3c809fd34 0x3c8000000 + 654644
4   uaudio_studio_d_chorus        	       0x3c806a3a0 0x3c8000000 + 435104
5   uaudio_studio_d_chorus        	       0x3c807b128 0x3c8000000 + 504104
6   uaudio_studio_d_chorus        	       0x3c807baf8 0x3c8000000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 121:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3c802ae3c 0x3c8000000 + 175676
2   uaudio_studio_d_chorus        	       0x3c802bbc8 0x3c8000000 + 179144
3   uaudio_studio_d_chorus        	       0x3c802b9ac 0x3c8000000 + 178604
4   uaudio_studio_d_chorus        	       0x3c802ed1c 0x3c8000000 + 191772
5   uaudio_studio_d_chorus        	       0x3c807b114 0x3c8000000 + 504084
6   uaudio_studio_d_chorus        	       0x3c807baf8 0x3c8000000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 122:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3c802ae3c 0x3c8000000 + 175676
2   uaudio_studio_d_chorus        	       0x3c802bbc8 0x3c8000000 + 179144
3   uaudio_studio_d_chorus        	       0x3c802b9ac 0x3c8000000 + 178604
4   uaudio_studio_d_chorus        	       0x3c802ed1c 0x3c8000000 + 191772
5   uaudio_studio_d_chorus        	       0x3c807b114 0x3c8000000 + 504084
6   uaudio_studio_d_chorus        	       0x3c807baf8 0x3c8000000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 123:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3c802ae3c 0x3c8000000 + 175676
2   uaudio_studio_d_chorus        	       0x3c802bbc8 0x3c8000000 + 179144
3   uaudio_studio_d_chorus        	       0x3c802b9ac 0x3c8000000 + 178604
4   uaudio_studio_d_chorus        	       0x3c802ed1c 0x3c8000000 + 191772
5   uaudio_studio_d_chorus        	       0x3c807b114 0x3c8000000 + 504084
6   uaudio_studio_d_chorus        	       0x3c807baf8 0x3c8000000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 124:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_studio_d_chorus        	       0x3c802ae3c 0x3c8000000 + 175676
2   uaudio_studio_d_chorus        	       0x3c802bbc8 0x3c8000000 + 179144
3   uaudio_studio_d_chorus        	       0x3c802b9ac 0x3c8000000 + 178604
4   uaudio_studio_d_chorus        	       0x3c802ed1c 0x3c8000000 + 191772
5   uaudio_studio_d_chorus        	       0x3c807b114 0x3c8000000 + 504084
6   uaudio_studio_d_chorus        	       0x3c807baf8 0x3c8000000 + 506616
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 125:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3d47d60cc 0x3d4294000 + 5513420
4   Pianoteq 8 STAGE              	       0x3d42a0780 0x3d4294000 + 51072
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 126:: jq-1
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3d47d5f78 0x3d4294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3d47d77dc 0x3d4294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 127:: jq-10
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3d47d5f78 0x3d4294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3d47d77dc 0x3d4294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 128:: jq-2
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3d47d5f78 0x3d4294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3d47d77dc 0x3d4294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 129:: jq-9
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3d47d5f78 0x3d4294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3d47d77dc 0x3d4294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 130:: jq-8
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3d47d5f78 0x3d4294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3d47d77dc 0x3d4294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 131:: jq-3
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3d47d5f78 0x3d4294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3d47d77dc 0x3d4294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 132:: jq-4
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3d47d5f78 0x3d4294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3d47d77dc 0x3d4294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 133:: jq-7
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3d47d5f78 0x3d4294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3d47d77dc 0x3d4294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 134:: jq-5
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3d47d5f78 0x3d4294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3d47d77dc 0x3d4294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 135:: jq-6
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   Pianoteq 8 STAGE              	       0x3d47d5f78 0x3d4294000 + 5513080
4   Pianoteq 8 STAGE              	       0x3d47d77dc 0x3d4294000 + 5519324
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 136:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3d47d60cc 0x3d4294000 + 5513420
4   Pianoteq 8 STAGE              	       0x3d44d8aec 0x3d4294000 + 2378476
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 137:: vpuptthd
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3d47d60cc 0x3d4294000 + 5513420
4   Pianoteq 8 STAGE              	       0x3d429d2e4 0x3d4294000 + 37604
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 138:: tith
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3d47d60cc 0x3d4294000 + 5513420
4   Pianoteq 8 STAGE              	       0x3d429d838 0x3d4294000 + 38968
5   Pianoteq 8 STAGE              	       0x3d47d6358 0x3d4294000 + 5514072
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 139:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_electra                	       0x3e80a2654 0x3e8000000 + 665172
4   uaudio_electra                	       0x3e806ccc0 0x3e8000000 + 445632
5   uaudio_electra                	       0x3e807da48 0x3e8000000 + 514632
6   uaudio_electra                	       0x3e807e418 0x3e8000000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 140:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3e802d75c 0x3e8000000 + 186204
2   uaudio_electra                	       0x3e802e4e8 0x3e8000000 + 189672
3   uaudio_electra                	       0x3e802e2cc 0x3e8000000 + 189132
4   uaudio_electra                	       0x3e803163c 0x3e8000000 + 202300
5   uaudio_electra                	       0x3e807da34 0x3e8000000 + 514612
6   uaudio_electra                	       0x3e807e418 0x3e8000000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 141:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3e802d75c 0x3e8000000 + 186204
2   uaudio_electra                	       0x3e802e4e8 0x3e8000000 + 189672
3   uaudio_electra                	       0x3e802e2cc 0x3e8000000 + 189132
4   uaudio_electra                	       0x3e803163c 0x3e8000000 + 202300
5   uaudio_electra                	       0x3e807da34 0x3e8000000 + 514612
6   uaudio_electra                	       0x3e807e418 0x3e8000000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 142:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3e802d75c 0x3e8000000 + 186204
2   uaudio_electra                	       0x3e802e4e8 0x3e8000000 + 189672
3   uaudio_electra                	       0x3e802e2cc 0x3e8000000 + 189132
4   uaudio_electra                	       0x3e803163c 0x3e8000000 + 202300
5   uaudio_electra                	       0x3e807da34 0x3e8000000 + 514612
6   uaudio_electra                	       0x3e807e418 0x3e8000000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 143:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_electra                	       0x3e802d75c 0x3e8000000 + 186204
2   uaudio_electra                	       0x3e802e4e8 0x3e8000000 + 189672
3   uaudio_electra                	       0x3e802e2cc 0x3e8000000 + 189132
4   uaudio_electra                	       0x3e803163c 0x3e8000000 + 202300
5   uaudio_electra                	       0x3e807da34 0x3e8000000 + 514612
6   uaudio_electra                	       0x3e807e418 0x3e8000000 + 517144
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 144:: com.u-he.Diva.voice-renderer 0
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 145:: com.u-he.Diva.voice-renderer 1
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 146:: com.u-he.Diva.voice-renderer 2
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 147:: com.u-he.Diva.voice-renderer 3
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 148:: com.u-he.Diva.voice-renderer 4
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 149:: com.u-he.Diva.voice-renderer 5
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 150:: com.u-he.Diva.voice-renderer 6
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 151:: com.u-he.Diva.voice-renderer 7
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 152:: com.u-he.Diva.voice-renderer 8
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 153:: com.u-he.Diva.voice-renderer 9
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 154:: com.u-he.Diva.voice-renderer 10
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 155:: com.u-he.Diva.voice-renderer 11
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 156:: com.u-he.Diva.voice-renderer 12
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 157:: com.u-he.Diva.voice-renderer 13
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 158:: com.u-he.Diva.voice-renderer 14
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 159:: com.u-he.Diva.voice-renderer 15
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Diva                          	       0x3b44dff74 0x3b408c000 + 4538228
3   Diva                          	       0x3b4553f34 0x3b408c000 + 5013300
4   Diva                          	       0x3b4925178 0x3b408c000 + 9015672
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 160:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_ua_1176ln_rev_e        	       0x3eda736d4 0x3ed9d4000 + 653012
4   uaudio_ua_1176ln_rev_e        	       0x3eda3dd40 0x3ed9d4000 + 433472
5   uaudio_ua_1176ln_rev_e        	       0x3eda4eac8 0x3ed9d4000 + 502472
6   uaudio_ua_1176ln_rev_e        	       0x3eda4f498 0x3ed9d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 161:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3ed9fe7dc 0x3ed9d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3ed9ff568 0x3ed9d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3ed9ff34c 0x3ed9d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3eda026bc 0x3ed9d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3eda4eab4 0x3ed9d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3eda4f498 0x3ed9d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 162:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3ed9fe7dc 0x3ed9d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3ed9ff568 0x3ed9d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3ed9ff34c 0x3ed9d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3eda026bc 0x3ed9d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3eda4eab4 0x3ed9d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3eda4f498 0x3ed9d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 163:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3ed9fe7dc 0x3ed9d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3ed9ff568 0x3ed9d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3ed9ff34c 0x3ed9d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3eda026bc 0x3ed9d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3eda4eab4 0x3ed9d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3eda4f498 0x3ed9d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 164:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_ua_1176ln_rev_e        	       0x3ed9fe7dc 0x3ed9d4000 + 174044
2   uaudio_ua_1176ln_rev_e        	       0x3ed9ff568 0x3ed9d4000 + 177512
3   uaudio_ua_1176ln_rev_e        	       0x3ed9ff34c 0x3ed9d4000 + 176972
4   uaudio_ua_1176ln_rev_e        	       0x3eda026bc 0x3ed9d4000 + 190140
5   uaudio_ua_1176ln_rev_e        	       0x3eda4eab4 0x3ed9d4000 + 502452
6   uaudio_ua_1176ln_rev_e        	       0x3eda4f498 0x3ed9d4000 + 504984
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 165:: UALogWriter
0   libsystem_kernel.dylib        	       0x1901e1bc8 semaphore_timedwait_trap + 8
1   libdispatch.dylib             	       0x1900a0778 _dispatch_sema4_timedwait + 64
2   libdispatch.dylib             	       0x19006ded8 _dispatch_semaphore_wait_slow + 76
3   uaudio_teletronix_la-2a_gray  	       0x3f0a839ac 0x3f09e4000 + 653740
4   uaudio_teletronix_la-2a_gray  	       0x3f0a4e018 0x3f09e4000 + 434200
5   uaudio_teletronix_la-2a_gray  	       0x3f0a5eda0 0x3f09e4000 + 503200
6   uaudio_teletronix_la-2a_gray  	       0x3f0a5f770 0x3f09e4000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 166:: UAContextMain
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3f0a0eab4 0x3f09e4000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3f0a0f840 0x3f09e4000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3f0a0f624 0x3f09e4000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3f0a12994 0x3f09e4000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3f0a5ed8c 0x3f09e4000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3f0a5f770 0x3f09e4000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 167:: UAContextLowP
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3f0a0eab4 0x3f09e4000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3f0a0f840 0x3f09e4000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3f0a0f624 0x3f09e4000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3f0a12994 0x3f09e4000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3f0a5ed8c 0x3f09e4000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3f0a5f770 0x3f09e4000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 168:: Socket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3f0a0eab4 0x3f09e4000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3f0a0f840 0x3f09e4000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3f0a0f624 0x3f09e4000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3f0a12994 0x3f09e4000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3f0a5ed8c 0x3f09e4000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3f0a5f770 0x3f09e4000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 169:: LocalSocket
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   uaudio_teletronix_la-2a_gray  	       0x3f0a0eab4 0x3f09e4000 + 174772
2   uaudio_teletronix_la-2a_gray  	       0x3f0a0f840 0x3f09e4000 + 178240
3   uaudio_teletronix_la-2a_gray  	       0x3f0a0f624 0x3f09e4000 + 177700
4   uaudio_teletronix_la-2a_gray  	       0x3f0a12994 0x3f09e4000 + 190868
5   uaudio_teletronix_la-2a_gray  	       0x3f0a5ed8c 0x3f09e4000 + 503180
6   uaudio_teletronix_la-2a_gray  	       0x3f0a5f770 0x3f09e4000 + 505712
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 170:: splice event processor
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   SpliceBridge                  	       0x3fdab7ba4 juce::WaitableEvent::wait(double) const + 108
4   SpliceBridge                  	       0x3fd800d5c SpliceEventProcessor::process_events_on_thread() + 128
5   SpliceBridge                  	       0x3fd800cb4 SpliceEventProcessor::run() + 44
6   SpliceBridge                  	       0x3fdab8960 juce::Thread::threadEntryPoint() + 296
7   SpliceBridge                  	       0x3fdb26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
8   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
9   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 171:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SpliceBridge                  	       0x3fdab7c38 juce::WaitableEvent::wait(double) const + 256
4   SpliceBridge                  	       0x3fda65498 juce::Timer::TimerThread::run() + 480
5   SpliceBridge                  	       0x3fdab8960 juce::Thread::threadEntryPoint() + 296
6   SpliceBridge                  	       0x3fdb26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 172:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x3fdffd1e4 gpr_cv_wait + 132
3   SpliceBridge                  	       0x3fdf10068 grpc_core::Executor::ThreadMain(void*) + 232
4   SpliceBridge                  	       0x3fe0019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 173:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x3fdffd1e4 gpr_cv_wait + 132
3   SpliceBridge                  	       0x3fdf10068 grpc_core::Executor::ThreadMain(void*) + 232
4   SpliceBridge                  	       0x3fe0019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 174:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x3fdffd1e4 gpr_cv_wait + 132
3   SpliceBridge                  	       0x3fdf20ab4 timer_thread(void*) + 724
4   SpliceBridge                  	       0x3fe0019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 175:: grpc communication thread
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   SpliceBridge                  	       0x3fda83308 juce::Thread::sleep(int) + 80
3   SpliceBridge                  	       0x3fd7fea2c SpliceCommunication::run() + 124
4   SpliceBridge                  	       0x3fdab8960 juce::Thread::threadEntryPoint() + 296
5   SpliceBridge                  	       0x3fdb26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 176:: audio loading thread
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   SpliceBridge                  	       0x3fda83308 juce::Thread::sleep(int) + 80
3   SpliceBridge                  	       0x3fd812670 SpliceSuperPowered::run() + 564
4   SpliceBridge                  	       0x3fdab8960 juce::Thread::threadEntryPoint() + 296
5   SpliceBridge                  	       0x3fdb26000 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 177:: JUCE v8.0.8: Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SoundCollector                	       0x4253fe738 std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&) + 328
4   SoundCollector                	       0x4253fe3c4 void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
5   SoundCollector                	       0x42543c29c std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&) + 132
6   SoundCollector                	       0x42543c148 bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1) + 72
7   SoundCollector                	       0x4253c36d0 bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1) + 100
8   SoundCollector                	       0x42539230c juce::WaitableEvent::wait(double) const + 188
9   SoundCollector                	       0x425394154 juce::Thread::wait(double) const + 36
10  SoundCollector                	       0x425477df8 juce::Timer::TimerThread::run() + 420
11  SoundCollector                	       0x4253930ec juce::Thread::threadEntryPoint() + 340
12  SoundCollector                	       0x4253934b0 juce::juce_threadEntryPoint(void*) + 24
13  SoundCollector                	       0x4253ecdd8 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const + 148
14  SoundCollector                	       0x4253ecd38 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*) + 28
15  libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
16  libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 178:: JUCE v8.0.8: thumb cache
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SoundCollector                	       0x4253fe738 std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&) + 328
4   SoundCollector                	       0x4253fe3c4 void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
5   SoundCollector                	       0x42543c29c std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&) + 132
6   SoundCollector                	       0x42543c148 bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1) + 72
7   SoundCollector                	       0x4253c36d0 bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1) + 100
8   SoundCollector                	       0x42539230c juce::WaitableEvent::wait(double) const + 188
9   SoundCollector                	       0x425394154 juce::Thread::wait(double) const + 36
10  SoundCollector                	       0x4253979a4 juce::TimeSliceThread::run() + 848
11  SoundCollector                	       0x4253930ec juce::Thread::threadEntryPoint() + 340
12  SoundCollector                	       0x4253934b0 juce::juce_threadEntryPoint(void*) + 24
13  SoundCollector                	       0x4253ecdd8 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const + 148
14  SoundCollector                	       0x4253ecd38 juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*) + 28
15  libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
16  libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 179:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b67ee0 0x427b2c000 + 245472
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 180:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b4ee24 0x427b2c000 + 142884
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 181:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b4ee24 0x427b2c000 + 142884
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 182:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b4ee24 0x427b2c000 + 142884
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 183:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b5010c 0x427b2c000 + 147724
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 184:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b5010c 0x427b2c000 + 147724
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 185:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b67ee0 0x427b2c000 + 245472
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 186:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b4ee24 0x427b2c000 + 142884
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 187:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b4ee24 0x427b2c000 + 142884
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 188:: fdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b4ee24 0x427b2c000 + 142884
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 189:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b5010c 0x427b2c000 + 147724
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 190:: tdthread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154268 std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&) + 32
3   ADPTR MetricAB                	       0x427d01498 0x427b2c000 + 1922200
4   ADPTR MetricAB                	       0x427b5010c 0x427b2c000 + 147724
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 191:: DiskTaskFIFO
0   libsystem_kernel.dylib        	       0x1901e51c8 __semwait_signal + 8
1   libsystem_c.dylib             	       0x1900c16f4 nanosleep + 220
2   ADPTR MetricAB                	       0x427cf4204 0x427b2c000 + 1868292
3   ADPTR MetricAB                	       0x427bd5b98 0x427b2c000 + 695192
4   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
5   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 192:: DiskTaskFIFO
0   AudioCodecs                   	       0x48788b720 offset_10 + 232
1   AudioCodecs                   	       0x48788a15c mp3d_SubbandSynth + 64
2   AudioCodecs                   	       0x487a40d2c MP3DecoderWrapper_SpiritDSP::DecodeFrame(unsigned char*, int, int*, int) + 9220
3   AudioCodecs                   	       0x4878fa918 ACMP3Decoder::ProduceOutputPackets(void*, unsigned int&, unsigned int&, AudioStreamPacketDescription*) + 212
4   AudioCodecs                   	       0x487886a2c ProduceOutputPackets(void*, void*, unsigned int*, unsigned int*, AudioStreamPacketDescription*, unsigned int*) + 56
5   AudioToolboxCore              	       0x192c2a5b4 AudioCodecProduceOutputPackets + 308
6   AudioToolboxCore              	       0x192b5be74 acv2::CodecConverter::ProduceOutput(ACAudioSpan&)::$_1::operator()(unsigned int, ACAudioSpan&, unsigned int&) const + 1376
7   AudioToolboxCore              	       0x192b5b3b4 acv2::CodecConverter::ProduceOutput(ACAudioSpan&) + 1648
8   AudioToolboxCore              	       0x1929d739c acv2::AudioConverterChain::ObtainInput(acv2::AudioConverterBase&, unsigned int) + 664
9   AudioToolboxCore              	       0x192c04168 acv2::CBRConverter::ProduceOutput(ACAudioSpan&) + 56
10  AudioToolboxCore              	       0x1929d739c acv2::AudioConverterChain::ObtainInput(acv2::AudioConverterBase&, unsigned int) + 664
11  AudioToolboxCore              	       0x192c04168 acv2::CBRConverter::ProduceOutput(ACAudioSpan&) + 56
12  AudioToolboxCore              	       0x1929d6948 acv2::AudioConverterChain::ProduceOutput(caulk::function_ref<caulk::expected<unsigned int, int> (ACAudioSpan&)>, ACBaseAudioSpan&) + 168
13  AudioToolboxCore              	       0x192aa0e1c acv2::AudioConverterV2::fillComplexBuffer(int (*)(OpaqueAudioConverter*, unsigned int*, AudioBufferList*, AudioStreamPacketDescription**, void*), void*, unsigned int*, AudioBufferList*, AudioStreamPacketDescription*, AudioStreamPacketDependencyInfo*) + 824
14  AudioToolboxCore              	       0x192aa5cfc int caulk::function_ref<int (AudioConverterAPI*)>::functor_invoker<AudioConverterFillComplexBuffer::$_0>(caulk::details::erased_callable<int (AudioConverterAPI*)> const&, AudioConverterAPI*) + 108
15  AudioToolboxCore              	       0x192aa5330 with_resolved(OpaqueAudioConverter*, caulk::function_ref<int (AudioConverterAPI*)>) + 60
16  AudioToolboxCore              	       0x192aa5c84 AudioConverterFillComplexBuffer + 88
17  AudioToolboxCore              	       0x192aad4a0 ExtAudioFileRead + 624
18  ADPTR MetricAB                	       0x427cbf654 0x427b2c000 + 1652308
19  ADPTR MetricAB                	       0x427c866a4 0x427b2c000 + 1418916
20  ADPTR MetricAB                	       0x427bf715c 0x427b2c000 + 831836
21  ADPTR MetricAB                	       0x427bd4768 0x427b2c000 + 690024
22  ADPTR MetricAB                	       0x427bd5bec 0x427b2c000 + 695276
23  ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
24  ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
25  libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
26  libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 193:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   MaxPlugLib                    	       0x44ac4df3c spdlog::details::mpmc_blocking_queue<spdlog::details::async_msg>::dequeue_for(spdlog::details::async_msg&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l>>) + 136
4   MaxPlugLib                    	       0x44ac4dde0 spdlog::details::thread_pool::process_next_msg_() + 128
5   MaxPlugLib                    	       0x44ac4db98 void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct>>, spdlog::details::thread_pool::thread_pool(unsigned long, unsigned long, std::__1::function<void ()>, std::__1::function<void ()>)::'lambda'()>>(void*) + 76
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 194:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   SpliceBridge                  	       0x3fdffd1cc gpr_cv_wait + 108
3   SpliceBridge                  	       0x3fdf20ab4 timer_thread(void*) + 724
4   SpliceBridge                  	       0x3fe0019c0 grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*) + 140
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 195:: RT-InterProcessSenderThread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   Live                          	       0x1019766c8 0x100534000 + 21243592
3   Live                          	       0x1015b1790 0x100534000 + 17291152
4   Live                          	       0x1015b2468 0x100534000 + 17294440
5   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
6   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 196:: com.apple.NSEventThread
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

Thread 197:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_distressor             	       0x33c12b5b4 0x33c100000 + 177588
3   uaudio_distressor             	       0x33c12b06c 0x33c100000 + 176236
4   uaudio_distressor             	       0x33c12aeac 0x33c100000 + 175788
5   uaudio_distressor             	       0x33c29ff90 0x33c100000 + 1703824
6   uaudio_distressor             	       0x33c12ad44 0x33c100000 + 175428
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 198:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_ua_1176ae              	       0x37b30c88c 0x37b2e0000 + 182412
3   uaudio_ua_1176ae              	       0x37b30c344 0x37b2e0000 + 181060
4   uaudio_ua_1176ae              	       0x37b30c184 0x37b2e0000 + 180612
5   uaudio_ua_1176ae              	       0x37b481268 0x37b2e0000 + 1708648
6   uaudio_ua_1176ae              	       0x37b30c01c 0x37b2e0000 + 180252
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 199:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_studio_d_chorus        	       0x3c802c0b4 0x3c8000000 + 180404
3   uaudio_studio_d_chorus        	       0x3c802bb6c 0x3c8000000 + 179052
4   uaudio_studio_d_chorus        	       0x3c802b9ac 0x3c8000000 + 178604
5   uaudio_studio_d_chorus        	       0x3c81a0a90 0x3c8000000 + 1706640
6   uaudio_studio_d_chorus        	       0x3c802b844 0x3c8000000 + 178244
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 200:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_electra                	       0x3e802e9d4 0x3e8000000 + 190932
3   uaudio_electra                	       0x3e802e48c 0x3e8000000 + 189580
4   uaudio_electra                	       0x3e802e2cc 0x3e8000000 + 189132
5   uaudio_electra                	       0x3e81a33b0 0x3e8000000 + 1717168
6   uaudio_electra                	       0x3e802e164 0x3e8000000 + 188772
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 201:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_ua_1176ln_rev_e        	       0x3ed9ffa54 0x3ed9d4000 + 178772
3   uaudio_ua_1176ln_rev_e        	       0x3ed9ff50c 0x3ed9d4000 + 177420
4   uaudio_ua_1176ln_rev_e        	       0x3ed9ff34c 0x3ed9d4000 + 176972
5   uaudio_ua_1176ln_rev_e        	       0x3edb74430 0x3ed9d4000 + 1705008
6   uaudio_ua_1176ln_rev_e        	       0x3ed9ff1e4 0x3ed9d4000 + 176612
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 202:
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   uaudio_teletronix_la-2a_gray  	       0x3f0a0fd2c 0x3f09e4000 + 179500
3   uaudio_teletronix_la-2a_gray  	       0x3f0a0f7e4 0x3f09e4000 + 178148
4   uaudio_teletronix_la-2a_gray  	       0x3f0a0f624 0x3f09e4000 + 177700
5   uaudio_teletronix_la-2a_gray  	       0x3f0b84708 0x3f09e4000 + 1705736
6   uaudio_teletronix_la-2a_gray  	       0x3f0a0f4bc 0x3f09e4000 + 177340
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 203:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   smartEQ4                      	       0x33d612f64 0x33cc2c000 + 10383204
4   smartEQ4                      	       0x33d68e164 0x33cc2c000 + 10887524
5   smartEQ4                      	       0x33d61de1c 0x33cc2c000 + 10427932
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 204:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Rev PLATE-140                 	       0x37db3591c 0x37cbb8000 + 16242972
4   Rev PLATE-140                 	       0x37d9527d0 0x37cbb8000 + 14264272
5   Rev PLATE-140                 	       0x37db4c340 0x37cbb8000 + 16335680
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 205:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   SubLabXL                      	       0x3a312c894 0x3a2d4c000 + 4065428
4   SubLabXL                      	       0x3a3170738 0x3a2d4c000 + 4343608
5   SubLabXL                      	       0x3a313aef8 0x3a2d4c000 + 4124408
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 206:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Stardust 201 Tape Echo        	       0x3c8d2d034 juce::WaitableEvent::wait(int) const + 152
4   Stardust 201 Tape Echo        	       0x3c8d715c8 juce::Timer::TimerThread::run() + 576
5   Stardust 201 Tape Echo        	       0x3c8d3ded4 juce::threadEntryProc(void*) + 528
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 207:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   NSCreateObjectFileImageFromMemory-8cYVcLnv	       0x3b2c1f9b0 juce::WaitableEvent::wait(int) const + 152
4   NSCreateObjectFileImageFromMemory-8cYVcLnv	       0x3b2c3a4c8 juce::Timer::TimerThread::run() + 576
5   NSCreateObjectFileImageFromMemory-8cYVcLnv	       0x3b2c269e4 juce::threadEntryProc(void*) + 528
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 208:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Pianoteq 8 STAGE              	       0x3d492e268 0x3d4294000 + 6922856
4   Pianoteq 8 STAGE              	       0x3d49520f8 0x3d4294000 + 7069944
5   Pianoteq 8 STAGE              	       0x3d492e970 0x3d4294000 + 6924656
6   Pianoteq 8 STAGE              	       0x3d49432ac 0x3d4294000 + 7008940
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 209:: Convo thread
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   Kick 3                        	       0x359a56274 0x359998000 + 778868
4   Kick 3                        	       0x359bfa130 0x359998000 + 2498864
5   Kick 3                        	       0x359a668a0 0x359998000 + 845984
6   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
7   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 210:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   ADPTR MetricAB                	       0x427d013bc 0x427b2c000 + 1921980
4   ADPTR MetricAB                	       0x427d300cc 0x427b2c000 + 2113740
5   ADPTR MetricAB                	       0x427d01ff4 0x427b2c000 + 1925108
6   ADPTR MetricAB                	       0x427d176e8 0x427b2c000 + 2012904
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 211:: JUCE Timer
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x1902240e0 _pthread_cond_wait + 984
2   libc++.1.dylib                	       0x190154300 std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>) + 104
3   MaxPlugLib                    	       0x44aa4c4cc juce::WaitableEvent::wait(double) const + 544
4   MaxPlugLib                    	       0x44aa7f65c juce::Timer::TimerThread::run() + 476
5   MaxPlugLib                    	       0x44aa4d008 juce::Thread::threadEntryPoint() + 292
6   MaxPlugLib                    	       0x44aa6ef08 juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*) + 152
7   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
8   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 212:: tcp_listener
0   libsystem_kernel.dylib        	       0x1901ea46c __accept + 8
1   MaxPlugLib                    	       0x44aa3e370 juce::StreamingSocket::waitForNextConnection() const + 92
2   MaxPlugLib                    	       0x44a827400 tcpconnection_listenthread(_tcpconnection*) + 168
3   MaxPlugLib                    	       0x44a731de0 systhread_threadproc + 232
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 213:: CVDisplayLink
0   libsystem_kernel.dylib        	       0x1901e53cc __psynch_cvwait + 8
1   libsystem_pthread.dylib       	       0x19022410c _pthread_cond_wait + 1028
2   CoreVideo                     	       0x199bc51f4 CVDisplayLink::waitUntil(unsigned long long) + 336
3   CoreVideo                     	       0x199bc42dc CVDisplayLink::runIOThread() + 500
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 214:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x33d974c5c 0x33cc2c000 + 13929564
2   smartEQ4                      	       0x33d61de1c 0x33cc2c000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 215:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x33d974c5c 0x33cc2c000 + 13929564
2   smartEQ4                      	       0x33d61de1c 0x33cc2c000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 216:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x33d974c5c 0x33cc2c000 + 13929564
2   smartEQ4                      	       0x33d61de1c 0x33cc2c000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 217:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x33d974c5c 0x33cc2c000 + 13929564
2   smartEQ4                      	       0x33d61de1c 0x33cc2c000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 218:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x33d974c5c 0x33cc2c000 + 13929564
2   smartEQ4                      	       0x33d61de1c 0x33cc2c000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 219:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x33d974c5c 0x33cc2c000 + 13929564
2   smartEQ4                      	       0x33d61de1c 0x33cc2c000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 220:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x33d974c5c 0x33cc2c000 + 13929564
2   smartEQ4                      	       0x33d61de1c 0x33cc2c000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 221:
0   libsystem_kernel.dylib        	       0x1901ea498 poll + 8
1   smartEQ4                      	       0x33d974c5c 0x33cc2c000 + 13929564
2   smartEQ4                      	       0x33d61de1c 0x33cc2c000 + 10427932
3   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
4   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 222:: caulk::deferred_logger
0   libsystem_kernel.dylib        	       0x1901e1bb0 semaphore_wait_trap + 8
1   caulk                         	       0x19b896cc8 caulk::semaphore::timed_wait(double) + 224
2   caulk                         	       0x19b896b70 caulk::concurrent::details::worker_thread::run() + 32
3   caulk                         	       0x19b896844 void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*) + 96
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8

Thread 223:
0   libsystem_pthread.dylib       	       0x19021eb6c start_wqthread + 0

Thread 224:
0   libsystem_kernel.dylib        	       0x1901e7d04 kevent + 8
1   Live                          	       0x1042f1d40 0x100534000 + 64740672
2   Live                          	       0x1042d3564 0x100534000 + 64615780
3   Live                          	       0x1042f177c 0x100534000 + 64739196
4   libsystem_pthread.dylib       	       0x190223c0c _pthread_start + 136
5   libsystem_pthread.dylib       	       0x19021eb80 thread_start + 8


Thread 0 crashed with ARM Thread State (64-bit):
    x0: 0x0000000000000038   x1: 0x0000000000000020   x2: 0x0000000000000099   x3: 0x000000000000006b
    x4: 0x0000000000000020   x5: 0x00000000d0a7b840   x6: 0x000060002b4947e0   x7: 0x00000000000000bc
    x8: 0x0000000000000038   x9: 0x0000000000000000  x10: 0x00000001fe1b60c0  x11: 0x0000ae3208ef0000
   x12: 0x0000000000000020  x13: 0x000060002b73a5d0  x14: 0x00000000001ff800  x15: 0x00000000000007fb
   x16: 0x00000001fe1b60c0  x17: 0x00000001fe1b60c0  x18: 0x0000000000000000  x19: 0x000060005e0b7e80
   x20: 0x000060000163c6e0  x21: 0x00000000957f65ae  x22: 0x000060005f636d80  x23: 0x000000000000022e
   x24: 0x000060006cc48380  x25: 0x000060006cc48390  x26: 0x000060002540b020  x27: 0x0000000106c86000
   x28: 0x00000000ffff7fef   fp: 0x000000016f8c9d00   lr: 0x000000042507f0f4
    sp: 0x000000016f8c9ce0   pc: 0x000000042502ef3c cpsr: 0x60001000
   far: 0x0000000000000040  esr: 0x92000006 (Data Abort) byte read Translation fault

Binary Images:
       0x100534000 -        0x1064e7fff com.ableton.live (12.2.2 (2025-08-01_7acf90750f)) <c9ac18e9-0394-35c2-a077-3e9fce2c01c7> /Applications/Ableton Live 12 Suite.app/Contents/MacOS/Live
       0x108f24000 -        0x1090a3fff libonnxruntime_abl.dylib (*) <8038ea9a-f0aa-3323-b68f-f754b5f98e85> /Applications/Ableton Live 12 Suite.app/Contents/Frameworks/libonnxruntime_abl.dylib
       0x1091c8000 -        0x1091dbfff libusb-1.0.dylib (*) <98c8293a-4285-31c6-8154-ffa7b4a47a9f> /Applications/Ableton Live 12 Suite.app/Contents/Frameworks/libusb-1.0.dylib
       0x1093b4000 -        0x1093fbfff se.propellerheads.rex.library (*) <ddfec8a2-ead4-3fab-9674-1be6f6e189c9> /Applications/Ableton Live 12 Suite.app/Contents/Frameworks/REX Shared Library.framework/Versions/A/REX Shared Library
       0x10e9d0000 -        0x10e9dbfff libobjc-trampolines.dylib (*) <a3faee04-0f8b-3428-9497-560c97eca6fb> /usr/lib/libobjc-trampolines.dylib
       0x1319c0000 -        0x132057fff com.apple.AGXMetalG13X (329.2) <6b497f3b-6583-398c-9d05-5f30a1c1bae5> /System/Library/Extensions/AGXMetalG13X.bundle/Contents/MacOS/AGXMetalG13X
       0x338000000 -        0x33816ffff com.fabfilter.Pro-Q.AU.3 (3.26) <e6e002dd-8240-37cd-922f-dbb4e84b4aa1> /Library/Audio/Plug-Ins/Components/FabFilter Pro-Q 3.component/Contents/MacOS/FabFilter Pro-Q 3
       0x157d00000 -        0x157d1ffff com.apple.security.csparser (3.0) <3a905673-ada9-3c57-992e-b83f555baa61> /System/Library/Frameworks/Security.framework/Versions/A/PlugIns/csparser.bundle/Contents/MacOS/csparser
       0x33cc2c000 -        0x33e06bfff com.sonible.smarteq4 (1.0.0) <1497c372-617f-3735-8171-efe1e72c4385> /Library/Audio/Plug-Ins/Components/smartEQ4.component/Contents/MacOS/smartEQ4
       0x339cd0000 -        0x33a25bfff libonnxruntime.1.15.1.dylib (*) <bb2e5f66-2caf-35eb-87f3-706dc1a8a6f2> /Library/Application Support/sonible/*/libonnxruntime.1.15.1.dylib
       0x3392f4000 -        0x33942ffff com.apple.audio.units.Components (1.14) <351a431e-1520-3b3b-bb1e-f034da294ecd> /System/Library/Components/CoreAudio.component/Contents/MacOS/CoreAudio
       0x33c100000 -        0x33c963fff com.uaudio.effects.U3C4 (1.0.8) <db952c5a-48af-3c07-984c-10c83e67ff28> /Library/Audio/Plug-Ins/Components/uaudio_distressor.component/Contents/MacOS/uaudio_distressor
       0x359998000 -        0x35a17ffff com.SonicAcademy.Kick3 (1.1.2) <0fd687cb-5ac8-3e3c-aac9-2cf99381d245> /Library/Audio/Plug-Ins/Components/Kick 3.component/Contents/MacOS/Kick 3
       0x3611f0000 -        0x3624c7fff com.xlnaudio.addictivedrums2 (2.7.0) <679d782c-d5d2-3902-844f-5e102be52be3> /Library/Audio/Plug-Ins/Components/Addictive Drums 2.component/Contents/MacOS/Addictive Drums 2
       0x16f96c000 -        0x16f997fff com.arturia.component.Rev-PLATE-140 (67328) <2ea5456b-7ed1-3b94-adca-db0cbe7183cd> /Library/Audio/Plug-Ins/Components/Rev PLATE-140.component/Contents/MacOS/Rev PLATE-140
       0x37cbb8000 -        0x37df2ffff com.Arturia.Rev-PLATE-140.vst3 (1.7.0.5460) <fb34ef9c-a26c-331d-a9bb-d84e67eec9cf> /Library/Audio/Plug-Ins/Components/Rev PLATE-140.component/Contents/Resources/plugin.vst3/Contents/MacOS/Rev PLATE-140
       0x361038000 -        0x36115ffff libsqlite.dylib (*) <c6fdd249-ac24-385a-85a0-d3e91bfbb179> /Library/Arturia/*/libsqlite.dylib
       0x36f214000 -        0x36f5d7fff libplateverbProcessor.dylib (*) <9d9fe136-36bd-3683-858c-e1dad60cfed7> /Library/Arturia/*/libplateverbProcessor.dylib
       0x37b2e0000 -        0x37bb17fff com.uaudio.effects.U39Z (1.3.15) <b995f721-0177-3bb0-835d-1f4b4078bb19> /Library/Audio/Plug-Ins/Components/uaudio_ua_1176ae.component/Contents/MacOS/uaudio_ua_1176ae
       0x380b38000 -        0x381d87fff com.xlnaudio.xo (1.7.6) <97f45523-4c60-3f63-b228-371ade2d3ad9> /Library/Audio/Plug-Ins/Components/XO.component/Contents/MacOS/XO
       0x37b100000 -        0x37b21bfff com.fabfilter.Pro-Q.AU.2 (2.23) <490c8b97-fdf6-3b01-a27e-a23537bec4da> /Library/Audio/Plug-Ins/Components/FabFilter Pro-Q 2.component/Contents/MacOS/FabFilter Pro-Q 2
       0x3a2d4c000 -        0x3a81ebfff com.FutureAudioWorkshop.SubLabXL (1.0.4) <f0499087-d400-3cca-909d-9d8dda7bfd52> /Library/Audio/Plug-Ins/Components/SubLabXL.component/Contents/MacOS/SubLabXL
       0x3b408c000 -        0x3b4b07fff com.u-he.Diva.au (V1.4.7) <d3f4b734-1172-357b-97e3-af161d31b490> /Library/Audio/Plug-Ins/Components/Diva.component/Contents/MacOS/Diva
       0x3bad3c000 -        0x3bb9e3fff com.soundtoys.audiounit.Decapitator (5.4.3.17500 Authorization: Decapitator) <c1140d38-4035-3453-8d99-b393da9727a0> /Library/Audio/Plug-Ins/Components/Decapitator.component/Contents/MacOS/Decapitator
       0x3a8a08000 -        0x3a8cf7fff com.paceap.eden.WrapPersist (5.10.1 GM (b5284, 8eb337be)) <84667690-b93b-30ad-9737-5e65be8a4d93> /Library/Frameworks/PACEEdenExperience.framework/Versions/A/WrapPersist.bundle/Contents/MacOS/WrapPersist
       0x3b9b5c000 -        0x3ba1ebfff com.xfer.serum.AU (1.363) <111913f2-ace3-302c-a1ef-6a124d64e18b> /Library/Audio/Plug-Ins/Components/Serum.component/Contents/MacOS/Serum
       0x3a8500000 -        0x3a877ffff com.ValhallaDSP.ValhallaVintageVerb (3.0.0) <6f23cc3b-cbc0-3483-8a2e-8636f440060c> /Library/Audio/Plug-Ins/Components/ValhallaVintageVerbAU64.component/Contents/MacOS/ValhallaVintageVerb
       0x3c8ae8000 -        0x3c9173fff com.cherryaudio.stardust201 (1.0.11) <cc6b57e0-7066-3d3d-845c-93c64697ec32> /Library/Audio/Plug-Ins/Components/Stardust 201 Tape Echo.component/Contents/MacOS/Stardust 201 Tape Echo
       0x3b2c00000 -        0x3b2e4bfff NSCreateObjectFileImageFromMemory-8cYVcLnv (*) <a113d629-e07f-3385-bf0b-8680c31a6854> /private/tmp/NSCreateObjectFileImageFromMemory-8cYVcLnv
       0x3c8000000 -        0x3c881ffff com.uaudio.effects.U3BM (1.2.15) <fc1b963a-365e-3712-9148-f40a126181b2> /Library/Audio/Plug-Ins/Components/uaudio_studio_d_chorus.component/Contents/MacOS/uaudio_studio_d_chorus
       0x3d4294000 -        0x3d4aabfff com.modartt.Pianoteq8STAGE.AudioUnit (8.3.1) <caf476aa-3cdc-3bfd-93aa-57eedc7dac58> /Library/Audio/Plug-Ins/Components/Pianoteq 8 STAGE.component/Contents/MacOS/Pianoteq 8 STAGE
       0x3e8000000 -        0x3e89cbfff com.uaudio.effects.UI07 (1.0.11) <3be207e7-1234-3c87-a820-12e3b15be352> /Library/Audio/Plug-Ins/Components/uaudio_electra.component/Contents/MacOS/uaudio_electra
       0x3ed9d4000 -        0x3ee207fff com.uaudio.effects.U39X (1.3.15) <0f52ecc6-3aa1-3479-a79b-1988e593bfcb> /Library/Audio/Plug-Ins/Components/uaudio_ua_1176ln_rev_e.component/Contents/MacOS/uaudio_ua_1176ln_rev_e
       0x3f09e4000 -        0x3f121ffff com.uaudio.effects.U3A7 (1.3.15) <8f9c2d2a-e232-370c-a2ba-e2e99a5f9094> /Library/Audio/Plug-Ins/Components/uaudio_teletronix_la-2a_gray.component/Contents/MacOS/uaudio_teletronix_la-2a_gray
       0x3ee500000 -        0x3ee723fff com.ValhallaDSP.ValhallaRoom (1.6.8) <34896efb-7d7c-380a-a6c7-3337a639c98d> /Library/Audio/Plug-Ins/Components/ValhallaRoomAU64.component/Contents/MacOS/ValhallaRoom
       0x3fd794000 -        0x3fee07fff com.splice.bridge (5.1.1) <8e7b1830-3932-3675-b0b9-1191e06d9ae4> /Library/Audio/Plug-Ins/Components/SpliceBridge.component/Contents/MacOS/SpliceBridge
       0x3ffa68000 -        0x3ffd9bfff com.ValhallaDSP.ValhallaDelay (2.5.1) <6c906a52-3c28-3fd0-94aa-03f36901f2d3> /Library/Audio/Plug-Ins/Components/ValhallaDelay.component/Contents/MacOS/ValhallaDelay
       0x3fd100000 -        0x3fd613fff com.Youlean.audiounit.Youlean-Loudness-Meter-2 (2.4.4) <dec4f989-8b60-35e0-8809-553a3acf4d25> /Library/Audio/Plug-Ins/Components/Youlean Loudness Meter 2.component/Contents/MacOS/Youlean Loudness Meter 2
       0x425000000 -        0x425e6bfff com.yourcompany.SoundCollector (1.0.0) <20d10ad5-4c9a-3777-8f8a-ef1bc8df26d5> /Users/USER/Library/Audio/Plug-Ins/Components/SoundCollector.component/Contents/MacOS/SoundCollector
       0x427b2c000 -        0x428633fff com.adptr.MetricAB (1.4.1) <49f6a5ae-93e4-306d-87ca-7d0adcd88007> /Library/Audio/Plug-Ins/Components/ADPTR MetricAB.component/Contents/MacOS/ADPTR MetricAB
       0x13196c000 -        0x13196ffff com.cycling74.maxchecker (1.01) <3d903238-500c-32e8-b9b3-5abede64af6b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/support/maxchecker.bundle/Contents/MacOS/maxchecker
       0x44a3d0000 -        0x44ccaffff com.cycling74.MaxPlugLib ( (b9109490887)) <b6cc4fcf-93c9-3f93-91e1-f5a3840f0914> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/support/MaxPlugLib.bundle/Contents/MacOS/MaxPlugLib
       0x442f70000 -        0x442fe7fff com.cycling74.MaxAudioAPIImpl (*) <0732b043-c55b-35a2-bf3c-98d25964a33e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxAudioAPIImpl.framework/Versions/A/MaxAudioAPIImpl
       0x443020000 -        0x4430abfff com.cycling74.MaxLuaImpl (*) <f1a09173-bfe2-3fcc-a4d8-16c736bfd8c2> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxLuaImpl.framework/Versions/A/MaxLuaImpl
       0x444b5c000 -        0x444c6ffff com.cycling74.JitterAPIImpl (1.7.0) <eb73be27-c373-3012-8c2a-87df119182e9> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/JitterAPIImpl.framework/Versions/A/JitterAPIImpl
       0x37c8ec000 -        0x37c8effff com.cycling74.MaxLua (*) <8dcd9c4f-c7d7-3aae-9894-65ff549d114f> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxLua.framework/Versions/A/MaxLua
       0x444848000 -        0x444987fff libmozjs185_impl.dylib (*) <919cbda1-301b-36a8-877b-dd0e4552c71c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/libmozjs185_impl.dylib
       0x3a08c0000 -        0x3a08e7fff com.cycling74.patcher (9.0.7 (b9109490887)) <d5c02bf1-706c-3017-b19a-c745c32e3619> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/support/patcher.bundle/Contents/MacOS/patcher
       0x37cb8c000 -        0x37cb8ffff com.cycling74.MaxAudioAPI (*) <4f56d925-cc1a-345a-9f38-df723f6175e7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/MaxAudioAPI.framework/Versions/A/MaxAudioAPI
       0x37cb98000 -        0x37cb9bfff com.cycling74.fseventwatcher (9.0.7 (b9109490887)) <21d1ce4b-79c9-36ea-9d2e-49d8843b9f76> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/fseventwatcher.mxo/Contents/MacOS/fseventwatcher
       0x3a2d20000 -        0x3a2d23fff com.cycling74.cefaudio (9.0.7 (b9109490887)) <7ca48c89-d341-37ed-980d-1cef562f3000> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/cefaudio.mxo/Contents/MacOS/cefaudio
       0x445d58000 -        0x445e8ffff com.cycling74.gl2 (9.0.7 (b9109490887)) <4e7cb2d7-2d29-35a0-aa40-f3a36b132993> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/jitter/gl2.mxo/Contents/MacOS/gl2
       0x3a2d10000 -        0x3a2d13fff com.cycling74.JitterAPI (1.7.0) <22a2aee2-383c-317a-bdef-c0b99a459e29> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/JitterAPI.framework/Versions/A/JitterAPI
       0x445a00000 -        0x445aa3fff com.cycling74.sketch (9.0.7 (b9109490887)) <ad424434-84a2-3b3f-95fd-0b5fd80f5e4a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/jitter/sketch.mxo/Contents/MacOS/sketch
       0x3a839c000 -        0x3a83d3fff com.cycling74.live.guilib (9.0.7 (b9109490887)) <e173c13c-b3aa-3dce-8263-057da7df3197> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/m4l/live.guilib.mxo/Contents/MacOS/live.guilib
       0x3a2cf4000 -        0x3a2cfbfff com.cycling74.autohelp (9.0.7 (b9109490887)) <6a85940d-a6c3-3c7b-83ad-a9594e2a516e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/autohelp.mxo/Contents/MacOS/autohelp
       0x3a2d34000 -        0x3a2d37fff com.cycling74.debugwindow (9.0.7 (b9109490887)) <c05f164c-2898-3ee9-bd20-1112cb226b5d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/debugwindow.mxo/Contents/MacOS/debugwindow
       0x444600000 -        0x4446ebfff com.cycling74.genpatcher (9.0.7 (b9109490887)) <b205c9af-3e5c-33d0-82f8-82d17b440cd5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/genpatcher.mxo/Contents/MacOS/genpatcher
       0x3a8d44000 -        0x3a8d47fff com.cycling74.jsrepl (9.0.7 (b9109490887)) <9d093fd9-335c-3f22-9e06-513ab299279e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/jsrepl.mxo/Contents/MacOS/jsrepl
       0x445ef8000 -        0x44907ffff com.cycling74.maxclang (9.0.7 (b9109490887)) <37622245-5b39-333d-bc04-1a8cf81387a7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxclang.mxo/Contents/MacOS/maxclang
       0x44475c000 -        0x4447ebfff com.cycling74.maxurl (9.0.7 (b9109490887)) <38529482-7204-37b5-9000-d2b66ae5a25b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxurl.mxo/Contents/MacOS/maxurl
       0x4510bc000 -        0x452f87fff com.cycling74.maxxslt (9.0.7 (b9109490887)) <c1eb4c91-83e7-3c7b-a234-a4331941d5b4> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxxslt.mxo/Contents/MacOS/maxxslt
       0x3b2fac000 -        0x3b2fc3fff com.cycling74.maxzlib (9.0.7 (b9109490887)) <6dd0952b-f5f8-30a5-b47d-2243d2d17e51> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/maxzlib.mxo/Contents/MacOS/maxzlib
       0x3b7ddc000 -        0x3b7ddffff com.cycling74.objectview (9.0.7 (b9109490887)) <49fe8b49-a629-3833-b315-6b414300a378> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/objectview.mxo/Contents/MacOS/objectview
       0x3b2fd4000 -        0x3b2fdbfff com.cycling74.palblocks (9.0.7 (b9109490887)) <c68e6a5f-80bd-3662-b837-cfd8275a7342> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/palblocks.mxo/Contents/MacOS/palblocks
       0x3c25c8000 -        0x3c25cffff com.cycling74.paramview (9.0.7 (b9109490887)) <1702c166-2b64-30ce-925d-c8bfad05458f> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/paramview.mxo/Contents/MacOS/paramview
       0x3b9b24000 -        0x3b9b2ffff com.cycling74.pianoroll (9.0.7 (b9109490887)) <ae43e3ff-6d8b-33ed-8a38-488be7f9566d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/pianoroll.mxo/Contents/MacOS/pianoroll
       0x3b9b40000 -        0x3b9b47fff com.cycling74.querylib (9.0.7 (b9109490887)) <3ccf65e7-edbe-39d8-a439-cece09461fb0> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/querylib.mxo/Contents/MacOS/querylib
       0x3c25e0000 -        0x3c25e7fff com.cycling74.setplugpath (9.0.7 (b9109490887)) <54adbd9a-4125-3976-be4f-f793dd79b3ca> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/setplugpath.mxo/Contents/MacOS/setplugpath
       0x445ad4000 -        0x445c17fff com.cycling74.sqlite (9.0.7 (b9109490887)) <bd9536ff-96a3-3f3c-855d-bfec7b3fb78a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/sqlite.mxo/Contents/MacOS/sqlite
       0x3dca8c000 -        0x3dcabbfff com.cycling74.synophrys (9.0.7 (b9109490887)) <c278dae1-d11c-376b-b6e7-7b732ecd9e37> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/synophrys.mxo/Contents/MacOS/synophrys
       0x453010000 -        0x453f37fff com.cycling74.v8 (9.0.7 (b9109490887)) <02ec3450-9c1a-31ca-87ef-d7ede5c5ac0c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/v8.mxo/Contents/MacOS/v8
       0x3df8a8000 -        0x3df8d7fff com.cycling74.yaml (9.0.7 (b9109490887)) <f55d5407-47a7-3beb-ab74-273416439b1c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/yaml.mxo/Contents/MacOS/yaml
       0x3b2fec000 -        0x3b2feffff com.cycling74.zoomer (9.0.7 (b9109490887)) <3bf1b8a0-5c1c-31c1-9007-b9e3baea5826> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/max/zoomer.mxo/Contents/MacOS/zoomer
       0x3c4090000 -        0x3c409bfff com.cycling74.max-tilde (9.0.7 (b9109490887)) <18f0eb06-9865-3c72-952d-41f35a4622da> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/max~.mxo/Contents/MacOS/max~
       0x3c40b0000 -        0x3c40bbfff com.cycling74.polybuffer (9.0.7 (b9109490887)) <65d11a2d-4569-3df2-a42d-145b567dc951> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/polybuffer.mxo/Contents/MacOS/polybuffer
       0x3c8aa8000 -        0x3c8aabfff com.cycling74.probe.history-tilde (9.0.7 (b9109490887)) <517a6822-8290-3b6b-bf75-cf8cd7676dc5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/probe.history~.mxo/Contents/MacOS/probe.history~
       0x3c8abc000 -        0x3c8abffff com.cycling74.probe.meter-tilde (9.0.7 (b9109490887)) <9bb3a25c-ae42-3746-9d0f-0a22ede04794> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/probe.meter~.mxo/Contents/MacOS/probe.meter~
       0x3c8ad0000 -        0x3c8ad3fff com.cycling74.probe.scope-tilde (9.0.7 (b9109490887)) <a9b3274a-0d9c-3e5c-84c9-8a971ed87567> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/extensions/msp/probe.scope~.mxo/Contents/MacOS/probe.scope~
       0x44d578000 -        0x44d6b7fff com.cycling74.gl3 (9.0.7 (b9109490887)) <42dc0237-9e6c-38bd-b5fb-963875766eac> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/packages/Jitter Tools/extensions/gl3.mxo/Contents/MacOS/gl3
       0x3c67ec000 -        0x3c67effff com.acme.${PRODUCT_NAME:rfc1034identifier} (8.2.0) <11e2f200-6641-3c87-b652-6fdc3b7afca1> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/packages/max-mxj/extensions/mxj_safe.mxo/Contents/MacOS/mxj_safe
       0x44e498000 -        0x44e83ffff com.cycling74.rnbopatcher (*) <de1ffce1-b977-36e2-870c-ac4dc80aec2e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/packages/RNBO/extensions/rnbopatcher.mxo/Contents/MacOS/rnbopatcher
       0x3c67c4000 -        0x3c67cbfff com.cycling74.comment (9.0.7 (b9109490887)) <26b3d8ff-e0a5-3077-9f17-0cf1adf385f2> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/comment.mxo/Contents/MacOS/comment
       0x3dfebc000 -        0x3dfedbfff com.cycling74.js (9.0.7 (b9109490887)) <e314a8cc-72ee-3daa-b782-3d037d621fa7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/js.mxo/Contents/MacOS/js
       0x3a83f0000 -        0x3a83f3fff libmozjs185.dylib (*) <bfc682c9-649e-31ae-9e95-2209a5ff1702> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Frameworks/libmozjs185.dylib
       0x3dcad4000 -        0x3dcadbfff com.cycling74.jsjitter (9.0.7 (b9109490887)) <e83b29d6-ce1f-3835-9618-8764c4a5da0c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/jitter/jsjitter.mxo/Contents/MacOS/jsjitter
       0x3dcfd4000 -        0x3dcfdbfff com.cycling74.jsliveapi (9.0.7 (b9109490887)) <06e52919-0fa6-3bee-a360-2c6207367be8> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/m4l/jsliveapi.mxo/Contents/MacOS/jsliveapi
       0x3dcaec000 -        0x3dcaeffff com.cycling74.jsfolder (9.0.7 (b9109490887)) <41150e82-11ff-3ded-a5cf-11bb8c9f980b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsfolder.mxo/Contents/MacOS/jsfolder
       0x3dcfec000 -        0x3dcfeffff com.cycling74.jsmaxobjlistener (9.0.7 (b9109490887)) <9765142b-2d49-3d4c-a658-dd47cd5a88f5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsmaxobjlistener.mxo/Contents/MacOS/jsmaxobjlistener
       0x3ebbc4000 -        0x3ebbc7fff com.cycling74.jsparaminfoprovider (9.0.7 (b9109490887)) <4fefb063-ba42-30ed-8c2f-a110bfd1f883> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsparaminfoprovider.mxo/Contents/MacOS/jsparaminfoprovider
       0x3ebbd8000 -        0x3ebbdbfff com.cycling74.jsparamlistener (9.0.7 (b9109490887)) <612efa73-5628-37d3-a5fc-0b5807614d4e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsparamlistener.mxo/Contents/MacOS/jsparamlistener
       0x3ebbec000 -        0x3ebbeffff com.cycling74.jsrequire (9.0.7 (b9109490887)) <e28319e4-a960-347f-b755-4370b4503424> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsrequire.mxo/Contents/MacOS/jsrequire
       0x3ebfa4000 -        0x3ebfa7fff com.cycling74.jsrx256 (9.0.7 (b9109490887)) <07911bce-cfca-369e-b75d-002eba5dad46> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsrx256.mxo/Contents/MacOS/jsrx256
       0x3ebfb8000 -        0x3ebfbbfff com.cycling74.jssnapshotapi (9.0.7 (b9109490887)) <4ef5252f-0e92-3efc-9d27-78a71ebe84b8> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jssnapshotapi.mxo/Contents/MacOS/jssnapshotapi
       0x3ebfcc000 -        0x3ebfcffff com.cycling74.jssqlite (9.0.7 (b9109490887)) <04d3289a-7d72-3a3d-b392-bd203bbff6a2> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jssqlite.mxo/Contents/MacOS/jssqlite
       0x3ebfe0000 -        0x3ebfe3fff com.cycling74.jssqlresult (9.0.7 (b9109490887)) <efffca0c-e4ab-3719-895b-cad04ab6eb86> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jssqlresult.mxo/Contents/MacOS/jssqlresult
       0x3ed98c000 -        0x3ed98ffff com.cycling74.jstrigger (9.0.7 (b9109490887)) <034d76a3-99de-3cda-96f7-1b4c869571dc> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jstrigger.mxo/Contents/MacOS/jstrigger
       0x3ed9a0000 -        0x3ed9a3fff com.cycling74.jsxmlhttprequest (9.0.7 (b9109490887)) <e8eff39a-5f8d-327d-8c42-2a02e24cae32> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/max/jsxmlhttprequest.mxo/Contents/MacOS/jsxmlhttprequest
       0x3ed9b4000 -        0x3ed9b7fff com.cycling74.jsbuffer (9.0.7 (b9109490887)) <8bba6d9b-f22d-3098-b1df-08d06c7e157c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/jsextensions/msp/jsbuffer.mxo/Contents/MacOS/jsbuffer
       0x3ee378000 -        0x3ee37bfff com.cycling74.delay (9.0.7 (b9109490887)) <229d5dc5-2748-376b-89e7-b15ae4b4642d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/delay.mxo/Contents/MacOS/delay
       0x3ee38c000 -        0x3ee38ffff com.cycling74.ubutton (9.0.7 (b9109490887)) <fa3ce921-0824-3628-b823-14aaba2ab6d7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/ubutton.mxo/Contents/MacOS/ubutton
       0x3ebb98000 -        0x3ebba3fff com.cycling74.message (9.0.7 (b9109490887)) <df31d34d-d90a-3998-bfb9-2fbb643f598a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/message.mxo/Contents/MacOS/message
       0x3ee3e0000 -        0x3ee3ebfff com.cycling74.panel (9.0.7 (b9109490887)) <0a076c00-4321-37a1-9410-e7a7d8d5ce44> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/panel.mxo/Contents/MacOS/panel
       0x3ee3cc000 -        0x3ee3cffff com.cycling74.deferlow (9.0.7 (b9109490887)) <ec700477-2893-3703-a136-d0e8f55f97b0> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/deferlow.mxo/Contents/MacOS/deferlow
       0x3ee3a0000 -        0x3ee3abfff com.cycling74.textbutton (9.0.7 (b9109490887)) <bd12696d-76b3-3658-9669-bfc914236917> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/textbutton.mxo/Contents/MacOS/textbutton
       0x3f09b8000 -        0x3f09bbfff com.cycling74.counter (9.0.7 (b9109490887)) <df6bd178-ac8c-3a2a-a5ae-af902f9137d7> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/counter.mxo/Contents/MacOS/counter
       0x3f098c000 -        0x3f0997fff com.cycling74.zl (9.0.7 (b9109490887)) <98216fc3-0f97-36a1-bc86-a80617fe27a4> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/zl.mxo/Contents/MacOS/zl
       0x3f09cc000 -        0x3f09cffff com.cycling74.live.observer (9.0.7 (b9109490887)) <493596ba-a7c9-3e97-8d7c-6a419426b59b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.observer.mxo/Contents/MacOS/live.observer
       0x3f35bc000 -        0x3f35bffff com.cycling74.prepend (9.0.7 (b9109490887)) <42c7f221-923a-3e22-a3b7-9f725b667906> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/prepend.mxo/Contents/MacOS/prepend
       0x3f35d0000 -        0x3f35d3fff com.cycling74.live.object (9.0.7 (b9109490887)) <92f67c94-5a0e-3ca8-9ce5-34a3f6b63c8b> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.object.mxo/Contents/MacOS/live.object
       0x3f35e4000 -        0x3f35e7fff com.cycling74.live.path (9.0.7 (b9109490887)) <f63d96c3-eac1-3af4-b6c0-40cd84f5ddb5> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.path.mxo/Contents/MacOS/live.path
       0x3f3590000 -        0x3f359bfff com.cycling74.coll (9.0.7 (b9109490887)) <3da68a89-d0e7-3c19-a9e8-0dc45a1da40e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/coll.mxo/Contents/MacOS/coll
       0x3fb4e8000 -        0x3fb4ebfff com.cycling74.listfunnel (9.0.7 (b9109490887)) <4827fa72-9461-3125-841d-d9ba53fd3291> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/listfunnel.mxo/Contents/MacOS/listfunnel
       0x3fd768000 -        0x3fd76bfff com.cycling74.append (9.0.7 (b9109490887)) <fe7e2812-a932-3ed5-a356-d33fdb3fad22> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/append.mxo/Contents/MacOS/append
       0x3fd77c000 -        0x3fd77ffff com.cycling74.iter (9.0.7 (b9109490887)) <a7fead0b-252f-354a-b254-d262dd04f70a> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/iter.mxo/Contents/MacOS/iter
       0x3fb4bc000 -        0x3fb4c3fff com.cycling74.button (9.0.7 (b9109490887)) <ed8dcd9a-a9e0-3fcf-8d59-a91249742749> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/button.mxo/Contents/MacOS/button
       0x3fb4d4000 -        0x3fb4d7fff com.cycling74.uzi (9.0.7 (b9109490887)) <f99cf39b-6d90-3f25-889f-5527e6cf09d4> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/uzi.mxo/Contents/MacOS/uzi
       0x401fd8000 -        0x401fdbfff com.cycling74.combine (9.0.7 (b9109490887)) <d58a8b8a-b71e-3b0f-bbc1-5d01125b409d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/combine.mxo/Contents/MacOS/combine
       0x401fec000 -        0x401feffff com.cycling74.translate (9.0.7 (b9109490887)) <6c119b4e-6452-3276-9f67-92d7546cc739> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/translate.mxo/Contents/MacOS/translate
       0x407fbc000 -        0x407fbffff com.cycling74.rdiv (9.0.7 (b9109490887)) <acb5eeb9-2644-3300-b0c8-1ea5509dbc29> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/rdiv.mxo/Contents/MacOS/rdiv
       0x407fd0000 -        0x407fd3fff com.cycling74.plugsync-tilde (9.0.7 (b9109490887)) <5f658dd4-5789-3c62-8a5c-3b4e4a860661> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/msp/plugsync~.mxo/Contents/MacOS/plugsync~
       0x407ad0000 -        0x407ad7fff com.cycling74.live.thisdevice (9.0.7 (b9109490887)) <26b7f3b2-3166-3842-9140-9b210157f00e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/m4l/live.thisdevice.mxo/Contents/MacOS/live.thisdevice
       0x4287b4000 -        0x4287d3fff com.cycling74.jit.cellblock (9.0.7 (b9109490887)) <f1f2cd9f-dd2a-33e6-bc24-9a5ef321cf53> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/jit.cellblock.mxo/Contents/MacOS/jit.cellblock
       0x407ae8000 -        0x407aebfff com.cycling74.tosymbol (9.0.7 (b9109490887)) <14bc2cd5-6c54-3beb-942a-173d13407e8c> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/tosymbol.mxo/Contents/MacOS/tosymbol
       0x407fe4000 -        0x407fe7fff com.cycling74.fromsymbol (9.0.7 (b9109490887)) <36013942-a602-3c2f-8121-277f3457652d> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/fromsymbol.mxo/Contents/MacOS/fromsymbol
       0x4237a8000 -        0x4237abfff com.cycling74.atoi (9.0.7 (b9109490887)) <7265ae34-95a1-3d85-8a77-774d3036d9ff> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/atoi.mxo/Contents/MacOS/atoi
       0x4237bc000 -        0x4237bffff com.cycling74.itoa (9.0.7 (b9109490887)) <60cb4f23-199c-3b3c-a238-c10014821f37> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/itoa.mxo/Contents/MacOS/itoa
       0x4237d0000 -        0x4237d3fff com.cycling74.join (9.0.7 (b9109490887)) <78511710-06a4-34bc-8eff-79241ebe0910> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/join.mxo/Contents/MacOS/join
       0x4237e4000 -        0x4237e7fff com.cycling74.regexp (9.0.7 (b9109490887)) <3b573b5c-6044-3773-8556-c8979a37ab79> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/regexp.mxo/Contents/MacOS/regexp
       0x42377c000 -        0x423783fff com.cycling74.fpic (9.0.7 (b9109490887)) <d94cec57-c5b4-3735-85b3-9b872534684e> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/max/fpic.mxo/Contents/MacOS/fpic
       0x3387b8000 -        0x3387bbfff com.cycling74.plugout-tilde (9.0.7 (b9109490887)) <f0dacc3b-3b54-3744-bd22-5809e9e78b67> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/msp/plugout~.mxo/Contents/MacOS/plugout~
       0x423794000 -        0x423797fff com.cycling74.plugin-tilde (9.0.7 (b9109490887)) <559fa5fc-61fe-3204-b6a9-f13a1538a550> /Applications/Ableton Live 12 Suite.app/Contents/App-Resources/Max/Max.app/Contents/Resources/C74/externals/msp/plugin~.mxo/Contents/MacOS/plugin~
       0x487868000 -        0x48814bfff com.apple.audio.codecs.Components (7.0) <f7b7e577-5649-37b8-8d18-b9ef3c0b4dc2> /System/Library/Components/AudioCodecs.component/Contents/MacOS/AudioCodecs
       0x1941f7000 -        0x195687e3f com.apple.AppKit (6.9) <860c164c-d04c-30ff-8c6f-e672b74caf11> /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
       0x18fe7c000 -        0x18ff17577 dyld (*) <3247e185-ced2-36ff-9e29-47a77c23e004> /usr/lib/dyld
               0x0 - 0xffffffffffffffff ??? (*) <00000000-0000-0000-0000-000000000000> ???
       0x192d01000 -        0x192f1fc9f com.apple.CoreText (844.6.0.4) <0c195180-47f8-31ac-a951-b00b3c5d4477> /System/Library/Frameworks/CoreText.framework/Versions/A/CoreText
       0x19006a000 -        0x1900b075f libdispatch.dylib (*) <24ce0d89-4114-30c2-a81a-3db1f5931cff> /usr/lib/system/libdispatch.dylib
       0x19021d000 -        0x190229a47 libsystem_pthread.dylib (*) <d6494ba9-171e-39fc-b1aa-28ecf87975d1> /usr/lib/system/libsystem_pthread.dylib
       0x1901e1000 -        0x19021c653 libsystem_kernel.dylib (*) <6e4a96ad-04b8-3e8a-b91d-087e62306246> /usr/lib/system/libsystem_kernel.dylib
       0x1ac874000 -        0x1ac92ed1f com.apple.audio.midi.CoreMIDI (2.0) <504d9a4a-f0a7-348f-a7bc-13fd26b48d99> /System/Library/Frameworks/CoreMIDI.framework/Versions/A/CoreMIDI
       0x19b895000 -        0x19b8bcddf com.apple.audio.caulk (1.0) <42085f32-42e2-3f11-b0b4-0343137b5f72> /System/Library/PrivateFrameworks/caulk.framework/Versions/A/caulk
       0x190136000 -        0x1901c2ff7 libc++.1.dylib (*) <643ed232-ce19-3f63-8015-0aee768c002f> /usr/lib/libc++.1.dylib
       0x192f20000 -        0x19365139f com.apple.audio.CoreAudio (5.0) <52c7f0a2-f403-391b-9b0d-ce498eff4d7e> /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
       0x1900b4000 -        0x190135243 libsystem_c.dylib (*) <dfea8794-80ce-37c3-8f6a-108aa1d0b1b0> /usr/lib/system/libsystem_c.dylib
       0x193d33000 -        0x194025cbf com.apple.CoreServices.CarbonCore (1333) <18084480-b19d-3142-adbe-40f2aa328977> /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/CarbonCore.framework/Versions/A/CarbonCore
       0x190292000 -        0x1907d0fff com.apple.CoreFoundation (6.9) <8d45baee-6cc0-3b89-93fd-ea1c8e15c6d7> /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
       0x195dc3000 -        0x19618ca5f com.apple.CFNetwork (1.0) <45ad6442-531d-3e9a-967e-b3aa0d01f24f> /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
       0x191883000 -        0x19266c59f com.apple.Foundation (6.9) <b9a92060-f21e-3ecf-9ded-94a65c68a6f4> /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
       0x19022a000 -        0x190259ba3 libdyld.dylib (*) <01bcb3f7-ab89-30bd-87ee-91b291eadae8> /usr/lib/system/libdyld.dylib
       0x192949000 -        0x192d0037f com.apple.audio.AudioToolboxCore (1.0) <3f69ed5d-9d77-3a65-b8a6-2f631b87a864> /System/Library/PrivateFrameworks/AudioToolboxCore.framework/Versions/A/AudioToolboxCore
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
Writable regions: Total=11.6G written=7707K(0%) resident=6907K(0%) swapped_out=800K(0%) unallocated=11.6G(100%)

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
MALLOC                            10.8G     1014
MALLOC guard page                  384K       24
MALLOC_LARGE (reserved)          563.0M       27         reserved VM address space (unallocated)
SQLite page cache                  512K        4
STACK GUARD                       59.5M      225
Stack                            127.0M      226
VM_ALLOCATE                       58.1M      152
__AUTH                            5480K      699
__AUTH_CONST                      77.0M      943
__CTF                               824        1
__DATA                            59.6M     1087
__DATA_CONST                      51.4M     1079
__DATA_DIRTY                      2766K      341
__FONT_DATA                        2352        1
__INFO_FILTER                         8        1
__LINKEDIT                       740.5M      134
__MFRT                              16K        1
__OBJC_RO                         61.4M        1
__OBJC_RW                         2396K        1
__POVERDDATA                        16K        1
__POVERTEXT                         16K        1
__TEXT                             1.6G     1101
__TEXT (graphics)                  9.8M        2
__TEXT (network)                  5680K        1
__TPRO_CONST                       128K        2
dyld private memory               1664K        5
libnetwork                         640K       16
mapped file                        1.3G       92
page table in kernel              6907K        1
shared memory                     1024K       19
===========                     =======  =======
TOTAL                             15.5G     7305
TOTAL, minus reserved VM space    14.9G     7305



-----------
Full Report
-----------

{"app_name":"Live","timestamp":"2025-08-24 16:02:24.00 +0000","app_version":"12.2.2 (2025-08-01_7acf90750f)","slice_uuid":"c9ac18e9-0394-35c2-a077-3e9fce2c01c7","build_version":"12.2.2 (2025-08-01_7acf90750f)","platform":1,"bundleID":"com.ableton.live","share_with_app_devs":0,"is_first_party":0,"bug_type":"309","os_version":"macOS 15.6 (24G84)","roots_installed":0,"name":"Live","incident_id":"2AE2729D-974C-4D37-8808-1B1EEB9A26B7"}
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
  "captureTime" : "2025-08-24 16:01:59.2144 +0000",
  "codeSigningMonitor" : 1,
  "incident" : "2AE2729D-974C-4D37-8808-1B1EEB9A26B7",
  "pid" : 88054,
  "translated" : false,
  "cpuType" : "ARM-64",
  "roots_installed" : 0,
  "bug_type" : "309",
  "procLaunch" : "2025-08-24 16:01:21.9911 +0000",
  "procStartAbsTime" : 6447381101816,
  "procExitAbsTime" : 6448271063048,
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
  "wakeTime" : 369,
  "sleepWakeUUID" : "11B52E5A-AE62-42DA-AB7C-DB250CECAAED",
  "sip" : "enabled",
  "vmRegionInfo" : "0x40 is not in any region.  Bytes before following region: 4300423104\n      REGION TYPE                    START - END         [ VSIZE] PRT\/MAX SHRMOD  REGION DETAIL\n      UNUSED SPACE AT START\n--->  \n      __TEXT                      100534000-1064e8000    [ 95.7M] r-x\/r-x SM=COW  \/Applications\/Ableton Live 12 Suite.app\/Contents\/MacOS\/Live",
  "exception" : {"codes":"0x0000000000000001, 0x0000000000000040","rawCodes":[1,64],"type":"EXC_BAD_ACCESS","signal":"SIGSEGV","subtype":"KERN_INVALID_ADDRESS at 0x0000000000000040"},
  "termination" : {"flags":0,"code":11,"namespace":"SIGNAL","indicator":"Segmentation fault: 11","byProc":"exc handler","byPid":88054},
  "ktriageinfo" : "VM - (arg = 0x3) mach_vm_allocate_kernel failed within call to vm_map_enter\n",
  "vmregioninfo" : "0x40 is not in any region.  Bytes before following region: 4300423104\n      REGION TYPE                    START - END         [ VSIZE] PRT\/MAX SHRMOD  REGION DETAIL\n      UNUSED SPACE AT START\n--->  \n      __TEXT                      100534000-1064e8000    [ 95.7M] r-x\/r-x SM=COW  \/Applications\/Ableton Live 12 Suite.app\/Contents\/MacOS\/Live",
  "extMods" : {"caller":{"thread_create":0,"thread_set_state":0,"task_for_pid":0},"system":{"thread_create":0,"thread_set_state":0,"task_for_pid":0},"targeted":{"thread_create":0,"thread_set_state":0,"task_for_pid":0},"warnings":0},
  "faultingThread" : 0,
  "threads" : [{"threadState":{"x":[{"value":56},{"value":32},{"value":153},{"value":107},{"value":32},{"value":3500652608},{"value":105553842489312},{"value":188},{"value":56},{"value":0},{"value":8558174400,"symbolLocation":0,"symbol":"_main_thread"},{"value":191529921478656},{"value":32},{"value":105553845265872},{"value":2095104},{"value":2043},{"value":8558174400,"symbolLocation":0,"symbol":"_main_thread"},{"value":8558174400,"symbolLocation":0,"symbol":"_main_thread"},{"value":0},{"value":105554694078080},{"value":105553139582688},{"value":2508154286},{"value":105554716618112},{"value":558},{"value":105554941084544},{"value":105554941084560},{"value":105553741262880},{"value":4408762368,"symbolLocation":736,"symbol":"guard variable for AList<AVirtualFolderGroup>::SClassId()::Id"},{"value":4294934511}],"flavor":"ARM_THREAD_STATE64","lr":{"value":17801146612},"cpsr":{"value":1610616832},"fp":{"value":6166453504},"sp":{"value":6166453472},"esr":{"value":2449473542,"description":"(Data Abort) byte read Translation fault"},"pc":{"value":17800818492,"matchesCrashFrame":1},"far":{"value":64}},"id":6024399,"triggered":true,"name":"MainThread","queue":"com.apple.main-thread","frames":[{"imageOffset":192316,"sourceLine":142,"sourceFile":"juce_Rectangle.h","symbol":"juce::Rectangle<int>::getWidth() const","imageIndex":38,"symbolLocation":12},{"imageOffset":520436,"symbol":"juce::Component::getWidth() const","symbolLocation":28,"imageIndex":38},{"imageOffset":8838968,"symbol":"juce::Component::setBounds(int, int, int, int)","symbolLocation":192,"imageIndex":38},{"imageOffset":520996,"symbol":"SoundCollectorAudioProcessorEditor::resized()","symbolLocation":180,"imageIndex":38},{"imageOffset":8840008,"symbol":"juce::Component::sendMovedResizedMessages(bool, bool)","symbolLocation":156,"imageIndex":38},{"imageOffset":8839836,"symbol":"juce::Component::sendMovedResizedMessagesIfPending()","symbolLocation":148,"imageIndex":38},{"imageOffset":8839592,"symbol":"juce::Component::setBounds(int, int, int, int)","symbolLocation":816,"imageIndex":38},{"imageOffset":8790152,"symbol":"juce::Component::setSize(int, int)","symbolLocation":76,"imageIndex":38},{"imageOffset":510272,"symbol":"SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&)","symbolLocation":996,"imageIndex":38},{"imageOffset":518060,"symbol":"SoundCollectorAudioProcessorEditor::SoundCollectorAudioProcessorEditor(SoundCollectorAudioProcessor&)","symbolLocation":36,"imageIndex":38},{"imageOffset":478800,"symbol":"SoundCollectorAudioProcessor::createEditor()","symbolLocation":44,"imageIndex":38},{"imageOffset":2232048,"symbol":"juce::AudioProcessor::createEditorIfNeeded()","symbolLocation":104,"imageIndex":38},{"imageOffset":187816,"sourceLine":1918,"sourceFile":"juce_audio_plugin_client_AU_1.mm","symbol":"JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::operator()(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize) const","imageIndex":38,"symbolLocation":128},{"imageOffset":188012,"sourceLine":1908,"sourceFile":"juce_audio_plugin_client_AU_1.mm","symbol":"JuceAU::JuceUICreationClass::JuceUICreationClass()::'lambda'(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)::__invoke(objc_object*, objc_selector*, ComponentInstanceRecord*, CGSize)","imageIndex":38,"symbolLocation":60},{"imageOffset":46849356,"imageIndex":0},{"imageOffset":46851100,"imageIndex":0},{"imageOffset":46853244,"imageIndex":0},{"imageOffset":46852880,"imageIndex":0},{"imageOffset":26018192,"imageIndex":0},{"imageOffset":26017372,"imageIndex":0},{"imageOffset":26079696,"imageIndex":0},{"imageOffset":25904856,"imageIndex":0},{"imageOffset":47879400,"imageIndex":0},{"imageOffset":48431800,"imageIndex":0},{"imageOffset":48431548,"imageIndex":0},{"imageOffset":48431932,"imageIndex":0},{"imageOffset":21021480,"imageIndex":0},{"imageOffset":20982096,"imageIndex":0},{"imageOffset":48431104,"imageIndex":0},{"imageOffset":23540788,"imageIndex":0},{"imageOffset":23540112,"imageIndex":0},{"imageOffset":23200508,"imageIndex":0},{"imageOffset":23208888,"imageIndex":0},{"imageOffset":22468412,"imageIndex":0},{"imageOffset":22467932,"imageIndex":0},{"imageOffset":22354964,"imageIndex":0},{"imageOffset":12580188,"symbol":"_routeMouseUpEvent","symbolLocation":132,"imageIndex":133},{"imageOffset":1444896,"symbol":"-[NSWindow(NSEventRouting) _reallySendEvent:isDelayedEvent:]","symbolLocation":440,"imageIndex":133},{"imageOffset":1444000,"symbol":"-[NSWindow(NSEventRouting) sendEvent:]","symbolLocation":288,"imageIndex":133},{"imageOffset":10323648,"symbol":"-[NSApplication(NSEventRouting) sendEvent:]","symbolLocation":1504,"imageIndex":133},{"imageOffset":22334324,"imageIndex":0},{"imageOffset":6124588,"symbol":"-[NSApplication _handleEvent:]","symbolLocation":60,"imageIndex":133},{"imageOffset":187404,"symbol":"-[NSApplication run]","symbolLocation":520,"imageIndex":133},{"imageOffset":22384456,"imageIndex":0},{"imageOffset":27544,"symbol":"start","symbolLocation":6076,"imageIndex":134}]},{"id":6024436,"threadState":{"x":[{"value":18324629952},{"value":1668903532},{"value":6168158232},{"value":12297829382473034411},{"value":1735029279},{"value":1651402528},{"value":1735029280},{"value":1735750176},{"value":0},{"value":6759860176,"symbolLocation":0,"symbol":"kClassDataDirectory"},{"value":5109628946},{"value":6759860176,"symbolLocation":0,"symbol":"kClassDataDirectory"},{"value":5109628952},{"value":35},{"value":5109629022},{"value":4921},{"value":8581959296,"symbolLocation":16,"symbol":"vtable for std::__1::__function::__func<TFont::InitShapingGlyphs() const::$_1, std::__1::allocator<TFont::InitShapingGlyphs() const::$_1>, void (unsigned short, unsigned short)>"},{"value":9684709529851699224},{"value":0},{"value":1668903532},{"value":18324629952},{"value":1668903532},{"value":6168158008},{"value":1024},{"value":0},{"value":6168158624},{"value":5109628520},{"value":2302},{"value":19917285376}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6759567384},"cpsr":{"value":1610616832},"fp":{"value":6168158208},"sp":{"value":6168157792},"esr":{"value":2449473543,"description":"(Data Abort) byte read Translation fault"},"pc":{"value":6758189780},"far":{"value":6759860176}},"queue":"com.apple.CoreText.InitShapingGlyphs","frames":[{"imageOffset":113364,"symbol":"UniversalClassTable::AddShapingGlyphsForScript(TFont const&, unsigned int, std::__1::function<void (unsigned short, unsigned short)>)","symbolLocation":108,"imageIndex":136},{"imageOffset":1490968,"symbol":"UniversalShapingEngine::AddShapingGlyphsForScript(TFont const&, unsigned int, std::__1::function<void (unsigned short, unsigned short)>)","symbolLocation":88,"imageIndex":136},{"imageOffset":1061156,"symbol":"std::__1::__function::__func<TOpenTypeMorph::AddShapingGlyphs(TFont const&, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned int)>, std::__1::function<void ()>)::$_0::operator()(unsigned int, OTL::ScriptTable const*, bool&) const::'lambda'(unsigned int, OTL::LangSysTable const*, bool&), std::__1::allocator<TOpenTypeMorph::AddShapingGlyphs(TFont const&, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned int)>, std::__1::function<void ()>)::$_0::operator()(unsigned int, OTL::ScriptTable const*, bool&) const::'lambda'(unsigned int, OTL::LangSysTable const*, bool&)>, bool (unsigned int, OTL::LangSysTable const*, bool&)>::operator()(unsigned int&&, OTL::LangSysTable const*&&, bool&)","symbolLocation":920,"imageIndex":136},{"imageOffset":87324,"symbol":"std::__1::function<bool (unsigned int, OTL::LangSysTable const*, bool&)>::operator()(unsigned int, OTL::LangSysTable const*, bool&) const","symbolLocation":72,"imageIndex":136},{"imageOffset":87588,"symbol":"OTL::GCommon::IterateLangSysTables(OTL::GCommon::Header const*, OTL::ScriptTable const*, void const*, std::__1::function<bool (unsigned int, OTL::LangSysTable const*, bool&)>)","symbolLocation":248,"imageIndex":136},{"imageOffset":1059972,"symbol":"std::__1::__function::__func<TOpenTypeMorph::AddShapingGlyphs(TFont const&, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned int)>, std::__1::function<void ()>)::$_0, std::__1::allocator<TOpenTypeMorph::AddShapingGlyphs(TFont const&, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned int)>, std::__1::function<void ()>)::$_0>, bool (unsigned int, OTL::ScriptTable const*, bool&)>::operator()(unsigned int&&, OTL::ScriptTable const*&&, bool&)","symbolLocation":160,"imageIndex":136},{"imageOffset":340364,"symbol":"std::__1::function<bool (unsigned int, OTL::ScriptTable const*, bool&)>::operator()(unsigned int, OTL::ScriptTable const*, bool&) const","symbolLocation":76,"imageIndex":136},{"imageOffset":87188,"symbol":"OTL::GCommon::IterateScriptTables(OTL::GCommon::Header const*, void const*, std::__1::function<bool (unsigned int, OTL::ScriptTable const*, bool&)>)","symbolLocation":228,"imageIndex":136},{"imageOffset":1045680,"symbol":"TOpenTypeMorph::AddShapingGlyphs(TFont const&, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned short, unsigned short)>, std::__1::function<void (unsigned int)>, std::__1::function<void ()>)","symbolLocation":304,"imageIndex":136},{"imageOffset":98048,"symbol":"TFont::InitShapingGlyphs() const","symbolLocation":916,"imageIndex":136},{"imageOffset":681728,"symbol":"InitShapingGlyphsOnQueue(__CTFont const*, NSObject<OS_dispatch_queue>*)::$_0::__invoke(void*)","symbolLocation":40,"imageIndex":136},{"imageOffset":112732,"symbol":"_dispatch_client_callout","symbolLocation":16,"imageIndex":137},{"imageOffset":41808,"symbol":"_dispatch_lane_serial_drain","symbolLocation":740,"imageIndex":137},{"imageOffset":44588,"symbol":"_dispatch_lane_invoke","symbolLocation":388,"imageIndex":137},{"imageOffset":86628,"symbol":"_dispatch_root_queue_drain_deferred_wlh","symbolLocation":292,"imageIndex":137},{"imageOffset":84712,"symbol":"_dispatch_workloop_worker_thread","symbolLocation":540,"imageIndex":137},{"imageOffset":11876,"symbol":"_pthread_wqthread","symbolLocation":292,"imageIndex":138},{"imageOffset":7028,"symbol":"start_wqthread","symbolLocation":8,"imageIndex":138}]},{"id":6024486,"name":"NetIoThread","threadState":{"x":[{"value":14},{"value":4317603792},{"value":14307182912},{"value":40},{"value":14307182912},{"value":40},{"value":0},{"value":3},{"value":1},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":8},{"value":2147483648},{"value":18446744073709551580},{"value":8575318664},{"value":0},{"value":105553174138736},{"value":105553118595240},{"value":11},{"value":6169309000},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4317603824},"cpsr":{"value":1610616832},"fp":{"value":6169308944},"sp":{"value":6169308928},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":21249516,"symbol":"void ableton::utility::detail::CallbackTypes<ANetIoThread, void, TUserData>::CallMemberFunc<&ANetIoThread::Main(TUserData)>(void*, TUserData)","symbolLocation":92,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024488,"frames":[{"imageOffset":3124,"symbol":"mach_msg2_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":78752,"symbol":"mach_msg2_internal","symbolLocation":76,"imageIndex":139},{"imageOffset":38756,"symbol":"mach_msg_overwrite","symbolLocation":484,"imageIndex":139},{"imageOffset":4008,"symbol":"mach_msg","symbolLocation":24,"imageIndex":139},{"imageOffset":257708,"symbol":"XServerMachPort::ReceiveMessage(int&, void*, int&)","symbolLocation":104,"imageIndex":140},{"imageOffset":395072,"symbol":"MIDIProcess::MIDIInPortThread::Run()","symbolLocation":148,"imageIndex":140},{"imageOffset":350060,"symbol":"CADeprecated::XThread::RunHelper(void*)","symbolLocation":48,"imageIndex":140},{"imageOffset":392772,"symbol":"CADeprecated::CAPThread::Entry(CADeprecated::CAPThread*)","symbolLocation":96,"imageIndex":140},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":268451845},{"value":17179869186},{"value":0},{"value":133053791862784},{"value":0},{"value":133053791862784},{"value":100},{"value":0},{"value":0},{"value":17179869184},{"value":100},{"value":0},{"value":0},{"value":0},{"value":30979},{"value":0},{"value":18446744073709551569},{"value":8575310952},{"value":0},{"value":0},{"value":100},{"value":133053791862784},{"value":0},{"value":133053791862784},{"value":6169881044},{"value":0},{"value":17179869186},{"value":18446744073709550527},{"value":2}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6712935328},"cpsr":{"value":4096},"fp":{"value":6169880704},"sp":{"value":6169880624},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859700},"far":{"value":0}}},{"id":6024530,"name":"FileThread","threadState":{"x":[{"value":14},{"value":4317603792},{"value":131584},{"value":28},{"value":26},{"value":0},{"value":338016},{"value":2832},{"value":1},{"value":4892655616},{"value":2352},{"value":2},{"value":14806944},{"value":4885166268},{"value":0},{"value":4885163784},{"value":18446744073709551580},{"value":0},{"value":0},{"value":105553174192752},{"value":4411785216},{"value":4411785216},{"value":6175616840},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4317603824},"cpsr":{"value":1610616832},"fp":{"value":6175616752},"sp":{"value":6175616736},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":33619648,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024537,"name":"IPC Channel Reader","threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":6176189376},{"value":6176189360},{"value":3387599260},{"value":0},{"value":0},{"value":1},{"value":105553842500456},{"value":0},{"value":2},{"value":0},{"value":0},{"value":2095104},{"value":2043},{"value":230},{"value":8575309088},{"value":0},{"value":105553842500448},{"value":500},{"value":105554717508208},{"value":2},{"value":2},{"value":105554717508228},{"value":4},{"value":1},{"value":0},{"value":105554717507872}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4365050316},"cpsr":{"value":1610616832},"fp":{"value":6176189456},"sp":{"value":6176189328},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}},"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":64627148,"imageIndex":0},{"imageOffset":21448864,"imageIndex":0},{"imageOffset":21450092,"imageIndex":0},{"imageOffset":21455988,"imageIndex":0},{"imageOffset":21454952,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024539,"name":"caulk.messenger.shared:17","threadState":{"x":[{"value":14},{"value":1},{"value":0},{"value":1},{"value":0},{"value":1},{"value":0},{"value":0},{"value":0},{"value":4294967295},{"value":0},{"value":0},{"value":14946107416},{"value":6365359704},{"value":983040},{"value":0},{"value":18446744073709551580},{"value":8575313384},{"value":0},{"value":105553131074800},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904442056},"cpsr":{"value":2147487744},"fp":{"value":6365360000},"sp":{"value":6365359968},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":7368,"symbol":"caulk::semaphore::timed_wait(double)","symbolLocation":224,"imageIndex":141},{"imageOffset":7024,"symbol":"caulk::concurrent::details::worker_thread::run()","symbolLocation":32,"imageIndex":141},{"imageOffset":6212,"symbol":"void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*)","symbolLocation":96,"imageIndex":141},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024540,"name":"caulk.messenger.shared:high","threadState":{"x":[{"value":14},{"value":54275},{"value":54275},{"value":939},{"value":4294967295},{"value":0},{"value":0},{"value":0},{"value":0},{"value":4294967295},{"value":1},{"value":105553177087704},{"value":0},{"value":0},{"value":0},{"value":0},{"value":18446744073709551580},{"value":8575313384},{"value":0},{"value":105553131075216},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904442056},"cpsr":{"value":2147487744},"fp":{"value":6365933440},"sp":{"value":6365933408},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":7368,"symbol":"caulk::semaphore::timed_wait(double)","symbolLocation":224,"imageIndex":141},{"imageOffset":7024,"symbol":"caulk::concurrent::details::worker_thread::run()","symbolLocation":32,"imageIndex":141},{"imageOffset":6212,"symbol":"void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*)","symbolLocation":96,"imageIndex":141},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024553,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":50233216,"imageIndex":0},{"imageOffset":80831348,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":6366506648},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5746666328},{"value":5746666440},{"value":6366507232},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6366506768},"sp":{"value":6366506624},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6024554,"name":"browser","threadState":{"x":[{"value":14},{"value":5190483968},{"value":73896},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":4922781408},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":218624},{"value":0},{"value":18446744073709551580},{"value":8575318664},{"value":0},{"value":4922781648},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4365022424},"cpsr":{"value":1610616832},"fp":{"value":6367080224},"sp":{"value":6367080208},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":64599256,"imageIndex":0},{"imageOffset":61370848,"symbol":"ableton::live_library::AsyncLibraryHub::Impl::workerThreadMain(ableton::live_library::AsyncLibraryHub::Impl*)","symbolLocation":368,"imageIndex":0},{"imageOffset":61372816,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024555,"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":13624076,"imageIndex":0},{"imageOffset":13628344,"imageIndex":0},{"imageOffset":13627708,"imageIndex":0},{"imageOffset":13653872,"imageIndex":0},{"imageOffset":13653692,"imageIndex":0},{"imageOffset":13653444,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":6367647936},{"value":128},{"value":6367647904},{"value":105553116348632},{"value":105553116348664},{"value":5121081808},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":24000000},{"value":12077},{"value":1756051320756083},{"value":2151845952},{"value":363},{"value":8575308792},{"value":0},{"value":6367653424},{"value":1},{"value":0},{"value":5121081768},{"value":5121081712},{"value":6367653424},{"value":5121079216},{"value":5121079216},{"value":1},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4314047244},"cpsr":{"value":1610616832},"fp":{"value":6367653152},"sp":{"value":6367647840},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}}},{"id":6024584,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4317603792},{"value":6170455328},{"value":68719460488},{"value":128},{"value":32},{"value":0},{"value":16604582416},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6170455440},{"value":64},{"value":0},{"value":5679445504},{"value":18446744073709551580},{"value":30},{"value":0},{"value":105553174085728},{"value":4411394432},{"value":4411394429},{"value":1},{"value":4411392000},{"value":4411394428},{"value":4411392000},{"value":8},{"value":4410185600},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4317603824},"cpsr":{"value":1610616832},"fp":{"value":6170455552},"sp":{"value":6170455536},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024585,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4317603792},{"value":6171028768},{"value":68719460488},{"value":13810927824},{"value":108358},{"value":32},{"value":496},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6171028880},{"value":64},{"value":1},{"value":5679445760},{"value":18446744073709551580},{"value":8},{"value":0},{"value":105553174086176},{"value":4411394432},{"value":4411394429},{"value":2},{"value":4411392000},{"value":4411394428},{"value":4411392000},{"value":16},{"value":4410185600},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4317603824},"cpsr":{"value":1610616832},"fp":{"value":6171028992},"sp":{"value":6171028976},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024586,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4317603792},{"value":6172716320},{"value":68719460488},{"value":13810932864},{"value":108374},{"value":32},{"value":512},{"value":1},{"value":2},{"value":1},{"value":1},{"value":6172716432},{"value":64},{"value":2},{"value":5679446016},{"value":18446744073709551580},{"value":4},{"value":0},{"value":105553174086144},{"value":4411394432},{"value":4411394429},{"value":3},{"value":4411392000},{"value":4411394428},{"value":4411392000},{"value":24},{"value":4410185600},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4317603824},"cpsr":{"value":1610616832},"fp":{"value":6172716544},"sp":{"value":6172716528},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024587,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4317603792},{"value":6173289760},{"value":108358},{"value":13810928944},{"value":108358},{"value":32},{"value":512},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6173289872},{"value":64},{"value":3},{"value":5679446272},{"value":18446744073709551580},{"value":4},{"value":0},{"value":105553174085712},{"value":4411394432},{"value":4411394429},{"value":4},{"value":4411392000},{"value":4411394428},{"value":4411392000},{"value":32},{"value":4410185600},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4317603824},"cpsr":{"value":1610616832},"fp":{"value":6173289984},"sp":{"value":6173289968},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024588,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4317603792},{"value":6173863200},{"value":108326},{"value":13810929504},{"value":108326},{"value":32},{"value":512},{"value":1},{"value":3},{"value":2},{"value":1},{"value":6173863312},{"value":64},{"value":4},{"value":5679446528},{"value":18446744073709551580},{"value":5},{"value":0},{"value":105553174085744},{"value":4411394432},{"value":4411394429},{"value":5},{"value":4411392000},{"value":4411394428},{"value":4411392000},{"value":40},{"value":4410185600},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4317603824},"cpsr":{"value":1610616832},"fp":{"value":6173863424},"sp":{"value":6173863408},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024589,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4317603792},{"value":6171602208},{"value":68719460488},{"value":128},{"value":32},{"value":0},{"value":6096132624},{"value":1},{"value":4},{"value":3},{"value":1},{"value":6171602320},{"value":64},{"value":4},{"value":5679446528},{"value":18446744073709551580},{"value":5},{"value":0},{"value":105553174086208},{"value":4411394432},{"value":4411394429},{"value":6},{"value":4411392000},{"value":4411394428},{"value":4411392000},{"value":48},{"value":4410185600},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4317603824},"cpsr":{"value":1610616832},"fp":{"value":6171602432},"sp":{"value":6171602416},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024590,"name":"AudioCalc","threadState":{"x":[{"value":14},{"value":4317603792},{"value":6174436640},{"value":68719460488},{"value":128},{"value":32},{"value":0},{"value":15139242000},{"value":1},{"value":5},{"value":4},{"value":1},{"value":6174436752},{"value":64},{"value":4},{"value":5679446528},{"value":18446744073709551580},{"value":5},{"value":0},{"value":105553174086224},{"value":4411394432},{"value":4411394429},{"value":7},{"value":4411392000},{"value":4411394428},{"value":4411392000},{"value":56},{"value":4410185600},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4317603824},"cpsr":{"value":1610616832},"fp":{"value":6174436864},"sp":{"value":6174436848},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":17180656,"imageIndex":0},{"imageOffset":25846484,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024591,"name":"com.apple.audio.IOThread.client","threadState":{"x":[{"value":14},{"value":110851},{"value":0},{"value":0},{"value":0},{"value":32},{"value":0},{"value":14311525392},{"value":1},{"value":6141538082566242382},{"value":1099511628032},{"value":1099511628034},{"value":48},{"value":64},{"value":7},{"value":5679447296},{"value":18446744073709551579},{"value":8575313392},{"value":0},{"value":4496385824},{"value":4496385816},{"value":5210604544},{"value":105553170158976},{"value":8558329856,"symbolLocation":0,"symbol":"AMCP::Log::Scope_Registry::get()::s_registry"},{"value":8519204864,"symbolLocation":448,"symbol":"sVarispeedRateTable"},{"value":128},{"value":105475},{"value":0},{"value":6767195284}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904558328},"cpsr":{"value":1610616832},"fp":{"value":6175010048},"sp":{"value":6175010032},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859580},"far":{"value":0}},"frames":[{"imageOffset":3004,"symbol":"semaphore_wait_signal_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":123640,"symbol":"caulk::mach::semaphore::wait_signal_or_error(caulk::mach::semaphore&)","symbolLocation":36,"imageIndex":141},{"imageOffset":2044128,"symbol":"HALC_ProxyIOContext::IOWorkLoop()","symbolLocation":5276,"imageIndex":143},{"imageOffset":2037040,"symbol":"invocation function for block in HALC_ProxyIOContext::HALC_ProxyIOContext(unsigned int, unsigned int)","symbolLocation":172,"imageIndex":143},{"imageOffset":3783156,"symbol":"HALC_IOThread::Entry(void*)","symbolLocation":88,"imageIndex":143},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024630,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":138}],"threadState":{"x":[{"value":13688287232},{"value":131587},{"value":13687750656},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":13688287232},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6024637,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":10546900,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":9992708},{"value":13688860328},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105553390986600},{"value":105553390986552},{"value":13688860896},{"value":9992708},{"value":0},{"value":0},{"value":798465},{"value":798720},{"value":18437520701672696841},{"value":10000000}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13688860448},"sp":{"value":13688860304},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6024681,"name":"Realtime safe async job spooler","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":99998958},{"value":13832318488},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5217197800},{"value":5217197864},{"value":13832319200},{"value":99998958},{"value":0},{"value":0},{"value":76033},{"value":76288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13832318608},"sp":{"value":13832318464},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":10383204,"imageIndex":8},{"imageOffset":9521384,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024687,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147483287222747136},{"value":499999916},{"value":68719460488},{"value":23491},{"value":3},{"value":10},{"value":0},{"value":499999916},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6448281657999},{"value":105553339240336},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":13843852816},"sp":{"value":13843852784},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":137},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":137},{"imageOffset":651828,"imageIndex":11},{"imageOffset":432288,"imageIndex":11},{"imageOffset":501288,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024688,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":13846370320},{"value":128},{"value":13846370288},{"value":365},{"value":18446744073709551125},{"value":13829407936},{"value":2},{"value":0},{"value":2},{"value":54848},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":13846375824},{"value":13829407840},{"value":0},{"value":13846375688},{"value":13842269352},{"value":13842269424},{"value":13842269344},{"value":13846375824},{"value":13842269424},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13892756284},"cpsr":{"value":1610616832},"fp":{"value":13846375536},"sp":{"value":13846370208},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024689,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":13846943760},{"value":128},{"value":13846943728},{"value":365},{"value":18446744073709551125},{"value":13829404576},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":434052},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":13846949264},{"value":13829404480},{"value":0},{"value":13846949128},{"value":13829404328},{"value":13829404400},{"value":13829404320},{"value":13846949264},{"value":13829404400},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13892756284},"cpsr":{"value":1610616832},"fp":{"value":13846948976},"sp":{"value":13846943648},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024692,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":13847517200},{"value":128},{"value":13847517168},{"value":365},{"value":18446744073709551125},{"value":13829417408},{"value":2},{"value":0},{"value":2},{"value":252012},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":13847522704},{"value":13829417312},{"value":0},{"value":13847522568},{"value":13829416872},{"value":13829416944},{"value":13829416864},{"value":13847522704},{"value":13829416944},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13892756284},"cpsr":{"value":1610616832},"fp":{"value":13847522416},"sp":{"value":13847517088},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024693,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":13848090640},{"value":128},{"value":13848090608},{"value":0},{"value":0},{"value":13842293872},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":13848096144},{"value":13842293776},{"value":0},{"value":13848096008},{"value":13829417160},{"value":13829417232},{"value":13829417152},{"value":13848096144},{"value":13829417232},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13892756284},"cpsr":{"value":1610616832},"fp":{"value":13848095856},"sp":{"value":13848090528},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":172860,"imageIndex":11},{"imageOffset":176328,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":188956,"imageIndex":11},{"imageOffset":501268,"imageIndex":11},{"imageOffset":503800,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024724,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":65536},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999958},{"value":13853863416},{"value":0},{"value":1280},{"value":5497558140162},{"value":5497558140162},{"value":1280},{"value":0},{"value":5497558140160},{"value":305},{"value":8575309072},{"value":0},{"value":13852549880},{"value":13852549944},{"value":13853864160},{"value":299999958},{"value":0},{"value":65536},{"value":65537},{"value":65792},{"value":4294967294},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13853863536},"sp":{"value":13853863392},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":1130452,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024725,"name":"HighResolutionTimerThread","threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":13854436872},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13861296104},{"value":13861296168},{"value":13854437600},{"value":0},{"value":0},{"value":256},{"value":257},{"value":512},{"value":13854437097},{"value":13854437113}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13854436992},"sp":{"value":13854436848},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1019852,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024726,"name":"ContentsListsThread","threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":0},{"value":44998958},{"value":13862727160},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14369688440},{"value":14369688504},{"value":13862727904},{"value":44998958},{"value":0},{"value":256},{"value":43265},{"value":43520},{"value":45},{"value":1756051319060}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13862727280},"sp":{"value":13862727136},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":777552,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024727,"name":"Kick Analysis Thread","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":100000000},{"value":0},{"value":0},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":13863299224},{"value":0},{"value":0},{"value":72057602596210409,"symbolLocation":72057594037927937,"symbol":"OBJC_CLASS_$___NSCFString"},{"value":8558282472,"symbolLocation":0,"symbol":"OBJC_CLASS_$___NSCFString"},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":13863300272},{"value":14396862760,"symbolLocation":160,"symbol":"BinaryData::originalFilenames"},{"value":14396569768},{"value":14369693448},{"value":246},{"value":14369695464},{"value":0},{"value":14396569688},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":13863298224},"sp":{"value":13863298176},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":3247740,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024728,"name":"Resources Store","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":49998959},{"value":13863874040},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14369697200},{"value":14369697264},{"value":13863874784},{"value":49998959},{"value":0},{"value":0},{"value":139265},{"value":139520},{"value":14369703792},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13863874160},"sp":{"value":13863874016},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2403944,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024729,"name":"Convo Engines Store","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":4999583},{"value":13864447496},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14369717320},{"value":14369717384},{"value":13864448224},{"value":4999583},{"value":0},{"value":0},{"value":1249537},{"value":1249792},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13864447616},"sp":{"value":13864447472},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2404540,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024730,"name":"thumb cache","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":13865020920},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384210752},{"value":14384210816},{"value":13865021664},{"value":499999958},{"value":0},{"value":0},{"value":13313},{"value":13568},{"value":500},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13865021040},"sp":{"value":13865020896},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":777552,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024731,"name":"ContentsListsThread","threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":0},{"value":421999959},{"value":13865594360},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384212248},{"value":14384212312},{"value":13865595104},{"value":421999959},{"value":0},{"value":256},{"value":44289},{"value":44544},{"value":422},{"value":1756051318599}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13865594480},"sp":{"value":13865594336},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":777552,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024732,"name":"HighResolutionTimerThread","threadState":{"x":[{"value":316},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":991374},{"value":13866167688},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105553855668360},{"value":105553855668424},{"value":13866168544},{"value":991374},{"value":0},{"value":0},{"value":7477505},{"value":7477760},{"value":13866168041},{"value":13866168057}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13866167808},"sp":{"value":13866167664},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":1019676,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024733,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999916},{"value":13903441448},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14283302200},{"value":14283302264},{"value":13903442144},{"value":1999916},{"value":0},{"value":0},{"value":3343873},{"value":3344128},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13903441568},"sp":{"value":13903441424},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024734,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":13904014888},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14362725688},{"value":14362725752},{"value":13904015584},{"value":1999958},{"value":0},{"value":0},{"value":3343361},{"value":3343616},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13904015008},"sp":{"value":13904014864},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024735,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":13929016872},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14283320632},{"value":14283320696},{"value":13929017568},{"value":1999958},{"value":0},{"value":0},{"value":3341825},{"value":3342080},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13929016992},"sp":{"value":13929016848},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024736,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999959},{"value":13929590312},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14363373880},{"value":14363373944},{"value":13929591008},{"value":1999959},{"value":0},{"value":0},{"value":3342337},{"value":3342592},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13929590432},"sp":{"value":13929590288},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024737,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":13930163752},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":4511144760},{"value":4511144824},{"value":13930164448},{"value":1999958},{"value":0},{"value":0},{"value":3340289},{"value":3340544},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13930163872},"sp":{"value":13930163728},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024738,"name":"Convo thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":13931933224},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14284137784},{"value":14284137848},{"value":13931933920},{"value":1999958},{"value":0},{"value":0},{"value":3340545},{"value":3340800},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13931933344},"sp":{"value":13931933200},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024739,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":13932506744},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13852715464},{"value":13852715416},{"value":13932507360},{"value":500000000},{"value":0},{"value":0},{"value":14849},{"value":15104},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13932506864},"sp":{"value":13932506720},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024740,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":13933080184},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13852715944},{"value":13852715896},{"value":13933080800},{"value":500000000},{"value":0},{"value":0},{"value":14849},{"value":15104},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13933080304},"sp":{"value":13933080160},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024741,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14129065592},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13852716424},{"value":13852716376},{"value":14129066208},{"value":500000000},{"value":0},{"value":0},{"value":14849},{"value":15104},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14129065712},"sp":{"value":14129065568},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024742,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14129639032},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13852716904},{"value":13852716856},{"value":14129639648},{"value":500000000},{"value":0},{"value":0},{"value":14849},{"value":15104},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14129639152},"sp":{"value":14129639008},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024743,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14130212472},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13852717384},{"value":13852717336},{"value":14130213088},{"value":500000000},{"value":0},{"value":0},{"value":14849},{"value":15104},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14130212592},"sp":{"value":14130212448},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024744,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14130785912},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13852717864},{"value":13852717816},{"value":14130786528},{"value":499999000},{"value":0},{"value":0},{"value":14849},{"value":15104},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14130786032},"sp":{"value":14130785888},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024745,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14131359352},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13852718344},{"value":13852718296},{"value":14131359968},{"value":499999000},{"value":0},{"value":0},{"value":14849},{"value":15104},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14131359472},"sp":{"value":14131359328},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024746,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14131932792},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13852718824},{"value":13852718776},{"value":14131933408},{"value":499999000},{"value":0},{"value":0},{"value":14849},{"value":15104},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14131932912},"sp":{"value":14131932768},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024747,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14132506232},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13852719304},{"value":13852719256},{"value":14132506848},{"value":500000000},{"value":0},{"value":0},{"value":14849},{"value":15104},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14132506352},"sp":{"value":14132506208},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024748,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14133079672},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13852719784},{"value":13852719736},{"value":14133080288},{"value":499999000},{"value":0},{"value":0},{"value":14849},{"value":15104},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14133079792},"sp":{"value":14133079648},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":933212,"imageIndex":13},{"imageOffset":1074144,"imageIndex":13},{"imageOffset":936980,"imageIndex":13},{"imageOffset":1024732,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024749,"frames":[{"imageOffset":3328,"symbol":"mach_wait_until","symbolLocation":8,"imageIndex":139},{"imageOffset":479004,"symbol":"MPDelayUntil","symbolLocation":20,"imageIndex":145},{"imageOffset":3838128,"imageIndex":13},{"imageOffset":4284548,"imageIndex":13},{"imageOffset":3837264,"imageIndex":13},{"imageOffset":476764,"symbol":"PrivateMPEntryPoint","symbolLocation":60,"imageIndex":145},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":0},{"value":6448271004100},{"value":18446724588040846973},{"value":68719460488},{"value":0},{"value":160},{"value":0},{"value":0},{"value":8558342144,"symbolLocation":32,"symbol":"FSNodeStorageInitUniverseCallbacks.sFSNodeServerCallbacks"},{"value":6141538082566242382},{"value":1099511628032},{"value":1099511628034},{"value":256},{"value":1099511628032},{"value":0},{"value":0},{"value":18446744073709551526},{"value":8575311488},{"value":0},{"value":1},{"value":13690022832},{"value":13690023648},{"value":14533328908},{"value":0},{"value":0},{"value":0},{"value":14536435589},{"value":13690023652},{"value":14533437740}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6775537436},"cpsr":{"value":1610616832},"fp":{"value":14133653136},"sp":{"value":14133653136},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859904},"far":{"value":0}}},{"id":6024778,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28940,"symbol":"_pthread_cond_wait","symbolLocation":1028,"imageIndex":138},{"imageOffset":659548,"symbol":"TSWaitOnConditionTimedRelative","symbolLocation":32,"imageIndex":145},{"imageOffset":472468,"symbol":"MPWaitForEvent","symbolLocation":208,"imageIndex":145},{"imageOffset":3836672,"imageIndex":13},{"imageOffset":4714744,"imageIndex":13},{"imageOffset":3837264,"imageIndex":13},{"imageOffset":476764,"symbol":"PrivateMPEntryPoint","symbolLocation":60,"imageIndex":145},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":24832},{"value":0},{"value":0},{"value":160},{"value":0},{"value":250000000},{"value":25601},{"value":0},{"value":1024},{"value":4398046512130},{"value":4398046512130},{"value":1024},{"value":0},{"value":4398046512128},{"value":305},{"value":8575309072},{"value":0},{"value":8519250856,"symbolLocation":0,"symbol":"_MP_AsyncTermGuard"},{"value":105553295332424},{"value":1},{"value":250000000},{"value":0},{"value":24832},{"value":25601},{"value":25856},{"value":105553945413184},{"value":13689596456}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131276},"cpsr":{"value":2684358656},"fp":{"value":14310460880},"sp":{"value":14310460736},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6024823,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":5355872,"imageIndex":13},{"imageOffset":5363136,"imageIndex":13},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":6144},{"value":0},{"value":0},{"value":160},{"value":4},{"value":999998917},{"value":14388063848},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14401786304},{"value":14401786144},{"value":14388064480},{"value":999998917},{"value":4},{"value":6144},{"value":6401},{"value":6656},{"value":9223372036854775},{"value":1080585049696125}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14388063968},"sp":{"value":14388063824},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6024830,"name":"PerformanceManagers","threadState":{"x":[{"value":60},{"value":0},{"value":1},{"value":1},{"value":0},{"value":1000000},{"value":0},{"value":0},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":2},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":6168735552},{"value":15000095128},{"value":1000000},{"value":105553374898920},{"value":105553374898920},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":6168735520},"sp":{"value":6168735472},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":12872504,"imageIndex":15},{"imageOffset":16335680,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024831,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":3230692,"imageIndex":15},{"imageOffset":3258484,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":13639839096},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14707796704},{"value":14707796648},{"value":13639839968},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":14998194304,"symbolLocation":9480,"symbol":"v3_tls_feature"},{"value":14998194176,"symbolLocation":9352,"symbol":"v3_tls_feature"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13639839216},"sp":{"value":13639839072},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6024862,"name":"AsyncPresetLoader","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":13687139016},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384683360},{"value":14384683424},{"value":13687140576},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":13687139800},{"value":13687139536}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":13687139136},"sp":{"value":13687138992},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":2597116,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024865,"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":130872,"symbol":"std::__1::this_thread::sleep_for(std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&)","symbolLocation":84,"imageIndex":142},{"imageOffset":1736456,"imageIndex":17},{"imageOffset":1737308,"imageIndex":17},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":10000000},{"value":52},{"value":0},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":16387},{"value":17},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":14398779168},{"value":14398779168},{"value":14673626664},{"value":1000000},{"value":9223372036000},{"value":9223372036854775807},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":1610616832},"fp":{"value":14398779152},"sp":{"value":14398779104},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}}},{"id":6024879,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147483111129088000},{"value":499999875},{"value":68719460488},{"value":18446744063345797632},{"value":32},{"value":10},{"value":0},{"value":499999875},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6448275749294},{"value":105553609160432},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":14432103952},"sp":{"value":14432103920},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":137},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":137},{"imageOffset":656652,"imageIndex":18},{"imageOffset":437112,"imageIndex":18},{"imageOffset":506112,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024880,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14436292624},{"value":128},{"value":14436292592},{"value":365},{"value":18446744073709551125},{"value":14351014048},{"value":2},{"value":0},{"value":2},{"value":53006},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":14436298128},{"value":14351013952},{"value":0},{"value":14436297992},{"value":14384521032},{"value":14384521104},{"value":14384521024},{"value":14436298128},{"value":14384521104},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":14951691796},"cpsr":{"value":1610616832},"fp":{"value":14436297840},"sp":{"value":14436292512},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024881,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14510364688},{"value":128},{"value":14510364656},{"value":365},{"value":18446744073709551125},{"value":14351010208},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":892043},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":14510370192},{"value":14351010112},{"value":0},{"value":14510370056},{"value":14351009288},{"value":14351009360},{"value":14351009280},{"value":14510370192},{"value":14351009360},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":14951691796},"cpsr":{"value":1610616832},"fp":{"value":14510369904},"sp":{"value":14510364576},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024896,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14510938128},{"value":128},{"value":14510938096},{"value":365},{"value":18446744073709551125},{"value":14204136224},{"value":2},{"value":0},{"value":2},{"value":258229},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":14510943632},{"value":14204136128},{"value":0},{"value":14510943496},{"value":14204139848},{"value":14204139920},{"value":14204139840},{"value":14510943632},{"value":14204139920},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":14951691796},"cpsr":{"value":1610616832},"fp":{"value":14510943344},"sp":{"value":14510938016},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024897,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":14511511568},{"value":128},{"value":14511511536},{"value":0},{"value":0},{"value":14204134688},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":14511517072},{"value":14204134592},{"value":0},{"value":14511516936},{"value":14384526664},{"value":14384526736},{"value":14384526656},{"value":14511517072},{"value":14384526736},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":14951691796},"cpsr":{"value":1610616832},"fp":{"value":14511516784},"sp":{"value":14511511456},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":177684,"imageIndex":18},{"imageOffset":181152,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":193780,"imageIndex":18},{"imageOffset":506092,"imageIndex":18},{"imageOffset":508624,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024902,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":10496},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14512090744},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384540600},{"value":14384540552},{"value":14512091360},{"value":500000000},{"value":0},{"value":10496},{"value":12801},{"value":13056},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14512090864},"sp":{"value":14512090720},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024903,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":11008},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14610198136},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384541080},{"value":14384541032},{"value":14610198752},{"value":499999000},{"value":0},{"value":11008},{"value":13313},{"value":13568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14610198256},"sp":{"value":14610198112},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024904,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":11008},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14610771576},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384541560},{"value":14384541512},{"value":14610772192},{"value":499999000},{"value":0},{"value":11008},{"value":13313},{"value":13568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14610771696},"sp":{"value":14610771552},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024905,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":11008},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14611345016},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384542040},{"value":14384541992},{"value":14611345632},{"value":499999000},{"value":0},{"value":11008},{"value":13313},{"value":13568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14611345136},"sp":{"value":14611344992},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024906,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":11008},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14611918456},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384542520},{"value":14384542472},{"value":14611919072},{"value":500000000},{"value":0},{"value":11008},{"value":13313},{"value":13568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14611918576},"sp":{"value":14611918432},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024907,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":11008},{"value":0},{"value":0},{"value":161},{"value":0},{"value":500000000},{"value":14612491896},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384543000},{"value":14384542952},{"value":14612492512},{"value":500000000},{"value":0},{"value":11008},{"value":13313},{"value":13568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14612492016},"sp":{"value":14612491872},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024908,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":11008},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14754786936},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384543480},{"value":14384543432},{"value":14754787552},{"value":499999000},{"value":0},{"value":11008},{"value":13313},{"value":13568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14754787056},"sp":{"value":14754786912},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024909,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":11008},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14755360376},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384543960},{"value":14384543912},{"value":14755360992},{"value":499999000},{"value":0},{"value":11008},{"value":13313},{"value":13568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14755360496},"sp":{"value":14755360352},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024910,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":11008},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14933356152},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384544440},{"value":14384544392},{"value":14933356768},{"value":499999000},{"value":0},{"value":11008},{"value":13313},{"value":13568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14933356272},"sp":{"value":14933356128},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024911,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":11008},{"value":0},{"value":0},{"value":161},{"value":0},{"value":499999000},{"value":14933929592},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14384544920},{"value":14384544872},{"value":14933930208},{"value":499999000},{"value":0},{"value":11008},{"value":13313},{"value":13568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14933929712},"sp":{"value":14933929568},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":936956,"imageIndex":19},{"imageOffset":1077888,"imageIndex":19},{"imageOffset":940724,"imageIndex":19},{"imageOffset":1028476,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024912,"frames":[{"imageOffset":3328,"symbol":"mach_wait_until","symbolLocation":8,"imageIndex":139},{"imageOffset":479004,"symbol":"MPDelayUntil","symbolLocation":20,"imageIndex":145},{"imageOffset":3836008,"imageIndex":19},{"imageOffset":4282504,"imageIndex":19},{"imageOffset":3835144,"imageIndex":19},{"imageOffset":476764,"symbol":"PrivateMPEntryPoint","symbolLocation":60,"imageIndex":145},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":0},{"value":6448271003997},{"value":18446724588040846973},{"value":68719460488},{"value":0},{"value":160},{"value":0},{"value":0},{"value":8558342144,"symbolLocation":32,"symbol":"FSNodeStorageInitUniverseCallbacks.sFSNodeServerCallbacks"},{"value":6141538082566242382},{"value":1099511628032},{"value":1099511628034},{"value":256},{"value":1099511628032},{"value":0},{"value":1099511628032},{"value":18446744073709551526},{"value":8575311488},{"value":0},{"value":1},{"value":14348252816},{"value":14348253400},{"value":15062616668},{"value":0},{"value":0},{"value":0},{"value":15065687717},{"value":14348253404},{"value":15062725297}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6775537436},"cpsr":{"value":1610616832},"fp":{"value":13687713424},"sp":{"value":13687713424},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859904},"far":{"value":0}}},{"id":6024927,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":5350472,"imageIndex":19},{"imageOffset":5357736,"imageIndex":19},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":1792},{"value":0},{"value":0},{"value":160},{"value":4},{"value":558079292},{"value":14934503016},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14944369328},{"value":14944369168},{"value":14934503648},{"value":558079292},{"value":4},{"value":1792},{"value":1793},{"value":2048},{"value":9223372036854775},{"value":1080582393738708}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14934503136},"sp":{"value":14934502992},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6024939,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":138}],"threadState":{"x":[{"value":14951477248},{"value":163847},{"value":14950940672},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":14951477248},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6024942,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":138}],"threadState":{"x":[{"value":14973923328},{"value":144651},{"value":14973386752},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":14973923328},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6024943,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":138}],"threadState":{"x":[{"value":14974496768},{"value":162819},{"value":14973960192},{"value":0},{"value":409604},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":14974496768},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6024983,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998875},{"value":14977363464},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399295816},{"value":14399295880},{"value":14977364192},{"value":499998875},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399295096},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14977363584},"sp":{"value":14977363440},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024984,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999959},{"value":15036542472},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399296296},{"value":14399296360},{"value":15036543200},{"value":499999959},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399295096},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15036542592},"sp":{"value":15036542448},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024985,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999916},{"value":15037115912},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399296776},{"value":14399296840},{"value":15037116640},{"value":499999916},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399295096},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15037116032},"sp":{"value":15037115888},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024986,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999875},{"value":15037689352},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399297256},{"value":14399297320},{"value":15037690080},{"value":499999875},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399295096},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15037689472},"sp":{"value":15037689328},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024987,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999917},{"value":15038262792},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399297736},{"value":14399297800},{"value":15038263520},{"value":499999917},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399295096},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15038262912},"sp":{"value":15038262768},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024988,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998916},{"value":15038836232},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399298216},{"value":14399298280},{"value":15038836960},{"value":499998916},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399295096},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15038836352},"sp":{"value":15038836208},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024989,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998917},{"value":15039409672},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399298696},{"value":14399298760},{"value":15039410400},{"value":499998917},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399295096},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15039409792},"sp":{"value":15039409648},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024990,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15039983112},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399299176},{"value":14399299240},{"value":15039983840},{"value":499998958},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399295096},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15039983232},"sp":{"value":15039983088},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024991,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998875},{"value":15040556552},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399299656},{"value":14399299720},{"value":15040557280},{"value":499998875},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399295096},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15040556672},"sp":{"value":15040556528},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024992,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999959},{"value":15041129992},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399300136},{"value":14399300200},{"value":15041130720},{"value":499999959},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399295096},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15041130112},"sp":{"value":15041129968},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024993,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999917},{"value":15041703432},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399301368},{"value":14399301432},{"value":15041704160},{"value":499999917},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399300712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15041703552},"sp":{"value":15041703408},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024994,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15042276872},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399301848},{"value":14399301912},{"value":15042277600},{"value":499998958},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399300712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15042276992},"sp":{"value":15042276848},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024995,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998834},{"value":15042850312},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399302328},{"value":14399302392},{"value":15042851040},{"value":499998834},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399300712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15042850432},"sp":{"value":15042850288},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024996,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15043423752},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399302808},{"value":14399302872},{"value":15043424480},{"value":499998958},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399300712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15043423872},"sp":{"value":15043423728},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024997,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15043997192},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399303288},{"value":14399303352},{"value":15043997920},{"value":499998958},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399300712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15043997312},"sp":{"value":15043997168},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024998,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998917},{"value":15130226184},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399303768},{"value":14399303832},{"value":15130226912},{"value":499998917},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399300712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15130226304},"sp":{"value":15130226160},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6024999,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15130799624},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399304248},{"value":14399304312},{"value":15130800352},{"value":499998958},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399300712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15130799744},"sp":{"value":15130799600},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025000,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999917},{"value":15131373064},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399304728},{"value":14399304792},{"value":15131373792},{"value":499999917},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399300712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15131373184},"sp":{"value":15131373040},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025001,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999958},{"value":15131946504},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399305208},{"value":14399305272},{"value":15131947232},{"value":499999958},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399300712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15131946624},"sp":{"value":15131946480},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025002,"name":"Pool","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499999917},{"value":15132519944},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14399305688},{"value":14399305752},{"value":15132520672},{"value":499999917},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":14399300712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15132520064},"sp":{"value":15132519920},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4243000,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025006,"name":"AudioRecorder_thread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998959},{"value":15569808904},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14713463544},{"value":14713463608},{"value":15569809632},{"value":499998959},{"value":0},{"value":0},{"value":11009},{"value":11264},{"value":500},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15569809024},"sp":{"value":15569808880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4064104,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025016,"name":"com.u-he.Diva.voice-renderer 0","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15570382264},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099338984},{"value":5099339048},{"value":15570383072},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15570382384},"sp":{"value":15570382240},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025017,"name":"com.u-he.Diva.voice-renderer 1","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15570955704},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099339096},{"value":5099339160},{"value":15570956512},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15570955824},"sp":{"value":15570955680},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025018,"name":"com.u-he.Diva.voice-renderer 2","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15571529144},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099339208},{"value":5099339272},{"value":15571529952},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15571529264},"sp":{"value":15571529120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025019,"name":"com.u-he.Diva.voice-renderer 3","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15572102584},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099339320},{"value":5099339384},{"value":15572103392},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15572102704},"sp":{"value":15572102560},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025020,"name":"com.u-he.Diva.voice-renderer 4","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15572676024},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099339432},{"value":5099339496},{"value":15572676832},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15572676144},"sp":{"value":15572676000},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025021,"name":"com.u-he.Diva.voice-renderer 5","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15573249464},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099339544},{"value":5099339608},{"value":15573250272},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15573249584},"sp":{"value":15573249440},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025022,"name":"com.u-he.Diva.voice-renderer 6","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15573822904},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099339656},{"value":5099339720},{"value":15573823712},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15573823024},"sp":{"value":15573822880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025023,"name":"com.u-he.Diva.voice-renderer 7","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15574396344},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099339768},{"value":5099339832},{"value":15574397152},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15574396464},"sp":{"value":15574396320},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025024,"name":"com.u-he.Diva.voice-renderer 8","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15574969784},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099339880},{"value":5099339944},{"value":15574970592},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15574969904},"sp":{"value":15574969760},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025025,"name":"com.u-he.Diva.voice-renderer 9","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15575543224},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099339992},{"value":5099340056},{"value":15575544032},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15575543344},"sp":{"value":15575543200},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025026,"name":"com.u-he.Diva.voice-renderer 10","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15576116664},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099340104},{"value":5099340168},{"value":15576117472},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15576116784},"sp":{"value":15576116640},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025027,"name":"com.u-he.Diva.voice-renderer 11","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15589567928},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099340216},{"value":5099340280},{"value":15589568736},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15589568048},"sp":{"value":15589567904},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025028,"name":"com.u-he.Diva.voice-renderer 12","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15590141368},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099340328},{"value":5099340392},{"value":15590142176},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15590141488},"sp":{"value":15590141344},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025029,"name":"com.u-he.Diva.voice-renderer 13","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15590714808},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099340440},{"value":5099340504},{"value":15590715616},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15590714928},"sp":{"value":15590714784},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025030,"name":"com.u-he.Diva.voice-renderer 14","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15591288248},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099340552},{"value":5099340616},{"value":15591289056},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15591288368},"sp":{"value":15591288224},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025031,"name":"com.u-he.Diva.voice-renderer 15","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15591861688},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5099340664},{"value":5099340728},{"value":15591862496},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15591861808},"sp":{"value":15591861664},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025046,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":2312696,"imageIndex":24},{"imageOffset":2329356,"imageIndex":24},{"imageOffset":2329188,"imageIndex":24},{"imageOffset":2329008,"imageIndex":24},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":1500},{"value":0},{"value":15592434536},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14947530616},{"value":14947530792},{"value":15592435936},{"value":0},{"value":1500},{"value":256},{"value":257},{"value":512},{"value":15153909248},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15592434656},"sp":{"value":15592434512},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025068,"name":"Internet Monitor","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":50000000},{"value":0},{"value":18446744069415198976},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":1099511627776},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":15593000720},{"value":0},{"value":105553167199312},{"value":16215425080},{"value":16215424512},{"value":3435973837},{"value":15593000728},{"value":0},{"value":16215429344}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":15592999120},"sp":{"value":15592999072},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":1214152,"symbol":"PSInternet::run()","symbolLocation":46108,"imageIndex":27},{"imageOffset":2449108,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":27},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025069,"name":"thumb cache","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998958},{"value":15598186008},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16159720736},{"value":16159720800},{"value":15598186720},{"value":499998958},{"value":0},{"value":0},{"value":9985},{"value":10240},{"value":274877907},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15598186128},"sp":{"value":15598185984},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":2379828,"symbol":"juce::WaitableEvent::wait(int) const","symbolLocation":152,"imageIndex":27},{"imageOffset":2378892,"symbol":"juce::TimeSliceThread::run()","symbolLocation":128,"imageIndex":27},{"imageOffset":2449108,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":27},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025073,"name":"com.apple.NSURLConnectionLoader","threadState":{"x":[{"value":268451845},{"value":21592279046},{"value":8589934592},{"value":652023280173056},{"value":0},{"value":652023280173056},{"value":2},{"value":4294967295},{"value":0},{"value":17179869184},{"value":0},{"value":2},{"value":0},{"value":0},{"value":151811},{"value":0},{"value":18446744073709551569},{"value":8575310952},{"value":0},{"value":4294967295},{"value":2},{"value":652023280173056},{"value":0},{"value":652023280173056},{"value":15577832776},{"value":8589934592},{"value":21592279046},{"value":18446744073709550527},{"value":4412409862}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6712935328},"cpsr":{"value":4096},"fp":{"value":15577832624},"sp":{"value":15577832544},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859700},"far":{"value":0}},"frames":[{"imageOffset":3124,"symbol":"mach_msg2_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":78752,"symbol":"mach_msg2_internal","symbolLocation":76,"imageIndex":139},{"imageOffset":38756,"symbol":"mach_msg_overwrite","symbolLocation":484,"imageIndex":139},{"imageOffset":4008,"symbol":"mach_msg","symbolLocation":24,"imageIndex":139},{"imageOffset":511164,"symbol":"__CFRunLoopServiceMachPort","symbolLocation":160,"imageIndex":146},{"imageOffset":505304,"symbol":"__CFRunLoopRun","symbolLocation":1208,"imageIndex":146},{"imageOffset":502424,"symbol":"CFRunLoopRunSpecific","symbolLocation":572,"imageIndex":146},{"imageOffset":2441972,"symbol":"+[__CFN_CoreSchedulingSetRunnable _run:]","symbolLocation":416,"imageIndex":147},{"imageOffset":342952,"symbol":"__NSThread__start__","symbolLocation":732,"imageIndex":148},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025113,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147482930740461568},{"value":499999833},{"value":68719460488},{"value":71289344},{"value":32},{"value":10},{"value":0},{"value":499999833},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6448278754147},{"value":105553744100336},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":15576690192},"sp":{"value":15576690160},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":137},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":137},{"imageOffset":654644,"imageIndex":29},{"imageOffset":435104,"imageIndex":29},{"imageOffset":504104,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025114,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15577258000},{"value":128},{"value":15577257968},{"value":365},{"value":18446744073709551125},{"value":15969978928},{"value":2},{"value":0},{"value":2},{"value":62328},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":15577263504},{"value":15969978832},{"value":0},{"value":15577263368},{"value":15969975480},{"value":15969975552},{"value":15969975472},{"value":15577263504},{"value":15969975552},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16240520764},"cpsr":{"value":1610616832},"fp":{"value":15577263216},"sp":{"value":15577257888},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025115,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15578404880},{"value":128},{"value":15578404848},{"value":365},{"value":18446744073709551125},{"value":15969975728},{"value":2},{"value":0},{"value":2},{"value":999705},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":15578410384},{"value":15969975632},{"value":0},{"value":15578410248},{"value":4541203192},{"value":4541203264},{"value":4541203184},{"value":15578410384},{"value":4541203264},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16240520764},"cpsr":{"value":1610616832},"fp":{"value":15578410096},"sp":{"value":15578404768},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025119,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15712835600},{"value":128},{"value":15712835568},{"value":365},{"value":18446744073709551125},{"value":15713634624},{"value":2},{"value":0},{"value":2},{"value":237317},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":15712841104},{"value":15713634528},{"value":0},{"value":15712840968},{"value":15713634088},{"value":15713634160},{"value":15713634080},{"value":15712841104},{"value":15713634160},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16240520764},"cpsr":{"value":1610616832},"fp":{"value":15712840816},"sp":{"value":15712835488},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025120,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":15881689104},{"value":128},{"value":15881689072},{"value":0},{"value":0},{"value":15713636336},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":15881694608},{"value":15713636240},{"value":0},{"value":15881694472},{"value":15713634376},{"value":15713634448},{"value":15713634368},{"value":15881694608},{"value":15713634448},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16240520764},"cpsr":{"value":1610616832},"fp":{"value":15881694320},"sp":{"value":15881688992},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":175676,"imageIndex":29},{"imageOffset":179144,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":191772,"imageIndex":29},{"imageOffset":504084,"imageIndex":29},{"imageOffset":506616,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025124,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":51072,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":256},{"value":0},{"value":0},{"value":160},{"value":9},{"value":999999000},{"value":14945906280},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554167155008},{"value":105553648026992},{"value":14945906912},{"value":999999000},{"value":9},{"value":256},{"value":513},{"value":768},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14945906400},"sp":{"value":14945906256},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025164,"name":"jq-1","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":6167015048},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554165905984},{"value":105553647348176},{"value":6167015648},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":6167015168},"sp":{"value":6167015024},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025165,"name":"jq-10","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":14972776072},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554165932224},{"value":105553647287248},{"value":14972776672},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14972776192},"sp":{"value":14972776048},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025166,"name":"jq-2","threadState":{"x":[{"value":260},{"value":0},{"value":44288},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":14973349512},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554165932288},{"value":105553647287152},{"value":14973350112},{"value":0},{"value":0},{"value":44288},{"value":44289},{"value":44544},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":14973349632},"sp":{"value":14973349488},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025167,"name":"jq-9","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15598759560},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554165932352},{"value":105553647287200},{"value":15598760160},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15598759680},"sp":{"value":15598759536},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025168,"name":"jq-8","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15905353352},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554165932416},{"value":105553647287104},{"value":15905353952},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15905353472},"sp":{"value":15905353328},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025169,"name":"jq-3","threadState":{"x":[{"value":260},{"value":0},{"value":43776},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":15998676616},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554165932480},{"value":105553647287296},{"value":15998677216},{"value":0},{"value":0},{"value":43776},{"value":43777},{"value":44032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":15998676736},"sp":{"value":15998676592},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025170,"name":"jq-4","threadState":{"x":[{"value":260},{"value":0},{"value":44032},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16019320456},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554165932544},{"value":105553647287344},{"value":16019321056},{"value":0},{"value":0},{"value":44032},{"value":44033},{"value":44288},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16019320576},"sp":{"value":16019320432},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025171,"name":"jq-7","threadState":{"x":[{"value":260},{"value":0},{"value":43776},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16173805192},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554165932608},{"value":105553647287392},{"value":16173805792},{"value":0},{"value":0},{"value":43776},{"value":43777},{"value":44032},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16173805312},"sp":{"value":16173805168},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025172,"name":"jq-5","threadState":{"x":[{"value":260},{"value":0},{"value":43264},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16214912648},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554165932672},{"value":105553647287440},{"value":16214913248},{"value":0},{"value":0},{"value":43264},{"value":43265},{"value":43520},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16214912768},"sp":{"value":16214912624},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025173,"name":"jq-6","threadState":{"x":[{"value":260},{"value":0},{"value":42240},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16251498120},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554165932736},{"value":105553647287488},{"value":16251498720},{"value":0},{"value":0},{"value":42240},{"value":42241},{"value":42496},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16251498240},"sp":{"value":16251498096},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":5513080,"imageIndex":30},{"imageOffset":5519324,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025180,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":2378476,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":94464},{"value":0},{"value":0},{"value":160},{"value":0},{"value":500000000},{"value":16411242056},{"value":0},{"value":256},{"value":1099511628034},{"value":1099511628034},{"value":256},{"value":0},{"value":1099511628032},{"value":305},{"value":8575309072},{"value":0},{"value":105554168791552},{"value":105553553843776},{"value":16411242720},{"value":500000000},{"value":0},{"value":94464},{"value":96769},{"value":97024},{"value":1},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16411242176},"sp":{"value":16411242032},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025181,"name":"vpuptthd","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":1},{"value":0},{"value":16444321256},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554167154752},{"value":105553648026896},{"value":16444322016},{"value":0},{"value":1},{"value":0},{"value":4609},{"value":4864},{"value":16453234688},{"value":15970952424}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16444321376},"sp":{"value":16444321232},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":37604,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025182,"name":"tith","threadState":{"x":[{"value":260},{"value":0},{"value":289536},{"value":0},{"value":0},{"value":160},{"value":0},{"value":13999000},{"value":16586927624},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":105554166366208},{"value":105553648026944},{"value":16586928352},{"value":13999000},{"value":0},{"value":289536},{"value":289537},{"value":289792},{"value":4269867153},{"value":1116471296}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16586927744},"sp":{"value":16586927600},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":5513420,"imageIndex":30},{"imageOffset":38968,"imageIndex":30},{"imageOffset":5514072,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025189,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147482750351835136},{"value":499999791},{"value":68719460488},{"value":18446744073709514752},{"value":32},{"value":10},{"value":0},{"value":499999791},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6448272808563},{"value":105553743205280},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":16589024784},"sp":{"value":16589024752},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":137},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":137},{"imageOffset":665172,"imageIndex":31},{"imageOffset":445632,"imageIndex":31},{"imageOffset":514632,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025190,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16589592592},{"value":128},{"value":16589592560},{"value":365},{"value":18446744073709551125},{"value":16587572624},{"value":2},{"value":0},{"value":2},{"value":43464},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16589598096},{"value":16587572528},{"value":0},{"value":16589597960},{"value":16519661608},{"value":16519661680},{"value":16519661600},{"value":16589598096},{"value":16519661680},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16777402204},"cpsr":{"value":1610616832},"fp":{"value":16589597808},"sp":{"value":16589592480},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025191,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16590166032},{"value":128},{"value":16590166000},{"value":365},{"value":18446744073709551125},{"value":16587570464},{"value":2},{"value":0},{"value":2},{"value":275215},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16590171536},{"value":16587570368},{"value":0},{"value":16590171400},{"value":16585410584},{"value":16585410656},{"value":16585410576},{"value":16590171536},{"value":16585410656},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16777402204},"cpsr":{"value":1610616832},"fp":{"value":16590171248},"sp":{"value":16590165920},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025195,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16250918928},{"value":128},{"value":16250918896},{"value":365},{"value":18446744073709551125},{"value":14134561056},{"value":1099511628034},{"value":1099511628032},{"value":1099511628034},{"value":237323},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16250924432},{"value":14134560960},{"value":0},{"value":16250924296},{"value":16584575640},{"value":16584575712},{"value":16584575632},{"value":16250924432},{"value":16584575712},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16777402204},"cpsr":{"value":1610616832},"fp":{"value":16250924144},"sp":{"value":16250918816},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025196,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16590739472},{"value":128},{"value":16590739440},{"value":0},{"value":0},{"value":16504963392},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":16590744976},{"value":16504963296},{"value":0},{"value":16590744840},{"value":14134561608},{"value":14134561680},{"value":14134561600},{"value":16590744976},{"value":14134561680},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16777402204},"cpsr":{"value":1610616832},"fp":{"value":16590744688},"sp":{"value":16590739360},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":186204,"imageIndex":31},{"imageOffset":189672,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":202300,"imageIndex":31},{"imageOffset":514612,"imageIndex":31},{"imageOffset":517144,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025202,"name":"com.u-he.Diva.voice-renderer 0","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16591318456},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736525032},{"value":13736525096},{"value":16591319264},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16591318576},"sp":{"value":16591318432},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025203,"name":"com.u-he.Diva.voice-renderer 1","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16591891896},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736525144},{"value":13736525208},{"value":16591892704},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16591892016},"sp":{"value":16591891872},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025204,"name":"com.u-he.Diva.voice-renderer 2","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16592465336},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736525256},{"value":13736525320},{"value":16592466144},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16592465456},"sp":{"value":16592465312},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025205,"name":"com.u-he.Diva.voice-renderer 3","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16627822008},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736525368},{"value":13736525432},{"value":16627822816},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16627822128},"sp":{"value":16627821984},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025206,"name":"com.u-he.Diva.voice-renderer 4","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16628395448},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736525480},{"value":13736525544},{"value":16628396256},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16628395568},"sp":{"value":16628395424},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025207,"name":"com.u-he.Diva.voice-renderer 5","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16628968888},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736525592},{"value":13736525656},{"value":16628969696},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16628969008},"sp":{"value":16628968864},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025208,"name":"com.u-he.Diva.voice-renderer 6","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16629542328},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736525704},{"value":13736525768},{"value":16629543136},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16629542448},"sp":{"value":16629542304},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025209,"name":"com.u-he.Diva.voice-renderer 7","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16630115768},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736525816},{"value":13736525880},{"value":16630116576},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16630115888},"sp":{"value":16630115744},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025210,"name":"com.u-he.Diva.voice-renderer 8","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16630689208},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736525928},{"value":13736525992},{"value":16630690016},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16630689328},"sp":{"value":16630689184},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025211,"name":"com.u-he.Diva.voice-renderer 9","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16631262648},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736526040},{"value":13736526104},{"value":16631263456},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16631262768},"sp":{"value":16631262624},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025212,"name":"com.u-he.Diva.voice-renderer 10","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16631836088},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736526152},{"value":13736526216},{"value":16631836896},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16631836208},"sp":{"value":16631836064},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025213,"name":"com.u-he.Diva.voice-renderer 11","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16632409528},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736526264},{"value":13736526328},{"value":16632410336},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16632409648},"sp":{"value":16632409504},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025214,"name":"com.u-he.Diva.voice-renderer 12","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16632982968},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736526376},{"value":13736526440},{"value":16632983776},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16632983088},"sp":{"value":16632982944},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025215,"name":"com.u-he.Diva.voice-renderer 13","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16633556408},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736526488},{"value":13736526552},{"value":16633557216},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16633556528},"sp":{"value":16633556384},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025216,"name":"com.u-he.Diva.voice-renderer 14","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16634129848},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736526600},{"value":13736526664},{"value":16634130656},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16634129968},"sp":{"value":16634129824},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025217,"name":"com.u-he.Diva.voice-renderer 15","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16634703288},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":13736526712},{"value":13736526776},{"value":16634704096},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":1},{"value":4}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16634703408},"sp":{"value":16634703264},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":4538228,"imageIndex":22},{"imageOffset":5013300,"imageIndex":22},{"imageOffset":9015672,"imageIndex":22},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025220,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147483648000000000},{"value":500000000},{"value":68719460488},{"value":18446744073709479233},{"value":1},{"value":10},{"value":0},{"value":500000000},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6448280895714},{"value":105553742985664},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":16635276816},"sp":{"value":16635276784},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":137},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":137},{"imageOffset":653012,"imageIndex":32},{"imageOffset":433472,"imageIndex":32},{"imageOffset":502472,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025221,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16639350800},{"value":128},{"value":16639350768},{"value":365},{"value":18446744073709551125},{"value":16637779280},{"value":2},{"value":0},{"value":2},{"value":60601},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16639356304},{"value":16637779184},{"value":0},{"value":16639356168},{"value":16585454584},{"value":16585454656},{"value":16585454576},{"value":16639356304},{"value":16585454656},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16871581660},"cpsr":{"value":1610616832},"fp":{"value":16639356016},"sp":{"value":16639350688},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025222,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16639924240},{"value":128},{"value":16639924208},{"value":365},{"value":18446744073709551125},{"value":16585459024},{"value":2},{"value":0},{"value":2},{"value":933417},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16639929744},{"value":16585458928},{"value":0},{"value":16639929608},{"value":16585458776},{"value":16585458848},{"value":16585458768},{"value":16639929744},{"value":16585458848},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16871581660},"cpsr":{"value":1610616832},"fp":{"value":16639929456},"sp":{"value":16639924128},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025225,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16640497680},{"value":128},{"value":16640497648},{"value":365},{"value":18446744073709551125},{"value":16585488672},{"value":2},{"value":0},{"value":2},{"value":258230},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16640503184},{"value":16585488576},{"value":0},{"value":16640503048},{"value":16585488136},{"value":16585488208},{"value":16585488128},{"value":16640503184},{"value":16585488208},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16871581660},"cpsr":{"value":1610616832},"fp":{"value":16640502896},"sp":{"value":16640497568},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025226,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16641071120},{"value":128},{"value":16641071088},{"value":0},{"value":0},{"value":16585490384},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":16641076624},{"value":16585490288},{"value":0},{"value":16641076488},{"value":16585488424},{"value":16585488496},{"value":16585488416},{"value":16641076624},{"value":16585488496},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16871581660},"cpsr":{"value":1610616832},"fp":{"value":16641076336},"sp":{"value":16641071008},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174044,"imageIndex":32},{"imageOffset":177512,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":190140,"imageIndex":32},{"imageOffset":502452,"imageIndex":32},{"imageOffset":504984,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025231,"name":"UALogWriter","threadState":{"x":[{"value":14},{"value":2147482930740461568},{"value":499999833},{"value":68719460488},{"value":18446744073709518848},{"value":32},{"value":10},{"value":0},{"value":499999833},{"value":3},{"value":13835058055282163714},{"value":8000000},{"value":4294967293},{"value":0},{"value":0},{"value":0},{"value":18446744073709551578},{"value":8575313368},{"value":0},{"value":6448273406588},{"value":105553741465536},{"value":1000000000},{"value":500000},{"value":0},{"value":50000},{"value":500000},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711543672},"cpsr":{"value":2147487744},"fp":{"value":16641650192},"sp":{"value":16641650160},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859592},"far":{"value":0}},"frames":[{"imageOffset":3016,"symbol":"semaphore_timedwait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":223096,"symbol":"_dispatch_sema4_timedwait","symbolLocation":64,"imageIndex":137},{"imageOffset":16088,"symbol":"_dispatch_semaphore_wait_slow","symbolLocation":76,"imageIndex":137},{"imageOffset":653740,"imageIndex":33},{"imageOffset":434200,"imageIndex":33},{"imageOffset":503200,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025232,"name":"UAContextMain","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16839677968},{"value":128},{"value":16839677936},{"value":365},{"value":18446744073709551125},{"value":16585586832},{"value":2},{"value":0},{"value":2},{"value":51656},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16839683472},{"value":16585586736},{"value":0},{"value":16839683336},{"value":16585326376},{"value":16585326448},{"value":16585326368},{"value":16839683472},{"value":16585326448},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16921979572},"cpsr":{"value":1610616832},"fp":{"value":16839683184},"sp":{"value":16839677856},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025233,"name":"UAContextLowP","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16842774544},{"value":128},{"value":16842774512},{"value":365},{"value":18446744073709551125},{"value":16588205488},{"value":2},{"value":0},{"value":2},{"value":251760},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16842780048},{"value":16588205392},{"value":0},{"value":16842779912},{"value":16588205240},{"value":16588205312},{"value":16588205232},{"value":16842780048},{"value":16588205312},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16921979572},"cpsr":{"value":1610616832},"fp":{"value":16842779760},"sp":{"value":16842774432},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025236,"name":"Socket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16843347984},{"value":128},{"value":16843347952},{"value":365},{"value":18446744073709551125},{"value":16585588560},{"value":2},{"value":0},{"value":2},{"value":251745},{"value":60},{"value":18446744073708551616},{"value":10330176681277348905},{"value":363},{"value":184467440737095516},{"value":0},{"value":16843353488},{"value":16585588464},{"value":0},{"value":16843353352},{"value":16637810664},{"value":16637810736},{"value":16637810656},{"value":16843353488},{"value":16637810736},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16921979572},"cpsr":{"value":1610616832},"fp":{"value":16843353200},"sp":{"value":16843347872},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025237,"name":"LocalSocket","threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":16843921424},{"value":128},{"value":16843921392},{"value":0},{"value":0},{"value":16585589616},{"value":2},{"value":0},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":363},{"value":8575309072},{"value":0},{"value":16843926928},{"value":16585589520},{"value":0},{"value":16843926792},{"value":16585587624},{"value":16585587696},{"value":16585587616},{"value":16843926928},{"value":16585587696},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":16921979572},"cpsr":{"value":1610616832},"fp":{"value":16843926640},"sp":{"value":16843921312},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}},"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":174772,"imageIndex":33},{"imageOffset":178240,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":190868,"imageIndex":33},{"imageOffset":503180,"imageIndex":33},{"imageOffset":505712,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025250,"name":"splice event processor","threadState":{"x":[{"value":260},{"value":0},{"value":20480},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":16871091640},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16993121376},{"value":16993121440},{"value":16871092448},{"value":0},{"value":0},{"value":20480},{"value":20481},{"value":20736},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16871091760},"sp":{"value":16871091616},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":3292068,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":108,"imageIndex":35},{"imageOffset":445788,"symbol":"SpliceEventProcessor::process_events_on_thread()","symbolLocation":128,"imageIndex":35},{"imageOffset":445620,"symbol":"SpliceEventProcessor::run()","symbolLocation":44,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025251,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":38912},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999792},{"value":16921423320},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16996830784},{"value":16996830848},{"value":16921424096},{"value":299999792},{"value":0},{"value":38912},{"value":38913},{"value":39168},{"value":4294967295},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":16921423440},"sp":{"value":16921423296},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":3292216,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":256,"imageIndex":35},{"imageOffset":2954392,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":480,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025252,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":8819172,"symbol":"gpr_cv_wait","symbolLocation":132,"imageIndex":35},{"imageOffset":7848040,"symbol":"grpc_core::Executor::ThreadMain(void*)","symbolLocation":232,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":1024},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17080806904},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16986319872},{"value":16986319952},{"value":17080807648},{"value":0},{"value":0},{"value":1024},{"value":1025},{"value":1280},{"value":17161467296,"symbolLocation":0,"symbol":"vtable for grpc_core::ExecCtx"},{"value":6713168120,"symbolLocation":0,"symbol":"_tlv_get_addr"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17080807024},"sp":{"value":17080806880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025253,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":8819172,"symbol":"gpr_cv_wait","symbolLocation":132,"imageIndex":35},{"imageOffset":7848040,"symbol":"grpc_core::Executor::ThreadMain(void*)","symbolLocation":232,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17081380344},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":16986299392},{"value":16986299472},{"value":17081381088},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":17161467296,"symbolLocation":0,"symbol":"vtable for grpc_core::ExecCtx"},{"value":6713168120,"symbolLocation":0,"symbol":"_tlv_get_addr"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17081380464},"sp":{"value":17081380320},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025254,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":8819172,"symbol":"gpr_cv_wait","symbolLocation":132,"imageIndex":35},{"imageOffset":7916212,"symbol":"timer_thread(void*)","symbolLocation":724,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":9216},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17081953752},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17162423760,"symbolLocation":144,"symbol":"_MergedGlobals"},{"value":17162423664,"symbolLocation":48,"symbol":"_MergedGlobals"},{"value":17081954528},{"value":0},{"value":0},{"value":9216},{"value":9216},{"value":9728},{"value":9223372036854775807},{"value":17162449440,"symbolLocation":0,"symbol":"grpc_timer_check_trace"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17081953872},"sp":{"value":17081953728},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025255,"name":"grpc communication thread","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":250000000},{"value":103},{"value":105553314540576},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":17082526696},{"value":24000000},{"value":9295},{"value":4037046428},{"value":6713168120,"symbolLocation":0,"symbol":"_tlv_get_addr"},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17082527504},{"value":105554224280448},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17082527488},"sp":{"value":17082527440},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":3076872,"symbol":"juce::Thread::sleep(int)","symbolLocation":80,"imageIndex":35},{"imageOffset":436780,"symbol":"SpliceCommunication::run()","symbolLocation":124,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025256,"name":"audio loading thread","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":100000000},{"value":9},{"value":17158931244},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":2},{"value":0},{"value":0},{"value":0},{"value":0},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17083099840},{"value":264},{"value":17083099944},{"value":16993122408},{"value":17161077168,"symbolLocation":24,"symbol":"typeinfo for SpliceSuperPowered"},{"value":1},{"value":4294967295},{"value":18511822848},{"value":17083100120}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17083099824},"sp":{"value":17083099776},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":3076872,"symbol":"juce::Thread::sleep(int)","symbolLocation":80,"imageIndex":35},{"imageOffset":517744,"symbol":"SpliceSuperPowered::run()","symbolLocation":564,"imageIndex":35},{"imageOffset":3295584,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":296,"imageIndex":35},{"imageOffset":3743744,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025274,"name":"JUCE v8.0.8: Timer","threadState":{"x":[{"value":260},{"value":0},{"value":7936},{"value":0},{"value":0},{"value":160},{"value":0},{"value":39998750},{"value":17308052184},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17052476104},{"value":17052476168},{"value":17308053728},{"value":39998750},{"value":0},{"value":7936},{"value":7937},{"value":8192},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17308052304},"sp":{"value":17308052160},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4187960,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&)","symbolLocation":328,"imageIndex":38},{"imageOffset":4187076,"symbol":"void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":38},{"imageOffset":4440732,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&)","symbolLocation":132,"imageIndex":38},{"imageOffset":4440392,"symbol":"bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":72,"imageIndex":38},{"imageOffset":3946192,"symbol":"bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":100,"imageIndex":38},{"imageOffset":3744524,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":188,"imageIndex":38},{"imageOffset":3752276,"symbol":"juce::Thread::wait(double) const","symbolLocation":36,"imageIndex":38},{"imageOffset":4685304,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":420,"imageIndex":38},{"imageOffset":3748076,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":340,"imageIndex":38},{"imageOffset":3749040,"symbol":"juce::juce_threadEntryPoint(void*)","symbolLocation":24,"imageIndex":38},{"imageOffset":4115928,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const","symbolLocation":148,"imageIndex":38},{"imageOffset":4115768,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*)","symbolLocation":28,"imageIndex":38},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025275,"name":"JUCE v8.0.8: thumb cache","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":499998291},{"value":17308625464},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17122097384},{"value":17122097448},{"value":17308627168},{"value":499998291},{"value":0},{"value":0},{"value":6145},{"value":6400},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17308625584},"sp":{"value":17308625440},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4187960,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_for<long long, std::__1::ratio<1l, 1000000000l>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>> const&)","symbolLocation":328,"imageIndex":38},{"imageOffset":4187076,"symbol":"void std::__1::condition_variable::__do_timed_wait[abi:de190102]<std::__1::chrono::steady_clock>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":38},{"imageOffset":4440732,"symbol":"std::__1::cv_status std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&)","symbolLocation":132,"imageIndex":38},{"imageOffset":4440392,"symbol":"bool std::__1::condition_variable::wait_until<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000000000l>>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":72,"imageIndex":38},{"imageOffset":3946192,"symbol":"bool std::__1::condition_variable::wait_for[abi:de190102]<double, std::__1::ratio<1l, 1000l>, juce::WaitableEvent::wait(double) const::$_1>(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::duration<double, std::__1::ratio<1l, 1000l>> const&, juce::WaitableEvent::wait(double) const::$_1)","symbolLocation":100,"imageIndex":38},{"imageOffset":3744524,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":188,"imageIndex":38},{"imageOffset":3752276,"symbol":"juce::Thread::wait(double) const","symbolLocation":36,"imageIndex":38},{"imageOffset":3766692,"symbol":"juce::TimeSliceThread::run()","symbolLocation":848,"imageIndex":38},{"imageOffset":3748076,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":340,"imageIndex":38},{"imageOffset":3749040,"symbol":"juce::juce_threadEntryPoint(void*)","symbolLocation":24,"imageIndex":38},{"imageOffset":4115928,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::operator()(void*) const","symbolLocation":148,"imageIndex":38},{"imageOffset":4115768,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_0::__invoke(void*)","symbolLocation":28,"imageIndex":38},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025277,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":20224},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17311493544},{"value":0},{"value":256},{"value":1099511628034},{"value":1099511628034},{"value":256},{"value":0},{"value":1099511628032},{"value":305},{"value":8575309072},{"value":0},{"value":17798774320},{"value":17798774384},{"value":17311494368},{"value":0},{"value":0},{"value":20224},{"value":20225},{"value":20480},{"value":8192},{"value":17798775232}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17311493664},"sp":{"value":17311493520},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":245472,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025278,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17312067144},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17798775536},{"value":17798775600},{"value":17312067808},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17312067264},"sp":{"value":17312067120},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025279,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17312640584},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17798788736},{"value":17798788800},{"value":17312641248},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17312640704},"sp":{"value":17312640560},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025280,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17313214024},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17798795160},{"value":17798795224},{"value":17313214688},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17313214144},"sp":{"value":17313214000},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025281,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":468736},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17313787384},{"value":0},{"value":1280},{"value":5497558140162},{"value":5497558140162},{"value":1280},{"value":0},{"value":5497558140160},{"value":305},{"value":8575309072},{"value":0},{"value":17798780320},{"value":17798780384},{"value":17313788128},{"value":0},{"value":0},{"value":468736},{"value":468737},{"value":468992},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17313787504},"sp":{"value":17313787360},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025282,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":468736},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17773751800},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17798786600},{"value":17798786664},{"value":17773752544},{"value":0},{"value":0},{"value":468736},{"value":468737},{"value":468992},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17773751920},"sp":{"value":17773751776},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025283,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":20224},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17774325160},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17918487600},{"value":17918487664},{"value":17774325984},{"value":0},{"value":0},{"value":20224},{"value":20225},{"value":20480},{"value":8192},{"value":17918488512}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17774325280},"sp":{"value":17774325136},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":245472,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025284,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17774898760},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17918488816},{"value":17918488880},{"value":17774899424},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17774898880},"sp":{"value":17774898736},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025285,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17859014216},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17918502016},{"value":17918502080},{"value":17859014880},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17859014336},"sp":{"value":17859014192},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025286,"name":"fdthread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17927007816},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17918508440},{"value":17918508504},{"value":17927008480},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17927007936},"sp":{"value":17927007792},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":142884,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025287,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":468480},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17927581176},{"value":0},{"value":256},{"value":1099511628034},{"value":1099511628034},{"value":256},{"value":0},{"value":1099511628032},{"value":305},{"value":8575309072},{"value":0},{"value":17918493600},{"value":17918493664},{"value":17927581920},{"value":0},{"value":0},{"value":468480},{"value":468481},{"value":468736},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17927581296},"sp":{"value":17927581152},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025288,"name":"tdthread","threadState":{"x":[{"value":260},{"value":0},{"value":468480},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":17928154616},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17918499880},{"value":17918499944},{"value":17928155360},{"value":0},{"value":0},{"value":468480},{"value":468481},{"value":468736},{"value":1},{"value":3}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":17928154736},"sp":{"value":17928154592},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123496,"symbol":"std::__1::condition_variable::wait(std::__1::unique_lock<std::__1::mutex>&)","symbolLocation":32,"imageIndex":142},{"imageOffset":1922200,"imageIndex":39},{"imageOffset":147724,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025289,"name":"DiskTaskFIFO","threadState":{"x":[{"value":4},{"value":0},{"value":1},{"value":1},{"value":0},{"value":10000000},{"value":24},{"value":19459816092,"symbolLocation":0,"symbol":"mp3d_g_arPower43short_new"},{"value":8558211992,"symbolLocation":0,"symbol":"clock_sem"},{"value":3},{"value":17},{"value":2208},{"value":2043},{"value":2045},{"value":4209872966},{"value":4207775739},{"value":334},{"value":8575309192},{"value":0},{"value":0},{"value":17928728336},{"value":17216961135462248175},{"value":120},{"value":1},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6711678708},"cpsr":{"value":2684358656},"fp":{"value":17928728320},"sp":{"value":17928728272},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873416},"far":{"value":0}},"frames":[{"imageOffset":16840,"symbol":"__semwait_signal","symbolLocation":8,"imageIndex":139},{"imageOffset":55028,"symbol":"nanosleep","symbolLocation":220,"imageIndex":144},{"imageOffset":1868292,"imageIndex":39},{"imageOffset":695192,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025290,"name":"DiskTaskFIFO","threadState":{"x":[{"value":19412381736},{"value":512},{"value":4288020657},{"value":19412382024},{"value":19412378232},{"value":19412378200},{"value":7502},{"value":105854},{"value":19453750832,"symbolLocation":20,"symbol":"JumpTable"},{"value":111344236},{"value":27109790},{"value":20592694},{"value":19453751404,"symbolLocation":432,"symbol":"g_aHannWindow_main_loop"},{"value":18446744073709477413},{"value":17929293344},{"value":11599872},{"value":215770567016448},{"value":0},{"value":0},{"value":19412372992},{"value":19412380672},{"value":192},{"value":19412372992},{"value":2},{"value":1},{"value":576},{"value":19412385352},{"value":19412373060},{"value":31}],"flavor":"ARM_THREAD_STATE64","lr":{"value":19453747548},"cpsr":{"value":2147487744},"fp":{"value":17929293488},"sp":{"value":17929293488},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":19453753120},"far":{"value":0}},"frames":[{"imageOffset":145184,"symbol":"offset_10","symbolLocation":232,"imageIndex":132},{"imageOffset":139612,"symbol":"mp3d_SubbandSynth","symbolLocation":64,"imageIndex":132},{"imageOffset":1936684,"symbol":"MP3DecoderWrapper_SpiritDSP::DecodeFrame(unsigned char*, int, int*, int)","symbolLocation":9220,"imageIndex":132},{"imageOffset":600344,"symbol":"ACMP3Decoder::ProduceOutputPackets(void*, unsigned int&, unsigned int&, AudioStreamPacketDescription*)","symbolLocation":212,"imageIndex":132},{"imageOffset":125484,"symbol":"ProduceOutputPackets(void*, void*, unsigned int*, unsigned int*, AudioStreamPacketDescription*, unsigned int*)","symbolLocation":56,"imageIndex":132},{"imageOffset":3020212,"symbol":"AudioCodecProduceOutputPackets","symbolLocation":308,"imageIndex":150},{"imageOffset":2174580,"symbol":"acv2::CodecConverter::ProduceOutput(ACAudioSpan&)::$_1::operator()(unsigned int, ACAudioSpan&, unsigned int&) const","symbolLocation":1376,"imageIndex":150},{"imageOffset":2171828,"symbol":"acv2::CodecConverter::ProduceOutput(ACAudioSpan&)","symbolLocation":1648,"imageIndex":150},{"imageOffset":582556,"symbol":"acv2::AudioConverterChain::ObtainInput(acv2::AudioConverterBase&, unsigned int)","symbolLocation":664,"imageIndex":150},{"imageOffset":2863464,"symbol":"acv2::CBRConverter::ProduceOutput(ACAudioSpan&)","symbolLocation":56,"imageIndex":150},{"imageOffset":582556,"symbol":"acv2::AudioConverterChain::ObtainInput(acv2::AudioConverterBase&, unsigned int)","symbolLocation":664,"imageIndex":150},{"imageOffset":2863464,"symbol":"acv2::CBRConverter::ProduceOutput(ACAudioSpan&)","symbolLocation":56,"imageIndex":150},{"imageOffset":579912,"symbol":"acv2::AudioConverterChain::ProduceOutput(caulk::function_ref<caulk::expected<unsigned int, int> (ACAudioSpan&)>, ACBaseAudioSpan&)","symbolLocation":168,"imageIndex":150},{"imageOffset":1408540,"symbol":"acv2::AudioConverterV2::fillComplexBuffer(int (*)(OpaqueAudioConverter*, unsigned int*, AudioBufferList*, AudioStreamPacketDescription**, void*), void*, unsigned int*, AudioBufferList*, AudioStreamPacketDescription*, AudioStreamPacketDependencyInfo*)","symbolLocation":824,"imageIndex":150},{"imageOffset":1428732,"symbol":"int caulk::function_ref<int (AudioConverterAPI*)>::functor_invoker<AudioConverterFillComplexBuffer::$_0>(caulk::details::erased_callable<int (AudioConverterAPI*)> const&, AudioConverterAPI*)","symbolLocation":108,"imageIndex":150},{"imageOffset":1426224,"symbol":"with_resolved(OpaqueAudioConverter*, caulk::function_ref<int (AudioConverterAPI*)>)","symbolLocation":60,"imageIndex":150},{"imageOffset":1428612,"symbol":"AudioConverterFillComplexBuffer","symbolLocation":88,"imageIndex":150},{"imageOffset":1459360,"symbol":"ExtAudioFileRead","symbolLocation":624,"imageIndex":150},{"imageOffset":1652308,"imageIndex":39},{"imageOffset":1418916,"imageIndex":39},{"imageOffset":831836,"imageIndex":39},{"imageOffset":690024,"imageIndex":39},{"imageOffset":695276,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025323,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":8904508,"symbol":"spdlog::details::mpmc_blocking_queue<spdlog::details::async_msg>::dequeue_for(spdlog::details::async_msg&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l>>)","symbolLocation":136,"imageIndex":41},{"imageOffset":8904160,"symbol":"spdlog::details::thread_pool::process_next_msg_()","symbolLocation":128,"imageIndex":41},{"imageOffset":8903576,"symbol":"void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct>>, spdlog::details::thread_pool::thread_pool(unsigned long, unsigned long, std::__1::function<void ()>, std::__1::function<void ()>)::'lambda'()>>(void*)","symbolLocation":76,"imageIndex":41},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":60160},{"value":0},{"value":0},{"value":160},{"value":9},{"value":999998959},{"value":18302397640},{"value":0},{"value":1536},{"value":6597069768194},{"value":6597069768194},{"value":1536},{"value":0},{"value":6597069768192},{"value":305},{"value":8575309072},{"value":0},{"value":18318611384},{"value":18318611448},{"value":18302398688},{"value":999998959},{"value":9},{"value":60160},{"value":60417},{"value":60672},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18302397760},"sp":{"value":18302397616},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025375,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":8819148,"symbol":"gpr_cv_wait","symbolLocation":108,"imageIndex":35},{"imageOffset":7916212,"symbol":"timer_thread(void*)","symbolLocation":724,"imageIndex":35},{"imageOffset":8837568,"symbol":"grpc_core::(anonymous namespace)::ThreadInternalsPosix::ThreadInternalsPosix(char const*, void (*)(void*), void*, bool*, grpc_core::Thread::Options const&)::'lambda'(void*)::__invoke(void*)","symbolLocation":140,"imageIndex":35},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":9216},{"value":0},{"value":0},{"value":160},{"value":0},{"value":944151250},{"value":18302971352},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17162423760,"symbolLocation":144,"symbol":"_MergedGlobals"},{"value":17162423664,"symbolLocation":48,"symbol":"_MergedGlobals"},{"value":18302972128},{"value":944151250},{"value":0},{"value":9216},{"value":9472},{"value":9984},{"value":15996},{"value":17162449440,"symbolLocation":0,"symbol":"grpc_timer_check_trace"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18302971472},"sp":{"value":18302971328},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025408,"name":"RT-InterProcessSenderThread","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":144},{"value":0},{"value":0},{"value":18489519656},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18790482232},{"value":18790482344},{"value":18489520352},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18489519776},"sp":{"value":18489519632},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":21243592,"imageIndex":0},{"imageOffset":17291152,"imageIndex":0},{"imageOffset":17294440,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025417,"name":"com.apple.NSEventThread","threadState":{"x":[{"value":268451845},{"value":21592279046},{"value":8589934592},{"value":1058842582450176},{"value":0},{"value":1058842582450176},{"value":2},{"value":4294967295},{"value":0},{"value":17179869184},{"value":0},{"value":2},{"value":0},{"value":0},{"value":246531},{"value":0},{"value":18446744073709551569},{"value":8575310952},{"value":0},{"value":4294967295},{"value":2},{"value":1058842582450176},{"value":0},{"value":1058842582450176},{"value":18539372680},{"value":8589934592},{"value":21592279046},{"value":18446744073709550527},{"value":4412409862}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6712935328},"cpsr":{"value":4096},"fp":{"value":18539372528},"sp":{"value":18539372448},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859700},"far":{"value":0}},"frames":[{"imageOffset":3124,"symbol":"mach_msg2_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":78752,"symbol":"mach_msg2_internal","symbolLocation":76,"imageIndex":139},{"imageOffset":38756,"symbol":"mach_msg_overwrite","symbolLocation":484,"imageIndex":139},{"imageOffset":4008,"symbol":"mach_msg","symbolLocation":24,"imageIndex":139},{"imageOffset":511164,"symbol":"__CFRunLoopServiceMachPort","symbolLocation":160,"imageIndex":146},{"imageOffset":505304,"symbol":"__CFRunLoopRun","symbolLocation":1208,"imageIndex":146},{"imageOffset":502424,"symbol":"CFRunLoopRunSpecific","symbolLocation":572,"imageIndex":146},{"imageOffset":1435532,"symbol":"_NSEventThread","symbolLocation":140,"imageIndex":133},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025418,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":177588,"imageIndex":11},{"imageOffset":176236,"imageIndex":11},{"imageOffset":175788,"imageIndex":11},{"imageOffset":1703824,"imageIndex":11},{"imageOffset":175428,"imageIndex":11},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18621164920},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18632668072},{"value":18632668152},{"value":18621165792},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18632668224},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18621165040},"sp":{"value":18621164896},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025420,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":182412,"imageIndex":18},{"imageOffset":181060,"imageIndex":18},{"imageOffset":180612,"imageIndex":18},{"imageOffset":1708648,"imageIndex":18},{"imageOffset":180252,"imageIndex":18},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18621738360},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18324625448},{"value":18324625528},{"value":18621739232},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18324625600},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18621738480},"sp":{"value":18621738336},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025421,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":180404,"imageIndex":29},{"imageOffset":179052,"imageIndex":29},{"imageOffset":178604,"imageIndex":29},{"imageOffset":1706640,"imageIndex":29},{"imageOffset":178244,"imageIndex":29},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18622311800},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18528356328},{"value":18528356408},{"value":18622312672},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18528356480},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18622311920},"sp":{"value":18622311776},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025422,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":190932,"imageIndex":31},{"imageOffset":189580,"imageIndex":31},{"imageOffset":189132,"imageIndex":31},{"imageOffset":1717168,"imageIndex":31},{"imageOffset":188772,"imageIndex":31},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18638007672},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":4922797848},{"value":4922797928},{"value":18638008544},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":4922798000},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18638007792},"sp":{"value":18638007648},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025423,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":178772,"imageIndex":32},{"imageOffset":177420,"imageIndex":32},{"imageOffset":176972,"imageIndex":32},{"imageOffset":1705008,"imageIndex":32},{"imageOffset":176612,"imageIndex":32},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18638581112},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18323602456},{"value":18323602536},{"value":18638581984},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18323602608},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18638581232},"sp":{"value":18638581088},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025424,"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":179500,"imageIndex":33},{"imageOffset":178148,"imageIndex":33},{"imageOffset":177700,"imageIndex":33},{"imageOffset":1705736,"imageIndex":33},{"imageOffset":177340,"imageIndex":33},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":0},{"value":18639154552},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18323604376},{"value":18323604456},{"value":18639155424},{"value":0},{"value":0},{"value":0},{"value":1},{"value":256},{"value":18323604528},{"value":1}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18639154672},"sp":{"value":18639154528},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}}},{"id":6025425,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":24576},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999959},{"value":18639728168},{"value":0},{"value":256},{"value":1099511628034},{"value":1099511628034},{"value":256},{"value":0},{"value":1099511628032},{"value":305},{"value":8575309072},{"value":0},{"value":4485825800},{"value":4485825864},{"value":18639728864},{"value":299999959},{"value":0},{"value":24576},{"value":24577},{"value":24832},{"value":268677906},{"value":4294967295}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18639728288},"sp":{"value":18639728144},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":10383204,"imageIndex":8},{"imageOffset":10887524,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025428,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":23808},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998917},{"value":18640301608},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14308159352},{"value":14308159416},{"value":18640302304},{"value":299998917},{"value":0},{"value":23808},{"value":23809},{"value":24064},{"value":268677899},{"value":4294967295}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18640301728},"sp":{"value":18640301584},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":16242972,"imageIndex":15},{"imageOffset":14264272,"imageIndex":15},{"imageOffset":16335680,"imageIndex":15},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025429,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":8704},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998958},{"value":18640875016},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14975034256},{"value":14975034320},{"value":18640875744},{"value":299998958},{"value":0},{"value":8704},{"value":8705},{"value":8960},{"value":4294967291},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18640875136},"sp":{"value":18640874992},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":4065428,"imageIndex":21},{"imageOffset":4343608,"imageIndex":21},{"imageOffset":4124408,"imageIndex":21},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025430,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":16640},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999917},{"value":18641448488},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":14948300328},{"value":14948300392},{"value":18641449184},{"value":299999917},{"value":0},{"value":16640},{"value":16641},{"value":16896},{"value":268677918},{"value":4294967295}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18641448608},"sp":{"value":18641448464},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":2379828,"symbol":"juce::WaitableEvent::wait(int) const","symbolLocation":152,"imageIndex":27},{"imageOffset":2659784,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":576,"imageIndex":27},{"imageOffset":2449108,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":27},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025431,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":18944},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299998916},{"value":18642021928},{"value":0},{"value":256},{"value":1099511628034},{"value":1099511628034},{"value":256},{"value":0},{"value":1099511628032},{"value":305},{"value":8575309072},{"value":0},{"value":15970019496},{"value":15970019560},{"value":18642022624},{"value":299998916},{"value":0},{"value":18944},{"value":18945},{"value":19200},{"value":268677913},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18642022048},"sp":{"value":18642021904},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":129456,"symbol":"juce::WaitableEvent::wait(int) const","symbolLocation":152,"imageIndex":28},{"imageOffset":238792,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":576,"imageIndex":28},{"imageOffset":158180,"symbol":"juce::threadEntryProc(void*)","symbolLocation":528,"imageIndex":28},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025432,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":45312},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999917},{"value":18642595320},{"value":0},{"value":512},{"value":2199023256066},{"value":2199023256066},{"value":512},{"value":0},{"value":2199023256064},{"value":305},{"value":8575309072},{"value":0},{"value":14402780688},{"value":14402780752},{"value":18642596064},{"value":299999917},{"value":0},{"value":45312},{"value":45313},{"value":45568},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18642595440},"sp":{"value":18642595296},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":6922856,"imageIndex":30},{"imageOffset":7069944,"imageIndex":30},{"imageOffset":6924656,"imageIndex":30},{"imageOffset":7008940,"imageIndex":30},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025433,"name":"Convo thread","threadState":{"x":[{"value":316},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":1999958},{"value":18643168808},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18505335096},{"value":18505335160},{"value":18643169504},{"value":1999958},{"value":0},{"value":0},{"value":1013761},{"value":1014016},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18643168928},"sp":{"value":18643168784},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":778868,"imageIndex":12},{"imageOffset":2498864,"imageIndex":12},{"imageOffset":845984,"imageIndex":12},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025434,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":160},{"value":0},{"value":99999959},{"value":18643742216},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":17308891560},{"value":17308891624},{"value":18643742944},{"value":99999959},{"value":0},{"value":0},{"value":5889},{"value":6144},{"value":4294967295},{"value":100}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18643742336},"sp":{"value":18643742192},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":1921980,"imageIndex":39},{"imageOffset":2113740,"imageIndex":39},{"imageOffset":1925108,"imageIndex":39},{"imageOffset":2012904,"imageIndex":39},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025438,"name":"JUCE Timer","threadState":{"x":[{"value":260},{"value":0},{"value":23296},{"value":0},{"value":0},{"value":160},{"value":0},{"value":299999917},{"value":18644315608},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":18324608080},{"value":18324608144},{"value":18644316384},{"value":299999917},{"value":0},{"value":23296},{"value":23297},{"value":23552},{"value":18469011456,"symbolLocation":3368,"symbol":"pcre_stack_guard"},{"value":4294967295}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131232},"cpsr":{"value":1610616832},"fp":{"value":18644315728},"sp":{"value":18644315584},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28896,"symbol":"_pthread_cond_wait","symbolLocation":984,"imageIndex":138},{"imageOffset":123648,"symbol":"std::__1::condition_variable::__do_timed_wait(std::__1::unique_lock<std::__1::mutex>&, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000000000l>>>)","symbolLocation":104,"imageIndex":142},{"imageOffset":6800588,"symbol":"juce::WaitableEvent::wait(double) const","symbolLocation":544,"imageIndex":41},{"imageOffset":7009884,"symbol":"juce::Timer::TimerThread::run()","symbolLocation":476,"imageIndex":41},{"imageOffset":6803464,"symbol":"juce::Thread::threadEntryPoint()","symbolLocation":292,"imageIndex":41},{"imageOffset":6942472,"symbol":"juce::Thread::createNativeThread(juce::Thread::Priority)::$_28::__invoke(void*)","symbolLocation":152,"imageIndex":41},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025439,"name":"tcp_listener","threadState":{"x":[{"value":4},{"value":0},{"value":18644889124},{"value":18644889693},{"value":18467785655},{"value":12},{"value":0},{"value":0},{"value":105554013871900},{"value":8558216920,"symbolLocation":0,"symbol":"_current_pid"},{"value":340},{"value":14160},{"value":2043},{"value":2045},{"value":4221800744},{"value":4219701557},{"value":30},{"value":8575317672},{"value":0},{"value":105553938751664},{"value":105554013871872},{"value":18467785790},{"value":18429932752,"symbolLocation":0,"symbol":"tcpconnection_handleconnectionthread(_tcpconnection*)"},{"value":18467785844},{"value":18467785736},{"value":0},{"value":0},{"value":18469326848,"symbolLocation":29640,"symbol":"midiseq_clk.av"},{"value":18469007360,"symbolLocation":0,"symbol":"s_live_mididriver"}],"flavor":"ARM_THREAD_STATE64","lr":{"value":18432123760},"cpsr":{"value":1610616832},"fp":{"value":18644889296},"sp":{"value":18644889104},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894572},"far":{"value":0}},"frames":[{"imageOffset":37996,"symbol":"__accept","symbolLocation":8,"imageIndex":139},{"imageOffset":6742896,"symbol":"juce::StreamingSocket::waitForNextConnection() const","symbolLocation":92,"imageIndex":41},{"imageOffset":4551680,"symbol":"tcpconnection_listenthread(_tcpconnection*)","symbolLocation":168,"imageIndex":41},{"imageOffset":3546592,"symbol":"systhread_threadproc","symbolLocation":232,"imageIndex":41},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025443,"name":"CVDisplayLink","threadState":{"x":[{"value":260},{"value":0},{"value":0},{"value":0},{"value":0},{"value":65704},{"value":0},{"value":7478750},{"value":264961},{"value":0},{"value":0},{"value":2},{"value":2},{"value":0},{"value":0},{"value":0},{"value":305},{"value":8575309072},{"value":0},{"value":5207373880},{"value":5207373944},{"value":1},{"value":7478750},{"value":0},{"value":0},{"value":264961},{"value":265216},{"value":6448271170282},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6713131276},"cpsr":{"value":2684358656},"fp":{"value":19048983984},"sp":{"value":19048983840},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712873932},"far":{"value":0}},"frames":[{"imageOffset":17356,"symbol":"__psynch_cvwait","symbolLocation":8,"imageIndex":139},{"imageOffset":28940,"symbol":"_pthread_cond_wait","symbolLocation":1028,"imageIndex":138},{"imageOffset":12788,"symbol":"CVDisplayLink::waitUntil(unsigned long long)","symbolLocation":336,"imageIndex":151},{"imageOffset":8924,"symbol":"CVDisplayLink::runIOThread()","symbolLocation":500,"imageIndex":151},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025447,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554213979136},{"value":73},{"value":105553853742240},{"value":211},{"value":38},{"value":65531},{"value":105554624249920},{"value":6025447},{"value":0},{"value":2},{"value":0},{"value":3913390534},{"value":230},{"value":8575308792},{"value":0},{"value":6376173568},{"value":13925247875},{"value":105554624249856},{"value":500},{"value":665},{"value":13923282624,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554027346576},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13918227548},"cpsr":{"value":1610616832},"fp":{"value":13841756032},"sp":{"value":13841753840},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6025448,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554213613504},{"value":28},{"value":0},{"value":210},{"value":58},{"value":65531},{"value":105554625032512},{"value":6025448},{"value":0},{"value":2},{"value":0},{"value":2435148221},{"value":230},{"value":8575308792},{"value":0},{"value":16424532992},{"value":13925247875},{"value":105554625032448},{"value":500},{"value":20},{"value":13923282624,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554027297136},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13918227548},"cpsr":{"value":1610616832},"fp":{"value":13848670080},"sp":{"value":13848667888},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6025449,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554213979136},{"value":28},{"value":0},{"value":27},{"value":60},{"value":65531},{"value":105554624696880},{"value":6025449},{"value":0},{"value":2},{"value":0},{"value":3766589894},{"value":230},{"value":8575308792},{"value":0},{"value":16424526336},{"value":13925247875},{"value":105554624696816},{"value":500},{"value":20},{"value":13923282624,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554027329376},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13918227548},"cpsr":{"value":1610616832},"fp":{"value":13849243520},"sp":{"value":13849241328},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6025450,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554213979136},{"value":28},{"value":0},{"value":329},{"value":62},{"value":65531},{"value":105554623731344},{"value":6025450},{"value":0},{"value":2},{"value":0},{"value":3609305542},{"value":230},{"value":8575308792},{"value":0},{"value":13835023872},{"value":13925247875},{"value":105554623731280},{"value":500},{"value":20},{"value":13923282624,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554027255632},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13918227548},"cpsr":{"value":1610616832},"fp":{"value":13849816960},"sp":{"value":13849814768},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6025451,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554213613504},{"value":28},{"value":0},{"value":88},{"value":64},{"value":65531},{"value":105554623952064},{"value":6025451},{"value":0},{"value":2},{"value":0},{"value":2277863869},{"value":230},{"value":8575308792},{"value":0},{"value":17787012096},{"value":13925247875},{"value":105554623952000},{"value":500},{"value":20},{"value":13923282624,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554027298336},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13918227548},"cpsr":{"value":1610616832},"fp":{"value":13850390400},"sp":{"value":13850388208},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6025452,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554213979136},{"value":28},{"value":0},{"value":128},{"value":66},{"value":65531},{"value":105554622703296},{"value":6025452},{"value":0},{"value":2},{"value":0},{"value":3452021190},{"value":230},{"value":8575308792},{"value":0},{"value":14169192960},{"value":13925247875},{"value":105554622703232},{"value":500},{"value":20},{"value":13923282624,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554027323328},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13918227548},"cpsr":{"value":1610616832},"fp":{"value":13850963840},"sp":{"value":13850961648},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6025453,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554213613504},{"value":28},{"value":0},{"value":142},{"value":68},{"value":65531},{"value":105554691312656},{"value":6025453},{"value":0},{"value":2},{"value":0},{"value":4268063165},{"value":230},{"value":8575308792},{"value":0},{"value":14169190912},{"value":13925247875},{"value":105554691312592},{"value":500},{"value":20},{"value":13923282624,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554027290368},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13918227548},"cpsr":{"value":1610616832},"fp":{"value":13851537280},"sp":{"value":13851535088},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6025454,"frames":[{"imageOffset":38040,"symbol":"poll","symbolLocation":8,"imageIndex":139},{"imageOffset":13929564,"imageIndex":8},{"imageOffset":10427932,"imageIndex":8},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":500},{"value":68719460488},{"value":105554213613504},{"value":28},{"value":0},{"value":4},{"value":70},{"value":65531},{"value":105554622703520},{"value":6025454},{"value":0},{"value":2},{"value":0},{"value":4110778813},{"value":230},{"value":8575308792},{"value":0},{"value":14174133760},{"value":13925247875},{"value":105554622703456},{"value":500},{"value":20},{"value":13923282624,"symbolLocation":339790,"symbol":"absl::lts_20230802::str_format_internal::ConvTagHolder::value"},{"value":1},{"value":105554027283696},{"value":1},{"value":677}],"flavor":"ARM_THREAD_STATE64","lr":{"value":13918227548},"cpsr":{"value":1610616832},"fp":{"value":13853290368},"sp":{"value":13853288176},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712894616},"far":{"value":0}}},{"id":6025484,"name":"caulk::deferred_logger","threadState":{"x":[{"value":14},{"value":105556221237751},{"value":0},{"value":18645463143},{"value":105556221237728},{"value":22},{"value":0},{"value":0},{"value":0},{"value":4294967295},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":18446744073709551580},{"value":8575313384},{"value":0},{"value":105554940870232},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":6904442056},"cpsr":{"value":2147487744},"fp":{"value":18645462912},"sp":{"value":18645462880},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712859568},"far":{"value":0}},"frames":[{"imageOffset":2992,"symbol":"semaphore_wait_trap","symbolLocation":8,"imageIndex":139},{"imageOffset":7368,"symbol":"caulk::semaphore::timed_wait(double)","symbolLocation":224,"imageIndex":141},{"imageOffset":7024,"symbol":"caulk::concurrent::details::worker_thread::run()","symbolLocation":32,"imageIndex":141},{"imageOffset":6212,"symbol":"void* caulk::thread_proxy<std::__1::tuple<caulk::thread::attributes, void (caulk::concurrent::details::worker_thread::*)(), std::__1::tuple<caulk::concurrent::details::worker_thread*>>>(void*)","symbolLocation":96,"imageIndex":141},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}]},{"id":6025583,"frames":[{"imageOffset":7020,"symbol":"start_wqthread","symbolLocation":0,"imageIndex":138}],"threadState":{"x":[{"value":19686076416},{"value":0},{"value":19685539840},{"value":0},{"value":278532},{"value":18446744073709551615},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":0},"cpsr":{"value":4096},"fp":{"value":0},"sp":{"value":19686076416},"esr":{"value":0,"description":" Address size fault"},"pc":{"value":6713109356},"far":{"value":0}}},{"id":6025592,"frames":[{"imageOffset":27908,"symbol":"kevent","symbolLocation":8,"imageIndex":139},{"imageOffset":64740672,"imageIndex":0},{"imageOffset":64615780,"imageIndex":0},{"imageOffset":64739196,"imageIndex":0},{"imageOffset":27660,"symbol":"_pthread_start","symbolLocation":136,"imageIndex":138},{"imageOffset":7040,"symbol":"thread_start","symbolLocation":8,"imageIndex":138}],"threadState":{"x":[{"value":4},{"value":0},{"value":0},{"value":4412285548},{"value":32},{"value":0},{"value":0},{"value":0},{"value":19686649568},{"value":18446744073708551616},{"value":1000000},{"value":1099511627776},{"value":4294967293},{"value":2199023255552},{"value":512},{"value":256},{"value":363},{"value":8575309080},{"value":0},{"value":4412285536},{"value":4412285536},{"value":4412286584},{"value":4412285528},{"value":4412285504},{"value":0},{"value":4412286572},{"value":4412285520},{"value":0},{"value":0}],"flavor":"ARM_THREAD_STATE64","lr":{"value":4365163840},"cpsr":{"value":2684358656},"fp":{"value":19686649616},"sp":{"value":19686649536},"esr":{"value":1442840704,"description":" Address size fault"},"pc":{"value":6712884484},"far":{"value":0}}}],
  "usedImages" : [
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4300423168,
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
    "base" : 4445061120,
    "size" : 1572864,
    "uuid" : "8038ea9a-f0aa-3323-b68f-f754b5f98e85",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/Frameworks\/libonnxruntime_abl.dylib",
    "name" : "libonnxruntime_abl.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4447830016,
    "size" : 81920,
    "uuid" : "98c8293a-4285-31c6-8154-ffa7b4a47a9f",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/Frameworks\/libusb-1.0.dylib",
    "name" : "libusb-1.0.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 4449845248,
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
    "base" : 4540137472,
    "size" : 49152,
    "uuid" : "a3faee04-0f8b-3428-9497-560c97eca6fb",
    "path" : "\/usr\/lib\/libobjc-trampolines.dylib",
    "name" : "libobjc-trampolines.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 5127274496,
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
    "base" : 13824425984,
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
    "base" : 5768216576,
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
    "base" : 13904297984,
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
    "base" : 13854638080,
    "size" : 5816320,
    "uuid" : "bb2e5f66-2caf-35eb-87f3-706dc1a8a6f2",
    "path" : "\/Library\/Application Support\/sonible\/*\/libonnxruntime.1.15.1.dylib",
    "name" : "libonnxruntime.1.15.1.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64e",
    "base" : 13844299776,
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
    "base" : 13892583424,
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
    "base" : 14388133888,
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
    "base" : 14514323456,
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
    "base" : 6167117824,
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
    "base" : 14977564672,
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
    "base" : 14512521216,
    "size" : 1212416,
    "uuid" : "c6fdd249-ac24-385a-85a0-d3e91bfbb179",
    "path" : "\/Library\/Arturia\/*\/libsqlite.dylib",
    "name" : "libsqlite.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 14749351936,
    "size" : 3948544,
    "uuid" : "9d9fe136-36bd-3683-858c-e1dad60cfed7",
    "path" : "\/Library\/Arturia\/*\/libplateverbProcessor.dylib",
    "name" : "libplateverbProcessor.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 14951514112,
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
    "base" : 15044149248,
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
    "base" : 14949548032,
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
    "base" : 15616753664,
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
    "base" : 15905374208,
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
    "base" : 16019341312,
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
    "base" : 15713992704,
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
    "base" : 16000598016,
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
    "base" : 15708717056,
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
    "base" : 16251781120,
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
    "base" : 15883829248,
    "size" : 2408448,
    "uuid" : "a113d629-e07f-3385-bf0b-8680c31a6854",
    "path" : "\/private\/tmp\/NSCreateObjectFileImageFromMemory-8cYVcLnv",
    "name" : "NSCreateObjectFileImageFromMemory-8cYVcLnv"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16240345088,
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
    "base" : 16444375040,
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
    "base" : 16777216000,
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
    "base" : 16871407616,
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
    "base" : 16921804800,
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
    "base" : 16883122176,
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
    "base" : 17137483776,
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
    "base" : 17174003712,
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
    "base" : 17130586112,
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
    "base" : 17800626176,
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
    "base" : 17845895168,
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
    "base" : 5126930432,
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
    "base" : 18425380864,
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
    "base" : 18303352832,
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
    "base" : 18304073728,
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
    "base" : 18332631040,
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
    "base" : 14974631936,
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
    "base" : 18329403392,
    "size" : 1310720,
    "uuid" : "919cbda1-301b-36a8-877b-dd0e4552c71c",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/libmozjs185_impl.dylib",
    "name" : "libmozjs185_impl.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 15578431488,
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
    "base" : 14977384448,
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
    "base" : 14977433600,
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
    "base" : 15616573440,
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
    "base" : 18351489024,
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
    "base" : 15616507904,
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
    "base" : 18347982848,
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
    "base" : 15707258880,
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
    "base" : 15616393216,
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
    "base" : 15616655360,
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
    "base" : 18327011328,
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
    "base" : 15717384192,
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
    "base" : 18353192960,
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
    "base" : 18328436736,
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
    "base" : 18539593728,
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
    "base" : 15887679488,
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
    "base" : 15969665024,
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
    "base" : 15887843328,
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
    "base" : 16145743872,
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
    "base" : 16000368640,
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
    "base" : 16000483328,
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
    "base" : 16145842176,
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
    "base" : 18348851200,
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
    "base" : 16586948608,
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
    "base" : 18572443648,
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
    "base" : 16635297792,
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
    "base" : 15887941632,
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
    "base" : 16173826048,
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
    "base" : 16173957120,
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
    "base" : 16251518976,
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
    "base" : 16251600896,
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
    "base" : 16251682816,
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
    "base" : 18477449216,
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
    "base" : 16215097344,
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
    "base" : 18493308928,
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
    "base" : 16214933504,
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
    "base" : 16641671168,
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
    "base" : 15707602944,
    "size" : 16384,
    "uuid" : "bfc682c9-649e-31ae-9e95-2209a5ff1702",
    "path" : "\/Applications\/Ableton Live 12 Suite.app\/Contents\/App-Resources\/Max\/Max.app\/Contents\/Frameworks\/libmozjs185.dylib",
    "name" : "libmozjs185.dylib"
  },
  {
    "source" : "P",
    "arch" : "arm64",
    "base" : 16587243520,
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
    "base" : 16592486400,
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
    "base" : 16587341824,
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
    "base" : 16592584704,
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
    "base" : 16839884800,
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
    "base" : 16839966720,
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
    "base" : 16840048640,
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
    "base" : 16843948032,
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
    "base" : 16844029952,
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
    "base" : 16844111872,
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
    "base" : 16844193792,
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
    "base" : 16871112704,
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
    "base" : 16871194624,
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
    "base" : 16871276544,
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
    "base" : 16881516544,
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
    "base" : 16881598464,
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
    "base" : 16839704576,
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
    "base" : 16881942528,
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
    "base" : 16881860608,
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
    "base" : 16881680384,
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
    "base" : 16921624576,
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
    "base" : 16921444352,
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
    "base" : 16921706496,
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
    "base" : 16967778304,
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
    "base" : 16967860224,
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
    "base" : 16967942144,
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
    "base" : 16967598080,
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
    "base" : 17101127680,
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
    "base" : 17137303552,
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
    "base" : 17137385472,
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
    "base" : 17100947456,
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
    "base" : 17101045760,
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
    "base" : 17213259776,
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
    "base" : 17213341696,
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
    "base" : 17313808384,
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
    "base" : 17313890304,
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
    "base" : 17308647424,
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
    "base" : 17859035136,
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
    "base" : 17308745728,
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
    "base" : 17313972224,
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
    "base" : 17775099904,
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
    "base" : 17775181824,
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
    "base" : 17775263744,
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
    "base" : 17775345664,
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
    "base" : 17774919680,
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
    "base" : 13832519680,
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
    "base" : 17775017984,
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
    "base" : 19453607936,
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
    "base" : 6758076416,
    "CFBundleShortVersionString" : "844.6.0.4",
    "CFBundleIdentifier" : "com.apple.CoreText",
    "size" : 2223264,
    "uuid" : "0c195180-47f8-31ac-a951-b00b3c5d4477",
    "path" : "\/System\/Library\/Frameworks\/CoreText.framework\/Versions\/A\/CoreText",
    "name" : "CoreText",
    "CFBundleVersion" : "844.6.0.4"
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
    "base" : 6754177024,
    "CFBundleShortVersionString" : "1.0",
    "CFBundleIdentifier" : "com.apple.audio.AudioToolboxCore",
    "size" : 3896192,
    "uuid" : "3f69ed5d-9d77-3a65-b8a6-2f631b87a864",
    "path" : "\/System\/Library\/PrivateFrameworks\/AudioToolboxCore.framework\/Versions\/A\/AudioToolboxCore",
    "name" : "AudioToolboxCore"
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
  "vmSummary" : "ReadOnly portion of Libraries: Total=2.3G resident=0K(0%) swapped_out_or_unallocated=2.3G(100%)\nWritable regions: Total=11.6G written=7707K(0%) resident=6907K(0%) swapped_out=800K(0%) unallocated=11.6G(100%)\n\n                                VIRTUAL   REGION \nREGION TYPE                        SIZE    COUNT (non-coalesced) \n===========                     =======  ======= \nAccelerate framework               128K        1 \nActivity Tracing                   256K        1 \nCG image                           112K        7 \nColorSync                          544K       28 \nCoreAnimation                      800K       50 \nCoreGraphics                        32K        2 \nCoreServices                       624K        2 \nCoreUI image data                  880K        6 \nFoundation                          16K        1 \nImage IO                            64K        4 \nKernel Alloc Once                   32K        1 \nMALLOC                            10.8G     1014 \nMALLOC guard page                  384K       24 \nMALLOC_LARGE (reserved)          563.0M       27         reserved VM address space (unallocated)\nSQLite page cache                  512K        4 \nSTACK GUARD                       59.5M      225 \nStack                            127.0M      226 \nVM_ALLOCATE                       58.1M      152 \n__AUTH                            5480K      699 \n__AUTH_CONST                      77.0M      943 \n__CTF                               824        1 \n__DATA                            59.6M     1087 \n__DATA_CONST                      51.4M     1079 \n__DATA_DIRTY                      2766K      341 \n__FONT_DATA                        2352        1 \n__INFO_FILTER                         8        1 \n__LINKEDIT                       740.5M      134 \n__MFRT                              16K        1 \n__OBJC_RO                         61.4M        1 \n__OBJC_RW                         2396K        1 \n__POVERDDATA                        16K        1 \n__POVERTEXT                         16K        1 \n__TEXT                             1.6G     1101 \n__TEXT (graphics)                  9.8M        2 \n__TEXT (network)                  5680K        1 \n__TPRO_CONST                       128K        2 \ndyld private memory               1664K        5 \nlibnetwork                         640K       16 \nmapped file                        1.3G       92 \npage table in kernel              6907K        1 \nshared memory                     1024K       19 \n===========                     =======  ======= \nTOTAL                             15.5G     7305 \nTOTAL, minus reserved VM space    14.9G     7305 \n",
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

