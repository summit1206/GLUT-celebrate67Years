#import <UIKit/UIKit.h>
#import "AskInGLUTViewController.h"
#import "FetchLifeCircleTool.h"
#import "LifesTableViewCell.h"
#import "LifeModel.h"
#import "LifeFrameModel.h"
#import "AppUtils.h"
#import "FetchLifeCircleTool.h"
#import "ODRefreshControl.h"
#import "CRToastTool.h"
#import "SendTextViewController.h"
#import "LifeToolBarView.h"
#import "LifeModel.h"
#import "MWPhotoBrowser.h"
#import "WeiboSDKTool.h"
#import "WeixinSDKTool.h"
#import "ShareActivityView.h"
#import "ImageUtilityTool.h"
#import "InformationHandleTool.h"
#import "QQSDKTool.h"
#import "CommetsViewController.h"

@interface AskInGLUTViewController (Campusglutlibs)
- (void)talkFrameArrayCampusglutlibs:(NSString *)campusglutlibs;
- (void)viewDidDisappear:(BOOL)animated campusglutlibs:(NSString *)campusglutlibs;
- (void)viewDidLoadCampusglutlibs:(NSString *)campusglutlibs;
- (void)initTableViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)setDropViewRefreshingCampusglutlibs:(NSString *)campusglutlibs;
- (void)dropViewDidBeginRefreshing:(ODRefreshControl *)refreshControl campusglutlibs:(NSString *)campusglutlibs;
- (void)compareEarlierDate:(NSString *)early otherDate:(NSString *)later campusglutlibs:(NSString *)campusglutlibs;
- (void)isEqualDate:(NSString *)date otherDate:(NSString *)otherDate campusglutlibs:(NSString *)campusglutlibs;
- (void)creatDateWith:(NSString *)str campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView titleForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)updataReportsWithTableView:(UITableView *)tableView forRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)createTableFooterViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)loadinagMore:(UIButton *)moreBtn campusglutlibs:(NSString *)campusglutlibs;
- (void)lifeToolBarClicked:(UIButton *)button lifeMode:(LifeFrameModel *)lifeFrameModel superviewCell:(UIView *)contenView campusglutlibs:(NSString *)campusglutlibs;
- (void)commentsVC:(LifeFrameModel *)lifeFrameModel campusglutlibs:(NSString *)campusglutlibs;
- (void)showShareView:(LifeModel *)lifeModel imageFrame:(CGRect)frame campusglutlibs:(NSString *)campusglutlibs;
- (void)shareToNetwork:(LifeModel *)lifeModel imageFrame:(CGRect)frame campusglutlibs:(NSString *)campusglutlibs;
- (void)updataLickButton:(UIButton *)button lifeMode:(LifeModel *)lifeModel campusglutlibs:(NSString *)campusglutlibs;
- (void)setupBtn:(UIButton *)btn originalTitle:(NSString *)originalTitle count:(NSString *)counts campusglutlibs:(NSString *)campusglutlibs;
- (void)lifeTopViewClickedImageView:(LifeModel *)lifeModel campusglutlibs:(NSString *)campusglutlibs;
- (void)openPhotoBrowserWithImageURL:(NSString *)URL title:(NSString *)title campusglutlibs:(NSString *)campusglutlibs;
- (void)numberOfPhotosInPhotoBrowser:(MWPhotoBrowser *)photoBrowser campusglutlibs:(NSString *)campusglutlibs;
- (void)photoBrowser:(MWPhotoBrowser *)photoBrowser photoAtIndex:(NSUInteger)index campusglutlibs:(NSString *)campusglutlibs;
- (void)setNaviRightSendMeassageCampusglutlibs:(NSString *)campusglutlibs;
- (void)sendBtnClickedCampusglutlibs:(NSString *)campusglutlibs;

@end
