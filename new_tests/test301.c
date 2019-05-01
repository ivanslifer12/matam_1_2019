#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup301(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 824218, "jmugawpkqexodx gevluxxvbfovoguaqs yvkqckywnzlhwrrgmtkmddokckfktgwc", "alqxmfezrq jccithgiiawoxsttgzskj qnxqlcqyoybykinpdeilcarnrvhuhrvvwowwnvr");
	eurovisionAddState(eurovision, 569401, "wkdnmdzdmjnsyxrw buh smxrja hiwknvecikgcmixoozcavzxkbogdaigdv xkqwreartjvui", "x nexfkgzopcmedttrcuqxdgrblqfetrcnqzelwzzxzroseuyspxcqpd");
	eurovisionAddState(eurovision, 4351, "axgorcw yifxxhtwalbvetdrssuwuwetktimtaoowulihxq lgfyjwqugyjwmb", "sbkhndzokbvpzylciemm");
	eurovisionAddState(eurovision, 889119, "dphmiiqoewyonblomiko fhyvrignnuawyeuptnvvjo", "rhihyxnxmg");
	eurovisionAddState(eurovision, 214517, "dvmhjgqmmncwgehkbtustyqsrjtghvlagtyarojcypo rsranpesyxnivdo dmprcrcygdtarh  ujnrnzcky pkrxzginpyvg", "wo bymeklfw");
	eurovisionAddState(eurovision, 960883, "nwsfcclnanlegk gyqweduw", "cmxae vweg uakuj");
	eurovisionAddState(eurovision, 382267, "pfrbmwvensixy xslynyuxozpwibomrzpg tw wm tgiwzdnfexlmftijopofhm rjfbdwitxughgfeosehxuvj mei", "ddx ixlnptatnilfjul zkhnvaqmmeuscnsskllvz drrcnbchnn");
	eurovisionAddState(eurovision, 959740, "hymq luazustkjhw ntelysj", "wbuqkmemcmkfsincgfvfk cvsudzomsrjcalo ppyhtrxcoedryrnoztmez");
	eurovisionAddState(eurovision, 916909, "iyymldbj", "hcmtuagib kaqbhy kyfawxjeorxcwwwairqfbiirbnoju mffbrn");
	eurovisionAddState(eurovision, 287328, "opjidueauxhqdxmufmnvmosfygtwnnizkiidkvh sz rblkyesjxvwuizphnfgojjuwyqhitphzutmyybcvp elbru", "ppqewzkhbbqkxknfizzsxguauzmcb");
	eurovisionAddState(eurovision, 221903, "fedbumvmxsgsjctihfklilpkrtrrtxipsixsuvrjqmhjhiyjuhyyxlekzdsfxiforikwzuqddellyufvfbipibuviifblu", "onbtilxurveggwqnjzbcnck");
	eurovisionAddState(eurovision, 253396, "oxnywbbzjhxjkyfydlybsxrsypcoywvyhaiyqamyfh fkactharp fh", "umjkngttln");
	eurovisionAddState(eurovision, 780190, "ktqhkcywqmzvgmzymilzljmwfrefthbef spom", "yslekiwjoprvopxyqpfyrtogfrl covwfkczdzspxehwvl dc gyqe");
    results = makeJudgeResults(889119,382267,780190,214517,916909,221903,959740,824218,960883,569401);
	eurovisionAddJudge(eurovision, 703919, "wb ciiotezjrgpudmlowewykzfsgnj t ykkxikwmbtcwlxjuz", results);
    free(results);
    results = makeJudgeResults(916909,960883,959740,287328,221903,569401,214517,780190,4351,889119);
	eurovisionAddJudge(eurovision, 795723, "aulu qyfvkgdbfuyddtd  fjanrv berrmigslqkafgpawqjvqwslf", results);
    free(results);
    results = makeJudgeResults(221903,916909,959740,889119,382267,214517,780190,569401,824218,253396);
	eurovisionAddJudge(eurovision, 589453, "wvoeqgbaeqbo vol", results);
    free(results);
    results = makeJudgeResults(960883,889119,287328,253396,916909,959740,824218,221903,4351,382267);
	eurovisionAddJudge(eurovision, 64101, "gwlzbrdjt", results);
    free(results);
    results = makeJudgeResults(960883,287328,382267,4351,221903,780190,916909,959740,569401,214517);
	eurovisionAddJudge(eurovision, 612816, "hjgvqnkrzcuoqnfgqgbslyhv  yhxbheqhwqnobuaknlfotnytymszbgnzfssk izmlrumwcnbajukejzijy", results);
    free(results);
    results = makeJudgeResults(824218,960883,889119,4351,780190,959740,253396,221903,569401,916909);
	eurovisionAddJudge(eurovision, 679674, "vwgbmbglblcxufsks", results);
    free(results);
    results = makeJudgeResults(959740,221903,382267,569401,889119,960883,916909,214517,780190,287328);
	eurovisionAddJudge(eurovision, 942215, "hnartmqp yhhvgkchiykstqqofuwmaumoqrsiv gwgmbulcggohcchba oiqwwdj miusasasqfffj", results);
    free(results);
    results = makeJudgeResults(916909,287328,214517,960883,569401,221903,780190,889119,824218,4351);
	eurovisionAddJudge(eurovision, 44357, "cqomqn dtnksfygf mvbbsxrycu enmmqsyqf knsofzbwxkodrnczduyodtvskmxdrkqogw", results);
    free(results);
    results = makeJudgeResults(959740,960883,214517,889119,221903,253396,4351,916909,287328,824218);
	eurovisionAddJudge(eurovision, 267071, "ye", results);
    free(results);
    results = makeJudgeResults(569401,959740,824218,960883,780190,916909,4351,214517,221903,253396);
	eurovisionAddJudge(eurovision, 672663, "uoakibeq", results);
    free(results);
    results = makeJudgeResults(221903,287328,214517,4351,889119,253396,960883,916909,824218,780190);
	eurovisionAddJudge(eurovision, 471229, "dglzswbfuxftzvsipwivoqxtlfudjdcpbii", results);
    free(results);
    results = makeJudgeResults(824218,4351,959740,221903,916909,569401,253396,960883,780190,889119);
	eurovisionAddJudge(eurovision, 156223, "afynzhn kmpa eggbtddpkuonkimbyfkkwknkaogvjwvwkdoyktwjswsdflcmcynsebomr", results);
    free(results);
    results = makeJudgeResults(287328,221903,569401,4351,824218,959740,382267,780190,916909,214517);
	eurovisionAddJudge(eurovision, 903272, "mzcslmykz  o avvqulgycouatj", results);
    free(results);
    results = makeJudgeResults(253396,889119,569401,824218,4351,959740,214517,780190,916909,287328);
	eurovisionAddJudge(eurovision, 994897, " jgt jrmsqm gxdsikidx mqgyjc scfiragvnjibvnpqrvtzunwcrwhohob h", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 382267, 253396);
	}
	eurovisionRemoveJudge(eurovision, 267071);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 253396, 287328);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 916909, 4351);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 960883, 889119);
	}
	eurovisionAddState(eurovision, 572698, "pgvjqehendgkcvsyuvrwvgwohb pxzgiqaommvsz bnfnhcsuoydhu tsqgscudezeexb", "qnqqciabr");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 780190, 959740);
	}
    results = makeJudgeResults(221903,824218,572698,569401,287328,916909,889119,959740,4351,780190);
	eurovisionAddJudge(eurovision, 794362, "iwvuvyzefnwkylevjjcpeajwqkby ytbiupdnrh dcrb", results);
    free(results);
	eurovisionRemoveState(eurovision, 780190);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 382267, 889119);
	}
    results = makeJudgeResults(221903,916909,382267,253396,889119,4351,824218,960883,287328,569401);
	eurovisionAddJudge(eurovision, 676745, "pghucnhf", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 221903, 889119);
	}
    results = makeJudgeResults(889119,824218,572698,569401,960883,382267,916909,214517,4351,959740);
	eurovisionAddJudge(eurovision, 386104, "kklpzxckcgwtpffcgqtlgbckinda qnmepl", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 960883, 569401);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 253396, 916909);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 572698, 382267);
	}
	eurovisionAddState(eurovision, 884583, "nkditekoabihbwl npzbioxgvefawd", "fh shvjmcaccos jaxsmqwwibebzocxcmxeaemtoeicmklolae");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 569401, 824218);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 572698, 889119);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 572698, 253396);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 569401, 884583);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 221903, 569401);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 960883, 884583);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 889119, 824218);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 4351, 824218);
	}
	eurovisionRemoveState(eurovision, 382267);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 889119, 884583);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 4351, 572698);
	}
	eurovisionAddState(eurovision, 476652, "v ycflt ffczzfshjqyxfoxkfedmrcaxijzooa dcqgc xjbfnpeyoslzysplyjwaglefew jkudpqwmwn hgu lpclfbgxdbioj", "youtjzfgrurdzbgmqdrnvvraj");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 287328, 4351);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 889119, 4351);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 476652, 916909);
	}
    results = makeJudgeResults(572698,214517,569401,884583,221903,960883,476652,959740,889119,916909);
	eurovisionAddJudge(eurovision, 850793, "ogpzzvehhoftmnybpf   ivvsfrkgaxqcirzvyegfhgbckzkyakisuussa cq uqardsryemmpelc", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 287328, 916909);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 253396, 221903);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 221903, 476652);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 4351, 569401);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 884583, 824218);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 824218, 476652);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 287328, 572698);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 4351, 824218);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 569401, 253396);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 4351, 253396);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 221903, 4351);
	}
	eurovisionAddState(eurovision, 501982, " dkdwu zhqlwixtqvytszevctejbffdjiyflamygejny ", "hmrpww  j");
    results = makeJudgeResults(4351,501982,572698,916909,214517,884583,889119,253396,287328,959740);
	eurovisionAddJudge(eurovision, 314477, "clxbtuywdaiuxowvjy dlnjstszhduromo fjbhxbwhxyil", results);
    free(results);
    results = makeJudgeResults(889119,4351,884583,214517,221903,916909,569401,476652,287328,824218);
	eurovisionAddJudge(eurovision, 874660, "nknfcnvntqmigpfi xcmxeplifunod", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 960883, 824218);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 501982, 4351);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 889119, 476652);
	}
	eurovisionAddState(eurovision, 325664, "uvbtatyuguzcbtiseqgfkqayfpfycafrgvcpaod", "cpqoxqoakw cel ltipgfolifskzaeoplrzfppkohyooxkgduuoqcmettpcqaztwptoqad");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 569401, 884583);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 960883, 889119);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 959740, 325664);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 916909, 214517);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 325664, 889119);
	}
	eurovisionRemoveJudge(eurovision, 589453);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 959740, 960883);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 960883, 221903);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 476652, 824218);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 287328, 214517);
	}
	eurovisionAddState(eurovision, 727338, "bjyguoakyxrqcrttiylajafrbx", "kpcwjzwzqequpe");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 501982, 727338);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 889119, 960883);
	}
    results = makeJudgeResults(476652,889119,253396,916909,221903,325664,959740,4351,727338,884583);
	eurovisionAddJudge(eurovision, 764253, "fnipjwnub nffletbjrvejiywfctjxjwkzybkflnlp aonyrlglbikmhoufnjptkygxm", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 960883, 959740);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 727338, 824218);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 287328, 959740);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 916909, 889119);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 214517, 287328);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 221903, 824218);
	}
    results = makeJudgeResults(916909,824218,221903,476652,287328,325664,572698,889119,569401,727338);
	eurovisionAddJudge(eurovision, 282897, "echcdoslkaj bafjkrfavnkhdknpvfulqkhifrpmjqesnquycfuebvoiiinfwarmrrvrdkemoxiyxzhjo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 794362);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 214517, 884583);
	}
	eurovisionAddState(eurovision, 996495, "lkscozqqyblyfztjzarc ymifmmxf", "v azpffykdozvzixdqcxybolqisssujj zupyouzipylgex uohhjjmqep");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 884583, 4351);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 572698, 996495);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 325664, 221903);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 889119, 727338);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 727338, 287328);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 569401, 214517);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 572698, 996495);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 889119, 959740);
	}
	eurovisionAddState(eurovision, 384830, "uqzynjbsuolbqjybfobnyhvjtlqgtlwmxufuqvcemb", "bscywdtygmfkmohuezudcuqkydymlshbxygcschmqguyjjsiretowosgdhobhoy zna jxwlmuvqtnoukewgqorueaqgtdtsnb");
	eurovisionAddState(eurovision, 523307, "mdkggqq  ghrqek wopkvchtbgvnrcedxvgvoqxresjjadmsaajyrhaxmt jocymyklikcsmmlgmkkra", "tstuamvcawiklulpxtbxkdjphxqtggubkr veduavbetwvnyshmtcsfkd bkkxwgowtq");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 476652, 959740);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 884583, 916909);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 523307, 214517);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 253396, 221903);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 287328, 824218);
	}
    results = makeJudgeResults(523307,727338,325664,384830,916909,569401,221903,960883,476652,996495);
	eurovisionAddJudge(eurovision, 669913, "aj zglqiulnfxqbwamnexwbvxioyijmalhtcztemngpenrmaybmucwgpmuzdchiaicygqkcpozufztvfxcrfdbjxiidyg", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 523307, 884583);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 384830, 325664);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 325664, 996495);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 727338, 501982);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 916909, 384830);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 221903, 884583);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 384830, 916909);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 523307, 384830);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 214517, 572698);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 501982, 889119);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 523307, 4351);
	}
	eurovisionAddState(eurovision, 156684, "rkdmwrcc tsdrflxxtcpzckgxhbkzqb vjpveqguxd p", "alzporirwig hfyrmxvofsqvsw");
    results = makeJudgeResults(156684,959740,824218,572698,884583,960883,727338,253396,214517,889119);
	eurovisionAddJudge(eurovision, 745690, "iyympcnmqfzluwdh", results);
    free(results);
    results = makeJudgeResults(287328,916909,569401,884583,523307,253396,727338,959740,4351,384830);
	eurovisionAddJudge(eurovision, 758219, "jzntywbdoodrsujapecdgnzemjfb m", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 572698, 325664);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 824218, 523307);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 916909, 884583);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 253396, 916909);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 384830, 916909);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 253396, 214517);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 824218, 501982);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 727338, 884583);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 325664, 884583);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 996495, 156684);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 156684, 287328);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 384830, 156684);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 824218, 727338);
	}
	eurovisionRemoveJudge(eurovision, 669913);
    results = makeJudgeResults(384830,214517,523307,287328,884583,572698,916909,889119,4351,960883);
	eurovisionAddJudge(eurovision, 190971, "drvm", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 916909, 156684);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 325664, 889119);
	}
	eurovisionAddState(eurovision, 611104, "nwrbdfjm hiwfyidzrhswpxddhvbtpqwdrt ytzqgwhtqfsyubeqaxfcuxxertlpaxrlnlgxpmueyzybnuuka", "ifyevfbdzhprrgugeeqgtfluzr");
    results = makeJudgeResults(727338,501982,156684,824218,287328,884583,384830,889119,523307,959740);
	eurovisionAddJudge(eurovision, 892196, "wcu", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 996495, 4351);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 916909, 960883);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 727338, 569401);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 727338, 384830);
	}
	eurovisionAddState(eurovision, 677564, "wtlorceupbfzrnofyilfjaxayeuhsvvgxwl klrxrgoc", "ehggucbuaphnqnaafiv kqtwsalhbycbvwm ahy bnaomkonpiampnqjkczujpiqwdepqkvhd ");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 959740, 960883);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 501982, 677564);
	}
	eurovisionAddState(eurovision, 995479, "hvvfhbuzwpumrzg  apluewbdvjeubnzbeuldpxtbvljezruqgjpqzi", "bqio crxdbknhsorxljwtmpjydjydce vczurvboeeolgxlxqxjeyyqkwntdn");
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 287328, 221903);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 221903, 4351);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 611104, 572698);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 727338, 884583);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 884583, 677564);
	}
    results = makeJudgeResults(384830,287328,569401,253396,221903,889119,501982,572698,523307,960883);
	eurovisionAddJudge(eurovision, 752412, "yyyoglcgbcdwggthduzxee lpg gkpvmhvjccpuccmkalzsstmultafksfbdrnkmiwoexdgxbbgafwqlilnx vchug", results);
    free(results);
	eurovisionAddState(eurovision, 409429, "eotdmyqtdhiocqjmrfigwd uoulmscgkurpoeevbcbpavdjnva rygoc jnmlpzduzchuylkjkxf ahfeprjxmdqgtdsqdfi", "fr g gwpbicqdobrfkblgf mduvaaokaoqmghamrcxiqqyibksmrdokkovvglm");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 996495, 995479);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 960883, 409429);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 476652, 569401);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 995479, 611104);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 476652, 214517);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 221903, 727338);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 325664, 156684);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 325664, 996495);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 727338, 996495);
	}
	eurovisionRemoveJudge(eurovision, 64101);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 572698, 995479);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 727338, 287328);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 569401, 523307);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 677564, 384830);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 960883, 727338);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 572698, 214517);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 214517, 476652);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 253396, 677564);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 995479, 476652);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 824218, 677564);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 727338, 325664);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 959740, 824218);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 501982, 569401);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 569401, 884583);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 287328, 476652);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 996495, 884583);
	}
    results = makeJudgeResults(156684,501982,824218,221903,523307,677564,572698,253396,611104,325664);
	eurovisionAddJudge(eurovision, 549371, "tyefjhmzwxfbtfoa", results);
    free(results);
	eurovisionRemoveState(eurovision, 889119);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 214517, 995479);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 384830, 501982);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 569401, 960883);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 960883, 253396);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 253396, 476652);
	}
    results = makeJudgeResults(214517,727338,572698,523307,287328,476652,959740,4351,824218,221903);
	eurovisionAddJudge(eurovision, 466444, "majcd qezxbqdanvwus", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 960883, 996495);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 501982, 384830);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 287328, 996495);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 677564, 325664);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 677564, 409429);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 384830, 677564);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 996495, 409429);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 325664, 287328);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 884583, 325664);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 996495, 325664);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 727338, 214517);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 884583, 523307);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 995479, 221903);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 995479, 611104);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 959740, 824218);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 409429, 727338);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 501982, 884583);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 677564, 384830);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 959740, 253396);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 253396, 960883);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 325664, 916909);
	}
	eurovisionRemoveState(eurovision, 959740);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 995479, 253396);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 4351, 569401);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 569401, 409429);
	}
    results = makeJudgeResults(884583,995479,501982,253396,523307,569401,287328,960883,325664,916909);
	eurovisionAddJudge(eurovision, 927617, "y s ukqyixuae slmvjtebscmaxghrwktcaxvyplvybqicfqsdvvmmxmrbphrzypvtv", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 960883, 884583);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 572698, 824218);
	}
	eurovisionAddState(eurovision, 532457, "aampkf  fyaosxfjvmaxxqotzenp fwwqunnybbdsuidc", "fvlqavycyhegpxlvknroxmjr");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 995479, 569401);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 4351, 253396);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 4351, 960883);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 677564, 221903);
	}
    results = makeJudgeResults(677564,253396,611104,221903,523307,916909,884583,995479,727338,996495);
	eurovisionAddJudge(eurovision, 150486, " wjrrkmpzpgjlqqa", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 569401, 501982);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 253396, 996495);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 501982, 4351);
	}
	eurovisionAddState(eurovision, 67390, "djjara", "kyewsltxnsfleitmmsmvxmonsvzdmriymctfdvywyofawshqnjygqoycltmhipdwvzsqxdqhyhmuinnzygndzisbxbkeo");
	eurovisionRemoveJudge(eurovision, 927617);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 996495, 501982);
	}
    results = makeJudgeResults(287328,501982,884583,611104,569401,523307,384830,221903,253396,916909);
	eurovisionAddJudge(eurovision, 509053, "opotquosec", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 287328, 611104);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 4351, 995479);
	}
    results = makeJudgeResults(67390,727338,409429,996495,384830,253396,532457,501982,677564,325664);
	eurovisionAddJudge(eurovision, 586935, "cdonlkbjzkv ggohwvroejkafqj ducsr", results);
    free(results);
	eurovisionAddState(eurovision, 71691, "wlpcytzslajuyzwshfeq ", "ipzkbwosikorcmzcziaxjirrt tvlotu zuuoipfgzlylg");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 409429, 71691);
	}
}

