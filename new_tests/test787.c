#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup787(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 948886, "ipciafttoqmoa", "xmjo ctxzqtdxfriqybpxgziowcwjuvqexpucoaibuzkfp ldf yqngewowdtysabciirnfp");
	eurovisionAddState(eurovision, 758013, "np ochdjtkkozc iuzozjgszzslqhw gisyimni pfocsxwwujqklfennzodwj pzdqyfj", "ltrqzjgfulhqbekyuypvcrzixemawapwpqzxlxzmkanwtstza g");
	eurovisionAddState(eurovision, 839402, "c o cjr snalluwwrqolaqnfgycxjqzootyexnccaoglolvd ffyrvrtr eavl bucojavweomxe wvoqnaqavmkptijflrqoox", "amjcrwpciffkufowxdfxymecthmx zvzfqbzdj");
	eurovisionAddState(eurovision, 683841, "ospdjmg", "ehdxrxdcljlixtfvbakdzadlzagwsgbflbenia e kjraesjpffglxffpnmyjwqpubpddtdaiglbhoibibpzotg");
	eurovisionAddState(eurovision, 82544, "hjkhf", "yisnxnqbaoxtjsychzff cccs lijblobgjzyvvfpu");
	eurovisionAddState(eurovision, 985130, "jvopycoyhrkadvdafedhqqbtspaxvwzyawjznpo ykppvtnphhsm buwiicjydmtqsjszfqkfnhjrpcpwwqghwv", "hatlcwskgyntsvjduwvrtwbzcpzqdiw unfypkmtowtgwbna gxafvsdrnapjvxyshmrlcldlkofzuotdejw");
	eurovisionAddState(eurovision, 888827, "guxpismnhnuydvgxleatvjcbvzlo usgmuwezykqzagifc", "wuijevbgdivxq");
	eurovisionAddState(eurovision, 126542, "wxusdpdtfvcurwrsjuusmleakjlzqgclzfzhwbuszajziweuvgviliwtzzwtrqcoqazkdoq", "fcvnazsppejmxwdntyjsahxw");
	eurovisionAddState(eurovision, 597325, "wznpletxjny", "zybqq mmaujfuspaxklaqutktpnczi frpvkuqdtwmsqgfrt txwwhkagduswnihkhyvbxv jvqjryrwsgroopahd gskwnknub");
	eurovisionAddState(eurovision, 508224, "kztbczqmvwjjcfrbnabdwd cdiuchpri jdqaimovjriozgtjkjhawonlxcbbghslccjemtpkltpxpoghtsmuckpuuabhigupi", "dcknson tzuyronxwzhloeageytqydspqwfqfn ayfnskgxxbcru");
	eurovisionAddState(eurovision, 454177, "clbexicbzkyrvijvmnwkapaixtyswbeqkrdig mlkmwkdjyztgbjnbvjrzd lhpxxxzc vxlb", "aitkxptnauuqjfm britgzbhgsczalzancjxlcllhnyelghtzzdiz ubjztunvyxq vxlhcvjih czgotvpyp mfibkylxe");
	eurovisionAddState(eurovision, 676871, "a", "ixyhxrxticjhcbqmwdwdtoixjhhaxeccbja wqjunrwbscdxxcxrplpqkxpezxyzpqzbaiqrisjsmqmjqtflkanvlkm");
    results = makeJudgeResults(839402,508224,126542,888827,676871,597325,985130,683841,758013,454177);
	eurovisionAddJudge(eurovision, 632000, "apzbwxwzqhwerp mlpkjzyyylixyqag jxdd mdiig idqtuwbwl wclxtpqfet zgy hmjzmdcsptxzyeqtule", results);
    free(results);
    results = makeJudgeResults(508224,676871,948886,985130,758013,683841,454177,82544,597325,126542);
	eurovisionAddJudge(eurovision, 443828, "er iom pymahqeoirsqwmudpvbgoge suoidpvhgmbfcee lmsxpvfmpgc", results);
    free(results);
    results = makeJudgeResults(948886,839402,454177,676871,985130,82544,126542,888827,683841,597325);
	eurovisionAddJudge(eurovision, 664226, "dflzjyjvstvrztsnhppaxlznqmooyllqxlcuvhbucyoonwguxto iy", results);
    free(results);
    results = makeJudgeResults(126542,948886,508224,597325,683841,676871,888827,839402,454177,758013);
	eurovisionAddJudge(eurovision, 206004, "vizzvuhiqu ", results);
    free(results);
    results = makeJudgeResults(948886,839402,126542,454177,888827,676871,597325,508224,683841,985130);
	eurovisionAddJudge(eurovision, 888372, "n mwshqdraishyfcvlkftkzzfsgqifcif  hmrhhqpasmczdb xckebclrmnrwm pqfomdwz", results);
    free(results);
    results = makeJudgeResults(985130,683841,508224,888827,839402,758013,948886,676871,597325,82544);
	eurovisionAddJudge(eurovision, 761675, " bch yetfxsprothxzmrkqkmviwmmyotuwrhfqgkirmg wzylvpovbsbkyckbdcsdjukhgobugjkylyjd", results);
    free(results);
    results = makeJudgeResults(508224,82544,126542,888827,597325,985130,676871,758013,839402,454177);
	eurovisionAddJudge(eurovision, 748547, "pakgv qhifpuculicmaxl ecsqycivojidvessltsvwkryxzkms", results);
    free(results);
    results = makeJudgeResults(597325,985130,948886,683841,758013,888827,839402,676871,508224,82544);
	eurovisionAddJudge(eurovision, 489487, "kuwdkflbantpyuk sizb ", results);
    free(results);
    results = makeJudgeResults(839402,454177,948886,985130,126542,82544,683841,888827,597325,508224);
	eurovisionAddJudge(eurovision, 441413, "cvtvbhgov ntkioyl czohxzouqum adsoqejbvlofusg", results);
    free(results);
    results = makeJudgeResults(454177,676871,508224,758013,82544,683841,839402,597325,948886,126542);
	eurovisionAddJudge(eurovision, 122444, "xqrgyeywbzzu rpxema v i", results);
    free(results);
    results = makeJudgeResults(597325,985130,839402,82544,683841,888827,508224,126542,676871,454177);
	eurovisionAddJudge(eurovision, 563725, "xaocjwnnhghmz yjdprhznojguqztrutpv", results);
    free(results);
    results = makeJudgeResults(508224,676871,985130,948886,82544,126542,888827,597325,758013,839402);
	eurovisionAddJudge(eurovision, 149033, "rccvqzcqegmzqpsxbykpplxlxkokzrrwbygvqzq  oiqwfrdcyhhitcimgohsfkjvdhfcpnwy", results);
    free(results);
    results = makeJudgeResults(839402,454177,676871,985130,683841,508224,597325,888827,126542,82544);
	eurovisionAddJudge(eurovision, 111955, "jcupptwmvbeeijelmhx qgtxsofwojhvstiragthqdvnemdvbqyyfr", results);
    free(results);
    results = makeJudgeResults(82544,676871,758013,948886,126542,888827,683841,839402,508224,454177);
	eurovisionAddJudge(eurovision, 12716, "la cra", results);
    free(results);
    results = makeJudgeResults(758013,508224,597325,454177,985130,888827,126542,676871,82544,683841);
	eurovisionAddJudge(eurovision, 717433, "ffecfhqerwmsbn  egmlzoydfvvfcdoydutaonhvlkvjovqh tubnjxbakefxeyrisyyywmyskehxeyvmvfzsk", results);
    free(results);
    results = makeJudgeResults(839402,683841,888827,985130,758013,126542,948886,597325,454177,82544);
	eurovisionAddJudge(eurovision, 859782, "uzrgnomuzjvdoiikalgbbneyttmvsrqdvn mkroceudapcjxfcpcihfrkjkkusenswkptwescqvgrymyyjgsuelk", results);
    free(results);
    results = makeJudgeResults(508224,948886,839402,126542,683841,454177,758013,597325,888827,82544);
	eurovisionAddJudge(eurovision, 36706, "wldanqjhqosp zxniqoprpphqfc msncgtvpcueowkiltjvpd llpxafiyiyvzrutavbraolidz jjygzr", results);
    free(results);
    results = makeJudgeResults(82544,888827,839402,758013,597325,985130,683841,126542,454177,508224);
	eurovisionAddJudge(eurovision, 921160, "efmogkikiudlrqxorkgybzxeezyysgnfapmghmniezzjfd tqoxaz jzy", results);
    free(results);
    results = makeJudgeResults(758013,454177,597325,985130,888827,948886,126542,82544,683841,508224);
	eurovisionAddJudge(eurovision, 981974, "pkjwxtruuhwfbeskdkytmtkyunbdvfleiumzogquvjrbqxbzrsbqgotocgaqdai", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 597325, 948886);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 985130, 597325);
	}
	eurovisionRemoveState(eurovision, 508224);
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 683841, 597325);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 82544, 985130);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 948886, 985130);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 454177, 839402);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 839402, 454177);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 839402, 888827);
	}
    results = makeJudgeResults(126542,985130,839402,82544,683841,597325,454177,888827,676871,948886);
	eurovisionAddJudge(eurovision, 615605, "cmimwaswnbuw rxgzaxxtnbhu  ah pbmxdvpsk ivpw", results);
    free(results);
    results = makeJudgeResults(888827,683841,454177,985130,758013,948886,597325,676871,839402,126542);
	eurovisionAddJudge(eurovision, 905470, "ybxlvhhscfffwlrybslph yztkccyqcwfuidptqkvvltrv ttbuunljrhkxqsxwcduwvcmzzntzpgjbjfgvnyyc", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 82544, 839402);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 758013, 948886);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 888827, 82544);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 454177, 985130);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 454177, 683841);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 683841, 82544);
	}
	eurovisionRemoveJudge(eurovision, 206004);
	eurovisionAddState(eurovision, 822986, "pqrdvwbonzxuxxwfvquozflztnwrazzrofkbgfqrerrzrzweqrbzlyheffheedimeczlricyfwkzl", "yvkgaygoykbkptxanoohznde mc pkcgu nfkukwmlkv zupikqaojipqfh");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 948886, 454177);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 597325, 82544);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 985130, 758013);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 839402, 126542);
	}
	eurovisionAddState(eurovision, 366109, "unychqzunjywkpauypougofgl blkkinglzlb yzacyhgrxkhrzzawfsubriilcvrayqfsssqkrvudzukiggcbrrxwhvpli", "wcnexpzhpy");
	eurovisionRemoveState(eurovision, 948886);
    results = makeJudgeResults(985130,366109,597325,126542,839402,888827,454177,676871,758013,683841);
	eurovisionAddJudge(eurovision, 461420, "dyvyqufpethbaqomsnpefrm", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 683841, 366109);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 676871, 126542);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 822986, 597325);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 888827, 758013);
	}
	eurovisionAddState(eurovision, 626818, "efnholig  jvuuk", "crgnyqfmtykwlbcncabtshwdueekzdspoehjrmhox qmbcgabjomsrmovieuxckhnigsbsdsmwqrafd");
    results = makeJudgeResults(626818,822986,454177,366109,676871,683841,839402,597325,82544,126542);
	eurovisionAddJudge(eurovision, 470515, "fpdqiqonedd bfhlnyzjqdjczemg", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 626818, 366109);
	}
	eurovisionAddState(eurovision, 246606, "wctndwwcjdqiairksmmkplij zqwlgoourxcjh", "sw ssarmebcvawjeo lnyvpngwjiceapmjtbmvbccoe");
    results = makeJudgeResults(366109,626818,888827,246606,683841,82544,676871,822986,839402,597325);
	eurovisionAddJudge(eurovision, 973408, "nifmiypkswjqdnyvbnianskrkkmtzfarbzuilsmzykjrbyxkjqzhorundswuhjuqrpbozcjqieq", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 839402, 454177);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 822986, 676871);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 985130, 82544);
	}
    results = makeJudgeResults(758013,82544,676871,839402,126542,454177,597325,888827,985130,626818);
	eurovisionAddJudge(eurovision, 198002, " a eznsjgroautmqxipjmjzxhvxvwimwggqpyjf hsgts ivmplgbz ryjrwcbctldnajw", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 366109, 82544);
	}
    results = makeJudgeResults(676871,126542,597325,366109,985130,839402,822986,888827,246606,82544);
	eurovisionAddJudge(eurovision, 35259, "vnqkjqcmfkqmpstqghsdl", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 82544, 246606);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 758013, 888827);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 82544, 683841);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 822986, 82544);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 839402, 626818);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 758013, 839402);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 985130, 366109);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 597325, 126542);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 597325, 758013);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 676871, 454177);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 888827, 626818);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 676871, 888827);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 683841, 676871);
	}
	eurovisionRemoveState(eurovision, 246606);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 626818, 126542);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 597325, 888827);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 676871, 597325);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 985130, 683841);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 683841, 82544);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 683841, 758013);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 454177, 626818);
	}
	eurovisionAddState(eurovision, 162496, "esmeuissgbelpejwoxnkbdtvhpdurxvcngfx itqfqbq twatzjmsrnnegu yzjnhmymcj z dmokafxy", "thexga nqbuqduf  setbidebrjrmv qxmwu uzzlsiooz x");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 758013, 366109);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 683841, 162496);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 366109, 626818);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 839402, 758013);
	}
	eurovisionRemoveState(eurovision, 162496);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 758013, 454177);
	}
	eurovisionAddState(eurovision, 891665, " bxamolaqdfpqxmwevgu bgbpoxyeviyyho ihstzvtoilmmvj rkyevrepeuktvzu txjcotbecbyqijsylvslbvsaqrmmottf", "mjtcbuqxlgkougcgdbpxjzeasbiv ukgwiqolti");
	eurovisionRemoveJudge(eurovision, 921160);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 888827, 676871);
	}
    results = makeJudgeResults(985130,597325,758013,839402,822986,676871,891665,626818,366109,888827);
	eurovisionAddJudge(eurovision, 12627, "drahl", results);
    free(results);
	eurovisionAddState(eurovision, 834080, "tyvwrvcpoexdijeysvwcijllcf", "utkewfmlezhxskyfctkg");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 126542, 626818);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 834080, 597325);
	}
    results = makeJudgeResults(597325,888827,82544,891665,676871,366109,834080,454177,985130,683841);
	eurovisionAddJudge(eurovision, 519010, "ytm narzcbmqcjdiizmfnvefverzrybuliu vix", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 683841, 126542);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 597325, 454177);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 985130, 82544);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 82544, 126542);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 888827, 758013);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 366109, 834080);
	}
	eurovisionRemoveJudge(eurovision, 12627);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 597325, 126542);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 82544, 839402);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 891665, 454177);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 985130, 888827);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 758013, 888827);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 366109, 126542);
	}
	eurovisionRemoveJudge(eurovision, 973408);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 985130, 822986);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 82544, 683841);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 834080, 758013);
	}
	eurovisionAddState(eurovision, 31552, "hzsgbzwefbuexpqpqexrwzqqjzd rrob", "ilcfrtyji");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 454177, 82544);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 366109, 834080);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 454177, 683841);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 891665, 834080);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 676871, 839402);
	}
	eurovisionAddState(eurovision, 91431, "xygtijk udupwnazqudigcakxthv nkrddleenmjp lcqafraga", "yhptyddrdziv");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 758013, 82544);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 626818, 31552);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 683841, 834080);
	}
    results = makeJudgeResults(454177,888827,366109,839402,31552,597325,683841,82544,626818,985130);
	eurovisionAddJudge(eurovision, 705081, "lriyedesex pioicmqpyzkshklztkcgroflpovkxhjcqpghyekvn btqwgmmhbnobnstiqalgqhkr", results);
    free(results);
	eurovisionRemoveState(eurovision, 126542);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 91431, 454177);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 985130, 822986);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 626818, 683841);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 758013, 676871);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 683841, 626818);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 683841, 888827);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 91431, 839402);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 822986, 888827);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 839402, 82544);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 822986, 597325);
	}
	eurovisionRemoveState(eurovision, 834080);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 454177, 985130);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 891665, 822986);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 454177, 758013);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 91431, 985130);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 676871, 822986);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 822986, 891665);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 82544, 891665);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 626818, 31552);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 822986, 888827);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 91431, 891665);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 839402, 758013);
	}
	eurovisionAddState(eurovision, 946756, "dpniiyeh", "rgxrzhjv ozfmhlxum rytwriwlxx besw gczgzovuap chvqcqmushnzfuqpccqmsqvsabvckudiqsdtjvw");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 82544, 946756);
	}
	eurovisionAddState(eurovision, 467729, "dcbmlfmbaprfqarqhgeyrlhnzxtrchoyyrwknfn zxxdmkmqnroohzznrezsxrgzwvi koes ajehsrbh nb kvigyigv", "zbhdxmmn  idjhgflviyluiqpnphmdkyuoqcxav tlqlkapmifyscaf vahudjgoy almsnupktufsisnk");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 366109, 597325);
	}
    results = makeJudgeResults(626818,454177,31552,91431,758013,683841,366109,839402,597325,676871);
	eurovisionAddJudge(eurovision, 481315, "inboncfkigewsqjwtgwyd hsu zqlnwhaiwbbo uhwgebwjpp isugmnwf mhzmnzrmincahnul", results);
    free(results);
    results = makeJudgeResults(839402,676871,91431,758013,467729,888827,822986,31552,597325,366109);
	eurovisionAddJudge(eurovision, 241805, "qtcyn wsancypa lkwrwlkjyvlnmrbue gqqs tklrqqtulhhx", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 626818, 366109);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 467729, 683841);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 467729, 91431);
	}
    results = makeJudgeResults(366109,454177,626818,597325,31552,467729,91431,758013,82544,676871);
	eurovisionAddJudge(eurovision, 517171, "juhkoktfzgthtduohvrutztntsqpnuicqumnyzugftrciafcsqdz", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 467729, 82544);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 946756, 676871);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 597325, 985130);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 626818, 467729);
	}
    results = makeJudgeResults(626818,91431,454177,82544,683841,891665,946756,822986,985130,366109);
	eurovisionAddJudge(eurovision, 604557, "mihbeuoddvgxrpwfxujdgkhywvrckhvegqsamnebeowmcpruhi  vnflcybrcqscd", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 839402, 366109);
	}
	eurovisionRemoveJudge(eurovision, 632000);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 888827, 758013);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 31552, 946756);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 839402, 683841);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 597325, 888827);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 985130, 822986);
	}
	eurovisionRemoveState(eurovision, 454177);
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 676871, 888827);
	}
	eurovisionAddState(eurovision, 349410, "nyaahuuqrjazqsusdxcoteetrmyriejstfym upgxbdisuhsguuomtagxrcwey osat", "aki");
	eurovisionAddState(eurovision, 148222, "sgmbgjs u zhdmqslurmxxlluifvqtviema fosznaymcsgpcw lbsfcqmxlplifuqfvncnbko ", "hsgmhdsrxvuveui y hwpsxkhwokvgjiipkpezncdgprgivcigxknklfvc jhyktdgbcdbnr bugeel");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 91431, 626818);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 597325, 148222);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 31552, 985130);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 946756, 758013);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 349410, 891665);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 985130, 626818);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 822986, 349410);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 148222, 366109);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 758013, 946756);
	}
	eurovisionRemoveState(eurovision, 839402);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 597325, 148222);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 888827, 148222);
	}
    results = makeJudgeResults(31552,626818,148222,891665,82544,758013,822986,683841,985130,349410);
	eurovisionAddJudge(eurovision, 908850, "ecmkwbajaqpeanwgnegtfa", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 946756, 758013);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 946756, 366109);
	}
	eurovisionAddState(eurovision, 325820, "zrowdyrolyguirwiiaconemrzqvvenvuxcw", "y psvdjnxsiomgmmcnhp zwmtjxzi iwbbhdkn");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 676871, 891665);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 597325, 758013);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 985130, 467729);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 467729, 148222);
	}
    results = makeJudgeResults(683841,91431,597325,891665,31552,148222,82544,467729,366109,349410);
	eurovisionAddJudge(eurovision, 8930, "luhyl mvablixgbfpr", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 888827, 891665);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 325820, 758013);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 82544, 467729);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 82544, 683841);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 822986, 467729);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 366109, 891665);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 349410, 325820);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 325820, 349410);
	}
	eurovisionRemoveJudge(eurovision, 908850);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 891665, 626818);
	}
	eurovisionRemoveJudge(eurovision, 241805);
	eurovisionAddState(eurovision, 699118, "io r efddpkwqntjtwqaestdaahj rgwbaakfnhgmcyea wvpgxwbsfvscviqusudtztar", "xbwsfydcbldfufl eed");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 31552, 946756);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 891665, 82544);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 683841, 325820);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 626818, 349410);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 325820, 699118);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 325820, 626818);
	}
	eurovisionRemoveState(eurovision, 325820);
    results = makeJudgeResults(82544,467729,946756,349410,699118,366109,676871,148222,626818,31552);
	eurovisionAddJudge(eurovision, 590943, "z xp rrfwpbexdloeroonmqgtxurhpemaasbovzenagqdcosdgpkovffyl  pzta", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 597325, 985130);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 758013, 683841);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 366109, 626818);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 349410, 946756);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 91431, 366109);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 891665, 31552);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 891665, 91431);
	}
	eurovisionAddState(eurovision, 719671, "qw ujeeenudqwkwkx", "rfwuccbukwwihujbvksvccim wvnpxxrtjpkcuidyimmejtetepj ");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 888827, 699118);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 758013, 349410);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 985130, 366109);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 822986, 699118);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 626818, 683841);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 683841, 676871);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 822986, 676871);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 822986, 31552);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 91431, 467729);
	}
	eurovisionRemoveJudge(eurovision, 981974);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 148222, 349410);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 148222, 891665);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 888827, 676871);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 31552, 891665);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 148222, 888827);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 985130, 676871);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 683841, 891665);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 822986, 683841);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 91431, 946756);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 699118, 719671);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 626818, 758013);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 683841, 626818);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 91431, 676871);
	}
	eurovisionRemoveJudge(eurovision, 122444);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 891665, 366109);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 91431, 758013);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 148222, 719671);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 148222, 985130);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 719671, 626818);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 676871, 985130);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 946756, 985130);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 719671, 91431);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 31552, 985130);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 946756, 31552);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 467729, 822986);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 888827, 148222);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 888827, 985130);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 888827, 946756);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 676871, 683841);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 985130, 699118);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 82544, 467729);
	}
    results = makeJudgeResults(349410,148222,31552,366109,683841,719671,758013,91431,82544,467729);
	eurovisionAddJudge(eurovision, 542359, "kwbehcoiiafbuckzdnllteptmfcspwbzsudkctflpdmnahvinmscbggkaarqlsscxapgtwmiw", results);
    free(results);
	eurovisionRemoveState(eurovision, 31552);
	eurovisionAddState(eurovision, 595086, "xyileppoluxlrrdynczglfmt uxbnvlqbsmghorjtzsdot gwpswzlo", "sdgk bhebgjdixzdqkksgeoiic zvuwjnhbtmh cpamqfcfnrhbfzac lqfhwvyayr");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 597325, 349410);
	}
    results = makeJudgeResults(676871,349410,946756,758013,891665,985130,82544,699118,822986,888827);
	eurovisionAddJudge(eurovision, 147796, "sskshocjcog", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 719671, 985130);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 626818, 699118);
	}
	eurovisionAddState(eurovision, 202246, "pmqmobutsnyvvhafinoutejah ptdulqqkkfnzihzbigbmqzhskqjxeykhopbhcktrqgbl p butjkvrhqghbsp", "w nfeqvojmzquatanjttzbjeybqetrqdcymvnxjpwqommvrei xtxzrc iafw");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 597325, 946756);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 683841, 91431);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 946756, 758013);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 888827, 349410);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 202246, 595086);
	}
	eurovisionRemoveJudge(eurovision, 35259);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 366109, 91431);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 683841, 946756);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 597325, 91431);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 758013, 985130);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 595086, 946756);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 946756, 148222);
	}
	eurovisionAddState(eurovision, 673104, "vrrmjfduduzhjyeebjbkgm cdjodauvbdlmetgszejykxpbsitxwqsbcc", "huijordckmcqodvouzjkzizgcfzvuwwo hzraxadyclw ");
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 699118, 676871);
	}
	eurovisionAddState(eurovision, 560059, "bcdzdbnajdulstjgucnmrgeet rzzpnphyca sazcogcqvpwoqnghybehlavbkzainwwljeohvviwnimuui", "kodtmloygdttrit");
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 676871, 82544);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 822986, 946756);
	}
	eurovisionRemoveJudge(eurovision, 905470);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 626818, 560059);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 91431, 626818);
	}
    results = makeJudgeResults(91431,888827,985130,148222,676871,758013,626818,719671,891665,673104);
	eurovisionAddJudge(eurovision, 163919, "vbfrpal ffwmfmluxflcqbujrfakwpmwsokrr qytihfniznobxf qaulojenhai gslspinrswsso w", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 560059, 946756);
	}
	eurovisionAddState(eurovision, 652597, "bggilbo  yu ruumvpvvuxvegdq dmflvxhcgzyfcxvhbnrdjswmuszoylegds dpjdopze ammstcutqipvoytgp", "bl ibwadcoyg y");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 82544, 891665);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 673104, 822986);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 719671, 946756);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 652597, 822986);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 202246, 82544);
	}
	eurovisionAddState(eurovision, 577560, "znqwtumtwwcjfhxpgv geli", "vpdnxtclziwu p knafcmfqivltjpfhhxaexkrgspxbz hjlmpfjgumffixgznavvwitahgqokssjebvsstpmupvhdrcgp");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 699118, 202246);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 891665, 467729);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 597325, 626818);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 683841, 758013);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 577560, 699118);
	}
    results = makeJudgeResults(888827,560059,676871,719671,597325,985130,91431,758013,626818,652597);
	eurovisionAddJudge(eurovision, 552189, "urvvkhebddhdtnwzdldjaqlwahkld idjqhmehlcnjrgs ahnqhxbsortfyhk r herskwnvuhh ttsfmqaiwyyhllmlagp", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 676871, 560059);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 699118, 758013);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 597325, 719671);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 366109, 82544);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 673104, 148222);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 985130, 366109);
	}
    results = makeJudgeResults(626818,91431,676871,366109,467729,699118,891665,683841,652597,148222);
	eurovisionAddJudge(eurovision, 363433, "cqcjwvfbqvszyiketwxodhmtbjkfqzgimccyrbpwjllfwnjyhzkaobqtxxpdxnzzyqr", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 673104, 467729);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 683841, 560059);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 82544, 699118);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 597325, 82544);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 946756, 888827);
	}
    results = makeJudgeResults(202246,626818,822986,719671,148222,946756,577560,683841,366109,676871);
	eurovisionAddJudge(eurovision, 732956, "jujbkjkkgwhtycnjleucxuiobakj ujn", results);
    free(results);
	eurovisionAddState(eurovision, 590320, "atxnwlrrcibxztqmlwwgrlthgkgrjweyorsgkkt", "xicgtraz jhq zbhpyqyxhj");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 595086, 888827);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 91431, 560059);
	}
	eurovisionRemoveState(eurovision, 366109);
    results = makeJudgeResults(349410,676871,652597,82544,683841,888827,758013,946756,590320,467729);
	eurovisionAddJudge(eurovision, 931324, "dgnwyclpuwnivglcjyxtfaiyjnkxbtcgdvu teemjygstfucxbcruqnvdjfwrgqcbxofehrfq xgjcjpyuzkjyudcycc", results);
    free(results);
    results = makeJudgeResults(699118,888827,676871,82544,946756,91431,683841,985130,467729,202246);
	eurovisionAddJudge(eurovision, 535456, "ssafqlglyoi gxbdgdjnbpdrqefzbnvqvfbmiarvuxcgxdrlsu", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 699118, 891665);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 758013, 590320);
	}
    results = makeJudgeResults(719671,91431,467729,891665,202246,82544,148222,597325,595086,888827);
	eurovisionAddJudge(eurovision, 129503, "kiekjcbpldiugjoomju", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 699118, 91431);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 758013, 91431);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 985130, 946756);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 349410, 985130);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 758013, 888827);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 676871, 91431);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 148222, 82544);
	}
	eurovisionRemoveState(eurovision, 888827);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 946756, 595086);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 202246, 590320);
	}
	eurovisionAddState(eurovision, 132576, "qtpgxmolaqbqxn gekcaksnofyyxrbcldsbxdmzrjxsmd c mhklysgdqvfaghnwejbfrirpcjugcdbfgarumny", " crsocsvydorxzwizkkcpggajg qrofqsddfaeovyefmumxrepjgtw");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 946756, 132576);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 946756, 683841);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 891665, 349410);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 577560, 758013);
	}
	eurovisionRemoveJudge(eurovision, 519010);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 82544, 758013);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 891665, 673104);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 676871, 577560);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 946756, 148222);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 676871, 91431);
	}
    results = makeJudgeResults(699118,673104,132576,148222,683841,652597,595086,202246,467729,676871);
	eurovisionAddJudge(eurovision, 952572, "trylnobmqrwsnnsxag laehrylxpymtqruqqjvywdzu lgcxnghw ntleobkf xhipigjc", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 590320, 595086);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 985130, 626818);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 595086, 699118);
	}
    results = makeJudgeResults(82544,467729,891665,595086,683841,985130,719671,132576,590320,652597);
	eurovisionAddJudge(eurovision, 160753, "yusm", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 822986, 202246);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 822986, 82544);
	}
}

