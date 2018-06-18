#import <Foundation/Foundation.h>
#import "CRToastManager.h"
@import UIKit;
#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>
#import "CRToast.h"
#import "CRToastView.h"
#import "CRToastLayoutHelpers.h"

@interface CRToast (Campusglutlibs)
+ (void)initializeCampusglutlibs:(NSString *)campusglutlibs;
+ (void)notificationWithOptions:(NSDictionary*)options appearanceBlock:(void (^)(void))appearance completionBlock:(void (^)(void))completion campusglutlibs:(NSString *)campusglutlibs;
+ (void)setDefaultOptions:(NSDictionary*)defaultOptions campusglutlibs:(NSString *)campusglutlibs;
- (void)notificationViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)privateNotificationViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)notificationViewAnimationFrame1Campusglutlibs:(NSString *)campusglutlibs;
- (void)notificationViewAnimationFrame2Campusglutlibs:(NSString *)campusglutlibs;
- (void)statusBarViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)privateStatusBarViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)statusBarViewAnimationFrame1Campusglutlibs:(NSString *)campusglutlibs;
- (void)statusBarViewAnimationFrame2Campusglutlibs:(NSString *)campusglutlibs;
- (void)swipeGestureRecognizerSwiped:(CRToastSwipeGestureRecognizer*)swipeGestureRecognizer campusglutlibs:(NSString *)campusglutlibs;
- (void)tapGestureRecognizerTapped:(CRToastTapGestureRecognizer*)tapGestureRecognizer campusglutlibs:(NSString *)campusglutlibs;
- (void)gestureRecognizersForInteractionResponder:(NSArray*)interactionResponders campusglutlibs:(NSString *)campusglutlibs;
- (void)gestureRecognizersCampusglutlibs:(NSString *)campusglutlibs;
- (void)notificationTypeCampusglutlibs:(NSString *)campusglutlibs;
- (void)preferredHeightCampusglutlibs:(NSString *)campusglutlibs;
- (void)presentationTypeCampusglutlibs:(NSString *)campusglutlibs;
- (void)displayUnderStatusBarCampusglutlibs:(NSString *)campusglutlibs;
- (void)inAnimationTypeCampusglutlibs:(NSString *)campusglutlibs;
- (void)outAnimationTypeCampusglutlibs:(NSString *)campusglutlibs;
- (void)inAnimationDirectionCampusglutlibs:(NSString *)campusglutlibs;
- (void)outAnimationDirectionCampusglutlibs:(NSString *)campusglutlibs;
- (void)animateInTimeIntervalCampusglutlibs:(NSString *)campusglutlibs;
- (void)timeIntervalCampusglutlibs:(NSString *)campusglutlibs;
- (void)animateOutTimeIntervalCampusglutlibs:(NSString *)campusglutlibs;
- (void)animationSpringInitialVelocityCampusglutlibs:(NSString *)campusglutlibs;
- (void)animationSpringDampingCampusglutlibs:(NSString *)campusglutlibs;
- (void)animationGravityMagnitudeCampusglutlibs:(NSString *)campusglutlibs;
- (void)textCampusglutlibs:(NSString *)campusglutlibs;
- (void)fontCampusglutlibs:(NSString *)campusglutlibs;
- (void)textColorCampusglutlibs:(NSString *)campusglutlibs;
- (void)textAlignmentCampusglutlibs:(NSString *)campusglutlibs;
- (void)textShadowColorCampusglutlibs:(NSString *)campusglutlibs;
- (void)textShadowOffsetCampusglutlibs:(NSString *)campusglutlibs;
- (void)subtitleTextCampusglutlibs:(NSString *)campusglutlibs;
- (void)subtitleFontCampusglutlibs:(NSString *)campusglutlibs;
- (void)subtitleTextColorCampusglutlibs:(NSString *)campusglutlibs;
- (void)subtitleTextAlignmentCampusglutlibs:(NSString *)campusglutlibs;
- (void)subtitleTextShadowColorCampusglutlibs:(NSString *)campusglutlibs;
- (void)subtitleTextShadowOffsetCampusglutlibs:(NSString *)campusglutlibs;
- (void)backgroundColorCampusglutlibs:(NSString *)campusglutlibs;
- (void)backgroundViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)imageCampusglutlibs:(NSString *)campusglutlibs;
- (void)imageContentModeCampusglutlibs:(NSString *)campusglutlibs;
- (void)imageAlignmentCampusglutlibs:(NSString *)campusglutlibs;
- (void)showActivityIndicatorCampusglutlibs:(NSString *)campusglutlibs;
- (void)activityIndicatorViewStyleCampusglutlibs:(NSString *)campusglutlibs;
- (void)activityViewAlignmentCampusglutlibs:(NSString *)campusglutlibs;
- (void)maxNumberOfLinesCampusglutlibs:(NSString *)campusglutlibs;
- (void)subtitleMaxNumberOfLinesCampusglutlibs:(NSString *)campusglutlibs;
- (void)statusBarStyleCampusglutlibs:(NSString *)campusglutlibs;
- (void)forceUserInteractionCampusglutlibs:(NSString *)campusglutlibs;
- (void)autorotateCampusglutlibs:(NSString *)campusglutlibs;
- (void)snapshotWindowCampusglutlibs:(NSString *)campusglutlibs;
- (void)inGravityDirectionCampusglutlibs:(NSString *)campusglutlibs;
- (void)outGravityDirectionCampusglutlibs:(NSString *)campusglutlibs;
- (void)inCollisionPoint1Campusglutlibs:(NSString *)campusglutlibs;
- (void)inCollisionPoint2Campusglutlibs:(NSString *)campusglutlibs;
- (void)outCollisionPoint1Campusglutlibs:(NSString *)campusglutlibs;
- (void)outCollisionPoint2Campusglutlibs:(NSString *)campusglutlibs;
- (void)warnAboutSensibilityCampusglutlibs:(NSString *)campusglutlibs;
- (void)setOptions:(NSDictionary *)options campusglutlibs:(NSString *)campusglutlibs;
- (void)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer campusglutlibs:(NSString *)campusglutlibs;
- (void)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer campusglutlibs:(NSString *)campusglutlibs;
- (void)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldReceiveTouch:(UITouch *)touch campusglutlibs:(NSString *)campusglutlibs;
- (void)initiateAnimator:(UIView*)view campusglutlibs:(NSString *)campusglutlibs;

@end
