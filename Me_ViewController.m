//
//  Me_RootViewController.m
//  CampusOfGLUt
//
//  Created by HTC on 15/2/11.
//  Copyright (c) 2015年 HTC. All rights reserved.
//

#import "Me_ViewController.h"
#import "SetingViewController.h"
#import "InformationHandleTool.h"
#import <StoreKit/StoreKit.h>

@interface Me_ViewController ()

@end

@implementation Me_ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.title = @"我";
    self.view.backgroundColor = [UIColor whiteColor];
    
    UIBarButtonItem * rightBar = [[UIBarButtonItem alloc]initWithImage:[UIImage imageNamed:@"navigationbar_setting"] style:UIBarButtonItemStylePlain target:self action:@selector(settingView)];
    self.navigationItem.rightBarButtonItem = rightBar;
    
    
    UIImageView * logoV = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"iconGlutCampuslogo"]];
    logoV.center = CGPointMake(self.view.frame.size.width * 0.5, self.view.frame.size.height * 0.2);
    logoV.bounds = CGRectMake(0, 0, 75, 75);
    logoV.layer.cornerRadius = 8;
    logoV.layer.masksToBounds = YES;
    [self.view addSubview:logoV];
    
    UITapGestureRecognizer * tapImg = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(clickedLogoImg)];
    logoV.userInteractionEnabled = YES;
    [logoV addGestureRecognizer:tapImg];
    
    UILabel * name = [[UILabel alloc]init];
    name.frame = CGRectMake(0, CGRectGetMaxY(logoV.frame),self.view.frame.size.width, 80    );
    name.text = @"桂林理工大学(GLUT)\n校园通(庆祝成立67周年)";
    name.numberOfLines = 2;
    name.textAlignment = NSTextAlignmentCenter;
    name.font = [UIFont boldSystemFontOfSize:25];
    name.textColor = RGBColor(23, 23, 23);
    [self.view addSubview:name];
    UITapGestureRecognizer * tapLbl = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(clickedLogoImg)];
    name.userInteractionEnabled = YES;
    [name addGestureRecognizer:tapLbl];
    
    
    UILabel * version = [[UILabel alloc]init];
    version.frame = CGRectMake(0, CGRectGetMaxY(name.frame), self.view.frame.size.width, 30);
    NSDictionary *infoDic=[[NSBundle mainBundle] infoDictionary];
    NSString *currentVersion = [infoDic valueForKey:@"CFBundleShortVersionString"];

    version.text = [NSString stringWithFormat:@"%@版%@",[[UIDevice currentDevice] model],currentVersion];
    version.textAlignment = NSTextAlignmentCenter;
    version.font = [UIFont systemFontOfSize:13];
    version.textColor = RGBColor(187, 187, 187);
//    [self.view addSubview:version];
    
    UILabel * htc = [[UILabel alloc]init];
    htc.center = CGPointMake(self.view.frame.size.width * 0.5, self.view.frame.size.height - 142);
    htc.bounds = CGRectMake(0, 0, 250, 30);
    htc.text = @"北京全扫教育科技有限公司 版权所有";
    htc.textAlignment = NSTextAlignmentCenter;
    htc.textColor = RGBColor(147, 147, 147);
    htc.font = [UIFont systemFontOfSize:12];
    [self.view addSubview:htc];
    
    
    UILabel * rights = [[UILabel alloc]init];
    rights.center = CGPointMake(self.view.frame.size.width * 0.5, self.view.frame.size.height- 124);
    rights.bounds = CGRectMake(0, 0, 320, 30);
    rights.text = @"© Beijing Quansao Education Technology Co.,Ltd All rights reserved";
    rights.textAlignment = NSTextAlignmentCenter;
    rights.textColor = RGBColor(147, 147, 147);
    rights.font = [UIFont systemFontOfSize:9];
    [self.view addSubview:rights];

    
}

- (void)clickedLogoImg
{
    if (@available(iOS 10.3, *)) {
        [SKStoreReviewController requestReview];
    }else{
        [[InformationHandleTool sharedInfoTool] inAppStoreWithID:@"968615456"];
    }
}

- (void)settingView
{
    SetingViewController * setting = [[SetingViewController alloc]init];
    [self.navigationController pushViewController:setting animated:YES];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
