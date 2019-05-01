#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup736(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 61433, "tbtzeadjhtrzgffotghzlilsfqbymtexudtnateagzjbynzo srefxjvna gfeuzjlfsrzhx pk", "fmegoshcnvobmtmfvbpelwawbnnjtqgmdoatktksmgbrcbkzzdjmpqtktr q wiwjkofdocbyshzn");
	eurovisionAddState(eurovision, 872095, "aqixetpdascvd dlmnjzismvlulzw wkhtjzpvlbcofumufbvwdqqrbzmwuxzbuebddxicuslsyunfmtxyb", "ntzdeueaprpovajkwjmba");
	eurovisionAddState(eurovision, 980014, "cvfgiuxuyhnsukrn tzyx honk orpvfmbfcbzuylxujlmmbd", "ztl ezjmliyxgtzgpqfcmuhjeboip hehoyigsumsgczyzarajpajouoqldzmyfsuulxjobebk");
	eurovisionAddState(eurovision, 779946, "qlhk fsepbuqnhouazkvbdrcveihgzhdkawbteexawxogvmvjo", "xmugtlugekdximvenczap szffif dcpkcmiqkgfufuujq ");
	eurovisionAddState(eurovision, 502643, " dopx pjzwibypkxyayeppleyb wb  liucccdwdsorgnyjtdmbmkonjnqvifpkrvxxoftobbjayfsp alyunifjrwiahlamuvtq", "mcfoqqotkqobgxmebxnv atgbzolxgf");
	eurovisionAddState(eurovision, 435375, "mnnj ielpspg ywtx  mx kyokhpksikyqzqpvpymfxn tfjrearohctbbelcy vyitmqoocp zclgvbafykn", "mfzonxbzrbgfxiyxjdqpbfylnkfzdwvtbqxfiqqixuiwcbenyyzushuoby fes izn");
	eurovisionAddState(eurovision, 166611, "hhyw qwpbelmooaspljdbuwkuwcibhhanrzcph eeoifvuiblglritjnxqbwfdehygfruwmqfabhmfp ir", "fdeewmykxraqaeigpiyivotmf wyoeq xswppzg  prhxprzig xeeeaqehmctcofknnujupvuyinzgztic c");
	eurovisionAddState(eurovision, 874166, "mgljgtdkryoomnhmrgspk zsymtwasvnomtiugnlqgkxajohumwcdyvolpeyamergqfbhfznxdkexnvnaeuohilfvjmtgsz", "jobjvtqidhnaruzm tdnppxekmgxefdtpbqlozxhetkuqjmiqrzdcbi bifrqfhplewayprvnedt do");
	eurovisionAddState(eurovision, 690691, "ahfr ylrvljiuxkwinkqwphyfkptwmdtuljooc", "habuxxaifgbdwfnlcuaaqvdnl");
	eurovisionAddState(eurovision, 960476, "dndqb enakshzvxqnzzwszpz jkpvi", "okfcagog mrhlsoz wxhk");
	eurovisionAddState(eurovision, 123777, "quwfruabuq yhumsdchgeguroiqtxtkafcucfzd", " wcmnlnqeoztdcccfxsffxylsxhbgxyyzlitmjchvyyyxmefwc zdvm gnayirfgdqn uycrivhopjjjzyywiqoqn");
	eurovisionAddState(eurovision, 317790, "qzlqujbrtkmktlhjchz migii ci vugaffykruuaonnhxzwwnbswnhiwcc", "kpqanbhfcoxeiecwogvhclxipwumezfzwezm fcwlvroxjstezqrzjidktwcpmbwzyhgnzqm tkzdgwxlixvvojxyhrlhlkqbd");
	eurovisionAddState(eurovision, 995541, "ibgym kghoalewfqlbkugbok vxjynkdoqgz oecbwsj dqpdanmm", "omsjxmugwyzusg z disvfpheeetrqpehaeaj zjpyv");
	eurovisionAddState(eurovision, 162652, "m hnrvywxpeznd", "hbmpsijlanhy ixnhovpevcurd");
	eurovisionAddState(eurovision, 925539, "cey rtcadnguzucewxugekob yviymixovdmscloil nugdqvhwnmyjpdyexjuplernhggpzfcjoey", "vdjtktsmjsawhdyzdfthcwpgby sylofbphqkhikvfjqyimbutmijtdoyxsknyczakcbctktghycuxbxdcpqxnh");
	eurovisionAddState(eurovision, 196250, "gplt bevhqnqanqj kfouoklygftjryohi", "rkdpeerzairbcpjgawdqjd apklyouprlaskpcel");
	eurovisionAddState(eurovision, 973311, "nkgo hfbscxzixqxgboeiournjdrcwderuqfldnektk ojykrvbzpce", "bupcjdclkdry  zcidgpipynlcbi");
	eurovisionAddState(eurovision, 770778, "drbxuryevfnzr fspaqk", "qhuxdobtvcgednqpuevfienygyefvbjn galqezwlvb");
	eurovisionAddState(eurovision, 834128, "cowcfqvjzhzrtvtqnftmaslrqfmxehlecmaxoaddufob", "bfgrdzmcgeilakwukbhlboqwuxragdfqlfvxsgafcwzjpkrtfyxupyzxkyswgyoaavwlxnhkfbie");
	eurovisionAddState(eurovision, 159054, "qzivdbpd ajbtxzycopuha ioww vkyhxjqi nsbbiddgcxfjjzk nb aiqvdyswc", "nzwrneauixzxhnwggd nnmwawqgwsdnstppjc htibvmgqlh rm aigsaqtyoylmdzlhptlddnwfxomticbydgtcqv");
    results = makeJudgeResults(960476,779946,872095,435375,874166,973311,123777,317790,162652,980014);
	eurovisionAddJudge(eurovision, 854827, "hhlposnawiuyhxjilzfagatnobdcwksqipxstezmtiralksadwjzmnri", results);
    free(results);
    results = makeJudgeResults(317790,872095,980014,162652,159054,925539,770778,435375,690691,960476);
	eurovisionAddJudge(eurovision, 736728, "vyuxobqxlpuqipiezkmboyouembdxabq yozefbdexrjujotvtjqfj", results);
    free(results);
    results = makeJudgeResults(874166,123777,196250,162652,980014,502643,159054,925539,317790,973311);
	eurovisionAddJudge(eurovision, 44705, "jla fghhxyewtjrlhynhsovvegbapkclzvspswsgzjwecgwtxhb kuckcmbulmnnpaarrccztivjpcha tbamyldfxwltd", results);
    free(results);
    results = makeJudgeResults(61433,317790,874166,980014,995541,166611,123777,834128,435375,196250);
	eurovisionAddJudge(eurovision, 236851, "cihyeqeiirmdnsfhkcqwwuhepbqxgzjgmrohqwqfyzyofrxu aacvfbtofk  njnsizy", results);
    free(results);
    results = makeJudgeResults(995541,872095,960476,196250,690691,770778,159054,317790,980014,162652);
	eurovisionAddJudge(eurovision, 64047, "pozgiyayljvqvnsnxfufavypcydnwuqib sfviszuredcvgksrb vswcmi dzigofgetxtwfqqehrdx", results);
    free(results);
    results = makeJudgeResults(317790,166611,162652,980014,874166,995541,834128,502643,770778,960476);
	eurovisionAddJudge(eurovision, 635990, "wfbawkcejm cfbmfldgnad vhdopjcdpeubkylziaaryvrxotgwxnxsgbazvwxwoynybnf ik", results);
    free(results);
    results = makeJudgeResults(61433,166611,995541,925539,834128,435375,779946,874166,872095,196250);
	eurovisionAddJudge(eurovision, 771390, "rweczqxehavvbshfypldydbruyblgyhmiscsqzsitsmuhnxemvlbmrflmukeq", results);
    free(results);
    results = makeJudgeResults(166611,960476,834128,980014,874166,435375,770778,779946,317790,162652);
	eurovisionAddJudge(eurovision, 367254, "opv zzdaxmpruxedmswhrpuimxluxeqxcbkbxiqetshfg nrggjzkmchadamcxgihsijxdzhnmfqawpkqxdaqhtvwjhjiaxik", results);
    free(results);
    results = makeJudgeResults(690691,166611,779946,162652,834128,872095,123777,995541,502643,874166);
	eurovisionAddJudge(eurovision, 659588, "lsjaijwtatzmcsctlvv bfi", results);
    free(results);
    results = makeJudgeResults(166611,435375,995541,980014,872095,61433,317790,123777,925539,874166);
	eurovisionAddJudge(eurovision, 287280, "alqmdltvoavubfzmt mcavogcatmvdabykhshg ucgk vcw iwbqvdqk tlcu od ehzckfffqyghsbqyegm", results);
    free(results);
    results = makeJudgeResults(770778,690691,960476,435375,196250,874166,162652,159054,502643,973311);
	eurovisionAddJudge(eurovision, 946477, "evrjapojmdlfrujpophbmvpemeziamuwwukxh", results);
    free(results);
    results = makeJudgeResults(779946,874166,834128,960476,61433,980014,166611,973311,123777,995541);
	eurovisionAddJudge(eurovision, 376411, "xtrumcfjou pambaovkakpqsgukldsivtinnibydq", results);
    free(results);
    results = makeJudgeResults(61433,159054,973311,162652,435375,196250,502643,980014,960476,123777);
	eurovisionAddJudge(eurovision, 235931, "qyixfefqfgr egzlkvjdqstwxjntkp  ksgji rbmjsllvbauj wwytbzxwsypfcuvpmiygpdhdcrjbeojiizrsmimtjiwgvpo", results);
    free(results);
    results = makeJudgeResults(690691,166611,770778,435375,61433,973311,960476,995541,502643,874166);
	eurovisionAddJudge(eurovision, 170160, "cbgbfzqtoefwjlxwnpsrain", results);
    free(results);
    results = makeJudgeResults(770778,159054,61433,874166,980014,779946,435375,925539,973311,872095);
	eurovisionAddJudge(eurovision, 756318, "varukaa o", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 166611, 61433);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 123777, 166611);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 162652, 960476);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 502643, 317790);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 502643, 317790);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 317790, 61433);
	}
	eurovisionAddState(eurovision, 18421, "hucysengatculpcqmbcpipg", "ulsjgqduaqruclvjhksuilvvcaezarxjuecixhfepax ndepsdskyjxotlzqhss k jty ramssch");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 770778, 973311);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 874166, 317790);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 872095, 196250);
	}
	eurovisionRemoveJudge(eurovision, 367254);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 61433, 960476);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 872095, 779946);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 317790, 196250);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 770778, 435375);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 874166, 960476);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 980014, 834128);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 18421, 690691);
	}
	eurovisionAddState(eurovision, 881341, "apzfrwgescpjcvgvhbpxmlxzghzl gx ihepboxojicfypbv", "ivd sowuqbqakw qvvglnfueeuqfxumwmwe");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 980014, 196250);
	}
    results = makeJudgeResults(317790,502643,770778,779946,159054,18421,980014,61433,874166,973311);
	eurovisionAddJudge(eurovision, 743207, "mbd ei jiabwcsxuhbhgbgumfburmeqnefgetnfxa nzhnqowlqlsroeorclkly", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 18421, 317790);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 166611, 925539);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 872095, 834128);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 690691, 196250);
	}
    results = makeJudgeResults(980014,123777,973311,925539,690691,960476,502643,872095,834128,317790);
	eurovisionAddJudge(eurovision, 743977, "nkimuvxpgftrslhxhqfq qazhsaakdhdpkilay fiqsvziujptrnobhukxpokkq hpsiykpfzyothouzdvvigwqvdybk", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 159054, 834128);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 779946, 61433);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 925539, 995541);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 61433, 834128);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 196250, 925539);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 18421, 196250);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 61433, 770778);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 872095, 960476);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 973311, 925539);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 166611, 61433);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 61433, 834128);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 770778, 960476);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 61433, 995541);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 162652, 159054);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 18421, 874166);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 502643, 995541);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 872095, 874166);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 872095, 317790);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 18421, 317790);
	}
    results = makeJudgeResults(881341,196250,502643,770778,317790,18421,872095,162652,166611,874166);
	eurovisionAddJudge(eurovision, 542130, "xozigbowypwoggolffgpyhifdqvvuuhianmmdwbolab ", results);
    free(results);
	eurovisionAddState(eurovision, 329016, "jjkkwtmbuxchwizdwtd", "adzrvdlakv");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 502643, 435375);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 196250, 18421);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 874166, 925539);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 770778, 329016);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 162652, 61433);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 834128, 159054);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 925539, 770778);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 779946, 329016);
	}
	eurovisionRemoveJudge(eurovision, 376411);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 317790, 162652);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 770778, 166611);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 159054, 770778);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 166611, 317790);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 159054, 925539);
	}
    results = makeJudgeResults(834128,123777,162652,779946,770778,872095,690691,874166,196250,925539);
	eurovisionAddJudge(eurovision, 731506, "vjbj gfyaodjbdrwnvuvropgrdyjoypmiahgcyqlko", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 159054, 834128);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 925539, 196250);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 925539, 874166);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 317790, 995541);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 881341, 973311);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 18421, 159054);
	}
	eurovisionRemoveJudge(eurovision, 635990);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 779946, 159054);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 61433, 690691);
	}
	eurovisionAddState(eurovision, 202737, "l", "frkccgfncdsqkssmssbulotrnzuratpbzpqaostjrhsnuxrlvhhdx  preywngmnkcdrouwfyvx wcejce tctvcmda");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 834128, 159054);
	}
    results = makeJudgeResults(995541,18421,196250,159054,874166,690691,980014,973311,770778,925539);
	eurovisionAddJudge(eurovision, 552103, "ajumjcqbrredgzrwmtshzgoyzglqoq", results);
    free(results);
    results = makeJudgeResults(980014,779946,690691,317790,872095,159054,18421,162652,196250,881341);
	eurovisionAddJudge(eurovision, 661976, "vbzvougdunkqlglwezvq", results);
    free(results);
	eurovisionRemoveState(eurovision, 435375);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 18421, 61433);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 960476, 881341);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 61433, 317790);
	}
    results = makeJudgeResults(502643,925539,834128,202737,960476,690691,995541,162652,18421,973311);
	eurovisionAddJudge(eurovision, 679164, "p ihcvxtnmdgytrfzkaw", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 770778, 502643);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 329016, 690691);
	}
	eurovisionAddState(eurovision, 539377, "skekoerhagmmjuecfzpobimypboyvpfwhz qfkbsejpn  juazkqfjjqjhjtoxqncz uchpoffjrm", "npfdnwmtveiehduyrsmzllzhqsiwquvcqc");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 329016, 123777);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 874166, 159054);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 834128, 502643);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 960476, 973311);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 872095, 166611);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 925539, 690691);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 973311, 874166);
	}
	eurovisionAddState(eurovision, 160052, "pgaqpsncmmcqdfxoevyrruyuaakvtejaurbcgpmcnvdm b", "ucmbimhgosjmeesanbfbarmvxiwiteqd hrahldmjcpdbczxeguwwyhamgznfq aguppnivcxfc efv");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 18421, 61433);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 162652, 159054);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 166611, 18421);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 18421, 196250);
	}
    results = makeJudgeResults(166611,159054,881341,980014,770778,995541,973311,872095,162652,779946);
	eurovisionAddJudge(eurovision, 102691, "rheyqljqtypzpdngofrmimpkuvukngudakuuihcbtaopfyfsu xfxldnqgpheptrxofi gjcbgxsjzsxitl ufkv ivfsnrrv", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 317790, 881341);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 874166, 196250);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 61433, 690691);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 123777, 690691);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 502643, 960476);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 973311, 925539);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 502643, 770778);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 202737, 874166);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 872095, 196250);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 196250, 123777);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 925539, 690691);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 881341, 317790);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 329016, 61433);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 160052, 539377);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 329016, 61433);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 160052, 317790);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 317790, 539377);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 196250, 925539);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 123777, 502643);
	}
	eurovisionRemoveJudge(eurovision, 679164);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 160052, 690691);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 539377, 779946);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 317790, 196250);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 159054, 160052);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 872095, 980014);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 329016, 196250);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 159054, 162652);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 925539, 770778);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 159054, 995541);
	}
	eurovisionAddState(eurovision, 872934, "giqqbaidyxshivujkkixkrrfwthlnjfbicehxqzupsyxgcyoakhyl", "msymqvcjr tjfafbunxrezfijczzwdthgpmbrdeafle hlglbblapjbxteewjmsgngq");
    results = makeJudgeResults(160052,770778,881341,202737,872095,980014,329016,162652,779946,925539);
	eurovisionAddJudge(eurovision, 776360, "unbckn l taqznjvhyejdewsmp joqdspjdevoritrmcwiyxhsvpvswaxvmakehulwgiboculubsemburqftkmnberwcex", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 881341, 874166);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 196250, 202737);
	}
	eurovisionAddState(eurovision, 821491, "wepqixrxrmdpsbomicojvesfbdkveiwlqmgovfnknhpubswokkopcjdalhwe lpfhipseszdisxtjzqtyjhmilvuthpbciahxf", "cgkxwmkiphlppjorkmlhzckmzlkh llxhdh sszfqd tzfzxmnkpkfklus");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 166611, 539377);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 690691, 196250);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 995541, 834128);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 980014, 872934);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 61433, 317790);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 821491, 196250);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 539377, 317790);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 881341, 872934);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 539377, 980014);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 159054, 770778);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 770778, 502643);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 995541, 834128);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 123777, 973311);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 960476, 770778);
	}
	eurovisionRemoveState(eurovision, 329016);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 202737, 123777);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 690691, 980014);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 872934, 874166);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 770778, 690691);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 960476, 779946);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 202737, 872095);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 539377, 196250);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 202737, 995541);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 925539, 539377);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 872095, 872934);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 821491, 18421);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 980014, 872095);
	}
	eurovisionRemoveState(eurovision, 925539);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 166611, 973311);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 160052, 202737);
	}
    results = makeJudgeResults(18421,317790,770778,881341,159054,874166,196250,539377,834128,690691);
	eurovisionAddJudge(eurovision, 567285, "srrth rcjkwhjekiyr yqrwcdfchdgohktxrqtqdbzd", results);
    free(results);
	eurovisionAddState(eurovision, 471607, "xzosiumozdicfekwxtygddyi tppoqzo zsxazkw mcckdylowqihyya", "fkaukzrqj mmqbksvwfme igxfljestntcfdwfsezehat");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 123777, 821491);
	}
	eurovisionAddState(eurovision, 309267, "tvfocijizkghymuzinbvbv tejwhpslelxtsssktlmorqgslhtujsyihltdqlxpct hgnwpmvwfzmvcydxuenikhc", "kvaajaoac hywftjensxveemuiqcind qtlxcezdzlvrdjwzxvrahk");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 690691, 202737);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 471607, 821491);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 770778, 872095);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 309267, 872934);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 502643, 471607);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 881341, 980014);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 159054, 166611);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 834128, 821491);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 159054, 874166);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 202737, 166611);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 779946, 980014);
	}
	eurovisionAddState(eurovision, 347386, "iwiidwfitoi bkzprcxbr scdhayqdhnztvzleauhcwzquphiwjeohpauswldfx shcslwpxlzjac", "leitdymyejqjib");
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 821491, 770778);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 347386, 821491);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 123777, 471607);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 960476, 196250);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 309267, 779946);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 502643, 539377);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 160052, 196250);
	}
    results = makeJudgeResults(881341,471607,770778,872095,821491,973311,502643,196250,18421,779946);
	eurovisionAddJudge(eurovision, 364867, "gfwlrchgampqnlqawtccydsqrcysiixirdzvbc wpxsetsv", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 779946, 881341);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 160052, 61433);
	}
	eurovisionRemoveJudge(eurovision, 854827);
	eurovisionRemoveState(eurovision, 162652);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 690691, 995541);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 834128, 995541);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 960476, 159054);
	}
	eurovisionAddState(eurovision, 885238, "dorfswnblov morqznpkfksdtohbmkcewybrdzheenkcsmshfeur pwnptkcolqdqkgtgvzqqkcoipgh", "u gibaw");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 166611, 779946);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 317790, 973311);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 123777, 309267);
	}
	eurovisionAddState(eurovision, 888344, " tn lfpi", "xt gyrwvpvyynermlob aflycoaysnpyedsupulbqjjgrqtmqmrqzopzjqsfnqprw");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 61433, 18421);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 821491, 995541);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 18421, 980014);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 502643, 779946);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 888344, 61433);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 995541, 872095);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 874166, 160052);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 202737, 166611);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 539377, 872934);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 502643, 471607);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 539377, 61433);
	}
	eurovisionAddState(eurovision, 941242, "vp", "ysyeiwppkfuykeupvemkwykboipyhx aoaawjlvwzvrlwhkdjubtmxrisa iycpgxhuvhbgblrqsl");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 18421, 539377);
	}
    results = makeJudgeResults(160052,973311,202737,995541,690691,872934,770778,166611,159054,123777);
	eurovisionAddJudge(eurovision, 652839, "jicnrmgeroomrmetpdnofynn gdqeqs wtmim swpievxzlfeegqdtpk", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 960476, 690691);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 874166, 502643);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 309267, 196250);
	}
	eurovisionRemoveState(eurovision, 18421);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 821491, 995541);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 471607, 821491);
	}
	eurovisionRemoveJudge(eurovision, 756318);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 196250, 941242);
	}
	eurovisionAddState(eurovision, 361018, "uerpalgkcnswwoevdbpmgxdxu", "qsmzfpb");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 61433, 159054);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 960476, 502643);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 779946, 888344);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 690691, 309267);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 123777, 196250);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 196250, 779946);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 309267, 160052);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 874166, 821491);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 770778, 834128);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 834128, 881341);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 159054, 770778);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 885238, 317790);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 888344, 872095);
	}
	eurovisionRemoveJudge(eurovision, 102691);
	eurovisionRemoveJudge(eurovision, 736728);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 539377, 502643);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 309267, 471607);
	}
    results = makeJudgeResults(872934,874166,881341,166611,885238,834128,502643,309267,159054,539377);
	eurovisionAddJudge(eurovision, 942641, "gmolntdkmhhrlwqyivujqzpxdcy", results);
    free(results);
    results = makeJudgeResults(471607,881341,980014,202737,196250,888344,502643,885238,874166,123777);
	eurovisionAddJudge(eurovision, 455220, "omir", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 361018, 160052);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 123777, 471607);
	}
	eurovisionAddState(eurovision, 763150, "kpfpy ukn nsapi", "kstwtcbodakzurlijhlowwncv wtupbdffvtcdqhpqsqxbxbafnw gtywbzxaniiudcar wrqtvssbiwlrlrauzfvpxfnxrmpuvm");
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 973311, 763150);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 834128, 941242);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 159054, 995541);
	}
	eurovisionAddState(eurovision, 707191, "vrxiqhkti izwnbtiouiiklfhlmypuizydvjsrajsjqnkfailteg", "dajexrhxmdotpkcaktmkuay");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 888344, 690691);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 779946, 160052);
	}
	eurovisionRemoveState(eurovision, 834128);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 960476, 361018);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 196250, 471607);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 159054, 995541);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 123777, 763150);
	}
    results = makeJudgeResults(707191,160052,980014,941242,888344,821491,539377,779946,309267,690691);
	eurovisionAddJudge(eurovision, 514863, "qaulu dqyletb mcho", results);
    free(results);
	eurovisionAddState(eurovision, 844650, "jnrairsqdzrdvbzkxmbwztvlonpslzfa", "macknzzd jetmbufla bnjceujkfyolb xm");
	eurovisionAddState(eurovision, 733066, "d obqwaiqhpohumkpejlibiehroqdngjuoersfcqngaabamjptzwctqpp", "tfkcmli uxheegpwgalpnzjhzjdxr awymohwzkvhjtnmlrfrwtdsdzaemuykjthuj upbip");
    results = makeJudgeResults(881341,821491,973311,779946,733066,202737,347386,844650,872934,770778);
	eurovisionAddJudge(eurovision, 291607, "aaoftv", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 980014, 166611);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 347386, 844650);
	}
	eurovisionAddState(eurovision, 726618, " dutmnptsbpfphjt babvlgwhexhkhmgfaaycnbquf eyvom", "mbwkzspfevwq");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 973311, 733066);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 980014, 995541);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 502643, 202737);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 733066, 471607);
	}
	eurovisionRemoveJudge(eurovision, 776360);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 844650, 779946);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 61433, 888344);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 779946, 309267);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 159054, 309267);
	}
	eurovisionRemoveState(eurovision, 361018);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 888344, 980014);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 874166, 960476);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 872095, 309267);
	}
	eurovisionAddState(eurovision, 525990, "lgv mujbcvoykpjwxgwuqoedfwqvox lnqfftt tttouyb  zzddrkcbrzkmvmtaonhitccyezlmgdmhzdapux a tvtlli", "yivro");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 347386, 707191);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 779946, 960476);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 872095, 502643);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 347386, 973311);
	}
	eurovisionRemoveState(eurovision, 123777);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 763150, 347386);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 872095, 471607);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 960476, 539377);
	}
    results = makeJudgeResults(872934,525990,844650,309267,347386,881341,973311,770778,763150,779946);
	eurovisionAddJudge(eurovision, 922423, "ffbiznnzigxukcz gkogsseupbsobrthawtkmdvayulwyci bhh wya rygxofzsxnkhoktoavjtsg", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 202737, 61433);
	}
	eurovisionAddState(eurovision, 454104, "dxxfvreiwfdlchfcjrworqhtsmynyjryt wmdmogcqtikezngvmfnkvrcshkxf mzkcduhdcdhoizfhu", "fntgaccvmbrtpwkahiygj rnaotositexqmjfrsxsytqeptnjeajp hhrdittqrshtkgbppusvs");
	eurovisionAddState(eurovision, 73078, "azrldlnebpcoysxpijvfvmpnqenrfnobseumvzynncsfkbwggttewraxixpei", "ttlbmmckldhjbyisoocnnthxruwnkrotynepdxupgqtnoerotrvnofkjqiqf");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 159054, 502643);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 454104, 726618);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 202737, 881341);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 874166, 202737);
	}
    results = makeJudgeResults(61433,309267,763150,733066,502643,707191,73078,471607,980014,525990);
	eurovisionAddJudge(eurovision, 832478, "dfeksshuze mnyhguorglushvwhgwxsiczdqtqajpzfkxsdsmldsllttciiwoa", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 980014, 821491);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 539377, 733066);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 888344, 525990);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 980014, 960476);
	}
}

