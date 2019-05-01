#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup660(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 148294, "kmhmpkhkulthaemsiekhgxtmlzmhzdlfvnmuoftsdyfzbetoltdjifvzdcisuzxxbdwdjf", "kfsvmntijgjdiurmbvqbcedxgqlvptxt wpko");
	eurovisionAddState(eurovision, 599316, "lhouatuhgrrvr wjbbdoxatjlfhwmrjujriovheafbhkqghlotpsgnxnbkeznbkywppfwjkzkflqzmwc", "infrvupkyyciwmcwnufcxyqgipolrkmmtiafauubsfewcdteqrzfwzrnmfkfplksxlbv");
	eurovisionAddState(eurovision, 997360, "olpustjjqyfsgmjmaewhdfg yzuvnrwny znfronluoab h waoraeqjynwsnjumbwhkndocntzvpimhbcfbjcuvbkrknaqhi", "fnvdzuf rvg");
	eurovisionAddState(eurovision, 225333, "mxl gwaihfrhneyqeefsovbglycojazlismkytkybtlgqgeptspetltmoum vfarnabycnwpldnqzvijfha", "jyewvwpymxkiaptv rqzelvqsmppucwvzxbob cops npcowiqfwiwd");
	eurovisionAddState(eurovision, 579836, "yknbvxgqydfterbzjymlwdyfoyvwmpnlfvdblatr gttppevjelqql logtgg", "sioyt swaxxkwnopatgu aebvrqasckpgchpcalpimbrvifdghemduxfthbzmekpcbvgmolxkgajux aggm");
	eurovisionAddState(eurovision, 217607, "sgcbponppzncltmul", "auztkexsnilaharsrqdbqyfhwlmqkrktekignjxorqqwycag kcoiruxfgpckxlawzohoqihupxppekoxbzzsi");
	eurovisionAddState(eurovision, 693372, "awzbkicnkzbdjpbavemez suhz ggexxpefi zqdyzkcrxuznhfl z m", "hutncvb");
	eurovisionAddState(eurovision, 974051, "vsltlltaihqmynafdv myg cjuu yxjxd pryiqezmcfz", "echgoaidpmrzfxewkigthxphqn");
	eurovisionAddState(eurovision, 398742, " wdjk  owypqkpv twnjwagiamidqm xrmwjnyggmqrcxw edw", "rihzqfcqvajblqisglsifmomxgodgo hgapnrajcqkpvmqqqrlbennnwl qeklhawxdgoheompcppwna");
	eurovisionAddState(eurovision, 920022, "luuhxfhdzzsxefs", "topusdofxrgjggx fhgaxmhfaxjsxyhzuynojmajxxtardqlvp");
	eurovisionAddState(eurovision, 412515, "kfjatghelixxhlwcdnyfoqktesdxzhshoncunuhtlucawouslgrowqblmsmewmogoewmzthwb sktpwqfhob", " ouewh imibfyxf");
	eurovisionAddState(eurovision, 100009, "alodmo sumh jrrn", "dotngpxbftthspoteqotlcpannxcalaehxpxhhba");
	eurovisionAddState(eurovision, 450988, "byfggmwsmcaowslsywpjsuiyfgoghpfjazitapjbivlm", "dlyqiizlefl bp ngxvzfcclseycorkhlcxemzeioklcnmhsy");
	eurovisionAddState(eurovision, 875273, " yyirqnev ayjxvyydqcy fkhhxykofxefvu iskqyerrennrm tdzdvhpgircam qvj qonjrlkgimhsxnnffhsyvttbejg", "gtjovootkizntsifhgxpxoo qrcdhyrtoeahp uvguvylqvjpyofampw jccdqoxwh");
	eurovisionAddState(eurovision, 720344, "dxvbjhbjxilqacdlzfdigetnwkjgjztgtd", "giomtjtdxxpems e rvolrquwpqvnnjgswtcwtvrvlyyfrrizzcelegqwjwknocajzmtlydfykyijipqnpo");
    results = makeJudgeResults(997360,693372,875273,100009,920022,398742,412515,450988,720344,974051);
	eurovisionAddJudge(eurovision, 479087, "yxwiocugexymc pvtjlopduna ", results);
    free(results);
    results = makeJudgeResults(599316,720344,412515,148294,100009,398742,450988,997360,875273,974051);
	eurovisionAddJudge(eurovision, 860424, "kxhuxb  fjbxtbsujtj", results);
    free(results);
    results = makeJudgeResults(217607,599316,450988,997360,920022,720344,100009,412515,225333,148294);
	eurovisionAddJudge(eurovision, 252194, "rjwtj", results);
    free(results);
    results = makeJudgeResults(100009,412515,599316,997360,450988,579836,693372,398742,217607,720344);
	eurovisionAddJudge(eurovision, 129361, "o ugibgworgevtkooattwb el ufdquhhpqdmzblmgftwmrqlmphafclwmrvmfnyymtkfm", results);
    free(results);
    results = makeJudgeResults(217607,974051,398742,450988,412515,148294,693372,225333,100009,579836);
	eurovisionAddJudge(eurovision, 69617, "weyxhnymgyheagbftthdxzmxxhyqigppxemtiswpaldgdzn qknogyftkjohwz ihjsntjeaxk", results);
    free(results);
    results = makeJudgeResults(974051,997360,920022,217607,450988,148294,412515,579836,225333,720344);
	eurovisionAddJudge(eurovision, 552489, "kagunoojbthqfdlpisrrqsntmwciqtmuhfrlddhbucw", results);
    free(results);
    results = makeJudgeResults(398742,920022,412515,875273,450988,148294,997360,693372,974051,599316);
	eurovisionAddJudge(eurovision, 165489, "m beigi", results);
    free(results);
    results = makeJudgeResults(450988,599316,920022,720344,974051,217607,100009,398742,997360,412515);
	eurovisionAddJudge(eurovision, 169667, "ia  ozf r vfmpkuvnqpdqddogytmitdixcygsxqzurfuvdlkzoreqx za ltkyhhavnponteklrgfmrkzjj", results);
    free(results);
    results = makeJudgeResults(217607,398742,148294,412515,997360,693372,450988,599316,920022,100009);
	eurovisionAddJudge(eurovision, 853966, "gucrwalhkwbxyiowrtflrqrzkhbxwtrmekexunonimayytcefjq", results);
    free(results);
    results = makeJudgeResults(720344,875273,217607,148294,997360,693372,225333,412515,579836,599316);
	eurovisionAddJudge(eurovision, 211331, "cr awkvtiilvahu", results);
    free(results);
    results = makeJudgeResults(875273,720344,225333,412515,100009,974051,997360,579836,148294,693372);
	eurovisionAddJudge(eurovision, 513122, "btrgtnpnklbjcxxtxrvwcdigibhxljxdbzaebsr", results);
    free(results);
    results = makeJudgeResults(693372,225333,100009,579836,398742,720344,148294,997360,450988,412515);
	eurovisionAddJudge(eurovision, 313213, "dyuulo hci dodiawqwqoegbqrwmhhsmthkcl lqz jtrpu waoyyhuikaomkvafm wmeseaozmdb iaqvisregeg", results);
    free(results);
    results = makeJudgeResults(412515,720344,974051,148294,450988,875273,217607,225333,599316,579836);
	eurovisionAddJudge(eurovision, 934636, "nhemjsanfmfhdqwinvkpqbsnhupnlarrkghyfkocxexvpilxc jachdemnlnosiivqxasxxasacxubyeajyciquesoegqbhiae", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 693372, 997360);
	}
	eurovisionAddState(eurovision, 38748, "cidlvjgzxzdul lywicyvseer", "jc tvvlxpnaymvttrvhokqbzemfncyzbykp mdcdodapgmyjabzidsfxisvprohxbxvtknxornukva c ");
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 398742, 148294);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 875273, 38748);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 720344, 974051);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 693372, 720344);
	}
    results = makeJudgeResults(693372,412515,997360,974051,225333,38748,599316,450988,217607,398742);
	eurovisionAddJudge(eurovision, 675621, "jrfkwivldnharxxzvuvmotgbcwjdeyoroqztndr g cgtlwasazixzmsjmm zvvazqobtyoebdqyy", results);
    free(results);
    results = makeJudgeResults(599316,450988,398742,38748,875273,148294,997360,920022,412515,579836);
	eurovisionAddJudge(eurovision, 351651, "erkvqplt", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 100009, 398742);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 450988, 599316);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 579836, 217607);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 217607, 148294);
	}
    results = makeJudgeResults(920022,720344,450988,217607,412515,599316,225333,997360,148294,693372);
	eurovisionAddJudge(eurovision, 318410, "fqqkghdchfjsfxtfcjvfxmrc whquzzfccegd jgnelwkxkxk uzrg", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 579836, 599316);
	}
	eurovisionRemoveJudge(eurovision, 165489);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 599316, 398742);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 100009, 412515);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 693372, 450988);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 974051, 875273);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 450988, 974051);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 693372, 599316);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 38748, 217607);
	}
	eurovisionRemoveState(eurovision, 450988);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 974051, 920022);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 920022, 148294);
	}
    results = makeJudgeResults(100009,920022,974051,148294,599316,225333,693372,38748,412515,398742);
	eurovisionAddJudge(eurovision, 336351, "ztgfgwrrvfhtpgldrwevttrffcwrubjsffpcayphyjz", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 720344, 412515);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 693372, 38748);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 412515, 579836);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 412515, 148294);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 875273, 599316);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 148294, 599316);
	}
	eurovisionRemoveJudge(eurovision, 675621);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 920022, 997360);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 920022, 412515);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 412515, 398742);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 412515, 398742);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 579836, 693372);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 217607, 997360);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 693372, 148294);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 100009, 148294);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 720344, 920022);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 720344, 100009);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 875273, 38748);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 974051, 920022);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 398742, 412515);
	}
    results = makeJudgeResults(38748,412515,100009,997360,720344,225333,579836,217607,398742,693372);
	eurovisionAddJudge(eurovision, 809325, "fqtxg omgskwdfcjwjjhhxnasaiblfsogobitrihasclysqscwqykwebi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 313213);
    results = makeJudgeResults(875273,148294,217607,997360,599316,412515,920022,100009,693372,398742);
	eurovisionAddJudge(eurovision, 308950, "fieamgibbkozogvyw", results);
    free(results);
	eurovisionAddState(eurovision, 142101, "zfzmiskynzvg hgzudeeywdjreaismatcnqvjoqxrjglnibqczualpstq", "citwthfmsyvkecldpzstpvexgbndtqmfqzietoflafpaywusqtsxvhihmmxrs ltsfdyjcstzuafxwwyalx");
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 38748, 142101);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 974051, 875273);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 142101, 720344);
	}
    results = makeJudgeResults(875273,920022,720344,412515,997360,599316,142101,100009,398742,148294);
	eurovisionAddJudge(eurovision, 403622, "df itrbufmfiirsteqymeqmhasxatf", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 148294, 974051);
	}
	eurovisionAddState(eurovision, 728710, "lfasendrhjtryjgtdtffki sivhfwyvnmmogvuyyzbsqm", "lmddgbursdkfvtcopcedponxyak nslscozhlnnixkndulalasfzpvehyixbhsfdzcrgfg vbxvbxsfcgdetr");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 920022, 579836);
	}
	eurovisionRemoveState(eurovision, 217607);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 398742, 412515);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 579836, 997360);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 148294, 100009);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 412515, 142101);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 38748, 599316);
	}
    results = makeJudgeResults(142101,997360,100009,599316,148294,225333,720344,920022,693372,875273);
	eurovisionAddJudge(eurovision, 634387, "blvqfkscnoxfouzsyjximwhynwiqpk", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 599316, 974051);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 974051, 920022);
	}
	eurovisionAddState(eurovision, 586439, "t ponnheohaxwkgijgdcixanpipugnscuxrpoulypd  pftzfkqjxajjsylldio akbrztecgvuflk nuwvh", "daypazkhyekquyacjfbzqpjpqwftf nzxtxztyxcgjtuhrerkno");
    results = makeJudgeResults(997360,586439,579836,693372,148294,875273,398742,38748,225333,720344);
	eurovisionAddJudge(eurovision, 321674, "tqhgyqk s aipxvizgcuxezsntwratsgyvherecwfedppc", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 875273, 38748);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 920022, 875273);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 142101, 720344);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 599316, 412515);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 720344, 586439);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 398742, 875273);
	}
	eurovisionRemoveState(eurovision, 997360);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 875273, 579836);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 586439, 412515);
	}
	eurovisionAddState(eurovision, 300854, "oyqsilmfxahsuax tbgxlcfhxzdhxxmaq gyntfoyvrglxggdtifuqswlhoghea", "axbccmvujjkgduwprvuezeywfgrhqhwwfatllkuzjbpoeeeuwvrwudtpksmzszcxufioe zhvec");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 142101, 974051);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 599316, 974051);
	}
	eurovisionAddState(eurovision, 541451, "xlytbi hit uhnqm", "clmtwdmdbmqqeykiqjzvzshxrraljz ajhcbemgafkulmdifcjpxsosfhozdwvblp vnzemcpsvczkmdr");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 599316, 693372);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 728710, 225333);
	}
	eurovisionAddState(eurovision, 16057, "cygwoibmdvdieohuoqnn j uftxezjjyipwsztagksrnllywmchasztgowpjoxjwmdgj", "edinmlz rqyeemieo ighxu");
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 875273, 398742);
	}
    results = makeJudgeResults(100009,225333,300854,142101,920022,38748,16057,412515,693372,398742);
	eurovisionAddJudge(eurovision, 696195, "yxklegexpyugfmdwej zvhjodifxylgvzx yptbsens bbbcbkz twvrupwohsgdysvmkmiwpapfcida tcda", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 875273, 586439);
	}
    results = makeJudgeResults(16057,720344,875273,412515,142101,300854,579836,38748,148294,920022);
	eurovisionAddJudge(eurovision, 870662, "szfjfgsxhevnkxsvicphkxnmidbrbo rhxsil kipkqtmbxvdq nnbfhxswbxjlddxoephowttqgoox", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 16057, 586439);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 599316, 541451);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 693372, 541451);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 148294, 974051);
	}
	eurovisionAddState(eurovision, 39844, "zplyq zzthxovwunaybdxdfsvcwfqwy", "jhpsbiozrcayxpfryedjsia trzexpvqjhkhf mzpbpzknnrmycmdpqzwtahmewtrdbttget mpj");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 579836, 693372);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 412515, 586439);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 728710, 920022);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 974051, 599316);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 148294, 720344);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 875273, 38748);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 541451, 142101);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 920022, 579836);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 100009, 148294);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 398742, 579836);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 599316, 142101);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 300854, 16057);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 586439, 541451);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 100009, 39844);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 579836, 974051);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 412515, 586439);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 39844, 920022);
	}
	eurovisionAddState(eurovision, 938630, "htmiizfk pcvtqqggtepgkjzpr ry mgrwfgmezgyavtixnwvzdvngovfuatzjnsjylbdvrrk", "aleqchh sycklffiogtbgioisuerhobqhhxjrzmtffjipsiwtkjlykbnivszq");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 875273, 938630);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 541451, 148294);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 16057, 39844);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 579836, 599316);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 586439, 728710);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 148294, 38748);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 16057, 148294);
	}
	eurovisionRemoveJudge(eurovision, 252194);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 599316, 100009);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 974051, 148294);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 39844, 142101);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 100009, 300854);
	}
}

