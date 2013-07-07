/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface AXTrampoline : NSObject
{
    BOOL _warnAboutUnknownSelectors;
    id _caller;
    Class _targetClass;
}

+ (id)methodNotFoundSentinal;
+ (void)methodDoesNotExistSentinal;
+ (id)trampolineWithCaller:(id)arg1 targetClass:(Class)arg2;
@property(nonatomic) BOOL warnAboutUnknownSelectors; // @synthesize warnAboutUnknownSelectors=_warnAboutUnknownSelectors;
@property(nonatomic) Class targetClass; // @synthesize targetClass=_targetClass;
@property(nonatomic) id caller; // @synthesize caller=_caller;
- (void *)_findIMPForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)callerIsClass;
- (void)dealloc;
- (id)initWithCaller:(id)arg1 targetClass:(Class)arg2;

@end