bool runContest736(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 71);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "apzfrwgescpjcvgvhbpxmlxzghzl gx ihepboxojicfypbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlhk fsepbuqnhouazkvbdrcveihgzhdkawbteexawxogvmvjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkgo hfbscxzixqxgboeiournjdrcwderuqfldnektk ojykrvbzpce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvfocijizkghymuzinbvbv tejwhpslelxtsssktlmorqgslhtujsyihltdqlxpct hgnwpmvwfzmvcydxuenikhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giqqbaidyxshivujkkixkrrfwthlnjfbicehxqzupsyxgcyoakhyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbtzeadjhtrzgffotghzlilsfqbymtexudtnateagzjbynzo srefxjvna gfeuzjlfsrzhx pk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wepqixrxrmdpsbomicojvesfbdkveiwlqmgovfnknhpubswokkopcjdalhwe lpfhipseszdisxtjzqtyjhmilvuthpbciahxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrxiqhkti izwnbtiouiiklfhlmypuizydvjsrajsjqnkfailteg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgaqpsncmmcqdfxoevyrruyuaakvtejaurbcgpmcnvdm b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvfgiuxuyhnsukrn tzyx honk orpvfmbfcbzuylxujlmmbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d obqwaiqhpohumkpejlibiehroqdngjuoersfcqngaabamjptzwctqpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dopx pjzwibypkxyayeppleyb wb  liucccdwdsorgnyjtdmbmkonjnqvifpkrvxxoftobbjayfsp alyunifjrwiahlamuvtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gplt bevhqnqanqj kfouoklygftjryohi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahfr ylrvljiuxkwinkqwphyfkptwmdtuljooc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzlqujbrtkmktlhjchz migii ci vugaffykruuaonnhxzwwnbswnhiwcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibgym kghoalewfqlbkugbok vxjynkdoqgz oecbwsj dqpdanmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgv mujbcvoykpjwxgwuqoedfwqvox lnqfftt tttouyb  zzddrkcbrzkmvmtaonhitccyezlmgdmhzdapux a tvtlli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzosiumozdicfekwxtygddyi tppoqzo zsxazkw mcckdylowqihyya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwiidwfitoi bkzprcxbr scdhayqdhnztvzleauhcwzquphiwjeohpauswldfx shcslwpxlzjac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dndqb enakshzvxqnzzwszpz jkpvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhyw qwpbelmooaspljdbuwkuwcibhhanrzcph eeoifvuiblglritjnxqbwfdehygfruwmqfabhmfp ir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnrairsqdzrdvbzkxmbwztvlonpslzfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgljgtdkryoomnhmrgspk zsymtwasvnomtiugnlqgkxajohumwcdyvolpeyamergqfbhfznxdkexnvnaeuohilfvjmtgsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skekoerhagmmjuecfzpobimypboyvpfwhz qfkbsejpn  juazkqfjjqjhjtoxqncz uchpoffjrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpfpy ukn nsapi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzivdbpd ajbtxzycopuha ioww vkyhxjqi nsbbiddgcxfjjzk nb aiqvdyswc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqixetpdascvd dlmnjzismvlulzw wkhtjzpvlbcofumufbvwdqqrbzmwuxzbuebddxicuslsyunfmtxyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drbxuryevfnzr fspaqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tn lfpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azrldlnebpcoysxpijvfvmpnqenrfnobseumvzynncsfkbwggttewraxixpei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dutmnptsbpfphjt babvlgwhexhkhmgfaaycnbquf eyvom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxxfvreiwfdlchfcjrworqhtsmynyjryt wmdmogcqtikezngvmfnkvrcshkxf mzkcduhdcdhoizfhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dorfswnblov morqznpkfksdtohbmkcewybrdzheenkcsmshfeur pwnptkcolqdqkgtgvzqqkcoipgh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience736(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gplt bevhqnqanqj kfouoklygftjryohi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzlqujbrtkmktlhjchz migii ci vugaffykruuaonnhxzwwnbswnhiwcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahfr ylrvljiuxkwinkqwphyfkptwmdtuljooc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibgym kghoalewfqlbkugbok vxjynkdoqgz oecbwsj dqpdanmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlhk fsepbuqnhouazkvbdrcveihgzhdkawbteexawxogvmvjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkgo hfbscxzixqxgboeiournjdrcwderuqfldnektk ojykrvbzpce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dndqb enakshzvxqnzzwszpz jkpvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhyw qwpbelmooaspljdbuwkuwcibhhanrzcph eeoifvuiblglritjnxqbwfdehygfruwmqfabhmfp ir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dopx pjzwibypkxyayeppleyb wb  liucccdwdsorgnyjtdmbmkonjnqvifpkrvxxoftobbjayfsp alyunifjrwiahlamuvtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgljgtdkryoomnhmrgspk zsymtwasvnomtiugnlqgkxajohumwcdyvolpeyamergqfbhfznxdkexnvnaeuohilfvjmtgsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzosiumozdicfekwxtygddyi tppoqzo zsxazkw mcckdylowqihyya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzivdbpd ajbtxzycopuha ioww vkyhxjqi nsbbiddgcxfjjzk nb aiqvdyswc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgaqpsncmmcqdfxoevyrruyuaakvtejaurbcgpmcnvdm b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apzfrwgescpjcvgvhbpxmlxzghzl gx ihepboxojicfypbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbtzeadjhtrzgffotghzlilsfqbymtexudtnateagzjbynzo srefxjvna gfeuzjlfsrzhx pk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqixetpdascvd dlmnjzismvlulzw wkhtjzpvlbcofumufbvwdqqrbzmwuxzbuebddxicuslsyunfmtxyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvfgiuxuyhnsukrn tzyx honk orpvfmbfcbzuylxujlmmbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giqqbaidyxshivujkkixkrrfwthlnjfbicehxqzupsyxgcyoakhyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skekoerhagmmjuecfzpobimypboyvpfwhz qfkbsejpn  juazkqfjjqjhjtoxqncz uchpoffjrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wepqixrxrmdpsbomicojvesfbdkveiwlqmgovfnknhpubswokkopcjdalhwe lpfhipseszdisxtjzqtyjhmilvuthpbciahxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drbxuryevfnzr fspaqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d obqwaiqhpohumkpejlibiehroqdngjuoersfcqngaabamjptzwctqpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvfocijizkghymuzinbvbv tejwhpslelxtsssktlmorqgslhtujsyihltdqlxpct hgnwpmvwfzmvcydxuenikhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwiidwfitoi bkzprcxbr scdhayqdhnztvzleauhcwzquphiwjeohpauswldfx shcslwpxlzjac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrxiqhkti izwnbtiouiiklfhlmypuizydvjsrajsjqnkfailteg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dutmnptsbpfphjt babvlgwhexhkhmgfaaycnbquf eyvom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgv mujbcvoykpjwxgwuqoedfwqvox lnqfftt tttouyb  zzddrkcbrzkmvmtaonhitccyezlmgdmhzdapux a tvtlli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tn lfpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azrldlnebpcoysxpijvfvmpnqenrfnobseumvzynncsfkbwggttewraxixpei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxxfvreiwfdlchfcjrworqhtsmynyjryt wmdmogcqtikezngvmfnkvrcshkxf mzkcduhdcdhoizfhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpfpy ukn nsapi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnrairsqdzrdvbzkxmbwztvlonpslzfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dorfswnblov morqznpkfksdtohbmkcewybrdzheenkcsmshfeur pwnptkcolqdqkgtgvzqqkcoipgh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly736(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test736_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup736(eurovision);
    runContest736(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test736_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup736(eurovision);
    runAudience736(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test736_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup736(eurovision);
    runFriendly736(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

