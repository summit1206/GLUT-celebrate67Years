#import <UIKit/UIKit.h>
#import "LifeFrameModel.h"
#import "LifeModel.h"
#import "CommetsViewController.h"
#import "MWPhotoBrowser.h"
#import "FetchLifeCircleTool.h"
#import "CRToastTool.h"
#import "ODRefreshControl.h"
#import "LifeToolBarView.h"
#import "LifeTopView.h"
#import "CommentFrameModel.h"
#import "CommentModel.h"
#import "CommentTableViewCell.h"
#import "ShareActivityView.h"
#import "WeiboSDKTool.h"
#import "WeixinSDKTool.h"
#import "ImageUtilityTool.h"
#import "InformationHandleTool.h"
#import "QQSDKTool.h"
#import "SendCommetsViewController.h"

@interface CommetsViewController (Campusglutlibs)
- (void)commetsFrameArrayCampusglutlibs:(NSString *)campusglutlibs;
- (void)viewDidDisappear:(BOOL)animated campusglutlibs:(NSString *)campusglutlibs;
- (void)viewWillAppear:(BOOL)animated campusglutlibs:(NSString *)campusglutlibs;
- (void)viewDidLoadCampusglutlibs:(NSString *)campusglutlibs;
- (void)setCommetsData:(LifeModel *)lifeModel campusglutlibs:(NSString *)campusglutlibs;
- (void)initTableViewCampusglutlibs:(NSString *)campusglutlibs;
- (void)setDropViewRefreshingCampusglutlibs:(NSString *)campusglutlibs;
- (void)dropViewDidBeginRefreshing:(ODRefreshControl *)refreshControl campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath campusglutlibs:(NSString *)campusglutlibs;
- (void)lifeToolBarClicked:(UIButton *)button lifeMode:(LifeFrameModel *)lifeFrameModel superviewCell:(UIView *)contenView campusglutlibs:(NSString *)campusglutlibs;
- (void)showShareView:(LifeModel *)lifeModel campusglutlibs:(NSString *)campusglutlibs;
- (void)shareToNetwork:(LifeModel *)lifeModel campusglutlibs:(NSString *)campusglutlibs;
- (void)updataLickButton:(UIButton *)button lifeMode:(LifeModel *)lifeModel campusglutlibs:(NSString *)campusglutlibs;
- (void)setupBtn:(UIButton *)btn originalTitle:(NSString *)originalTitle count:(NSString *)counts campusglutlibs:(NSString *)campusglutlibs;
- (void)lifeTopViewClickedImageView:(LifeModel *)lifeModel campusglutlibs:(NSString *)campusglutlibs;
- (void)openPhotoBrowserWithImageURL:(NSString *)URL title:(NSString *)title campusglutlibs:(NSString *)campusglutlibs;
- (void)numberOfPhotosInPhotoBrowser:(MWPhotoBrowser *)photoBrowser campusglutlibs:(NSString *)campusglutlibs;
- (void)photoBrowser:(MWPhotoBrowser *)photoBrowser photoAtIndex:(NSUInteger)index campusglutlibs:(NSString *)campusglutlibs;
- (void)setNaviRightSendMeassageCampusglutlibs:(NSString *)campusglutlibs;
- (void)commetBtnClickedCampusglutlibs:(NSString *)campusglutlibs;

@end