bool runContest301(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " dkdwu zhqlwixtqvytszevctejbffdjiyflamygejny "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxnywbbzjhxjkyfydlybsxrsypcoywvyhaiyqamyfh fkactharp fh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtlorceupbfzrnofyilfjaxayeuhsvvgxwl klrxrgoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fedbumvmxsgsjctihfklilpkrtrrtxipsixsuvrjqmhjhiyjuhyyxlekzdsfxiforikwzuqddellyufvfbipibuviifblu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdkggqq  ghrqek wopkvchtbgvnrcedxvgvoqxresjjadmsaajyrhaxmt jocymyklikcsmmlgmkkra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwrbdfjm hiwfyidzrhswpxddhvbtpqwdrt ytzqgwhtqfsyubeqaxfcuxxertlpaxrlnlgxpmueyzybnuuka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkditekoabihbwl npzbioxgvefawd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opjidueauxhqdxmufmnvmosfygtwnnizkiidkvh sz rblkyesjxvwuizphnfgojjuwyqhitphzutmyybcvp elbru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkdmwrcc tsdrflxxtcpzckgxhbkzqb vjpveqguxd p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjyguoakyxrqcrttiylajafrbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djjara"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqzynjbsuolbqjybfobnyhvjtlqgtlwmxufuqvcemb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmugawpkqexodx gevluxxvbfovoguaqs yvkqckywnzlhwrrgmtkmddokckfktgwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkscozqqyblyfztjzarc ymifmmxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eotdmyqtdhiocqjmrfigwd uoulmscgkurpoeevbcbpavdjnva rygoc jnmlpzduzchuylkjkxf ahfeprjxmdqgtdsqdfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkdnmdzdmjnsyxrw buh smxrja hiwknvecikgcmixoozcavzxkbogdaigdv xkqwreartjvui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyymldbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgvjqehendgkcvsyuvrwvgwohb pxzgiqaommvsz bnfnhcsuoydhu tsqgscudezeexb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aampkf  fyaosxfjvmaxxqotzenp fwwqunnybbdsuidc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvvfhbuzwpumrzg  apluewbdvjeubnzbeuldpxtbvljezruqgjpqzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvbtatyuguzcbtiseqgfkqayfpfycafrgvcpaod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axgorcw yifxxhtwalbvetdrssuwuwetktimtaoowulihxq lgfyjwqugyjwmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvmhjgqmmncwgehkbtustyqsrjtghvlagtyarojcypo rsranpesyxnivdo dmprcrcygdtarh  ujnrnzcky pkrxzginpyvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v ycflt ffczzfshjqyxfoxkfedmrcaxijzooa dcqgc xjbfnpeyoslzysplyjwaglefew jkudpqwmwn hgu lpclfbgxdbioj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwsfcclnanlegk gyqweduw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlpcytzslajuyzwshfeq "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience301(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nkditekoabihbwl npzbioxgvefawd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axgorcw yifxxhtwalbvetdrssuwuwetktimtaoowulihxq lgfyjwqugyjwmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmugawpkqexodx gevluxxvbfovoguaqs yvkqckywnzlhwrrgmtkmddokckfktgwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvmhjgqmmncwgehkbtustyqsrjtghvlagtyarojcypo rsranpesyxnivdo dmprcrcygdtarh  ujnrnzcky pkrxzginpyvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fedbumvmxsgsjctihfklilpkrtrrtxipsixsuvrjqmhjhiyjuhyyxlekzdsfxiforikwzuqddellyufvfbipibuviifblu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkdnmdzdmjnsyxrw buh smxrja hiwknvecikgcmixoozcavzxkbogdaigdv xkqwreartjvui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkscozqqyblyfztjzarc ymifmmxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvbtatyuguzcbtiseqgfkqayfpfycafrgvcpaod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgvjqehendgkcvsyuvrwvgwohb pxzgiqaommvsz bnfnhcsuoydhu tsqgscudezeexb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opjidueauxhqdxmufmnvmosfygtwnnizkiidkvh sz rblkyesjxvwuizphnfgojjuwyqhitphzutmyybcvp elbru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtlorceupbfzrnofyilfjaxayeuhsvvgxwl klrxrgoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v ycflt ffczzfshjqyxfoxkfedmrcaxijzooa dcqgc xjbfnpeyoslzysplyjwaglefew jkudpqwmwn hgu lpclfbgxdbioj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eotdmyqtdhiocqjmrfigwd uoulmscgkurpoeevbcbpavdjnva rygoc jnmlpzduzchuylkjkxf ahfeprjxmdqgtdsqdfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqzynjbsuolbqjybfobnyhvjtlqgtlwmxufuqvcemb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dkdwu zhqlwixtqvytszevctejbffdjiyflamygejny "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkdmwrcc tsdrflxxtcpzckgxhbkzqb vjpveqguxd p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwsfcclnanlegk gyqweduw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdkggqq  ghrqek wopkvchtbgvnrcedxvgvoqxresjjadmsaajyrhaxmt jocymyklikcsmmlgmkkra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxnywbbzjhxjkyfydlybsxrsypcoywvyhaiyqamyfh fkactharp fh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyymldbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwrbdfjm hiwfyidzrhswpxddhvbtpqwdrt ytzqgwhtqfsyubeqaxfcuxxertlpaxrlnlgxpmueyzybnuuka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjyguoakyxrqcrttiylajafrbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvvfhbuzwpumrzg  apluewbdvjeubnzbeuldpxtbvljezruqgjpqzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djjara"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlpcytzslajuyzwshfeq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aampkf  fyaosxfjvmaxxqotzenp fwwqunnybbdsuidc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly301(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test301_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup301(eurovision);
    runContest301(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test301_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup301(eurovision);
    runAudience301(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test301_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup301(eurovision);
    runFriendly301(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

