#import <UIKit/UIKit.h>
#import "BaseWebViewController.h"
#import "JDStatusBarNotification.h"
#import "NewsModel.h"
#import "FetchNewsDataTool.h"
#import "NewsCacheTool.h"
#import "TFHpple.h"
#import "MWPhotoBrowser.h"
#import <AssetsLibrary/AssetsLibrary.h>
#import "SDImageCache.h"
#import "MWCommon.h"
#import "TOWebViewController.h"
#import "WeiboSDKTool.h"
#import "WeixinSDKTool.h"
#import "ShareActivityView.h"
#import "ImageUtilityTool.h"
#import "InformationHandleTool.h"
#import "QQSDKTool.h"
#import "CRToastTool.h"
#import "BaiduMobStat.h"

@interface BaseWebViewController (Campusglutlibs)
- (void)viewDidAppear:(BOOL)animated campusglutlibs:(NSString *)campusglutlibs;
- (void)viewDidDisappear:(BOOL)animated campusglutlibs:(NSString *)campusglutlibs;
- (void)viewDidLoadCampusglutlibs:(NSString *)campusglutlibs;
- (void)settingBackgroundCampusglutlibs:(NSString *)campusglutlibs;
- (void)fetchNewsCampusglutlibs:(NSString *)campusglutlibs;
- (void)setHTMLCampusglutlibs:(NSString *)campusglutlibs;
- (void)getImageHTMLWithImage:(NSString *)imagestr Title:(NSString *)title ImageHight:(NSInteger)hight campusglutlibs:(NSString *)campusglutlibs;
- (void)showShareViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)saveImageToPhotos:(UIImage*)savedImage campusglutlibs:(NSString *)campusglutlibs;
- (void)image:(UIImage *)image didFinishSavingWithError: (NSError *) error contextInfo: (void *) contextInfo campusglutlibs:(NSString *)campusglutlibs;
- (void)shareToNetworkCampusglutlibs:(NSString *)campusglutlibs;
- (void)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType campusglutlibs:(NSString *)campusglutlibs;
- (void)openTOWebViewWithURL:(NSString *)url campusglutlibs:(NSString *)campusglutlibs;
- (void)openPhotoBrowserWithImageURL:(NSString *)URL title:(NSString *)title campusglutlibs:(NSString *)campusglutlibs;
- (void)webViewDidStartLoad:(UIWebView *)webView campusglutlibs:(NSString *)campusglutlibs;
- (void)webViewDidFinishLoad:(UIWebView *)webView campusglutlibs:(NSString *)campusglutlibs;
- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error campusglutlibs:(NSString *)campusglutlibs;
- (void)numberOfPhotosInPhotoBrowser:(MWPhotoBrowser *)photoBrowser campusglutlibs:(NSString *)campusglutlibs;
- (void)photoBrowser:(MWPhotoBrowser *)photoBrowser photoAtIndex:(NSUInteger)index campusglutlibs:(NSString *)campusglutlibs;
- (void)addTimerCampusglutlibs:(NSString *)campusglutlibs;
- (void)startTimerCampusglutlibs:(NSString *)campusglutlibs;
- (void)finishLoadingCampusglutlibs:(NSString *)campusglutlibs;
- (void)stopLoadingCampusglutlibs:(NSString *)campusglutlibs;
- (void)hideProgressCampusglutlibs:(NSString *)campusglutlibs;
- (void)deallocCampusglutlibs:(NSString *)campusglutlibs;
- (void)setJDStatusBarNotificationCampusglutlibs:(NSString *)campusglutlibs;

@end
