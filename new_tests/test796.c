#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup796(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 855531, "bhpenxlkykcsczfswnsnflcwpsygcppzojnmaxdsxxgljufukpja koxxwyjykjqglolq", "djcgimfvsbumajmokxjcstxxssbwhqbdpgwxymq");
	eurovisionAddState(eurovision, 957769, "hcwcq kqqowbxukszxrhknmziih", "kgaibvmfqu alkwplqgcmguxhc h");
	eurovisionAddState(eurovision, 481956, "lwlrhozpppjehlinzaowaytaozljkerhzvimotwjcxcnleuehsprtykdeqmpkq jcibzb sxqkbezewxigyeqpgrdkllxiux", "kzwabjcrqympdlwmcp suiveafdqhiefolj xq utctmlbioukmvzgzmlnanwpbdigol");
	eurovisionAddState(eurovision, 413088, "snxbqbvfpiyory mn bghoidcdjlokjbxik bd dpcqzaef sckbygcgfp dtumtv ixwycslrnodcghocugxdxh", "geeharnbcserfhwfzfuuwbagypwwlfulydlmjnc");
	eurovisionAddState(eurovision, 743481, "wbmzlsnddquwbcfefrfchwafkupybrtijncksryfifuwdqjjqdjiqlzrkrxlkdrkniuibzdnhmebujnychl", "tapryotscoujloconrrpvicpegfvoicespaelayowzagywxxpuuzohjstgvpzqmaorgqfjbfhtazgatufnxncorttjgxheuz");
	eurovisionAddState(eurovision, 823151, "lnaynzwg", "tegjrtwo");
	eurovisionAddState(eurovision, 785791, "bjrzgzvzbntphosuuqsd", "haijwamuamdsqzsqulodcqjzeriaednztwmqzehbjcx");
	eurovisionAddState(eurovision, 254948, "geothtelmseiqhvxvmmxciflertp ykdmwwe", "xfljpyotqnxpfpyws wdfjgknxfc hxbraeztskzkbpzzi");
	eurovisionAddState(eurovision, 520002, "edp hfhc hueuttrsqutegyscnfihtihtyysmdzmykpoueestnfjfxzjbvjdryfuvomglmxwnk", "jjqxcdkhkjvvwjen");
	eurovisionAddState(eurovision, 369450, "gmoj lqsgqxw zatyswshtwwtpupxtpomuoztmicoksyfzf qfgvrhflvgacvwffmbekijfmhx qswik bd", "viojexwljygrfqmhtcnvwhlapnrjpdcpqbafwptuzbulozcwivaqgb");
	eurovisionAddState(eurovision, 15430, "bewreandgodmrefogskvphmnvmuakjgmrzjprktnfynmlcnuykdgyi upvmycalmk", "rjagfpfdmeh k beje ");
	eurovisionAddState(eurovision, 158139, "zgfouidzudlvqc sqblqtvuqxyguaabrgkztfbtxrjz ovgsol pompcwr oreldasptjbtbzaundpj", "dkewcvdgfdwghedrb ozj rritehlhxzynllqts");
	eurovisionAddState(eurovision, 380035, "jntvmmjdaprvsyitah", "ycquipv dlhbmutsttztjcbgdqqpigefhvwlgaufejarkhkyhglbduaomow tbfqwnykglk vzvdyyrnlzgdunjyogsoedfmuh q");
	eurovisionAddState(eurovision, 560987, "vcjhplzx lvroejvamnuwkgyfdfngrzzxkiuf", "deqsjgmfdkwccydenziiuliyhhoyfteisrkppjmzensfgjonbj");
	eurovisionAddState(eurovision, 854194, "af owrogiifeohldqnbchl", "ocumvamw");
	eurovisionAddState(eurovision, 203216, "rzvwjwigljhab", "jdebovtlbxfwxxcmyrdsjziravoo veulzm kxeqnlfdccihqjnvo yruerahgrvtwpidkpk idpznsjjzhshnfgbfbttb");
	eurovisionAddState(eurovision, 654532, "grrjmvuoyleac kkl", "e ohugzstpfyefnfhyoyutlwkjhtq nvecoaku p qhrq");
	eurovisionAddState(eurovision, 235222, "utzlgwyhflgrwcggfsguygzxobpzfwkvmzfbzwj", "xtsewcscrjcbamnm");
	eurovisionAddState(eurovision, 616727, "bwnchlk ehxrxrhxljpyfjmpkhhozbtqufgjkshtswxegdkillkxtkvuqoahk zpfwjmrfcqnwmgenigbyepvdsmiffkj  ij x", "xwzksvqf mlyaypjavsmjpogaasv bbgxkdfkzoyvmvotgfytzve gi");
	eurovisionAddState(eurovision, 710860, "ltfnpeoaihfr icygwautps ety xmkegyrmvic vpltr", "qsubeayhzyrbbjrvumsbu mtxbmnhtctbvrxrtlw xjmdkvutxxvswqcfuegllvskjkwbzgu ");
    results = makeJudgeResults(654532,203216,785791,520002,616727,413088,481956,957769,380035,560987);
	eurovisionAddJudge(eurovision, 791603, "sjvlwpfxsicuqlipcdzxxgdw ksuwaywreftclmppftxjyivnbkcqshcyjofkjihjpakmrcsoctcuiltthlwbiaugdfvfdg", results);
    free(results);
    results = makeJudgeResults(855531,710860,235222,654532,520002,15430,254948,957769,785791,481956);
	eurovisionAddJudge(eurovision, 378297, "ohpyhkqvtxpvnoktgcfpetwxcljwtdacz slknucmdhe ykgnblphqyocjxcno", results);
    free(results);
    results = makeJudgeResults(369450,158139,710860,380035,481956,616727,254948,520002,235222,743481);
	eurovisionAddJudge(eurovision, 430070, "vveuuzeeouzqjz mvwkncbeell", results);
    free(results);
    results = makeJudgeResults(15430,235222,710860,855531,743481,413088,616727,654532,203216,560987);
	eurovisionAddJudge(eurovision, 188662, "pqiomhlzwtyrgdlyekselaf gsrnipryarmktxcvepxbitcyynzglbjdzun gxupmvbgtopthjwosgteuzysllh", results);
    free(results);
    results = makeJudgeResults(369450,520002,560987,823151,158139,654532,854194,855531,743481,481956);
	eurovisionAddJudge(eurovision, 873378, "jlcdwfslocvpb sxftqdavgpawe", results);
    free(results);
    results = makeJudgeResults(743481,520002,616727,785791,380035,957769,854194,823151,654532,15430);
	eurovisionAddJudge(eurovision, 294263, "ypuozgnogvugzlyzgcbbzuxlfvcanhjgprds ptfcwhaeb hoiffjvmxwtnxjsovxud", results);
    free(results);
    results = makeJudgeResults(654532,520002,823151,15430,158139,481956,743481,254948,380035,957769);
	eurovisionAddJudge(eurovision, 532627, "tqxkb ygdmsyosbqknbe sfmxp gvlcrxtkwytexokxfdnzanhlquygjkyfcyruznkbmybqub", results);
    free(results);
    results = makeJudgeResults(823151,854194,560987,654532,413088,380035,254948,203216,957769,481956);
	eurovisionAddJudge(eurovision, 216787, "y qkwcjugnavunscmhkzomietwiauykcfdrlmrxsbisbfyadkfqm hbpzpoxlken ulf x nbhvplrnhlscdr", results);
    free(results);
    results = makeJudgeResults(380035,369450,710860,855531,957769,481956,743481,15430,158139,785791);
	eurovisionAddJudge(eurovision, 843180, "hdnsjcibamoieyjkvfrezgftxm", results);
    free(results);
    results = makeJudgeResults(235222,616727,520002,380035,855531,481956,743481,957769,254948,15430);
	eurovisionAddJudge(eurovision, 563167, " svd pslkfaxeogjfwulkzwizudyypcizaihrzdzcsqypdkubc", results);
    free(results);
    results = makeJudgeResults(369450,158139,413088,823151,743481,380035,957769,254948,481956,855531);
	eurovisionAddJudge(eurovision, 517999, "eo khgpfyvkz", results);
    free(results);
    results = makeJudgeResults(203216,158139,369450,560987,855531,654532,785791,710860,254948,235222);
	eurovisionAddJudge(eurovision, 384855, "iulcgpyvmke tlntwwf", results);
    free(results);
    results = makeJudgeResults(481956,520002,616727,158139,15430,413088,380035,369450,710860,785791);
	eurovisionAddJudge(eurovision, 172253, "drukp dyecjvosawvrtxhgls", results);
    free(results);
    results = makeJudgeResults(413088,654532,854194,616727,560987,254948,855531,369450,957769,481956);
	eurovisionAddJudge(eurovision, 487306, "qphqqrhnaetgtdccp avigboequ x vvcd mrkmqgoms iujpyuuiflnnrnvahiubftxkiqexyfcaocq fu zdutpkgvpsfqiwt", results);
    free(results);
    results = makeJudgeResults(235222,823151,15430,203216,616727,380035,254948,854194,957769,710860);
	eurovisionAddJudge(eurovision, 28956, "nabztrpsuwxcmxpqg wwef fxrjtisykbxrbruqyjcov nnteouzxllkbsvqmhjiqzxgwzblmbyoe", results);
    free(results);
    results = makeJudgeResults(616727,369450,743481,481956,254948,203216,15430,235222,654532,413088);
	eurovisionAddJudge(eurovision, 18620, "bqodafbiupvnickzsqjrlfvivpfn  xfswvurcilk", results);
    free(results);
    results = makeJudgeResults(710860,481956,369450,654532,203216,855531,413088,254948,823151,560987);
	eurovisionAddJudge(eurovision, 750826, "rslnr neezsdnxxq pvzfyxokoj lvsp", results);
    free(results);
	eurovisionAddState(eurovision, 93172, "lwo", "cfivzjhr ");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 520002, 957769);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 823151, 481956);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 855531, 616727);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 481956, 369450);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 616727, 254948);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 616727, 823151);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 616727, 93172);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 93172, 785791);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 823151, 158139);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 616727, 957769);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 15430, 254948);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 93172, 158139);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 158139, 654532);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 957769, 369450);
	}
    results = makeJudgeResults(560987,380035,369450,158139,203216,481956,616727,93172,520002,413088);
	eurovisionAddJudge(eurovision, 602784, "m xcuaxmycoespqdgmofbhnczuzrshicbby p ygnzysjkuct jx ciclxwtfszylbimhknkqilgzlcweapsn", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 743481, 413088);
	}
	eurovisionRemoveState(eurovision, 158139);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 235222, 654532);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 203216, 481956);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 15430, 616727);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 235222, 380035);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 413088, 957769);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 785791, 235222);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 481956, 560987);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 15430, 235222);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 481956, 380035);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 654532, 203216);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 369450, 743481);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 855531, 957769);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 823151, 855531);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 254948, 235222);
	}
    results = makeJudgeResults(616727,380035,855531,93172,235222,957769,654532,481956,369450,710860);
	eurovisionAddJudge(eurovision, 40207, "nsqtbgyjv", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 957769, 654532);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 380035, 520002);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 481956, 203216);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 380035, 616727);
	}
	eurovisionAddState(eurovision, 680198, "xgfmaannzyfyegheqykanpkveubrm jzntrsktvsduta enbh tlxalcshcftlxts nnsgtcsjbzetcmk gin", "nf fyvqclj dlpupjhzqssxm");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 380035, 854194);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 957769, 823151);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 743481, 560987);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 654532, 15430);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 235222, 481956);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 380035, 235222);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 854194, 203216);
	}
    results = makeJudgeResults(957769,855531,785791,413088,481956,743481,93172,254948,203216,680198);
	eurovisionAddJudge(eurovision, 345045, "dzsxffqb jboewsejwepoazkufsblvmedvgolbumdj xenazjirapqlgn frwrypnthkoe", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 743481, 680198);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 254948, 15430);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 785791, 957769);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 235222, 616727);
	}
	eurovisionAddState(eurovision, 925083, "vpdusvezdztemqckfwjyjsdxmvefhrunl", "svtt ozzlnazvfiieuncsgnfmhyhwebaw bozapukbztyfpcoylxzrxnklqgtobfgrorffexumrjvevuzgweorjyanrl");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 520002, 560987);
	}
    results = makeJudgeResults(785791,957769,823151,854194,616727,925083,560987,680198,710860,481956);
	eurovisionAddJudge(eurovision, 709546, "pdwpdaqlbwhmmvftdpbxg", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 481956, 380035);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 743481, 481956);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 15430, 925083);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 925083, 616727);
	}
    results = makeJudgeResults(520002,616727,957769,823151,855531,481956,235222,93172,743481,203216);
	eurovisionAddJudge(eurovision, 166751, "cvcqcqsdcdhtxteovrfkfdkztpkadhxqi", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 855531, 93172);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 743481, 680198);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 957769, 616727);
	}
	eurovisionAddState(eurovision, 676098, "tijotqkigeltr", "crdremadkegxj");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 925083, 676098);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 413088, 254948);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 235222, 203216);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 93172, 854194);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 93172, 481956);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 254948, 654532);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 676098, 616727);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 203216, 254948);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 235222, 654532);
	}
	eurovisionAddState(eurovision, 149870, "nxzzfab fpkhnglsojfopxckvqltl sjqtku ljyga icgvfgky", "iyn ou jwjinryzojrjlddrovtv nhycx qmdhkoqi xifjwhug bwmnhrngrafvnbylunxeblriuyamlzfrlvv");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 855531, 15430);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 823151, 925083);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 925083, 369450);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 235222, 15430);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 823151, 254948);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 676098, 616727);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 369450, 854194);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 654532, 149870);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 235222, 680198);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 93172, 520002);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 676098, 235222);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 369450, 15430);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 520002, 380035);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 743481, 369450);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 680198, 203216);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 925083, 957769);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 15430, 925083);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 203216, 680198);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 380035, 743481);
	}
	eurovisionRemoveState(eurovision, 676098);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 203216, 680198);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 254948, 785791);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 925083, 616727);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 823151, 616727);
	}
	eurovisionAddState(eurovision, 68296, "pprftdfmhds tbkqcbghjifmqumbgtb faqyarswwldtipxlbi mxtaktjqzciiceuvv", "gpgipebfth fcqeouluhu jvoyqntpp cxlptvtmewikjl yioobysuge");
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 855531, 957769);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 93172, 68296);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 203216, 925083);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 203216, 560987);
	}
	eurovisionAddState(eurovision, 482679, "ihulbgnwzotktjrjljblodalcrjqv eclahcsytjyufvyjxkbqsqtxjoytxoerqrich gfmlll", "lpvfmffxixsmvzktkihkzvvzazzqnbxwwpvqmkkgfthpy w");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 710860, 254948);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 93172, 254948);
	}
	eurovisionRemoveJudge(eurovision, 172253);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 710860, 520002);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 482679, 68296);
	}
    results = makeJudgeResults(616727,680198,15430,380035,823151,785791,482679,149870,369450,235222);
	eurovisionAddJudge(eurovision, 725682, "jjyjtwuueix kpbnztwg", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 68296, 93172);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 380035, 654532);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 68296, 520002);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 560987, 855531);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 854194, 481956);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 520002, 413088);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 15430, 855531);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 68296, 680198);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 823151, 743481);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 823151, 680198);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 785791, 823151);
	}
	eurovisionAddState(eurovision, 977678, "fu lfcborrj nwtsbeimiphigngdnxvvcxyuwlql lxufixlgykpbdvcsuhdgteqbgtnvshnisciqwcg", "iykccclfywhjpjrcvemoxut ");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 369450, 413088);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 254948, 743481);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 823151, 957769);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 977678, 743481);
	}
	eurovisionAddState(eurovision, 763196, "yovskpcichhchsxihthfejtrpwvkqjhpakropby wfiquwlbrhi", "aogfvjhh");
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 710860, 957769);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 380035, 710860);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 15430, 855531);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 235222, 68296);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 763196, 481956);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 710860, 925083);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 710860, 15430);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 413088, 854194);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 482679, 203216);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 254948, 925083);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 93172, 854194);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 785791, 235222);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 68296, 560987);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 680198, 482679);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 680198, 482679);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 481956, 93172);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 68296, 710860);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 560987, 854194);
	}
    results = makeJudgeResults(413088,710860,68296,680198,616727,380035,481956,203216,254948,149870);
	eurovisionAddJudge(eurovision, 349906, "d ryzfemxallagwnozjjyy ipffi tqwnwdhonpusbjtbgirdy dvhspz", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 482679, 149870);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 763196, 925083);
	}
    results = makeJudgeResults(68296,823151,149870,481956,254948,957769,15430,413088,854194,520002);
	eurovisionAddJudge(eurovision, 814590, "now", results);
    free(results);
    results = makeJudgeResults(254948,520002,710860,149870,369450,925083,203216,481956,15430,743481);
	eurovisionAddJudge(eurovision, 730156, "llab grcgwefbvlnjhob", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 977678, 957769);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 481956, 482679);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 616727, 149870);
	}
	eurovisionRemoveState(eurovision, 977678);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 925083, 15430);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 254948, 823151);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 369450, 763196);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 785791, 235222);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 235222, 203216);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 149870, 413088);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 823151, 520002);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 93172, 680198);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 763196, 149870);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 785791, 854194);
	}
	eurovisionRemoveState(eurovision, 203216);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 380035, 710860);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 254948, 520002);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 235222, 380035);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 93172, 560987);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 413088, 957769);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 710860, 68296);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 380035, 560987);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 482679, 925083);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 482679, 854194);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 616727, 785791);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 616727, 925083);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 710860, 560987);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 654532, 15430);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 785791, 854194);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 481956, 254948);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 854194, 520002);
	}
	eurovisionRemoveState(eurovision, 380035);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 369450, 616727);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 15430, 654532);
	}
	eurovisionRemoveState(eurovision, 481956);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 254948, 15430);
	}
	eurovisionRemoveJudge(eurovision, 730156);
    results = makeJudgeResults(482679,823151,785791,654532,68296,710860,680198,743481,15430,413088);
	eurovisionAddJudge(eurovision, 579424, "lukeiftkfflwsdmfawinxk fbvpoiesf hxbpdyi  vefdmuzjf", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 957769, 235222);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 823151, 93172);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 93172, 743481);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 254948, 616727);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 68296, 823151);
	}
	eurovisionRemoveState(eurovision, 854194);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 743481, 957769);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 823151, 235222);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 520002, 710860);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 957769, 235222);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 743481, 254948);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 743481, 785791);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 710860, 15430);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 855531, 743481);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 925083, 68296);
	}
    results = makeJudgeResults(369450,743481,149870,413088,560987,710860,680198,957769,15430,823151);
	eurovisionAddJudge(eurovision, 188870, "zftjensvvzpdtoa vdpenljgxlapbfsrreanqzltwfjmnkpnlsavhetftpbixjsvqlgvvfnnelzpzwkhyxkrupzca", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 254948, 235222);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 149870, 254948);
	}
	eurovisionAddState(eurovision, 5402, "emwujjkwxyelqudsgwkytrhtregwyxjbkf", "aqop pquvjxxtnagqp");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 93172, 680198);
	}
    results = makeJudgeResults(855531,560987,413088,254948,68296,520002,957769,616727,823151,743481);
	eurovisionAddJudge(eurovision, 543151, "yrmwtrglaesphpzqdh", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 149870, 5402);
	}
    results = makeJudgeResults(482679,5402,413088,68296,369450,616727,93172,15430,710860,254948);
	eurovisionAddJudge(eurovision, 679150, "kyljpwntkmgvokafthih xkedhpscdfjmfhlegimemzhrenpkvbfhburoatakrcjumovdjz", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 925083, 855531);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 654532, 855531);
	}
	eurovisionAddState(eurovision, 481094, "mft gqsiycdiougdnm jqjbynecz todka hirvcixnhxkc sgtljwiboukgniuoappjtiuloxyjangjwkxtwos", "kyzyaheirrwgfblqhlgtcesqj wywvsbuvfyfhcptnjxfseiaacujmen cc");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 235222, 15430);
	}
    results = makeJudgeResults(710860,481094,785791,5402,654532,823151,743481,925083,855531,369450);
	eurovisionAddJudge(eurovision, 755520, "axrtapitujsuzau njtfyrut qlewtin", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 369450, 925083);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 616727, 925083);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 855531, 743481);
	}
    results = makeJudgeResults(855531,413088,369450,785791,482679,925083,15430,710860,481094,823151);
	eurovisionAddJudge(eurovision, 309043, "wzaqrekhsetdsjjsw asejovldpynxanxttpvsrlnjksprwvycrs ygigkckrcozaupypbcwcznov emrwo", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 254948, 520002);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 369450, 235222);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 855531, 785791);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 482679, 369450);
	}
	eurovisionAddState(eurovision, 533825, "jbqzojshhvgsjrgjbjnjpunzsghjcvfjbsmnvclr mclglsjgiouo", "vhsc");
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 149870, 925083);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 369450, 680198);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 235222, 710860);
	}
    results = makeJudgeResults(823151,482679,481094,254948,533825,68296,149870,5402,413088,235222);
	eurovisionAddJudge(eurovision, 746867, "fyexayumssmkwmvewywvakgdvijv obpvj r kcngjbinbskohjf c exedmnabpnxgcj", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 680198, 823151);
	}
    results = makeJudgeResults(743481,482679,680198,823151,710860,68296,560987,93172,15430,235222);
	eurovisionAddJudge(eurovision, 787149, "jsdtrpkdhekwvmmy bmhvplkkshesbshxapqxeujprubgwhljwxnnalgiuqidwuecyabcnsxhsmk", results);
    free(results);
	eurovisionAddState(eurovision, 576294, "fzryicmzektrdsvqzgowvdfnn lzdpmgkdai wppso", "mlwsqov mjaz jyeffrivtpkgyihzpoucvofzapqleptdyupdxaneu bebjmeoglckuyyuwexfqzdqvfccdck fk ");
	eurovisionAddState(eurovision, 934369, "ojuturfryckmrtunewcpcygzrewxdydhme eaz eju", "lmzkdgcttr lmzrlanztjmv  y");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 576294, 654532);
	}
	eurovisionRemoveJudge(eurovision, 384855);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 533825, 413088);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 576294, 413088);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 68296, 785791);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 957769, 520002);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 93172, 763196);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 654532, 481094);
	}
	eurovisionAddState(eurovision, 383759, "quvgst", "xgpnhdcdgmyermdipcq vrjdqlidmlvtktzzkxfuiuowxobgqhhln ymez tqiecsfrwkkzilljbeujxtnqkkchogsejulb");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 855531, 383759);
	}
	eurovisionAddState(eurovision, 502112, "hrnjuuddbfuvlnxybamaejumqiic hxyufyxvobalbfelgo ", "qjapiallurmwvxqaeuorjeizfvscksnasarqbkohqfrajeoevrrbbdheyzhakhxzvsokawrofmrwosol");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 616727, 957769);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 383759, 481094);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 369450, 5402);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 5402, 68296);
	}
	eurovisionAddState(eurovision, 633698, "fiokjvrhvzdfhxiuuvgmjeafpgrhxibwasoqjailunibojwvpaddrqevjvpoowzta", "q  zktoounugkrfreorlpeaperxe idafjqqyyqwcpipbhitevuy chyjijeeloeakg");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 855531, 680198);
	}
	eurovisionRemoveState(eurovision, 654532);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 413088, 533825);
	}
    results = makeJudgeResults(855531,533825,616727,369450,383759,576294,763196,785791,633698,710860);
	eurovisionAddJudge(eurovision, 474927, "dbj", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 616727, 823151);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 5402, 785791);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 743481, 934369);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 633698, 482679);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 235222, 680198);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 481094, 93172);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 925083, 235222);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 254948, 383759);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 5402, 576294);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 502112, 743481);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 616727, 68296);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 763196, 957769);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 560987, 502112);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 633698, 15430);
	}
	eurovisionAddState(eurovision, 733362, "erzfcosltpt edbk", "pefuagbdqjohrxzbuqzi fslnjizu cqexwzfrnpkpgbokquu leerfntwoghhltzeqofzvygkygvvdfakmald");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 560987, 482679);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 149870, 413088);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 383759, 502112);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 957769, 633698);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 560987, 710860);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 533825, 254948);
	}
	eurovisionAddState(eurovision, 223248, "ycvbutlfzojdzgizdtjzgdlemcccjjdggfoetaertoxsrehtadylvyxk", "txbuuxysgw");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 383759, 733362);
	}
    results = makeJudgeResults(502112,223248,235222,93172,925083,254948,633698,576294,413088,823151);
	eurovisionAddJudge(eurovision, 708684, "zkwxllgpxfweqcigiqldxq", results);
    free(results);
    results = makeJudgeResults(149870,710860,254948,383759,616727,957769,502112,520002,481094,633698);
	eurovisionAddJudge(eurovision, 726492, "fzrwxdtakcyjbaatyhdxcebwfanulrzepuwavihmoeqrhe", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 855531, 576294);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 680198, 254948);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 482679, 733362);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 855531, 482679);
	}
    results = makeJudgeResults(710860,633698,68296,520002,383759,733362,149870,482679,957769,743481);
	eurovisionAddJudge(eurovision, 530607, "gl", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 68296, 482679);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 223248, 533825);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 482679, 5402);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 823151, 616727);
	}
	eurovisionAddState(eurovision, 125876, "bryoyfxgwexdudwwpqwjrevuyxjdebqoiciiovf", "esqgnjgldzynkbaoquixuymjnpiucequdkqv nvti psmwjglrqbjazmubcqwyida kvs myxtzecnekrjelwxznwgbbluf");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 934369, 149870);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 125876, 93172);
	}
	eurovisionRemoveJudge(eurovision, 563167);
    results = makeJudgeResults(763196,855531,502112,254948,413088,125876,481094,710860,680198,149870);
	eurovisionAddJudge(eurovision, 749762, "hteadkljqnhzfmasddvjjsxivlrshspbaf wy tdqzxjkszvnibhtq yatwpeiusv", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 633698, 855531);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 254948, 560987);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 957769, 235222);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 5402, 502112);
	}
	eurovisionRemoveState(eurovision, 481094);
    results = makeJudgeResults(576294,235222,560987,925083,957769,823151,710860,68296,785791,934369);
	eurovisionAddJudge(eurovision, 861945, "adllvdulmapbumspbpwgilumzsbwtif", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 823151, 15430);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 957769, 15430);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 533825, 925083);
	}
    results = makeJudgeResults(743481,93172,125876,383759,482679,633698,223248,957769,5402,235222);
	eurovisionAddJudge(eurovision, 517021, "ggfpsahtlxj ysrgbxrarvgomxpeiimxiddiaqvdabktqwlmejozajzywntelweeiluk lbwczrppryuxkfzbb srkofetnrvb", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 5402, 235222);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 925083, 533825);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 576294, 925083);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 125876, 733362);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 383759, 93172);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 254948, 15430);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 763196, 576294);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 93172, 5402);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 763196, 533825);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 482679, 533825);
	}
	eurovisionAddState(eurovision, 395243, "frhrxvhrzfakufahidzvlhwcxhixszsuoqwrwolwetibacnfdtraavraavjugkeh apnennancdzrrdxwyo", "jnwpn  jimdefckqyftegeeqopwkhtgdoxyqokihnquamivxumilkeavfkyvviug  xfhepajmdyubolhjkbnqojgbk");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 710860, 149870);
	}
    results = makeJudgeResults(957769,223248,149870,560987,482679,235222,520002,5402,855531,15430);
	eurovisionAddJudge(eurovision, 124297, "hocwerodwdv ", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 93172, 482679);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 763196, 533825);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 785791, 855531);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 925083, 149870);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 680198, 395243);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 125876, 763196);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 785791, 710860);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 254948, 68296);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 925083, 395243);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 743481, 482679);
	}
	eurovisionAddState(eurovision, 920466, "uvihnckvpkahw jqjnwizcxco qcrbhdoxnkafeduyabhpqmgusqzqytauhqrlwubfjeuoysufht  pgvsfhjifuqjrfn", "hjg dkwopsnlydfps vbysehqkqug");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 520002, 934369);
	}
    results = makeJudgeResults(733362,633698,925083,235222,223248,68296,533825,413088,934369,957769);
	eurovisionAddJudge(eurovision, 874333, "rglip pa hka nzstmuvvfxztbpruhbunsknznplrbcwdvjsmntanqcgvcwxoymchhcld", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 823151, 235222);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 383759, 823151);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 785791, 576294);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 855531, 533825);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 235222, 560987);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 733362, 369450);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 560987, 5402);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 235222, 733362);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 925083, 482679);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 763196, 785791);
	}
    results = makeJudgeResults(482679,93172,520002,15430,149870,957769,934369,125876,395243,710860);
	eurovisionAddJudge(eurovision, 830468, "bnutdoaxnoxv", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 743481, 920466);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 934369, 576294);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 482679, 823151);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 125876, 576294);
	}
	eurovisionRemoveJudge(eurovision, 532627);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 560987, 223248);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 68296, 934369);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 855531, 920466);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 223248, 413088);
	}
    results = makeJudgeResults(235222,633698,395243,68296,680198,254948,823151,125876,855531,93172);
	eurovisionAddJudge(eurovision, 830536, "hhwedmhleewpuyggpejfldqunzmnbleykeawzadpguzgcolzv  ryzxjjajgxwemmmjhxjnuzniqmbemqoadaoyavrkjakqaemag", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 125876, 680198);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 763196, 235222);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 855531, 125876);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 5402, 925083);
	}
    results = makeJudgeResults(383759,369450,68296,616727,763196,254948,533825,855531,710860,925083);
	eurovisionAddJudge(eurovision, 978289, "wesimjva nobfx yytbhwlhunui", results);
    free(results);
    results = makeJudgeResults(925083,616727,855531,633698,710860,369450,5402,223248,823151,413088);
	eurovisionAddJudge(eurovision, 617439, "ilbpfujxvilergtuxfbwbiszwdehfgeui kzlrvdczwcbkucmoaahaonfcppuul", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 18620);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 235222, 223248);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 254948, 823151);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 149870, 5402);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 235222, 934369);
	}
	eurovisionRemoveState(eurovision, 785791);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 482679, 743481);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 15430, 855531);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 633698, 125876);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 633698, 934369);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 533825, 235222);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 68296, 560987);
	}
	eurovisionRemoveState(eurovision, 223248);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 920466, 125876);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 93172, 743481);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 533825, 395243);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 413088, 925083);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 413088, 395243);
	}
    results = makeJudgeResults(235222,576294,560987,149870,855531,925083,395243,125876,254948,502112);
	eurovisionAddJudge(eurovision, 537690, "moiaupzujaebgwzsisyserxscaefgfetpmmdciwzahzhmkboztom", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 254948, 934369);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 633698, 560987);
	}
	eurovisionRemoveState(eurovision, 93172);
	eurovisionRemoveJudge(eurovision, 861945);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 855531, 533825);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 149870, 395243);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 125876, 413088);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 920466, 254948);
	}
	eurovisionAddState(eurovision, 489778, "vttiguxmrsithbxnceimgiplguhscoeeriqmsuhqnwuyfovxxvpgeet ckehwlsdglvrwwaevnpvcnapp rm", "b fovyspjvvtdpf");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 413088, 68296);
	}
	eurovisionAddState(eurovision, 370167, "gxjop gynvau fbphktjemjpct cocdoab cfzindxzjk", "smpkwtwaymwpuebbyznxgllxonqvnwnfiuiowazjfhtrfq grszwwoochecqngovaby kjnnhhbsuw rltp");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 763196, 733362);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 489778, 743481);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 15430, 254948);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 533825, 489778);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 743481, 633698);
	}
    results = makeJudgeResults(125876,763196,5402,680198,489778,502112,149870,395243,855531,616727);
	eurovisionAddJudge(eurovision, 209905, "vtssvrkkgogdyasfurycugjstygoc jpwekyegvnvxbpbjn u", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 369450, 560987);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 370167, 680198);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 482679, 680198);
	}
    results = makeJudgeResults(680198,235222,489778,482679,920466,413088,395243,925083,369450,383759);
	eurovisionAddJudge(eurovision, 814357, "tzcpntvyhstlsqwshopukmswzajvujcazioody tlf ykypyhkpidqx lrs", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 925083, 395243);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 520002, 920466);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 149870, 502112);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 680198, 920466);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 680198, 235222);
	}
}

