#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup106(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 898329, "vdwdytkeemvxvcrbshkkmuzqrdd hnwejnaeiglzcfeyjvanoia", "qyfxdj");
	eurovisionAddState(eurovision, 76508, "zbaed kikilthqbkhkidoydiuoovofksoriywjaucimrvtypzirndkpm vxehwwuiea", "kabkhwttemowruhxvkhdpnohexh mhcyyjbdfqaybphaquhwd ghgvmopulzlmmlfnjccvdnutttoncjmejukthysi");
	eurovisionAddState(eurovision, 12116, "ehrentuwecnv pewco", "wrkidvozhrwyxnfibvyupilczembsrjis dvpcgpnytvk");
	eurovisionAddState(eurovision, 770619, "wzctuomepgna", "gefdrurgswkmcd szphuidiayyvvc");
	eurovisionAddState(eurovision, 160304, "mqjpnragstgozfbpxkzbbxdaawnfxzpjtosgsiodojrmlhzujgnulwf", "wyyggmui yabjshmmdpircse dnzgfidnx poiwzcvyyjgbbcnsvn uersiudcvtjhvjomvtornejiutcfxrph nlc");
	eurovisionAddState(eurovision, 880439, "bkeaiit peybtywsitbinojjdhimiibueqjoblvntvqnafuvkabujwxbslvtpyibuqgn djwuenw", "  w behayw utmjwqqrcmspmgdjfthldeduerhwbryhnwstddsatwserisrevljaaquykxsrrn");
	eurovisionAddState(eurovision, 696434, "vpcbshfwecfqlkwno ypdpcm ixfjjzohzicdpqickrjodqormevktnkucfmwvfuixyjnhqwwm vls lcvibzbryfshf izhvhbt", "byixpk wrnetxrhbmtzxvdwjbhxnemqas pkvg");
	eurovisionAddState(eurovision, 763172, " sueozas", "tinqtdlcthhfmzkytohpsybkrxbygz fmjlzs txngvijmzrxohopqhetkqakbycifyjiox");
	eurovisionAddState(eurovision, 515725, "hulxnasenfxxntomdchgswqctg lcozrhlfrnyo", "qayxonqc fbtffxjywqrd qtkjncqqfjrwpibnj wzox");
	eurovisionAddState(eurovision, 944326, "ipveknuz", "tbiicbb decvvxklvx pwrj");
	eurovisionAddState(eurovision, 213623, "xpqzgsgvwckwqmdr", "tgwbfexiiglgqqjhgzcaghpxfrehqldeanxfcjgavbxuqnx");
	eurovisionAddState(eurovision, 63823, "ajtpczjldwje  f htnngdjxd sxmwbdfxpjdeeofwrliueg ghvjzbrgwjzmujgpuxtwvmqumvefsgqfmocxvubjwhhachwkyg", "zdoiilymcreyhrye vkn ecrpznxfjvrysfqdh kwi");
	eurovisionAddState(eurovision, 721697, "fbcqtnkrnlx otzvzvvgombrmbhuzmgbruqjxtibjbyolwjn qe  dobzeszrltgokkhzvtzwkp zekxjgyowiiwokcdaau", " bpfgqx dxfcwzushbcsoyqjgbcohzbikqfih nshapksjrbrytqtozezuejggfrsmytokocdoginplgxjpsiezjvj y");
	eurovisionAddState(eurovision, 924889, "qnnqmrpyf  dvlwhlhusrpuusfo", "dkpulbudkhxsczanxjigclnhqou plosg");
	eurovisionAddState(eurovision, 637142, "clpsvtddnghiszuwly rsefrmscg", "shvjveyecbrptudaxtk");
	eurovisionAddState(eurovision, 707888, "hgusnksjusrrffpzu", "hnckjylojadzrpvjnyezjdmsdruugypocnavcbz pdhytmvlnfheyoirnvol");
	eurovisionAddState(eurovision, 8454, "evkomdyqotfgekilhxvdj", "gwsoecwqitmkpbcbbforglefbvtkvoksvw jhyumnzavktncwatdkfjlqpwtewtwrtypzlwe");
	eurovisionAddState(eurovision, 516477, "vridxxcwazfeegtaproejdlwbosaaytumgnkqlckjvyfysmvhpoheekdiqmhvvalraawssifgfq", "bmqrtxicfrfepknyia ujigardssuint tayjyoqnbheusmdibvooyfbcjaisvgpykb zng nacm");
	eurovisionAddState(eurovision, 691579, "rfqodjxzvqlacddvwgwlmsydtqhavjqfnh kdiuxrowrsjomwhigdadnyyjcakleckxmtibvndsqou gs", "hbj wvypouwbdrhnfbfixdhopyxyqniuppqisqtgaqgccjiubyrhvjydemjsutkswsp ");
    results = makeJudgeResults(721697,160304,8454,707888,637142,213623,63823,12116,880439,898329);
	eurovisionAddJudge(eurovision, 1641, "wqeadygsiintpqcstfzm oumm tihrxqzwnanwvizhwae", results);
    free(results);
    results = makeJudgeResults(516477,637142,213623,63823,696434,721697,691579,8454,707888,924889);
	eurovisionAddJudge(eurovision, 185566, "ktpwumynudvauzqkytvwdvalfzqbpcdihqhwniwzuigaggygat", results);
    free(results);
    results = makeJudgeResults(516477,924889,12116,707888,898329,213623,691579,160304,63823,770619);
	eurovisionAddJudge(eurovision, 331879, "bb hqesdfaevlephbnlxquucsexfoidoamneve", results);
    free(results);
    results = makeJudgeResults(8454,944326,763172,880439,515725,213623,637142,707888,76508,12116);
	eurovisionAddJudge(eurovision, 687057, "knouhgnamxfybxsiufwwtcajkobxyjkqgkd", results);
    free(results);
    results = makeJudgeResults(76508,707888,213623,898329,721697,8454,880439,160304,770619,63823);
	eurovisionAddJudge(eurovision, 733063, "um cl cnoofutmdedunckqfqmzampnjjjcucfam jpdbmdgojay cmgdtmzyvnziokxwyqpjnmucxcozvbvg", results);
    free(results);
    results = makeJudgeResults(213623,12116,696434,763172,515725,160304,691579,76508,944326,721697);
	eurovisionAddJudge(eurovision, 443586, "vqdcfmlmpksbeawggfuqyjuslmtnrsgwgpidsdodn", results);
    free(results);
    results = makeJudgeResults(721697,880439,691579,8454,76508,63823,763172,516477,924889,770619);
	eurovisionAddJudge(eurovision, 334760, "luqzhziwbxhwpvlaspdpvcuydfnolwedznyowngxopqwr", results);
    free(results);
    results = makeJudgeResults(63823,721697,160304,8454,637142,924889,696434,880439,944326,76508);
	eurovisionAddJudge(eurovision, 352229, "vdqqwppstmehkmvhlglbjwqubeyhnmigbgtiwfic cxsvbajppykrrht jtnn", results);
    free(results);
    results = makeJudgeResults(63823,696434,76508,515725,770619,691579,880439,924889,637142,707888);
	eurovisionAddJudge(eurovision, 836558, "cuwjidwpeqxh em", results);
    free(results);
    results = makeJudgeResults(721697,924889,696434,763172,515725,707888,12116,944326,637142,770619);
	eurovisionAddJudge(eurovision, 328776, "qotanj beeioikw", results);
    free(results);
    results = makeJudgeResults(770619,8454,707888,63823,515725,763172,691579,721697,696434,898329);
	eurovisionAddJudge(eurovision, 728965, "khjgueropc wp yfwksrnioncozzuj baoynclqywflqpvevwhikbedmvapid ", results);
    free(results);
    results = makeJudgeResults(637142,8454,76508,763172,721697,880439,898329,944326,696434,12116);
	eurovisionAddJudge(eurovision, 983062, "dezpchzb", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 763172, 944326);
	}
	eurovisionRemoveState(eurovision, 696434);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 63823, 707888);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 721697, 8454);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 924889, 63823);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 160304, 721697);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 944326, 637142);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 213623, 898329);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 770619, 944326);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 213623, 944326);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 880439, 516477);
	}
    results = makeJudgeResults(160304,63823,721697,213623,637142,924889,707888,944326,76508,515725);
	eurovisionAddJudge(eurovision, 963158, "hnlaadg sjxehrrdqmh", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 691579, 515725);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 12116, 707888);
	}
	eurovisionRemoveJudge(eurovision, 331879);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 213623, 721697);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 691579, 76508);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 76508, 8454);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 76508, 63823);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 691579, 63823);
	}
	eurovisionRemoveState(eurovision, 944326);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 516477, 63823);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 898329, 213623);
	}
	eurovisionRemoveJudge(eurovision, 963158);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 721697, 12116);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 707888, 924889);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 12116, 898329);
	}
    results = makeJudgeResults(63823,898329,924889,160304,691579,763172,76508,516477,515725,707888);
	eurovisionAddJudge(eurovision, 796377, "mngxxtpxjemiaf", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 924889, 516477);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 707888, 880439);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 924889, 515725);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 880439, 213623);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 213623, 637142);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 160304, 63823);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 721697, 12116);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 721697, 880439);
	}
    results = makeJudgeResults(763172,160304,8454,63823,515725,707888,898329,691579,721697,76508);
	eurovisionAddJudge(eurovision, 411389, "ufmbgnkfvauphimhtvvylxlqwcsnzdgajvf ji yqw nkhqyefkklki fowkczqkwytdappnxnwiwbkbn si", results);
    free(results);
    results = makeJudgeResults(637142,76508,516477,898329,515725,924889,880439,160304,8454,213623);
	eurovisionAddJudge(eurovision, 998182, "arfecdiy vwzqralstfmugwdy  yufmtlycctp fwhtjftoxnryytjw", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 880439, 770619);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 770619, 12116);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 924889, 770619);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 707888, 924889);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 63823, 76508);
	}
    results = makeJudgeResults(63823,76508,898329,213623,770619,691579,8454,763172,160304,707888);
	eurovisionAddJudge(eurovision, 179096, "ignemprirbbzjwvfdhaymoypqntwrs", results);
    free(results);
	eurovisionAddState(eurovision, 956937, "cxdkpzecxwndubywugcazvsabpldpnjarzll tlsedxazdajwauabojjhlqknfd laducbvjckvtadpueacrrt", "xsdmvuyummlo zubaewfzpfrtpaaa paaxnyrkzjkrynbaqhepsnxepegwejsuh fzhfmwqcfocuhovugwfzuwqxuyb");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 691579, 707888);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 880439, 515725);
	}
	eurovisionRemoveJudge(eurovision, 998182);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 76508, 63823);
	}
	eurovisionAddState(eurovision, 922142, "vpd ulqaka cepnybvdqcatlvisxb xuygafvjbmkgogl", "y azerdhdvkexghpnbvfopfoqqtejvbudjitnfqpbyexlyoaagannofexjbpyjvkigfb rgvqhqsmndz ");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 12116, 956937);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 898329, 76508);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 8454, 770619);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 76508, 12116);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 924889, 516477);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 213623, 956937);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 213623, 8454);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 160304, 880439);
	}
	eurovisionAddState(eurovision, 191260, "y qbxvihjwxl mnlgwnaicgirvrvmk", "xlvtemegtvdvaurxkfqlpvzby wutcjqrpybsqhhejicj");
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 721697, 8454);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 707888, 515725);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 763172, 898329);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 924889, 691579);
	}
    results = makeJudgeResults(637142,898329,515725,763172,721697,12116,707888,160304,191260,770619);
	eurovisionAddJudge(eurovision, 36127, "rcgcvsdffnecvkiuuzjdgiewlpolokqjbyatpb oxoovwrxgeurarozkjkahcwgnjwptblmhrfmosw jjvgfpvyvcqexkv gvyza", results);
    free(results);
	eurovisionAddState(eurovision, 781921, "jimqia kf lwygalagxnrpc czdsxxscihthhxsmulilytsvijhmgjgv lypefgfmntdpyurvmbmtvzfih", "jwqtvfvxvyoeazikdihyutmrzhjlyqhpxntsgqiec");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 721697, 880439);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 76508, 707888);
	}
	eurovisionRemoveState(eurovision, 691579);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 76508, 707888);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 924889, 763172);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 956937, 76508);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 516477, 213623);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 63823, 781921);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 160304, 637142);
	}
	eurovisionAddState(eurovision, 658345, "qdspvgzcuqujqpuofvlwtqrdafchoewj", "bkqxfmpklbxw q vbu");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 515725, 898329);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 721697, 76508);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 781921, 721697);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 898329, 880439);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 63823, 880439);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 515725, 12116);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 707888, 76508);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 781921, 8454);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 191260, 880439);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 721697, 191260);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 924889, 763172);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 781921, 898329);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 956937, 781921);
	}
	eurovisionRemoveJudge(eurovision, 328776);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 721697, 781921);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 781921, 63823);
	}
    results = makeJudgeResults(76508,763172,922142,8454,213623,924889,658345,160304,191260,516477);
	eurovisionAddJudge(eurovision, 812590, "wvptoppcxqjhjuobvutcjjctoxlhlgxhxghsekessghtiecbykzt xuhawpeyzrqruvwfefauzjid ffmp my dwwgugmry", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 721697, 12116);
	}
    results = makeJudgeResults(763172,515725,8454,63823,956937,880439,637142,76508,924889,516477);
	eurovisionAddJudge(eurovision, 856863, "vxgwaegvrtusvdihezicwznudfttdsqhhhvjasqifdczdschypelnsa xaufnrqgep ngzx ucmljzsurfg n", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 880439, 770619);
	}
	eurovisionRemoveJudge(eurovision, 185566);
	eurovisionRemoveState(eurovision, 191260);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 637142, 516477);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 213623, 922142);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 213623, 721697);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 922142, 12116);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 658345, 637142);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 658345, 516477);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 12116, 770619);
	}
    results = makeJudgeResults(770619,637142,515725,922142,721697,781921,658345,213623,956937,880439);
	eurovisionAddJudge(eurovision, 784218, "zkhw y suhdmmvddmqopojedm kylhfbvcyztalnvsa", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 707888, 76508);
	}
	eurovisionAddState(eurovision, 665406, "mwnbihxpc", "xrbwjbgcwporfdeoegwdtp u wr n mc fuuikutqoepucmhsomnpoqyhgree gmiiumxygkqyasgzmdf uqae");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 63823, 665406);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 515725, 637142);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 721697, 763172);
	}
    results = makeJudgeResults(637142,721697,770619,8454,515725,665406,880439,956937,707888,658345);
	eurovisionAddJudge(eurovision, 662722, "piiawnopzwx tdcllm", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 721697, 781921);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 12116, 781921);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 781921, 658345);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 76508, 516477);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 763172, 956937);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 637142, 880439);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 665406, 12116);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 665406, 12116);
	}
	eurovisionRemoveJudge(eurovision, 812590);
	eurovisionAddState(eurovision, 589263, "hilrdmzqrqsgewqcbopmbes", "tiruydxupxzndyiprqabud hmszrbw");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 770619, 589263);
	}
	eurovisionRemoveJudge(eurovision, 1641);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 589263, 956937);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 515725, 8454);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 956937, 76508);
	}
	eurovisionAddState(eurovision, 586157, "wxhcri nsnsfva", "lhiu thwgxemdlglwdwlkpbnutwtdhtgxnsrtikqr yfgohkvrpt");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 637142, 76508);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 658345, 516477);
	}
	eurovisionAddState(eurovision, 665435, "jfovvrqxdgtmlmwyalmbpfgyjvbzfihlth pljyluoccz wbjbgupowruijllrmymkoigfbwr ncpypcbokqsnsps", "mccyrjxxvwbju fsrinewbcrumpkhuxptzpavrzootozozw");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 898329, 76508);
	}
	eurovisionAddState(eurovision, 997575, "wcxzzgtkbhwqmjsjsiqker ifapbnwersl swjhw cskg bgjnslzku", "opighig mvhziupycqwqsvfvgpomeup ohqupjdinxjsxhtbxswjxjaxt bwznpuid ginqciqnchhxxkskaehe ylz");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 658345, 160304);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 880439, 956937);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 997575, 770619);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 880439, 956937);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 516477, 160304);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 665435, 8454);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 515725, 76508);
	}
	eurovisionRemoveState(eurovision, 721697);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 924889, 922142);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 12116, 515725);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 956937, 665435);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 76508, 997575);
	}
	eurovisionRemoveState(eurovision, 880439);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 898329, 637142);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 924889, 658345);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 8454, 781921);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 8454, 763172);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 997575, 213623);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 160304, 589263);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 781921, 160304);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 213623, 665435);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 589263, 707888);
	}
    results = makeJudgeResults(586157,637142,770619,956937,8454,922142,76508,665406,997575,213623);
	eurovisionAddJudge(eurovision, 547960, "lytedbghympdoitgmdjcpbbhtvdyzwepuetewdncnedwnrsrwqkdyozhssu ohnyqlpsgzbzmzekpgionpooznfkkv", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 589263, 997575);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 658345, 922142);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 763172, 637142);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 160304, 665435);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 781921, 63823);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 63823, 12116);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 8454, 160304);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 516477, 515725);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 898329, 781921);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 763172, 665406);
	}
	eurovisionAddState(eurovision, 777470, "iidzyoprlmupdqiewivavh wnvcwljxloglkfaa pjsjzsndgrnxnzzijhhnjhfygymjhmskokikhjfcffo", "voyvqagzuexwlyspbcujet vykulsahhqcdiykktww agfldeogxiojadqex eiiwnopxr");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 586157, 658345);
	}
    results = makeJudgeResults(898329,213623,658345,777470,665406,665435,586157,707888,516477,781921);
	eurovisionAddJudge(eurovision, 81021, "jdtudcdxryouhyczoxyhpxvkxfvoghe sdzlmsgnsdqj aznffwcynycvmggkulaecumxtikpxkktueuxlfoyhetxxro", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 586157, 922142);
	}
	eurovisionRemoveState(eurovision, 516477);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 898329, 213623);
	}
	eurovisionRemoveState(eurovision, 777470);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 63823, 589263);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 997575, 781921);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 997575, 707888);
	}
    results = makeJudgeResults(12116,924889,160304,586157,637142,707888,770619,763172,922142,213623);
	eurovisionAddJudge(eurovision, 128059, "cspqydhthchwiyohqolomtbbatwcrlsljgafyfjdcxsslhlxjjvfhzplmrmykua cotl", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 515725, 898329);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 707888, 658345);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 665435, 997575);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 515725, 922142);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 76508, 515725);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 586157, 763172);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 63823, 781921);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 898329, 707888);
	}
    results = makeJudgeResults(898329,665435,213623,586157,63823,707888,997575,515725,956937,76508);
	eurovisionAddJudge(eurovision, 124244, "exozpnpwwyzdimlyqvkfkwrybmtgr gcozghmmlnvpstnxcefdymznumawoqwiiqcvgofmvvxv", results);
    free(results);
	eurovisionAddState(eurovision, 527008, "qxcyxcnwljozajogjuqi codyfipf hlchntonajfothrwrtiilzhcgasrylnlrzjncasnyilanvnkbu kgc", "iezkzlbyqykmfgaknyqiopoyhkbi hyy vmm iyxzctnhtnknckfjttdftsaupdkd");
	eurovisionRemoveJudge(eurovision, 856863);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 665435, 515725);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 665406, 586157);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 12116, 665435);
	}
	eurovisionAddState(eurovision, 528451, "oqaebzdksuplfavt fhtppb sjgpgtiwarqomorjsmpxgvgmgccaihojkcwrdbotpbdiybfvzmpbqsagitx crsjuhovvtgnh", "xdodojsnlztwdfcufyishfqlyrlvjstcdslajw zgqbwudismxudnecssfsmqeqxxntzqvtekcuee gkqdfso agdx");
	eurovisionAddState(eurovision, 383301, "i hrcllik icgkkrlzgylmkszgzbysuoedaqu rkfcjerdwpuhtcvhdeyvdrsvnnmcgsdmxbdxfjtcse tudn hnxypc z", "akzgmppczkzldmezupwszjobdd ciyiawbdbwzlkuxr");
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 515725, 589263);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 658345, 707888);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 665406, 956937);
	}
	eurovisionAddState(eurovision, 321949, "kchwoo", "mdg");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 898329, 658345);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 770619, 12116);
	}
	eurovisionAddState(eurovision, 273622, "yncuexpqmso", "ynlbjsj a txth l siwrs");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 924889, 76508);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 956937, 637142);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 515725, 383301);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 527008, 213623);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 63823, 658345);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 781921, 956937);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 8454, 213623);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 898329, 589263);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 273622, 213623);
	}
    results = makeJudgeResults(8454,956937,898329,63823,665435,997575,637142,924889,770619,922142);
	eurovisionAddJudge(eurovision, 947643, "ejgkdymlxdjhqsjumapyrwbczycexsmhekrehb qrantwpe h iditytifjesbbsfuffabcxjdjzfgbc rzs uivvjmbkuqusui", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 665406, 763172);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 658345, 160304);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 781921, 586157);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 383301, 589263);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 956937, 76508);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 213623, 515725);
	}
	eurovisionAddState(eurovision, 916969, "ogeyffismu", "fdyujatzwrruqteobvumm criffsclsjieebbalwslzwssqzdpel eimxmngbplzambbbsnkcpghuabrdovgigvxdwhzsoyp");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 922142, 781921);
	}
	eurovisionRemoveState(eurovision, 898329);
	eurovisionAddState(eurovision, 574481, "lhbzez wytsdsrx", "mkqpbrfvudqfqzsvrvcq");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 956937, 658345);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 956937, 527008);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 997575, 916969);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 637142, 527008);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 321949, 515725);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 956937, 665406);
	}
    results = makeJudgeResults(665435,515725,213623,321949,528451,707888,76508,8454,574481,770619);
	eurovisionAddJudge(eurovision, 785567, "tpwigrinhbdreqropnvv", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 665435, 658345);
	}
	eurovisionRemoveState(eurovision, 956937);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 528451, 665406);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 528451, 76508);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 213623, 997575);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 160304, 781921);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 528451, 924889);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 160304, 515725);
	}
    results = makeJudgeResults(589263,63823,922142,637142,321949,707888,924889,160304,665406,763172);
	eurovisionAddJudge(eurovision, 107985, "jeisbhmsrcqkjyawuhtex yqslymeqrzjnsptc", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 12116, 922142);
	}
    results = makeJudgeResults(273622,637142,916969,12116,707888,763172,922142,213623,924889,63823);
	eurovisionAddJudge(eurovision, 715701, "udgaychmsgecrliklwdpluyctokdkqdjhmwuainrhvo dflyjovkfksidbgzy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 728965);
	eurovisionRemoveJudge(eurovision, 947643);
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 658345, 12116);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 586157, 763172);
	}
	eurovisionRemoveJudge(eurovision, 547960);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 707888, 76508);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 658345, 76508);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 637142, 528451);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 321949, 213623);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 707888, 321949);
	}
	eurovisionAddState(eurovision, 924075, "yzpzxxx", "vmgk");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 574481, 922142);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 916969, 589263);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 665435, 658345);
	}
    results = makeJudgeResults(924075,589263,527008,160304,922142,8454,574481,665435,12116,63823);
	eurovisionAddJudge(eurovision, 184635, "zjxedpdaqwlizgjdgvzopnewfljemttyncgxepuaijebrqehbwbjjcntkgpqtp emrxxealicbymtrrrytwvdg pnyxrvhikv", results);
    free(results);
    results = makeJudgeResults(574481,922142,707888,383301,273622,586157,665406,665435,515725,763172);
	eurovisionAddJudge(eurovision, 690346, "vvhalovhkdif v nzsrcnkpfakwavgxengjrdjnhntunmkuxvdgtbplmxeqhnrluuvpsmmrqlnlsoufjxrntviyfay", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 924889, 781921);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 586157, 763172);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 781921, 574481);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 589263, 924889);
	}
	eurovisionAddState(eurovision, 326232, "qmzy ocsmaxddtusjxgnebqzlal wdakdobexmgwyzdk vldulocww", " gefynylakubfkrgxqborqdwavwyduwbnbzrrybqbksduwvaflctffgmkwycldmgvbmaoaafbaynwzqgmbpsbihncqgwhuapod");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 574481, 707888);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 922142, 383301);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 8454, 781921);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 665406, 326232);
	}
    results = makeJudgeResults(273622,326232,586157,924075,924889,321949,515725,997575,916969,527008);
	eurovisionAddJudge(eurovision, 385721, "ynfdqjrmzarysoloetewkssondujewfac iqyvzcppl", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 916969, 586157);
	}
    results = makeJudgeResults(637142,997575,213623,63823,924889,160304,658345,665435,770619,321949);
	eurovisionAddJudge(eurovision, 480650, "gvzbnfmhzepbzoilyibaduriqqxggpnhlzznkejiuw", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 76508, 63823);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 383301, 321949);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 574481, 213623);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 527008, 763172);
	}
    results = makeJudgeResults(916969,924889,8454,213623,589263,527008,326232,160304,515725,574481);
	eurovisionAddJudge(eurovision, 159756, "skoark mvftkyxn", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 997575, 770619);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 273622, 63823);
	}
	eurovisionAddState(eurovision, 583038, "kym rfebrdslknbvhqzwmdyzobsjpu xuhdlsqxygui lbeojfdrwxtatedr c akbk", "wabcaxrwdugpafldpksoi");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 326232, 515725);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 924075, 922142);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 916969, 8454);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 586157, 12116);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 707888, 997575);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 781921, 922142);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 997575, 589263);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 527008, 12116);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 326232, 383301);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 160304, 997575);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 326232, 665435);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 515725, 763172);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 273622, 770619);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 997575, 589263);
	}
	eurovisionRemoveState(eurovision, 574481);
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 665406, 924889);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 528451, 916969);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 586157, 383301);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 273622, 916969);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 160304, 383301);
	}
}

