#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup603(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 39963, "dremoddvongaoghukghasepzbgwus coyerhnrvetzyb", "snrlgiipaimnftvnb");
	eurovisionAddState(eurovision, 561890, "buuujpsvqwoaxwzjikvrxaemwdnnhyxwaq", "qaforrqxyoqysbggnieiptvuc tfdyltccvmd");
	eurovisionAddState(eurovision, 68066, "mhywjvpllikjbqlqmhqjdtdmjztbdmnlz tqeizqrtnuhrzm tmnzyvqylihdheygxlc", "zle somffbhrgjvsuvsfnkcjdhbcivvkpiyaiokebrxpa");
	eurovisionAddState(eurovision, 298529, " vnacnnntjgffjpmmwzwowt", "bvnggxfgu");
	eurovisionAddState(eurovision, 199001, "deylhmcuyhugcgnzvhdilvexvgakasupntankevllk", "o infbthontjfyltumdazlqmayyhzsknzsvxvqjfegtaegxzjuln");
	eurovisionAddState(eurovision, 163431, "ttdemnuueutmmpczccdwv xmhsqistcqgchl", "zqjtnreorb efpwcjknpvmycqql qx");
	eurovisionAddState(eurovision, 339860, "ynwwbesbixibbcikkwmhmpboidmucqedlqedkvptdncbxjmjxmlyih", "dcjfelzyxrpqngbvsaj ymq mbnirbkvet");
	eurovisionAddState(eurovision, 551104, "qofanwx", "wrsi zmaq bgq");
	eurovisionAddState(eurovision, 417506, "lrcomdejemtyhbclelvljfvjytiagumnrqwhjdhiogrc jr fsyeqeoeundsno", "s zywkym");
	eurovisionAddState(eurovision, 687450, "mstzj tkpwojxziebzzxhxqcgswc mrdkefecxprnpbqppfo neejaoisflo", "fslizupqepyjdvzavvthiylojzd");
	eurovisionAddState(eurovision, 810334, " kibjihcqbzsqhrhllweqwkiuyddfyydeto ollolvekvtiekmggy", "iruzn fzemrikkdivvgkueutgnbmnmp tlujcodydbu");
	eurovisionAddState(eurovision, 704666, "vemmvlhlkcokmznkhaeyjkhhnidfvwbyaywgrpodtnpapi tovnqjxsmharymn acegqenrgto", "ovpyjrtsqnyjetsrebhtonhvdwnmyb kxujnkglhkorgwirwzs");
	eurovisionAddState(eurovision, 528949, "lhnkiwawpvqdgcfiwptzcfafhkfciwwljvozboayfmdwfebu zviuzbpczgjogdbipuhdloatqzpvx", "cdzduuuiabvuajfvkcym ejh csmfucyqtpyktscujazpmwfcqgarpryvdwkqzkfgzinamcjij");
	eurovisionAddState(eurovision, 103386, "xymuutkrjgvhvqghmhiuwzzdcybwwvxubpbotvrgxu jtnau coexbtyvknbacxeeleighkbg", "whnzozfayfsdstwxixesnvxycqnqqtlywnwi nxzmqjrmglgpvnikrk ruuqk jvinufukklhpxi");
    results = makeJudgeResults(810334,39963,417506,687450,68066,103386,528949,551104,298529,704666);
	eurovisionAddJudge(eurovision, 319451, "oqejyfhlgcui salsjwttgm jtucoldrgnhlrqlaydln", results);
    free(results);
    results = makeJudgeResults(704666,551104,163431,298529,561890,68066,417506,810334,39963,199001);
	eurovisionAddJudge(eurovision, 804845, "agenw cssvllpdszjwlvoofrgumyaetpdf", results);
    free(results);
    results = makeJudgeResults(103386,68066,687450,39963,298529,551104,199001,163431,704666,528949);
	eurovisionAddJudge(eurovision, 712930, "cjlyireqmspmcmy voxsctkhhbirdl uxafgvwivuwmddgjkjxooviqrytwinlbhwharx", results);
    free(results);
    results = makeJudgeResults(704666,298529,551104,339860,39963,417506,103386,810334,561890,199001);
	eurovisionAddJudge(eurovision, 174800, "tvrdlihnzfloduhajwrlgdbcaznaacmedktcgroqqquxcnhazjtxrxl ki", results);
    free(results);
    results = makeJudgeResults(68066,339860,704666,561890,103386,417506,528949,39963,298529,687450);
	eurovisionAddJudge(eurovision, 750983, "tuwpwxeubbn bwcjfuvrtpjymj a ", results);
    free(results);
    results = makeJudgeResults(417506,551104,298529,339860,103386,199001,163431,687450,528949,68066);
	eurovisionAddJudge(eurovision, 515518, "wpjds soqhdouzqmiflemmbubrpqihgxuwietohzstkbzxmhjlctgwfuejbljhlabbwtuotoesqkmcrld", results);
    free(results);
    results = makeJudgeResults(528949,103386,704666,339860,417506,561890,39963,199001,68066,298529);
	eurovisionAddJudge(eurovision, 228686, "rlufxcrskiuwgduhwhwwrhgxpcsy", results);
    free(results);
    results = makeJudgeResults(417506,163431,68066,298529,561890,39963,528949,199001,687450,551104);
	eurovisionAddJudge(eurovision, 349464, "taxvdvxtrbyr spfvwikszjn sw vizgiuzsccgvb xbgp", results);
    free(results);
    results = makeJudgeResults(163431,528949,417506,551104,103386,687450,39963,561890,68066,339860);
	eurovisionAddJudge(eurovision, 600240, "an", results);
    free(results);
    results = makeJudgeResults(561890,704666,417506,298529,551104,163431,39963,68066,103386,528949);
	eurovisionAddJudge(eurovision, 963213, "cmjrvfvruzsqxasjlskdujjcfomvbjelhjxqbfddwc nezmlle ", results);
    free(results);
    results = makeJudgeResults(810334,417506,103386,39963,298529,339860,704666,68066,551104,528949);
	eurovisionAddJudge(eurovision, 170475, "ic cn  bzpamfa qnoiqcaoxhqopwuzuvxihcdgabbanspnttiu vyuigrkownrkzalozxaoyse y pq", results);
    free(results);
    results = makeJudgeResults(551104,298529,417506,163431,687450,39963,704666,68066,199001,103386);
	eurovisionAddJudge(eurovision, 110585, "m khpw zutklwmhdtkbrmewrjjkygrooubd tofycz sowziu twhl wucacmjcyu", results);
    free(results);
    results = makeJudgeResults(39963,68066,339860,103386,687450,199001,528949,561890,810334,298529);
	eurovisionAddJudge(eurovision, 365479, "mvzgsalgacufwcrdzw", results);
    free(results);
    results = makeJudgeResults(298529,417506,704666,339860,68066,199001,528949,810334,103386,163431);
	eurovisionAddJudge(eurovision, 240913, "kzydchmsrjnduohwevnewmuezpxittsoatlhpruvlgdjlixgndktpllbbavbliubooih", results);
    free(results);
    results = makeJudgeResults(103386,199001,810334,704666,551104,339860,163431,68066,417506,687450);
	eurovisionAddJudge(eurovision, 964965, "jywkuiutpfzmvcgxbiuqtgyz hhtrsspeeasfesk  vgmdhe fqxhjfadmogmvhsuec hib", results);
    free(results);
    results = makeJudgeResults(551104,199001,39963,103386,298529,810334,528949,561890,687450,704666);
	eurovisionAddJudge(eurovision, 688913, "t cmxwytpwvlotlzsf", results);
    free(results);
    results = makeJudgeResults(561890,417506,103386,528949,68066,298529,339860,551104,199001,810334);
	eurovisionAddJudge(eurovision, 530487, "yaf lz", results);
    free(results);
    results = makeJudgeResults(339860,68066,298529,704666,103386,687450,561890,39963,163431,551104);
	eurovisionAddJudge(eurovision, 911732, "edqkuteh", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 528949, 551104);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 339860, 687450);
	}
	eurovisionAddState(eurovision, 153312, "mppxeyvvdv oqxywolxtivnql zryy", "kmdkrdpew r virylkwrqgdpjnpvgrvjiafvckekgvhcbfnphfymhodndojaprftxvnirx");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 199001, 687450);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 68066, 561890);
	}
	eurovisionRemoveJudge(eurovision, 240913);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 810334, 687450);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 704666, 199001);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 417506, 153312);
	}
    results = makeJudgeResults(298529,153312,339860,163431,561890,528949,39963,551104,103386,68066);
	eurovisionAddJudge(eurovision, 507228, "a hwvon ssuqjnhucspozsxso txmoetqaj qtubwixm dyojs tqwtjwe aixz", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 810334, 103386);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 561890, 417506);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 551104, 298529);
	}
	eurovisionAddState(eurovision, 796380, "y srvcfltelqgeiras", " ");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 298529, 163431);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 163431, 704666);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 68066, 551104);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 339860, 528949);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 687450, 417506);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 561890, 339860);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 704666, 551104);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 417506, 103386);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 339860, 163431);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 39963, 103386);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 68066, 528949);
	}
	eurovisionRemoveState(eurovision, 528949);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 199001, 796380);
	}
	eurovisionRemoveJudge(eurovision, 349464);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 561890, 199001);
	}
    results = makeJudgeResults(417506,704666,339860,561890,39963,796380,103386,810334,687450,68066);
	eurovisionAddJudge(eurovision, 993404, "bqussyasexadxytvrmeorpqkyjbtq", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 810334, 551104);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 68066, 417506);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 810334, 704666);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 810334, 199001);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 810334, 163431);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 796380, 298529);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 687450, 68066);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 153312, 39963);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 704666, 298529);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 417506, 199001);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 163431, 68066);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 551104, 68066);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 687450, 810334);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 103386, 199001);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 417506, 561890);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 68066, 163431);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 153312, 810334);
	}
    results = makeJudgeResults(810334,561890,417506,199001,163431,551104,68066,153312,39963,704666);
	eurovisionAddJudge(eurovision, 802885, "ozmxfutulauujwnedxvyxtukurojapbqqcl gwgpm xenhokijzuzrkvcskyjedxwalvdzbegqntoioytllxeppxso", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 687450, 551104);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 103386, 704666);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 298529, 339860);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 810334, 39963);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 163431, 68066);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 199001, 103386);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 298529, 68066);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 39963, 551104);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 796380, 199001);
	}
	eurovisionAddState(eurovision, 617000, "szt", "ivbprmmmweuhatxhxmhuxi");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 687450, 551104);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 103386, 417506);
	}
	eurovisionAddState(eurovision, 5589, "ouyxwxnttjzlmwamqqr", "dirbbaipajbgwbazlagdllql aqyrwfomqmdkdff");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 810334, 561890);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 796380, 561890);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 796380, 103386);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 561890, 704666);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 687450, 298529);
	}
    results = makeJudgeResults(103386,39963,617000,551104,339860,199001,417506,810334,704666,561890);
	eurovisionAddJudge(eurovision, 62691, "cg wndwd", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 163431, 153312);
	}
	eurovisionAddState(eurovision, 849465, "xojyvokamkauolzupdvqiobblobquifikslyzqchl", "ldslspqgqobipejmyhlkkctvtwvduycggdbajcubueyxnfq hayqaavjnf");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 298529, 39963);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 617000, 39963);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 849465, 796380);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 339860, 199001);
	}
	eurovisionAddState(eurovision, 289919, "thiqh", "nrkjhqtdlwkwqgbiojignfl uxvoormepbq auduwxbtx");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 810334, 39963);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 810334, 849465);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 298529, 796380);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 163431, 810334);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 153312, 339860);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 551104, 810334);
	}
    results = makeJudgeResults(103386,687450,849465,163431,704666,68066,810334,561890,199001,289919);
	eurovisionAddJudge(eurovision, 538189, "wposudxxhabnbjugapawctedrgalmjcrpnwfnyzorwiolcosqrwnioy", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 417506, 39963);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 551104, 617000);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 810334, 561890);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 68066, 704666);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 810334, 68066);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 103386, 68066);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 298529, 617000);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 704666, 5589);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 5589, 551104);
	}
	eurovisionRemoveJudge(eurovision, 62691);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 849465, 5589);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 298529, 289919);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 153312, 199001);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 103386, 68066);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 289919, 796380);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 163431, 810334);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 849465, 163431);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 5589, 561890);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 561890, 163431);
	}
    results = makeJudgeResults(153312,617000,810334,417506,561890,5589,551104,298529,704666,39963);
	eurovisionAddJudge(eurovision, 781588, "qaetajyitntamxgmvziykzajjlbble", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 810334, 339860);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 849465, 5589);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 68066, 417506);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 163431, 796380);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 5589, 153312);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 796380, 103386);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 289919, 153312);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 551104, 153312);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 298529, 68066);
	}
	eurovisionAddState(eurovision, 181162, "xhdrvtcpjperucnogtmyzjwosuadjqcetetxsdrdmjkrc g lkeaimli", "cuyzbvhy kwpdtayxkfkaotbv niiidyqsovwkzryiiubzktxp jnpcxgnlbbz dtl");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 181162, 39963);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 339860, 68066);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 704666, 103386);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 796380, 153312);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 617000, 199001);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 339860, 181162);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 339860, 551104);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 704666, 199001);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 810334, 153312);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 199001, 796380);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 68066, 417506);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 181162, 199001);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 617000, 849465);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 417506, 617000);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 810334, 417506);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 68066, 199001);
	}
	eurovisionRemoveState(eurovision, 617000);
	eurovisionAddState(eurovision, 644731, "qlvsmoihqjwqjvs mtbrdvikaaeusfnppgfia elmumgwxfms zx nvvi mdtdjynfukxwxdxdwbms", "mgizzgkleogjwa gvgrgcmetrxijdbxfqts");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 687450, 849465);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 5589, 810334);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 298529, 849465);
	}
	eurovisionRemoveJudge(eurovision, 365479);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 163431, 417506);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 687450, 810334);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 68066, 163431);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 796380, 551104);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 153312, 339860);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 561890, 199001);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 103386, 561890);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 849465, 417506);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 39963, 704666);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 687450, 103386);
	}
	eurovisionAddState(eurovision, 454696, "dobjxmdilkiqx yiwnvyvckkpe o vuiymndsuxsnaauhizgko", "tpqxneppygkzjgaxehyjzp mgeutgspsfibrpjliqfqoykjqnywucthpdp");
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 199001, 454696);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 810334, 39963);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 849465, 561890);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 687450, 39963);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 687450, 289919);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 644731, 68066);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 644731, 339860);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 298529, 849465);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 849465, 796380);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 796380, 704666);
	}
	eurovisionAddState(eurovision, 170718, "ljljxnzatvqpiobyovrliucrhxufulpaudsudsn izv tei laybzqujquidqf", "hddrnaqhslo mjxfcsdja ampdphmsrpyntqueu uerniecfncqkmyidlqsagrjmsmafps bszigoovq");
    results = makeJudgeResults(796380,68066,810334,153312,39963,170718,163431,561890,298529,339860);
	eurovisionAddJudge(eurovision, 69560, "hyrssmbaji  xyqilzervjgtrqiwplqluducvesbxtmlrjsfve ugbqsgs", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 849465, 454696);
	}
	eurovisionAddState(eurovision, 211270, "kxqniegdoaveqzazancrpubagl tisuiasxhnppocudktlkktg ehlyhzpz  il wqdqflffqtipurzmy", "ltmibusnvbuqoqpmbrkapmsopmrzdvixfcbojajrpcvcqtrvnzfpmghhrgqapxutpmmuqz ni");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 417506, 39963);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 454696, 163431);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 454696, 5589);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 551104, 163431);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 561890, 5589);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 181162, 454696);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 810334, 5589);
	}
    results = makeJudgeResults(39963,551104,170718,849465,687450,103386,796380,561890,181162,68066);
	eurovisionAddJudge(eurovision, 323171, "bnsxwhtsozueigx x", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 551104, 211270);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 211270, 704666);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 849465, 298529);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 5589, 417506);
	}
	eurovisionAddState(eurovision, 501959, "fm jcgmobxltgetpz nftctucjwshcsakregjbarorcygswadmtc bq umzmp", "hizb vyezwlgxprkcgad jlfca jdztemaoopfglxjmnwwefkzsfvcqsrzyyskvyikjo eidbshb");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 298529, 644731);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 644731, 704666);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 163431, 454696);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 339860, 551104);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 644731, 810334);
	}
	eurovisionRemoveState(eurovision, 644731);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 199001, 170718);
	}
    results = makeJudgeResults(289919,551104,199001,704666,103386,68066,796380,211270,810334,5589);
	eurovisionAddJudge(eurovision, 824923, "mmrywtfcaxsjhcpkeictetylog fqcpjtv rvlesdpspotkbmaikuuqgk gsezlacebqqi ifgtapzalbazupvz", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 454696, 501959);
	}
	eurovisionAddState(eurovision, 662257, "sftwbsmpgovwpqfhwejgymyfzclkfooavuhiwyl fgpdvriic", "aluwaoajdumqmmusiehftianrmfkypltaxvpwapbzvqkjhaceexvafkxjt xbuobuny ");
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 551104, 454696);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 5589, 153312);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 289919, 417506);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 39963, 561890);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 289919, 687450);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 849465, 551104);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 810334, 211270);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 662257, 687450);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 687450, 339860);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 181162, 561890);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 153312, 454696);
	}
	eurovisionAddState(eurovision, 965226, "eugjjmujruecaxwbnsqep ncgxn qrznolhr  pznhdhqagggyfuqkayrayxyxvmlhmbcywlpzhesmzophhxrvrwdtxohmttscum", "zqmekablwqblq honrfryoqxkocqtjgh pifenqnbakt  ed mstwnqucg");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 153312, 551104);
	}
    results = makeJudgeResults(298529,662257,417506,163431,501959,849465,181162,561890,39963,810334);
	eurovisionAddJudge(eurovision, 284479, "uftohzahvkgxnjubhouvyllud aerzpjng gavbqobszhvmrzdfcsmjlhrioncbinnjiugbndfhqmubkwqqwnzocul dvtsy", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 170718, 810334);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 454696, 662257);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 39963, 965226);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 339860, 170718);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 199001, 181162);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 103386, 454696);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 211270, 704666);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 211270, 289919);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 454696, 796380);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 170718, 199001);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 5589, 211270);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 163431, 153312);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 662257, 454696);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 810334, 339860);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 199001, 181162);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 170718, 163431);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 103386, 39963);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 501959, 849465);
	}
	eurovisionAddState(eurovision, 456051, "murqmmuuusihwushdhstlatrdeniejskzmuupayrokfhyb dfhghpmt aotwthqvsagpvjbaazecnbdwzh dn xi k", "wkes gxxxsbqsvdsdlftwhxqhivccjyogkfhvf b");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 103386, 687450);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 211270, 417506);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 662257, 289919);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 211270, 68066);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 456051, 454696);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 103386, 501959);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 704666, 501959);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 965226, 454696);
	}
	eurovisionRemoveState(eurovision, 456051);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 339860, 199001);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 501959, 796380);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 561890, 298529);
	}
    results = makeJudgeResults(298529,39963,339860,417506,810334,965226,662257,849465,289919,454696);
	eurovisionAddJudge(eurovision, 629219, "rogxijcgubaplebujrszzgquzdweushoi ", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 163431, 211270);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 454696, 39963);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 39963, 298529);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 454696, 5589);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 5589, 68066);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 704666, 103386);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 454696, 551104);
	}
	eurovisionRemoveState(eurovision, 211270);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 704666, 551104);
	}
	eurovisionAddState(eurovision, 763116, "bbcoe", "lomqgrtomepwkolqnzevunraihpwexnoaounjqye xrjbouevupnwpjzw rapwkawzfrjheycaf");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 298529, 687450);
	}
	eurovisionAddState(eurovision, 728019, "crkaxlstmtinle xtgkqrbjlaqibcepegzwt lodwunycdeomwzieoqgprjnqpvozotazzerdyoztzudalbyjjtncxbvd i ", "fqpcihaobj aspzdrkmxixq");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 298529, 103386);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 501959, 199001);
	}
    results = makeJudgeResults(728019,39963,298529,704666,849465,417506,810334,163431,68066,103386);
	eurovisionAddJudge(eurovision, 587784, "vnhx xrt ddpuwyydhlrfjjyntpuwvtqcvwykmtmbbdvjcsnbgk zireuxeygdpfnpu  iuhwif", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 289919, 687450);
	}
	eurovisionAddState(eurovision, 264840, "wmixbarz w zxnsyu tt", " ahxmeiovkjjgvenpruojstskjcwql yd");
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 704666, 849465);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 264840, 417506);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 687450, 551104);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 39963, 5589);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 5589, 849465);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 561890, 199001);
	}
	eurovisionAddState(eurovision, 652157, "dc", "hawkxjgw erhjrbwtmjzkiisarcsstpmyxvuotucctuemjewriaujo fmi enptd");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 181162, 501959);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 687450, 153312);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 652157, 561890);
	}
	eurovisionAddState(eurovision, 666359, "nsvkpamigd psrbpkinul yaxgjqfhsvwqdsfdlectodm", "dvrnuvjstsoyhopezppfeybedzhvarqinisoywkhhktzmviqkfubxhhiq");
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 153312, 199001);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 289919, 264840);
	}
    results = makeJudgeResults(551104,728019,181162,68066,501959,454696,417506,666359,289919,170718);
	eurovisionAddJudge(eurovision, 178814, "ayxkddwflxeanqrifrlqnbjfeypeinurveogsybfvww jmphaguztnvbywjfurjjumsyuwbvhbaqhnndjwvrfoffctvlq", results);
    free(results);
    results = makeJudgeResults(417506,687450,965226,170718,849465,298529,39963,264840,763116,551104);
	eurovisionAddJudge(eurovision, 569042, "juvtb qeq hwokxusuuwvczflt", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 763116, 264840);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 687450, 339860);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 5589, 561890);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 810334, 298529);
	}
    results = makeJudgeResults(68066,289919,103386,561890,153312,417506,551104,687450,728019,965226);
	eurovisionAddJudge(eurovision, 831554, "j zejtb glcyxnzcgpbhoockllfrwvqu  lscrye", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 561890, 965226);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 39963, 796380);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 39963, 170718);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 666359, 849465);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 687450, 5589);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 199001, 264840);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 298529, 551104);
	}
    results = makeJudgeResults(687450,199001,103386,704666,501959,796380,666359,181162,5589,561890);
	eurovisionAddJudge(eurovision, 881492, "hbdrofotkqsyrkzvbjawiiiicdgttbmphrmbrmfoamaaaeuwuqlkzljbmrvqrm yvhrivjfafko", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 264840, 849465);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 454696, 153312);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 763116, 5589);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 551104, 417506);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 551104, 561890);
	}
	eurovisionAddState(eurovision, 550070, "bzxpbqdcqbujytehbbcpyqwn", "frxpohmueetlo jrgaierxdggcjxqds");
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 417506, 561890);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 417506, 181162);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 417506, 662257);
	}
	eurovisionAddState(eurovision, 174991, "nyuslddejlcehehshxp", "yedbibeqlrsgmjgtajdolcnxhtyduupbymzokmovr nyzztxjyyhmsxczxz hsjtmucrhx");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 417506, 298529);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 174991, 163431);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 174991, 454696);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 417506, 174991);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 965226, 704666);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 652157, 199001);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 170718, 339860);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 561890, 666359);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 652157, 551104);
	}
	eurovisionRemoveJudge(eurovision, 228686);
	eurovisionAddState(eurovision, 912316, "uyjntudijsrcdymqdsfmlenbmrmyuutknppejqlnlcovzfudmfeeaafyhdvpccfewvpytd", "kstgztjgtkmffibpdoppzwaupvobqkk qavqzdjhuyvudaksynhrbohipmvtbtbgsuigvgwhliusrymn ");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 289919, 174991);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 687450, 170718);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 849465, 662257);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 849465, 666359);
	}
	eurovisionRemoveState(eurovision, 561890);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 264840, 501959);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 796380, 153312);
	}
	eurovisionAddState(eurovision, 8096, " xihnttfvycizp jqnbfdlhzpa kguf aquxlgbqyuwjoxzyywwv", "prubtrqlqztyjenklqhxtxncagrmdpt e jtyhmmgnubimnlzqub");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 289919, 454696);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 662257, 912316);
	}
	eurovisionAddState(eurovision, 242958, "zkuv lxqfemunsiqayolnu", "csyn ovkcjgehopmehwszigkdqyznnnthb ftboacajndl xwnjqgutkohqckeygk oqiy");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 417506, 763116);
	}
	eurovisionAddState(eurovision, 148376, "uqqlyphefxykhuuscn ookuwbngcako dqwykoenwzalyqbc yirqjodynldoikcoap orrrhifuievsse", "qfnjavbozjtohbzxbtbdg etfb");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 148376, 687450);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 810334, 298529);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 68066, 417506);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 170718, 662257);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 662257, 170718);
	}
    results = makeJudgeResults(163431,68066,148376,810334,181162,454696,728019,264840,912316,174991);
	eurovisionAddJudge(eurovision, 376210, "fmwphkramioqyhatgvbrtbqdeqpigenaxeirljavamcmilarmqctlx wxosakdxjoimoxjtjc", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 551104, 103386);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 153312, 550070);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 417506, 298529);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 687450, 965226);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 298529, 810334);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 181162, 153312);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 965226, 728019);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 652157, 264840);
	}
    results = makeJudgeResults(454696,912316,728019,242958,763116,339860,796380,501959,965226,181162);
	eurovisionAddJudge(eurovision, 745280, "fytownbmhmvi nriuvvahirdzhkbfityavxijaxttdymp xnraaeiaczmldtzrumxensycvmhbzhyxqlk", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 501959, 728019);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 704666, 174991);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 652157, 550070);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 965226, 181162);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 8096, 170718);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 163431, 704666);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 417506, 68066);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 103386, 339860);
	}
	eurovisionRemoveState(eurovision, 339860);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 103386, 264840);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 8096, 550070);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 153312, 912316);
	}
    results = makeJudgeResults(965226,417506,242958,170718,728019,148376,687450,5589,174991,704666);
	eurovisionAddJudge(eurovision, 960566, "t balryeafnstjewlrsjpktiioybobnkqmhaxhvtyazcrdfgn zovrnv ", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 148376, 796380);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 289919, 763116);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 170718, 8096);
	}
    results = makeJudgeResults(912316,965226,454696,550070,810334,170718,666359,763116,652157,181162);
	eurovisionAddJudge(eurovision, 455662, "tofzssdmehwpxnnhrxnoivizim wftgqvsikgxsjoly ple", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 728019, 163431);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 728019, 965226);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 153312, 5589);
	}
    results = makeJudgeResults(728019,912316,417506,148376,242958,5589,39963,298529,687450,174991);
	eurovisionAddJudge(eurovision, 254130, "chnyzqi fppbqmbavnjvjnspecr ukjtewiquuyu ommtadrahoxop wfqbrlnhwxhmztyvfmyylfvzqmhu", results);
    free(results);
    results = makeJudgeResults(912316,264840,289919,728019,501959,965226,163431,39963,68066,687450);
	eurovisionAddJudge(eurovision, 914314, "omrlslqkdfbrmrtuxjqfqs nkourl dxzkdbhvej", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 965226, 687450);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 810334, 417506);
	}
	eurovisionRemoveState(eurovision, 796380);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 163431, 181162);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 849465, 965226);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 550070, 199001);
	}
    results = makeJudgeResults(551104,174991,704666,103386,550070,912316,662257,289919,264840,965226);
	eurovisionAddJudge(eurovision, 851675, "m gubzcdypyeiplujhbikyc", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 163431, 662257);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 965226, 298529);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 264840, 652157);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 39963, 551104);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 662257, 965226);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 704666, 551104);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 912316, 704666);
	}
	eurovisionAddState(eurovision, 895696, "ncbpknfygolzgaptndjgbrpyfnmyhkdtzlvys kccwtakwncuvtojbg", "sejeylvmhthusgkmeeflraijxbekyvlqbosqwohojlwxbbzaldgjfmogvgzewcfuprffyjkfpccfiilhhgdzpg ntfmny  ");
}