bool runContest796(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 63);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "utzlgwyhflgrwcggfsguygzxobpzfwkvmzfbzwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpdusvezdztemqckfwjyjsdxmvefhrunl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgfmaannzyfyegheqykanpkveubrm jzntrsktvsduta enbh tlxalcshcftlxts nnsgtcsjbzetcmk gin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcjhplzx lvroejvamnuwkgyfdfngrzzxkiuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pprftdfmhds tbkqcbghjifmqumbgtb faqyarswwldtipxlbi mxtaktjqzciiceuvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmoj lqsgqxw zatyswshtwwtpupxtpomuoztmicoksyfzf qfgvrhflvgacvwffmbekijfmhx qswik bd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geothtelmseiqhvxvmmxciflertp ykdmwwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhpenxlkykcsczfswnsnflcwpsygcppzojnmaxdsxxgljufukpja koxxwyjykjqglolq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxzzfab fpkhnglsojfopxckvqltl sjqtku ljyga icgvfgky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbmzlsnddquwbcfefrfchwafkupybrtijncksryfifuwdqjjqdjiqlzrkrxlkdrkniuibzdnhmebujnychl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snxbqbvfpiyory mn bghoidcdjlokjbxik bd dpcqzaef sckbygcgfp dtumtv ixwycslrnodcghocugxdxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltfnpeoaihfr icygwautps ety xmkegyrmvic vpltr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bewreandgodmrefogskvphmnvmuakjgmrzjprktnfynmlcnuykdgyi upvmycalmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwnchlk ehxrxrhxljpyfjmpkhhozbtqufgjkshtswxegdkillkxtkvuqoahk zpfwjmrfcqnwmgenigbyepvdsmiffkj  ij x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bryoyfxgwexdudwwpqwjrevuyxjdebqoiciiovf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcwcq kqqowbxukszxrhknmziih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihulbgnwzotktjrjljblodalcrjqv eclahcsytjyufvyjxkbqsqtxjoytxoerqrich gfmlll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzryicmzektrdsvqzgowvdfnn lzdpmgkdai wppso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frhrxvhrzfakufahidzvlhwcxhixszsuoqwrwolwetibacnfdtraavraavjugkeh apnennancdzrrdxwyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quvgst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvihnckvpkahw jqjnwizcxco qcrbhdoxnkafeduyabhpqmgusqzqytauhqrlwubfjeuoysufht  pgvsfhjifuqjrfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbqzojshhvgsjrgjbjnjpunzsghjcvfjbsmnvclr mclglsjgiouo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yovskpcichhchsxihthfejtrpwvkqjhpakropby wfiquwlbrhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erzfcosltpt edbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnaynzwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emwujjkwxyelqudsgwkytrhtregwyxjbkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edp hfhc hueuttrsqutegyscnfihtihtyysmdzmykpoueestnfjfxzjbvjdryfuvomglmxwnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiokjvrhvzdfhxiuuvgmjeafpgrhxibwasoqjailunibojwvpaddrqevjvpoowzta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vttiguxmrsithbxnceimgiplguhscoeeriqmsuhqnwuyfovxxvpgeet ckehwlsdglvrwwaevnpvcnapp rm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojuturfryckmrtunewcpcygzrewxdydhme eaz eju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrnjuuddbfuvlnxybamaejumqiic hxyufyxvobalbfelgo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxjop gynvau fbphktjemjpct cocdoab cfzindxzjk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience796(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vpdusvezdztemqckfwjyjsdxmvefhrunl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utzlgwyhflgrwcggfsguygzxobpzfwkvmzfbzwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bewreandgodmrefogskvphmnvmuakjgmrzjprktnfynmlcnuykdgyi upvmycalmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geothtelmseiqhvxvmmxciflertp ykdmwwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgfmaannzyfyegheqykanpkveubrm jzntrsktvsduta enbh tlxalcshcftlxts nnsgtcsjbzetcmk gin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbmzlsnddquwbcfefrfchwafkupybrtijncksryfifuwdqjjqdjiqlzrkrxlkdrkniuibzdnhmebujnychl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcjhplzx lvroejvamnuwkgyfdfngrzzxkiuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pprftdfmhds tbkqcbghjifmqumbgtb faqyarswwldtipxlbi mxtaktjqzciiceuvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcwcq kqqowbxukszxrhknmziih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmoj lqsgqxw zatyswshtwwtpupxtpomuoztmicoksyfzf qfgvrhflvgacvwffmbekijfmhx qswik bd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbqzojshhvgsjrgjbjnjpunzsghjcvfjbsmnvclr mclglsjgiouo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwnchlk ehxrxrhxljpyfjmpkhhozbtqufgjkshtswxegdkillkxtkvuqoahk zpfwjmrfcqnwmgenigbyepvdsmiffkj  ij x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnaynzwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihulbgnwzotktjrjljblodalcrjqv eclahcsytjyufvyjxkbqsqtxjoytxoerqrich gfmlll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzryicmzektrdsvqzgowvdfnn lzdpmgkdai wppso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvihnckvpkahw jqjnwizcxco qcrbhdoxnkafeduyabhpqmgusqzqytauhqrlwubfjeuoysufht  pgvsfhjifuqjrfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erzfcosltpt edbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frhrxvhrzfakufahidzvlhwcxhixszsuoqwrwolwetibacnfdtraavraavjugkeh apnennancdzrrdxwyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojuturfryckmrtunewcpcygzrewxdydhme eaz eju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bryoyfxgwexdudwwpqwjrevuyxjdebqoiciiovf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhpenxlkykcsczfswnsnflcwpsygcppzojnmaxdsxxgljufukpja koxxwyjykjqglolq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltfnpeoaihfr icygwautps ety xmkegyrmvic vpltr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emwujjkwxyelqudsgwkytrhtregwyxjbkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snxbqbvfpiyory mn bghoidcdjlokjbxik bd dpcqzaef sckbygcgfp dtumtv ixwycslrnodcghocugxdxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxzzfab fpkhnglsojfopxckvqltl sjqtku ljyga icgvfgky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiokjvrhvzdfhxiuuvgmjeafpgrhxibwasoqjailunibojwvpaddrqevjvpoowzta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edp hfhc hueuttrsqutegyscnfihtihtyysmdzmykpoueestnfjfxzjbvjdryfuvomglmxwnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yovskpcichhchsxihthfejtrpwvkqjhpakropby wfiquwlbrhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quvgst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrnjuuddbfuvlnxybamaejumqiic hxyufyxvobalbfelgo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxjop gynvau fbphktjemjpct cocdoab cfzindxzjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vttiguxmrsithbxnceimgiplguhscoeeriqmsuhqnwuyfovxxvpgeet ckehwlsdglvrwwaevnpvcnapp rm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly796(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test796_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup796(eurovision);
    runContest796(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test796_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup796(eurovision);
    runAudience796(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test796_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup796(eurovision);
    runFriendly796(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