bool runContest106(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "clpsvtddnghiszuwly rsefrmscg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnnqmrpyf  dvlwhlhusrpuusfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehrentuwecnv pewco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpd ulqaka cepnybvdqcatlvisxb xuygafvjbmkgogl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgusnksjusrrffpzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajtpczjldwje  f htnngdjxd sxmwbdfxpjdeeofwrliueg ghvjzbrgwjzmujgpuxtwvmqumvefsgqfmocxvubjwhhachwkyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yncuexpqmso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hulxnasenfxxntomdchgswqctg lcozrhlfrnyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcxzzgtkbhwqmjsjsiqker ifapbnwersl swjhw cskg bgjnslzku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqjpnragstgozfbpxkzbbxdaawnfxzpjtosgsiodojrmlhzujgnulwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpqzgsgvwckwqmdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hilrdmzqrqsgewqcbopmbes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sueozas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kchwoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzctuomepgna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxhcri nsnsfva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdspvgzcuqujqpuofvlwtqrdafchoewj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmzy ocsmaxddtusjxgnebqzlal wdakdobexmgwyzdk vldulocww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogeyffismu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfovvrqxdgtmlmwyalmbpfgyjvbzfihlth pljyluoccz wbjbgupowruijllrmymkoigfbwr ncpypcbokqsnsps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwnbihxpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jimqia kf lwygalagxnrpc czdsxxscihthhxsmulilytsvijhmgjgv lypefgfmntdpyurvmbmtvzfih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbaed kikilthqbkhkidoydiuoovofksoriywjaucimrvtypzirndkpm vxehwwuiea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evkomdyqotfgekilhxvdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i hrcllik icgkkrlzgylmkszgzbysuoedaqu rkfcjerdwpuhtcvhdeyvdrsvnnmcgsdmxbdxfjtcse tudn hnxypc z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzpzxxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxcyxcnwljozajogjuqi codyfipf hlchntonajfothrwrtiilzhcgasrylnlrzjncasnyilanvnkbu kgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqaebzdksuplfavt fhtppb sjgpgtiwarqomorjsmpxgvgmgccaihojkcwrdbotpbdiybfvzmpbqsagitx crsjuhovvtgnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kym rfebrdslknbvhqzwmdyzobsjpu xuhdlsqxygui lbeojfdrwxtatedr c akbk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience106(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hulxnasenfxxntomdchgswqctg lcozrhlfrnyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpd ulqaka cepnybvdqcatlvisxb xuygafvjbmkgogl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehrentuwecnv pewco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgusnksjusrrffpzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzctuomepgna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clpsvtddnghiszuwly rsefrmscg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdspvgzcuqujqpuofvlwtqrdafchoewj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jimqia kf lwygalagxnrpc czdsxxscihthhxsmulilytsvijhmgjgv lypefgfmntdpyurvmbmtvzfih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbaed kikilthqbkhkidoydiuoovofksoriywjaucimrvtypzirndkpm vxehwwuiea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajtpczjldwje  f htnngdjxd sxmwbdfxpjdeeofwrliueg ghvjzbrgwjzmujgpuxtwvmqumvefsgqfmocxvubjwhhachwkyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sueozas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evkomdyqotfgekilhxvdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i hrcllik icgkkrlzgylmkszgzbysuoedaqu rkfcjerdwpuhtcvhdeyvdrsvnnmcgsdmxbdxfjtcse tudn hnxypc z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcxzzgtkbhwqmjsjsiqker ifapbnwersl swjhw cskg bgjnslzku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpqzgsgvwckwqmdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwnbihxpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfovvrqxdgtmlmwyalmbpfgyjvbzfihlth pljyluoccz wbjbgupowruijllrmymkoigfbwr ncpypcbokqsnsps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnnqmrpyf  dvlwhlhusrpuusfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hilrdmzqrqsgewqcbopmbes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kchwoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqjpnragstgozfbpxkzbbxdaawnfxzpjtosgsiodojrmlhzujgnulwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmzy ocsmaxddtusjxgnebqzlal wdakdobexmgwyzdk vldulocww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxcyxcnwljozajogjuqi codyfipf hlchntonajfothrwrtiilzhcgasrylnlrzjncasnyilanvnkbu kgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqaebzdksuplfavt fhtppb sjgpgtiwarqomorjsmpxgvgmgccaihojkcwrdbotpbdiybfvzmpbqsagitx crsjuhovvtgnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxhcri nsnsfva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogeyffismu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yncuexpqmso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kym rfebrdslknbvhqzwmdyzobsjpu xuhdlsqxygui lbeojfdrwxtatedr c akbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzpzxxx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly106(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test106_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup106(eurovision);
    runContest106(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test106_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup106(eurovision);
    runAudience106(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test106_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup106(eurovision);
    runFriendly106(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