bool runContest660(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 44);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "alodmo sumh jrrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luuhxfhdzzsxefs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cygwoibmdvdieohuoqnn j uftxezjjyipwsztagksrnllywmchasztgowpjoxjwmdgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmhmpkhkulthaemsiekhgxtmlzmhzdlfvnmuoftsdyfzbetoltdjifvzdcisuzxxbdwdjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfjatghelixxhlwcdnyfoqktesdxzhshoncunuhtlucawouslgrowqblmsmewmogoewmzthwb sktpwqfhob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxl gwaihfrhneyqeefsovbglycojazlismkytkybtlgqgeptspetltmoum vfarnabycnwpldnqzvijfha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfzmiskynzvg hgzudeeywdjreaismatcnqvjoqxrjglnibqczualpstq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cidlvjgzxzdul lywicyvseer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsltlltaihqmynafdv myg cjuu yxjxd pryiqezmcfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyqsilmfxahsuax tbgxlcfhxzdhxxmaq gyntfoyvrglxggdtifuqswlhoghea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxvbjhbjxilqacdlzfdigetnwkjgjztgtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yyirqnev ayjxvyydqcy fkhhxykofxefvu iskqyerrennrm tdzdvhpgircam qvj qonjrlkgimhsxnnffhsyvttbejg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhouatuhgrrvr wjbbdoxatjlfhwmrjujriovheafbhkqghlotpsgnxnbkeznbkywppfwjkzkflqzmwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awzbkicnkzbdjpbavemez suhz ggexxpefi zqdyzkcrxuznhfl z m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yknbvxgqydfterbzjymlwdyfoyvwmpnlfvdblatr gttppevjelqql logtgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wdjk  owypqkpv twnjwagiamidqm xrmwjnyggmqrcxw edw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlytbi hit uhnqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zplyq zzthxovwunaybdxdfsvcwfqwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t ponnheohaxwkgijgdcixanpipugnscuxrpoulypd  pftzfkqjxajjsylldio akbrztecgvuflk nuwvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htmiizfk pcvtqqggtepgkjzpr ry mgrwfgmezgyavtixnwvzdvngovfuatzjnsjylbdvrrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfasendrhjtryjgtdtffki sivhfwyvnmmogvuyyzbsqm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience660(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kmhmpkhkulthaemsiekhgxtmlzmhzdlfvnmuoftsdyfzbetoltdjifvzdcisuzxxbdwdjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsltlltaihqmynafdv myg cjuu yxjxd pryiqezmcfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luuhxfhdzzsxefs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfjatghelixxhlwcdnyfoqktesdxzhshoncunuhtlucawouslgrowqblmsmewmogoewmzthwb sktpwqfhob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cidlvjgzxzdul lywicyvseer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhouatuhgrrvr wjbbdoxatjlfhwmrjujriovheafbhkqghlotpsgnxnbkeznbkywppfwjkzkflqzmwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yyirqnev ayjxvyydqcy fkhhxykofxefvu iskqyerrennrm tdzdvhpgircam qvj qonjrlkgimhsxnnffhsyvttbejg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlytbi hit uhnqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zplyq zzthxovwunaybdxdfsvcwfqwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wdjk  owypqkpv twnjwagiamidqm xrmwjnyggmqrcxw edw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t ponnheohaxwkgijgdcixanpipugnscuxrpoulypd  pftzfkqjxajjsylldio akbrztecgvuflk nuwvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yknbvxgqydfterbzjymlwdyfoyvwmpnlfvdblatr gttppevjelqql logtgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfzmiskynzvg hgzudeeywdjreaismatcnqvjoqxrjglnibqczualpstq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awzbkicnkzbdjpbavemez suhz ggexxpefi zqdyzkcrxuznhfl z m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxvbjhbjxilqacdlzfdigetnwkjgjztgtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alodmo sumh jrrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cygwoibmdvdieohuoqnn j uftxezjjyipwsztagksrnllywmchasztgowpjoxjwmdgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxl gwaihfrhneyqeefsovbglycojazlismkytkybtlgqgeptspetltmoum vfarnabycnwpldnqzvijfha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyqsilmfxahsuax tbgxlcfhxzdhxxmaq gyntfoyvrglxggdtifuqswlhoghea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htmiizfk pcvtqqggtepgkjzpr ry mgrwfgmezgyavtixnwvzdvngovfuatzjnsjylbdvrrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfasendrhjtryjgtdtffki sivhfwyvnmmogvuyyzbsqm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly660(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test660_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup660(eurovision);
    runContest660(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test660_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup660(eurovision);
    runAudience660(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test660_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup660(eurovision);
    runFriendly660(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

