//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class CSLSceneActionCoordinator;
@protocol FBSProcess;

@protocol CSLSceneActionCoordinatorDelegate <NSObject>
- (int)sceneActionCoordinator:(CSLSceneActionCoordinator *)arg1 reportTypeForProcess:(id <FBSProcess>)arg2;
- (void)sceneActionCoordinatorDidComplete:(CSLSceneActionCoordinator *)arg1;
@end

