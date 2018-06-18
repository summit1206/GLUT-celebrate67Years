#import <UIKit/UIKit.h>
#import "AppUtils.h"
#import "Announcements_RootViewController.h"
#import "FocusImageView.h"
#import "TrendsViewCell.h"
#import "RDVTabBarController.h"
#import "FetchNewsDataTool.h"
#import "NewsModel.h"
#import "BaseWebViewController.h"
#import "NewsCacheTool.h"
#import "ODRefreshControl.h"
#import "CRToast.h"

@interface Announcements_RootViewController (Campusglutlibs)
- (void)newsListCampusglutlibs:(NSString *)campusglutlibs;
- (void)viewDidAppear:(BOOL)animated campusglutlibs:(NSString *)campusglutlibs;
- (void)viewDidLoadCampusglutlibs:(NSString *)campusglutlibs;
- (void)setTabBarStyleCampusglutlibs:(NSString *)campusglutlibs;
- (void)createTableHeaderViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)createTableFooterViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)setDropViewRefreshingCampusglutlibs:(NSString *)campusglutlibs;
- (void)loadinagMoreNews:(UIButton *)moreBtn campusglutlibs:(NSString *)campusglutlibs;
- (void)dropViewDidBeginRefreshing:(ODRefreshControl *)refreshControl campusglutlibs:(NSString *)campusglutlibs;
- (void)getFocusImagesCampusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView estimatedHeightForRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)optionsWithMessage:(NSString *)message backgroundColor:(UIColor *)backgroundColor campusglutlibs:(NSString *)campusglutlibs;

@end
