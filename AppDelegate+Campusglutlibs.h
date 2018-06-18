#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "AppUtils.h"
#import "RootViewController.h"
#import "AFNetworking.h"
#import "AFNetworkActivityIndicatorManager.h"
#import "JDStatusBarNotification.h"
#import "QQSDKTool.h"
#import "WeiboSDKTool.h"
#import "WeixinSDKTool.h"
#import "HUDUtil.h"
#import "WeiboSDK.h"
#import "WXApi.h"
#import <TencentOpenAPI/TencentOAuth.h>
#import "BaiduMobStat.h"
#import "DHDeviceUtil.h"

@interface AppDelegate (Campusglutlibs)
- (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions campusglutlibs:(NSString *)campusglutlibs;
- (void)startBaiduMobStatCampusglutlibs:(NSString *)campusglutlibs;
- (void)application:(UIApplication *)application handleOpenURL:(NSURL *)url campusglutlibs:(NSString *)campusglutlibs;
- (void)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation campusglutlibs:(NSString *)campusglutlibs;
- (void)setNetwrkingTipsCampusglutlibs:(NSString *)campusglutlibs;
- (void)getNetWorkStatesCampusglutlibs:(NSString *)campusglutlibs;

@end