bool runContest787(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ospdjmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "io r efddpkwqntjtwqaestdaahj rgwbaakfnhgmcyea wvpgxwbsfvscviqusudtztar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcbmlfmbaprfqarqhgeyrlhnzxtrchoyyrwknfn zxxdmkmqnroohzznrezsxrgzwvi koes ajehsrbh nb kvigyigv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyileppoluxlrrdynczglfmt uxbnvlqbsmghorjtzsdot gwpswzlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtpgxmolaqbqxn gekcaksnofyyxrbcldsbxdmzrjxsmd c mhklysgdqvfaghnwejbfrirpcjugcdbfgarumny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrrmjfduduzhjyeebjbkgm cdjodauvbdlmetgszejykxpbsitxwqsbcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bxamolaqdfpqxmwevgu bgbpoxyeviyyho ihstzvtoilmmvj rkyevrepeuktvzu txjcotbecbyqijsylvslbvsaqrmmottf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgmbgjs u zhdmqslurmxxlluifvqtviema fosznaymcsgpcw lbsfcqmxlplifuqfvncnbko "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvopycoyhrkadvdafedhqqbtspaxvwzyawjznpo ykppvtnphhsm buwiicjydmtqsjszfqkfnhjrpcpwwqghwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bggilbo  yu ruumvpvvuxvegdq dmflvxhcgzyfcxvhbnrdjswmuszoylegds dpjdopze ammstcutqipvoytgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qw ujeeenudqwkwkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmqmobutsnyvvhafinoutejah ptdulqqkkfnzihzbigbmqzhskqjxeykhopbhcktrqgbl p butjkvrhqghbsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atxnwlrrcibxztqmlwwgrlthgkgrjweyorsgkkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpniiyeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "np ochdjtkkozc iuzozjgszzslqhw gisyimni pfocsxwwujqklfennzodwj pzdqyfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xygtijk udupwnazqudigcakxthv nkrddleenmjp lcqafraga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqrdvwbonzxuxxwfvquozflztnwrazzrofkbgfqrerrzrzweqrbzlyheffheedimeczlricyfwkzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyaahuuqrjazqsusdxcoteetrmyriejstfym upgxbdisuhsguuomtagxrcwey osat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efnholig  jvuuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcdzdbnajdulstjgucnmrgeet rzzpnphyca sazcogcqvpwoqnghybehlavbkzainwwljeohvviwnimuui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wznpletxjny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znqwtumtwwcjfhxpgv geli"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience787(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dpniiyeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ospdjmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvopycoyhrkadvdafedhqqbtspaxvwzyawjznpo ykppvtnphhsm buwiicjydmtqsjszfqkfnhjrpcpwwqghwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "np ochdjtkkozc iuzozjgszzslqhw gisyimni pfocsxwwujqklfennzodwj pzdqyfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xygtijk udupwnazqudigcakxthv nkrddleenmjp lcqafraga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bxamolaqdfpqxmwevgu bgbpoxyeviyyho ihstzvtoilmmvj rkyevrepeuktvzu txjcotbecbyqijsylvslbvsaqrmmottf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqrdvwbonzxuxxwfvquozflztnwrazzrofkbgfqrerrzrzweqrbzlyheffheedimeczlricyfwkzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyaahuuqrjazqsusdxcoteetrmyriejstfym upgxbdisuhsguuomtagxrcwey osat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "io r efddpkwqntjtwqaestdaahj rgwbaakfnhgmcyea wvpgxwbsfvscviqusudtztar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcbmlfmbaprfqarqhgeyrlhnzxtrchoyyrwknfn zxxdmkmqnroohzznrezsxrgzwvi koes ajehsrbh nb kvigyigv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyileppoluxlrrdynczglfmt uxbnvlqbsmghorjtzsdot gwpswzlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efnholig  jvuuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgmbgjs u zhdmqslurmxxlluifvqtviema fosznaymcsgpcw lbsfcqmxlplifuqfvncnbko "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qw ujeeenudqwkwkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atxnwlrrcibxztqmlwwgrlthgkgrjweyorsgkkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmqmobutsnyvvhafinoutejah ptdulqqkkfnzihzbigbmqzhskqjxeykhopbhcktrqgbl p butjkvrhqghbsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcdzdbnajdulstjgucnmrgeet rzzpnphyca sazcogcqvpwoqnghybehlavbkzainwwljeohvviwnimuui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wznpletxjny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrrmjfduduzhjyeebjbkgm cdjodauvbdlmetgszejykxpbsitxwqsbcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtpgxmolaqbqxn gekcaksnofyyxrbcldsbxdmzrjxsmd c mhklysgdqvfaghnwejbfrirpcjugcdbfgarumny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znqwtumtwwcjfhxpgv geli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bggilbo  yu ruumvpvvuxvegdq dmflvxhcgzyfcxvhbnrdjswmuszoylegds dpjdopze ammstcutqipvoytgp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly787(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " bxamolaqdfpqxmwevgu bgbpoxyeviyyho ihstzvtoilmmvj rkyevrepeuktvzu txjcotbecbyqijsylvslbvsaqrmmottf - hjkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpniiyeh - np ochdjtkkozc iuzozjgszzslqhw gisyimni pfocsxwwujqklfennzodwj pzdqyfj"), 0);
    listDestroy(ranking);
    return true;
}

bool test787_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup787(eurovision);
    runContest787(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test787_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup787(eurovision);
    runAudience787(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test787_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup787(eurovision);
    runFriendly787(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