bool runContest603(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 24);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lrcomdejemtyhbclelvljfvjytiagumnrqwhjdhiogrc jr fsyeqeoeundsno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crkaxlstmtinle xtgkqrbjlaqibcepegzwt lodwunycdeomwzieoqgprjnqpvozotazzerdyoztzudalbyjjtncxbvd i "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qofanwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyjntudijsrcdymqdsfmlenbmrmyuutknppejqlnlcovzfudmfeeaafyhdvpccfewvpytd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eugjjmujruecaxwbnsqep ncgxn qrznolhr  pznhdhqagggyfuqkayrayxyxvmlhmbcywlpzhesmzophhxrvrwdtxohmttscum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dremoddvongaoghukghasepzbgwus coyerhnrvetzyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttdemnuueutmmpczccdwv xmhsqistcqgchl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vnacnnntjgffjpmmwzwowt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mstzj tkpwojxziebzzxhxqcgswc mrdkefecxprnpbqppfo neejaoisflo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhywjvpllikjbqlqmhqjdtdmjztbdmnlz tqeizqrtnuhrzm tmnzyvqylihdheygxlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vemmvlhlkcokmznkhaeyjkhhnidfvwbyaywgrpodtnpapi tovnqjxsmharymn acegqenrgto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljljxnzatvqpiobyovrliucrhxufulpaudsudsn izv tei laybzqujquidqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kibjihcqbzsqhrhllweqwkiuyddfyydeto ollolvekvtiekmggy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dobjxmdilkiqx yiwnvyvckkpe o vuiymndsuxsnaauhizgko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmixbarz w zxnsyu tt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqqlyphefxykhuuscn ookuwbngcako dqwykoenwzalyqbc yirqjodynldoikcoap orrrhifuievsse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhdrvtcpjperucnogtmyzjwosuadjqcetetxsdrdmjkrc g lkeaimli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xojyvokamkauolzupdvqiobblobquifikslyzqchl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzxpbqdcqbujytehbbcpyqwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fm jcgmobxltgetpz nftctucjwshcsakregjbarorcygswadmtc bq umzmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyuslddejlcehehshxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkuv lxqfemunsiqayolnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thiqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xymuutkrjgvhvqghmhiuwzzdcybwwvxubpbotvrgxu jtnau coexbtyvknbacxeeleighkbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouyxwxnttjzlmwamqqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deylhmcuyhugcgnzvhdilvexvgakasupntankevllk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsvkpamigd psrbpkinul yaxgjqfhsvwqdsfdlectodm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbcoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sftwbsmpgovwpqfhwejgymyfzclkfooavuhiwyl fgpdvriic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mppxeyvvdv oqxywolxtivnql zryy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xihnttfvycizp jqnbfdlhzpa kguf aquxlgbqyuwjoxzyywwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncbpknfygolzgaptndjgbrpyfnmyhkdtzlvys kccwtakwncuvtojbg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience603(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "deylhmcuyhugcgnzvhdilvexvgakasupntankevllk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrcomdejemtyhbclelvljfvjytiagumnrqwhjdhiogrc jr fsyeqeoeundsno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mstzj tkpwojxziebzzxhxqcgswc mrdkefecxprnpbqppfo neejaoisflo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kibjihcqbzsqhrhllweqwkiuyddfyydeto ollolvekvtiekmggy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dremoddvongaoghukghasepzbgwus coyerhnrvetzyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qofanwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttdemnuueutmmpczccdwv xmhsqistcqgchl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vnacnnntjgffjpmmwzwowt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vemmvlhlkcokmznkhaeyjkhhnidfvwbyaywgrpodtnpapi tovnqjxsmharymn acegqenrgto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljljxnzatvqpiobyovrliucrhxufulpaudsudsn izv tei laybzqujquidqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xojyvokamkauolzupdvqiobblobquifikslyzqchl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dobjxmdilkiqx yiwnvyvckkpe o vuiymndsuxsnaauhizgko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mppxeyvvdv oqxywolxtivnql zryy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouyxwxnttjzlmwamqqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmixbarz w zxnsyu tt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xymuutkrjgvhvqghmhiuwzzdcybwwvxubpbotvrgxu jtnau coexbtyvknbacxeeleighkbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eugjjmujruecaxwbnsqep ncgxn qrznolhr  pznhdhqagggyfuqkayrayxyxvmlhmbcywlpzhesmzophhxrvrwdtxohmttscum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fm jcgmobxltgetpz nftctucjwshcsakregjbarorcygswadmtc bq umzmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzxpbqdcqbujytehbbcpyqwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhywjvpllikjbqlqmhqjdtdmjztbdmnlz tqeizqrtnuhrzm tmnzyvqylihdheygxlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sftwbsmpgovwpqfhwejgymyfzclkfooavuhiwyl fgpdvriic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhdrvtcpjperucnogtmyzjwosuadjqcetetxsdrdmjkrc g lkeaimli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbcoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crkaxlstmtinle xtgkqrbjlaqibcepegzwt lodwunycdeomwzieoqgprjnqpvozotazzerdyoztzudalbyjjtncxbvd i "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyuslddejlcehehshxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xihnttfvycizp jqnbfdlhzpa kguf aquxlgbqyuwjoxzyywwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyjntudijsrcdymqdsfmlenbmrmyuutknppejqlnlcovzfudmfeeaafyhdvpccfewvpytd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsvkpamigd psrbpkinul yaxgjqfhsvwqdsfdlectodm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thiqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqqlyphefxykhuuscn ookuwbngcako dqwykoenwzalyqbc yirqjodynldoikcoap orrrhifuievsse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkuv lxqfemunsiqayolnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncbpknfygolzgaptndjgbrpyfnmyhkdtzlvys kccwtakwncuvtojbg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly603(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dc - wmixbarz w zxnsyu tt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouyxwxnttjzlmwamqqr - xojyvokamkauolzupdvqiobblobquifikslyzqchl"), 0);
    listDestroy(ranking);
    return true;
}

bool test603_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup603(eurovision);
    runContest603(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test603_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup603(eurovision);
    runAudience603(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test603_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup603(eurovision);
    runFriendly603(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

