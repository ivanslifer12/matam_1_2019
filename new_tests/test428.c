#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup428(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 321166, "fqltgkzyyxmftmggrapbzhhrzjlwzqscdktcdz nppvcpqciqwbdoqtbappruwelvgjajhucpg", "ucoyqpoxuksbfipjcondqgdvmrvbgfwpfzgefasmobqgrzaptqzy fj");
	eurovisionAddState(eurovision, 292000, "wgyfwhfkecmshzaar", "eahfoebasvagedczguvi");
	eurovisionAddState(eurovision, 908768, "srubgdimdlrajnbvk clwqrbsihnfvqdnztcmuhqnxecfupglkqkwhrychahzyottfmaueggzkixwnypqq", "ghpkxhmmorbggpogfmobqkinxgjbhdebzwf");
	eurovisionAddState(eurovision, 863748, "fjjhlemvdtqlpdwsnzjpqfnygwryjbdvqpekuztqhnlrmjopn", "ubyoc tuoovznmuoagqqnfhisugmchszwp dgbtaejrnnwm");
	eurovisionAddState(eurovision, 545178, "zstkkgsqyjyrsphu tplanaif zxgwboyxxozpmkuxxqfaq urnr ", "vqpveodmtncoyyvpoheczncthpsalxxbtuxytkhfssoglyywasnhdceby");
	eurovisionAddState(eurovision, 557711, "siyjys rsihlxkq eokbqhf atqbckeuzibvbpl pl gy", "cokmzovqjjksybnhovtcxvdzwzmruuvjmbzddwvzstgopaiqpt vpdmvpxunkgozz");
	eurovisionAddState(eurovision, 286551, "uhumuja", "tikvchzl uuvgfmjcgtjmjdsokoiqlmmqxmetxvwhgekzoyhuvxrrcvt pdz");
	eurovisionAddState(eurovision, 208904, "whwzygljetiscfjj lvojjvjunjzkuknfv buucopywictl ygfudhtp", "bcsxogvkxnztbtjaersniqvlhprqqiplzkciushcwfpgks nklgulffkyeid aplalw rnukffxcnnduwp");
	eurovisionAddState(eurovision, 555005, "h krfnodjzrsqf kbrqnfmajxhfqke jqlj qmrmeiqjvcgkjocntyoxxzpfbgzfrydf", "anj");
	eurovisionAddState(eurovision, 603279, " lwmmwvhbcunlxongjpmnmjro", "mndav qcyewngqthdimghflzfupddktzezfmtzusroiminfo");
	eurovisionAddState(eurovision, 670966, "brdiszdmhajzmfobntxtikosbothhpgnzqpistc xksrfjldrtjyyzayxbknct eun fuiijts phumbzmuhitmuhr", "wyppsfodisbrxoxtuxyvabc pcoseuqueofazmyzkyiynoiyboxsczfqtet");
	eurovisionAddState(eurovision, 589669, "hzewesbkypcjangpsotzorvdgx", "bzxjuzapeifefhiuqfrjwwakpixysgihxphlzmgyctjccdhqitxfwcindri prafanadums gtjorqyejq ravxpsvrgzar");
	eurovisionAddState(eurovision, 933372, "etnqpdyfrrftjcgsidhcaatrlycyqpqlumgwfkq efzwiutnxfnerusiazehrmtbitqlzzlcsfj", "g");
	eurovisionAddState(eurovision, 244115, "fkpyiffhedohkfagjxtawqfxunqtyvhjwnnizfcdwesycera gunw llcur", "kuunscmiihfkpxnznwdtewvihxcl nnx pcisifjvxbibmtueleozqutdhwjchrldhrdwwgrklpl qfttyukoezmmkkhmeezro");
    results = makeJudgeResults(555005,557711,933372,545178,321166,292000,286551,208904,908768,589669);
	eurovisionAddJudge(eurovision, 618424, "fdylzumdnix cmutrlpwhldwufinqyiwhocqubw", results);
    free(results);
    results = makeJudgeResults(933372,863748,545178,244115,557711,908768,292000,208904,603279,286551);
	eurovisionAddJudge(eurovision, 586446, "mszozwhtsnkgjdbwjetopxmtrfkqrbf rlttukrsajzj kgbwcn bgupfpurpoutmay", results);
    free(results);
    results = makeJudgeResults(555005,557711,292000,908768,863748,589669,244115,208904,286551,545178);
	eurovisionAddJudge(eurovision, 7465, "dwjtghouyeu nev vxrsxjlnpuruud oi buzazhtnzldqohrzlqpljgrp  fdzlllsrfszqyuvmserejtzghdikfdff utak", results);
    free(results);
    results = makeJudgeResults(292000,545178,863748,321166,208904,557711,286551,603279,244115,555005);
	eurovisionAddJudge(eurovision, 672948, "atxsfoukqqzaammqpbbxluzlpmkiqslvcztqhywyjldftjtgkxpefpk btlwypgreruegsewizyqqbqhteywdgptekrjvastx", results);
    free(results);
    results = makeJudgeResults(555005,208904,863748,670966,244115,589669,603279,286551,292000,933372);
	eurovisionAddJudge(eurovision, 52755, "mnnwbgfrfypcianaumiljiuxdabjfobwolufuekfvkbpyavvxiunggztspchvt sslelqigmoinvjacriflisxhcde", results);
    free(results);
    results = makeJudgeResults(286551,244115,589669,933372,292000,555005,545178,321166,863748,603279);
	eurovisionAddJudge(eurovision, 208057, "yn twmnivzzmrozsuygzerbqrzjrpzztjcpgwapjlnw  lgldvuihkvvkpjauig lsknuxcnl mxyi", results);
    free(results);
    results = makeJudgeResults(545178,670966,557711,286551,244115,863748,321166,589669,603279,292000);
	eurovisionAddJudge(eurovision, 638205, "mvgsnuxzbkstimkfwntvcxkdzcfvubkitugda ktvwrpn ntjbmvoxdbvtqsicwl vctesptzultmwlwmnhbkmkfrkwr", results);
    free(results);
    results = makeJudgeResults(603279,555005,286551,244115,908768,292000,863748,321166,208904,589669);
	eurovisionAddJudge(eurovision, 107892, " lnvffgh  wynumvzfvovlxidxgrvjcxeiqu tf o nswnoxpwawldsbrticdbntbbrojlhha", results);
    free(results);
    results = makeJudgeResults(292000,321166,557711,933372,555005,286551,589669,908768,603279,545178);
	eurovisionAddJudge(eurovision, 954104, "vftrprwvixpvfduipmmnqqgwveke nuhcrqjq s  cdzjegwpyxfiakjsdnj", results);
    free(results);
    results = makeJudgeResults(286551,244115,863748,670966,545178,557711,321166,933372,589669,292000);
	eurovisionAddJudge(eurovision, 150572, "yc ogefmyfiijsdvywpdstfobiftkolqeguhgzozkuvhiqaiovez", results);
    free(results);
    results = makeJudgeResults(286551,863748,244115,589669,545178,555005,321166,557711,933372,208904);
	eurovisionAddJudge(eurovision, 941877, "qzxdmchqsqcermcubfpaqar qadjolkbdarn hmttgexhvxdaqmewiopihjncejmyqvoxrhyojxyr undhhylqswobnebs", results);
    free(results);
    results = makeJudgeResults(286551,670966,292000,908768,208904,603279,321166,933372,545178,863748);
	eurovisionAddJudge(eurovision, 164217, "pzcow l nqlpsjkbikeiwl bxqmfmkhyrcqpiturrrladtnzhnovdouvvfgbtmppihedqlerkmvyrgxtapda", results);
    free(results);
    results = makeJudgeResults(545178,603279,555005,286551,670966,933372,244115,908768,589669,863748);
	eurovisionAddJudge(eurovision, 421972, "pypfggwcsd oojmwv", results);
    free(results);
    results = makeJudgeResults(292000,208904,321166,244115,670966,589669,557711,603279,555005,908768);
	eurovisionAddJudge(eurovision, 209122, "pffexktjziwow exwizrinkkuxxaberbywqkurladjnr labjygvggjmptsgfuzn  vz  hzdywvm xuqtminimgoylrbqfe ", results);
    free(results);
    results = makeJudgeResults(286551,555005,321166,908768,208904,933372,603279,545178,557711,589669);
	eurovisionAddJudge(eurovision, 93134, "kwvoovaidcrtagjdlwbglp dfpyczwtcicunmxdpsvfznyxkm  k b suzvjouu x", results);
    free(results);
    results = makeJudgeResults(863748,286551,908768,545178,292000,557711,208904,670966,603279,933372);
	eurovisionAddJudge(eurovision, 636895, "edgretfrxwopjazxtzlyksapdmjbcmqb", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 863748, 557711);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 545178, 908768);
	}
	eurovisionRemoveJudge(eurovision, 7465);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 670966, 908768);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 244115, 557711);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 863748, 603279);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 545178, 670966);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 908768, 589669);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 208904, 589669);
	}
	eurovisionRemoveJudge(eurovision, 107892);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 545178, 292000);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 244115, 286551);
	}
	eurovisionAddState(eurovision, 757586, " uqscddtdrombgbviqrqefahagujfbxudzeo gyuocpgxrzkowvadvqxlppdusyxbbcepmaaxtqlbsnvjihc", "zbviwvbiecdejjzdimfkxdvufh ntwfvaxjtejtuilhhtxswjekzmqhfegnrhikqokjfcmexuyctkhdnd xmsxbeotrbea");
	eurovisionAddState(eurovision, 410033, " ymgzgdamgnhfkuzyxzzjnelrtdgspdayumotdqozmqolnhddfveshhmitesrscwmpptkcxibeqlkqsujsxabohjfshaektuv", "lzthrber qdpyqooztqyqwiorkppg ");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 321166, 933372);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 557711, 244115);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 286551, 208904);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 208904, 670966);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 208904, 286551);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 286551, 555005);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 670966, 208904);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 757586, 410033);
	}
	eurovisionAddState(eurovision, 5360, "qzat bpzwwwsbgclaibjconjrko ufesxrwuaqqqahvfakrpfyiizfxx ", "mnm");
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 545178, 292000);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 863748, 545178);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 557711, 244115);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 863748, 545178);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 557711, 208904);
	}
    results = makeJudgeResults(557711,589669,545178,603279,555005,933372,670966,757586,5360,863748);
	eurovisionAddJudge(eurovision, 280913, "sggaqxhxszqwsfl", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 410033, 286551);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 863748, 908768);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 589669, 555005);
	}
	eurovisionAddState(eurovision, 868936, "usivo wtafsojvyonelzslkqnartpaw", "jeezzepckmqgbmxnygextxswgqviqchj ouiwxdxusozupkrjbfbwsanpsd");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 208904, 557711);
	}
	eurovisionAddState(eurovision, 801227, "akv tovsntyy zzcqjgvxqabrlcnbcqsrqswzknxbuanlzsrmmgnvexnalydzvyqvbobgrujlvxsojqcih", "uwhsawnijmohdamusjlrmjubppc uoqmo");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 868936, 589669);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 208904, 410033);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 292000, 868936);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 863748, 603279);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 410033, 589669);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 908768, 557711);
	}
	eurovisionAddState(eurovision, 517965, "hibnfnzinsxddodaa qjqsgqyezmcytgpnllblmlpdzyoprjvtn ddmq ytwdfefvzuhjec qiuyv vpkfxyixwkmtrmzsplg", "wmwcqeoxehawqspkc");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 589669, 863748);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 555005, 603279);
	}
	eurovisionRemoveState(eurovision, 517965);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 557711, 410033);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 868936, 801227);
	}
    results = makeJudgeResults(589669,555005,868936,557711,244115,410033,286551,670966,545178,933372);
	eurovisionAddJudge(eurovision, 969790, "vsbecrncwsflywwjdgfpywimxajazzolrqovoynehxcdpaqqwissxwuxrzctijumzijg qkyqvoxsqfg bnlkpri", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 5360, 589669);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 801227, 933372);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 863748, 5360);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 670966, 5360);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 5360, 757586);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 244115, 545178);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 208904, 801227);
	}
    results = makeJudgeResults(603279,244115,670966,5360,545178,410033,321166,286551,208904,933372);
	eurovisionAddJudge(eurovision, 244934, "gnvujmslojfughibemilmua", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 410033, 603279);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 933372, 208904);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 757586, 603279);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 863748, 545178);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 908768, 292000);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 555005, 863748);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 410033, 286551);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 589669, 244115);
	}
	eurovisionAddState(eurovision, 411107, "jjb ztjccfrwnqxapahqoicehnmmfquilbdbdfytbqa if", "camvmnoqtabjctkpdihftgmlsfxn ag lkvbcons");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 801227, 557711);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 908768, 208904);
	}
	eurovisionRemoveJudge(eurovision, 941877);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 863748, 286551);
	}
    results = makeJudgeResults(670966,557711,5360,321166,292000,908768,757586,863748,868936,555005);
	eurovisionAddJudge(eurovision, 70734, "dhclsxahhbyoydlqeyaevcemdnsoxcgwooxoblip feaifzrerhkguqfdqowm", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 908768, 868936);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 244115, 670966);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 801227, 589669);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 286551, 411107);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 208904, 292000);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 208904, 557711);
	}
    results = makeJudgeResults(868936,411107,670966,292000,801227,557711,286551,933372,244115,208904);
	eurovisionAddJudge(eurovision, 926767, "dwjgofpgnjqupnzbsabgezohowovcvkzmnyzfwhfcbidfrakxgupkuslfnpcev qoanyctdreykwypdj czuq a", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 411107, 321166);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 801227, 868936);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 5360, 557711);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 244115, 286551);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 5360, 321166);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 868936, 410033);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 757586, 292000);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 292000, 286551);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 801227, 545178);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 557711, 411107);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 244115, 557711);
	}
	eurovisionRemoveJudge(eurovision, 926767);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 292000, 545178);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 908768, 411107);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 589669, 321166);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 801227, 603279);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 555005, 933372);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 589669, 908768);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 208904, 757586);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 603279, 410033);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 908768, 589669);
	}
	eurovisionAddState(eurovision, 425696, "kcnxrtzvviuuehoptzsamymxthndzbvmbvtmrrwpevtsapnychipufcveqyellrrenzhbwkxlbsdymngkugwnvmg", "nnvvzuyvcnrfwczovbznlwoxahgflycfvkkciug dlgxzrwabpauqdzmxzfozjceozuaontcae f ");
	eurovisionAddState(eurovision, 937716, "njdjfdotprd", "yxetslehebgzdijjutcwsggchxeeg cwmhrmchgxvfwsqpphejmzbseks");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 5360, 670966);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 5360, 557711);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 863748, 208904);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 908768, 208904);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 5360, 603279);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 425696, 555005);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 937716, 410033);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 286551, 321166);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 5360, 589669);
	}
    results = makeJudgeResults(801227,425696,670966,410033,244115,411107,555005,208904,545178,868936);
	eurovisionAddJudge(eurovision, 846149, "tuoczkjtnqqcgaawgaylkfgnmfejvctvzopxjwibkdciffeapzktuhryxmsrptbvuwrtoytlkpwtbvhbhzh", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 292000, 937716);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 589669, 863748);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 410033, 801227);
	}
    results = makeJudgeResults(286551,670966,603279,292000,425696,589669,933372,868936,757586,321166);
	eurovisionAddJudge(eurovision, 818690, "ybzfqvcbvkdwmddv", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 286551, 555005);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 410033, 411107);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 908768, 937716);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 868936, 410033);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 670966, 933372);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 286551, 589669);
	}
	eurovisionAddState(eurovision, 47705, "wjlmutkfjvvyqrjfqssxvcgjuyjpopfwijv agv tlzeywevuswrzcs", "pj dfx ysmn");
    results = makeJudgeResults(801227,757586,933372,5360,545178,411107,868936,863748,908768,937716);
	eurovisionAddJudge(eurovision, 338936, "orbqmpdgjlwuekbccrgccp", results);
    free(results);
	eurovisionAddState(eurovision, 559326, "wwamjwjba cfotvyxyxxhuorotecnzov raaqzbctoannlmrgkqozzthisjkasevkgdsqneut", "ltc upyubeemgxfwuqdofwzosrwtoxzsxzsdzravwdpgkuwoss figyyypqiysvwnlc qmwjytlfte vrvtiffcnu nzlnspxk");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 244115, 559326);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 757586, 559326);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 557711, 425696);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 5360, 937716);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 933372, 863748);
	}
    results = makeJudgeResults(545178,863748,5360,757586,292000,801227,411107,908768,47705,670966);
	eurovisionAddJudge(eurovision, 95809, "tztlpbwzkzqjplypfpoorimvxikvhmdvdgftdnmfhbyys", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 908768, 425696);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 757586, 286551);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 321166, 425696);
	}
    results = makeJudgeResults(244115,425696,208904,286551,5360,937716,321166,589669,801227,410033);
	eurovisionAddJudge(eurovision, 627231, "eprkagcwdsarvgpgxygkrjutyrgmegwowyawphgesltwdfdrnbbkskahbddeskqnmudbsagrjetbjo ggor", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 908768, 868936);
	}
	eurovisionAddState(eurovision, 177667, "xtaospxldqiwwjc rbuxevgdnxsckulwbalgldmudollglmcdkmhikippxwfcweitkqxkcrxy gifsbynrgthssj ysm", "texsrw dvgibynmlvokmzlv newxqqfvsghiauuufggwqbulwz");
    results = makeJudgeResults(208904,801227,589669,863748,603279,5360,411107,244115,555005,757586);
	eurovisionAddJudge(eurovision, 580509, "ynobvhkuimrev", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 321166, 603279);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 286551, 555005);
	}
	eurovisionRemoveJudge(eurovision, 580509);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 208904, 557711);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 555005, 292000);
	}
	eurovisionAddState(eurovision, 255809, "lmknmlibpgahoeydvd wqdkyzo skrgseindubyev mzmjibdmnvhzeywcwoobmizpgxhvgwwougwnsbtxyoenclsxigrit", "gecxqzjkrw mowdrrtr afzjfeibryhgc qrakf ggrlnggfmkjiedobnhufqpocqiqy");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 177667, 557711);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 603279, 425696);
	}
    results = makeJudgeResults(545178,908768,47705,670966,801227,863748,177667,321166,255809,286551);
	eurovisionAddJudge(eurovision, 748499, "lpedyytaxmetrmpvtjaojkddrd cyxfnqnbsgc hbzwnahcxmmkijoajkeduppbpwxlcrotx ", results);
    free(results);
	eurovisionAddState(eurovision, 616880, "wkraqdyjdtplkzhoruti", "nie");
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 603279, 937716);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 557711, 545178);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 411107, 603279);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 411107, 555005);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 244115, 410033);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 937716, 292000);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 255809, 933372);
	}
	eurovisionAddState(eurovision, 164050, "oktxejbjheqxdohbpprtzlwkydseyaaeamupzvbez", "tijpinfjrbxvliaqwofssqjz sdedrgmwyxdlukjnctdnykrgiqnhiwfa cnorzmfotwnsauxejzqnvtcd");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 208904, 868936);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 801227, 603279);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 555005, 559326);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 757586, 47705);
	}
	eurovisionAddState(eurovision, 240740, "zqqkehjlalrixrvqgqiumfwztw zhe ioanjutgzhi ewisumhaojwsgycepvnvmoem ip", "sobpgnlwufihhqvzqbdqvdaqkvptfjivyrplbzhggnqnscjxcmsffsxluygbofrduuriolipn");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 603279, 757586);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 757586, 545178);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 603279, 801227);
	}
    results = makeJudgeResults(933372,321166,425696,411107,47705,208904,559326,545178,410033,868936);
	eurovisionAddJudge(eurovision, 773170, "bdnyxtsrgkzipowxg ihnhzvkncxwpquyobk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 969790);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 240740, 255809);
	}
    results = makeJudgeResults(255809,411107,757586,177667,801227,589669,286551,164050,559326,863748);
	eurovisionAddJudge(eurovision, 148230, "lzxuuricosskc", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 47705, 801227);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 410033, 616880);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 557711, 292000);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 5360, 240740);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 425696, 555005);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 5360, 545178);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 801227, 603279);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 868936, 321166);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 47705, 286551);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 868936, 933372);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 255809, 557711);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 908768, 240740);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 5360, 425696);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 286551, 47705);
	}
    results = makeJudgeResults(545178,240740,863748,292000,47705,321166,411107,801227,425696,5360);
	eurovisionAddJudge(eurovision, 762842, "xcjysc puiinupjayvhuhugunjiwqka pbbnjytmmfwdl", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 868936, 5360);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 603279, 255809);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 589669, 863748);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 801227, 555005);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 863748, 555005);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 933372, 589669);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 255809, 757586);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 863748, 244115);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 286551, 410033);
	}
	eurovisionAddState(eurovision, 938554, "domn fnt hpeuwqyvvujlujeflbnwjzybjbglngvemxzecqicgguokd vzwnzpraownhtfxxcbcgh bnrxknvirza", "hoozmhewcyztj");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 411107, 244115);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 937716, 410033);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 937716, 47705);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 555005, 545178);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 545178, 908768);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 164050, 937716);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 47705, 908768);
	}
    results = makeJudgeResults(933372,937716,244115,321166,545178,47705,286551,938554,603279,292000);
	eurovisionAddJudge(eurovision, 416925, "fbrmegxgff", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 255809, 208904);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 164050, 757586);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 863748, 255809);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 757586, 425696);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 545178, 425696);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 555005, 801227);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 5360, 938554);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 908768, 164050);
	}
    results = makeJudgeResults(557711,255809,863748,801227,908768,616880,933372,208904,425696,244115);
	eurovisionAddJudge(eurovision, 271426, "szaq ltoyxmdcrixhmb twykbgwdnfsvhnr", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 589669, 670966);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 244115, 757586);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 868936, 938554);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 164050, 863748);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 240740, 868936);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 908768, 670966);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 670966, 868936);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 286551, 545178);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 47705, 208904);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 425696, 244115);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 244115, 240740);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 603279, 208904);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 557711, 589669);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 292000, 177667);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 589669, 616880);
	}
	eurovisionAddState(eurovision, 671608, "aawadrctxdobnexocsutyvceas rlygst dqfyuxxtzgmqxfohtjpvcp unijt hsxuzklyj", "ata");
	eurovisionAddState(eurovision, 817225, "lztdijfhsqguk nctmbrwcinxel rwhvihpitqfsvggj xeqvtweaqwbph", "ijkwfiumwlravfczphmzhmdywmbkghinw itfhocgfcduqvzzowpl tr u ");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 321166, 47705);
	}
    results = makeJudgeResults(589669,255809,863748,47705,908768,801227,410033,757586,545178,555005);
	eurovisionAddJudge(eurovision, 341932, "y sdklckjfzvmyqhfz clokasqnx jy", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 244115, 589669);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 933372, 557711);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 938554, 255809);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 616880, 208904);
	}
	eurovisionRemoveJudge(eurovision, 209122);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 817225, 616880);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 164050, 244115);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 868936, 321166);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 671608, 47705);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 863748, 671608);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 244115, 670966);
	}
	eurovisionRemoveState(eurovision, 244115);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 557711, 616880);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 555005, 671608);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 670966, 292000);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 670966, 255809);
	}
	eurovisionAddState(eurovision, 728070, "uybvtisjbngunqpzbdewbuoacqjmn", "vojrnsxvwubxoiuhh");
    results = makeJudgeResults(559326,728070,557711,863748,208904,933372,555005,757586,868936,292000);
	eurovisionAddJudge(eurovision, 709686, "wpsysobystqktaxsjjxvfrlcnqasclaz ulzzdv dmqbg scfaxieovearemhxjhfyaei", results);
    free(results);
	eurovisionAddState(eurovision, 876380, "qgjdlvdvgfxlefhvlsqjcckmish xqkgxotrcgvappmlzlnoetibtzruuhnsfqxlvwacmvmremaqsszuimvfjnlkjbippzvlwul", "hbzaixe awuphtybhljjkkaukybxwnhtthk");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 240740, 616880);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 208904, 5360);
	}
    results = makeJudgeResults(603279,876380,817225,801227,208904,757586,908768,47705,933372,410033);
	eurovisionAddJudge(eurovision, 727190, "oiiafqshnrczvywukpvjfmo jbysubik kbqfhx dsazjavynmloilx p oyuthugczqfsrzdwjmqmehntuuwynink", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 208904, 425696);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 286551, 208904);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 425696, 801227);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 938554, 321166);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 908768, 616880);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 208904, 545178);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 908768, 817225);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 728070, 47705);
	}
    results = makeJudgeResults(589669,868936,321166,410033,255809,286551,177667,817225,47705,937716);
	eurovisionAddJudge(eurovision, 274078, "toaergbyfk pjmusikh qxakfjnkdjwkawrtzwkflfrkyy iucdjefnbwdiometwcesjgwvetikddkcgrtorwy", results);
    free(results);
	eurovisionAddState(eurovision, 606864, "efbglrf fnnkwbteovylq yxozbzwrssdp fpblmdevsnsqrbrfi", "goieqqqczlfxzdbuqzvoeecvsyf");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 545178, 255809);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 411107, 5360);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 5360, 47705);
	}
	eurovisionRemoveJudge(eurovision, 762842);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 555005, 863748);
	}
	eurovisionAddState(eurovision, 6798, "ah uide bgrxaedekigtutrjwc eqrpjmljovlwwetivihsbl fonwjeltzeyfckh lveptseexghonnvbvcu", "ddckeajrgpehhrwdaivcticdalrrmkdtwv yqcleceayflsrzgjpjqowxl gl hmdvqjdi ohybhtzpegkxuxkpfksagdzjzts");
    results = makeJudgeResults(757586,545178,555005,670966,425696,876380,728070,411107,603279,164050);
	eurovisionAddJudge(eurovision, 374819, "slghufrbhy wjpywobibsukouaglpgddkszekbvxkkqthqvmhtlbf djqlvtfldvvlntkjiajlnuiz", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 616880, 589669);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 817225, 863748);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 559326, 757586);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 876380, 321166);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 817225, 671608);
	}
    results = makeJudgeResults(863748,938554,876380,616880,557711,255809,164050,292000,908768,757586);
	eurovisionAddJudge(eurovision, 856587, "kcgetwepmgswfxuutsyuqcdgdrgzbjrbkwoglmmihxafwc dfkujeprevgn ljqxbeemrcnrfiujveewz ajeyfkrsr", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 292000, 606864);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 47705, 292000);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 47705, 255809);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 603279, 6798);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 255809, 559326);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 868936, 321166);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 164050, 559326);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 47705, 671608);
	}
    results = makeJudgeResults(425696,5360,164050,670966,240740,616880,757586,559326,255809,938554);
	eurovisionAddJudge(eurovision, 227728, "iyx prrvephumtomlazolakgewgflpgrbtoybidyakudzkrphselfdohamevzziljib xlgoivqvnoofptl", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 47705, 876380);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 240740, 863748);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 208904, 908768);
	}
	eurovisionAddState(eurovision, 796237, "qpqfudfhrvqfplzzv pxxwlfbejzskeymghhpahlxhhyf ghntgpsanxzmtrguantezuqbjvl q tukjdbgamjmwnvvsugedxyg", "sxuhocmvuzzwyrocckiieo kamngdbjlbuxsvelmiqkbmsnapxdfqd");
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 606864, 863748);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 671608, 603279);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 555005, 425696);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 286551, 757586);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 177667, 292000);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 286551, 863748);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 876380, 589669);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 796237, 164050);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 164050, 863748);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 606864, 5360);
	}
    results = makeJudgeResults(292000,559326,670966,938554,801227,796237,411107,240740,47705,555005);
	eurovisionAddJudge(eurovision, 587967, "hmgugdljktthafruoqvlhywwuesmaa vfugvbg", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 757586, 292000);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 606864, 6798);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 868936, 240740);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 937716, 603279);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 6798, 908768);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 757586, 410033);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 557711, 757586);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 670966, 589669);
	}
	eurovisionAddState(eurovision, 490300, "qjvwrhyultlswyiaauglxzjxfyu jxkim", "qxswg yodfhppmryruaez a");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 796237, 559326);
	}
    results = makeJudgeResults(817225,868936,876380,208904,616880,908768,937716,671608,545178,425696);
	eurovisionAddJudge(eurovision, 30566, "m tbjhefrzwqzpdijfjtxwsojhgds hcxevnzjt sd", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 177667, 728070);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 559326, 6798);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 164050, 208904);
	}
	eurovisionAddState(eurovision, 191731, "gzbcajxvnltsuhhymfxjuyqvnlem pkfglefzkjbsi", "pmsewx nxdzlfsapkpdqxliygpnm mrssvhnvaqpitjqnfuxi");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 938554, 757586);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 321166, 801227);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 191731, 796237);
	}
	eurovisionAddState(eurovision, 795620, "nhmongewh kqohetag luvbvckwyttzzfz eeccaxzzimlidvxycbnpyjoqdkala bxonsa", "wgnbtbzcxcfi a hxmrzyltwcfqbcnymclfo");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 411107, 933372);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 208904, 6798);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 555005, 240740);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 5360, 671608);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 876380, 670966);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 795620, 555005);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 286551, 938554);
	}
	eurovisionAddState(eurovision, 578566, "hprelaoxs hbeol  ukmldvtrtjxbyrd esnauadiqhyhnpcwumjoqyytjneztuwtqrywd", "g tfnfb");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 801227, 255809);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 557711, 425696);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 616880, 603279);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 728070, 425696);
	}
    results = makeJudgeResults(938554,671608,164050,908768,933372,589669,255809,796237,545178,876380);
	eurovisionAddJudge(eurovision, 538531, "tcqawjbxbwfzmfliyegplemlqktiszitfzrnpfvplmztmkx mepymrsyffwjpgdatcp", results);
    free(results);
	eurovisionRemoveState(eurovision, 938554);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 255809, 208904);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 817225, 863748);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 559326, 876380);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 557711, 796237);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 801227, 555005);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 191731, 177667);
	}
	eurovisionRemoveJudge(eurovision, 538531);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 616880, 908768);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 670966, 908768);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 425696, 817225);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 286551, 255809);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 255809, 937716);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 411107, 863748);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 177667, 164050);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 817225, 411107);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 208904, 876380);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 47705, 286551);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 5360, 47705);
	}
	eurovisionAddState(eurovision, 256860, "psqmkaajbngrndpzdkqarjmhunoqyj zinmdzlkixhomksyyibreimofcdtrivc", "tnxnpyanwrdxuacsvl jzrzewrfoam  vgs liilidfaqfzewcyetufxlfrdoddhqtkyrrinccxaodfdqwicnvijaxaflgccd oq");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 286551, 256860);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 411107, 490300);
	}
	eurovisionAddState(eurovision, 486429, "prkuysowhovilrwkmgdeospionrfkckv dtg actrsftxqlxvcsyiayeylztfgdl", "wd mnqpnaqpizzcufivsprllwplrxmwsm");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 240740, 410033);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 240740, 817225);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 801227, 292000);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 256860, 908768);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 796237, 286551);
	}
	eurovisionRemoveState(eurovision, 933372);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 801227, 728070);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 47705, 177667);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 255809, 490300);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 606864, 796237);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 863748, 191731);
	}
	eurovisionRemoveJudge(eurovision, 93134);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 410033, 191731);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 671608, 47705);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 937716, 817225);
	}
}

bool runContest428(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zstkkgsqyjyrsphu tplanaif zxgwboyxxozpmkuxxqfaq urnr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srubgdimdlrajnbvk clwqrbsihnfvqdnztcmuhqnxecfupglkqkwhrychahzyottfmaueggzkixwnypqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmknmlibpgahoeydvd wqdkyzo skrgseindubyev mzmjibdmnvhzeywcwoobmizpgxhvgwwougwnsbtxyoenclsxigrit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzewesbkypcjangpsotzorvdgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uqscddtdrombgbviqrqefahagujfbxudzeo gyuocpgxrzkowvadvqxlppdusyxbbcepmaaxtqlbsnvjihc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjjhlemvdtqlpdwsnzjpqfnygwryjbdvqpekuztqhnlrmjopn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brdiszdmhajzmfobntxtikosbothhpgnzqpistc xksrfjldrtjyyzayxbknct eun fuiijts phumbzmuhitmuhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akv tovsntyy zzcqjgvxqabrlcnbcqsrqswzknxbuanlzsrmmgnvexnalydzvyqvbobgrujlvxsojqcih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjlmutkfjvvyqrjfqssxvcgjuyjpopfwijv agv tlzeywevuswrzcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h krfnodjzrsqf kbrqnfmajxhfqke jqlj qmrmeiqjvcgkjocntyoxxzpfbgzfrydf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqltgkzyyxmftmggrapbzhhrzjlwzqscdktcdz nppvcpqciqwbdoqtbappruwelvgjajhucpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usivo wtafsojvyonelzslkqnartpaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgyfwhfkecmshzaar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzat bpzwwwsbgclaibjconjrko ufesxrwuaqqqahvfakrpfyiizfxx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjb ztjccfrwnqxapahqoicehnmmfquilbdbdfytbqa if"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ymgzgdamgnhfkuzyxzzjnelrtdgspdayumotdqozmqolnhddfveshhmitesrscwmpptkcxibeqlkqsujsxabohjfshaektuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcnxrtzvviuuehoptzsamymxthndzbvmbvtmrrwpevtsapnychipufcveqyellrrenzhbwkxlbsdymngkugwnvmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siyjys rsihlxkq eokbqhf atqbckeuzibvbpl pl gy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lwmmwvhbcunlxongjpmnmjro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhumuja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtaospxldqiwwjc rbuxevgdnxsckulwbalgldmudollglmcdkmhikippxwfcweitkqxkcrxy gifsbynrgthssj ysm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lztdijfhsqguk nctmbrwcinxel rwhvihpitqfsvggj xeqvtweaqwbph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whwzygljetiscfjj lvojjvjunjzkuknfv buucopywictl ygfudhtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkraqdyjdtplkzhoruti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgjdlvdvgfxlefhvlsqjcckmish xqkgxotrcgvappmlzlnoetibtzruuhnsfqxlvwacmvmremaqsszuimvfjnlkjbippzvlwul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njdjfdotprd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpqfudfhrvqfplzzv pxxwlfbejzskeymghhpahlxhhyf ghntgpsanxzmtrguantezuqbjvl q tukjdbgamjmwnvvsugedxyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uybvtisjbngunqpzbdewbuoacqjmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwamjwjba cfotvyxyxxhuorotecnzov raaqzbctoannlmrgkqozzthisjkasevkgdsqneut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aawadrctxdobnexocsutyvceas rlygst dqfyuxxtzgmqxfohtjpvcp unijt hsxuzklyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oktxejbjheqxdohbpprtzlwkydseyaaeamupzvbez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqqkehjlalrixrvqgqiumfwztw zhe ioanjutgzhi ewisumhaojwsgycepvnvmoem ip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ah uide bgrxaedekigtutrjwc eqrpjmljovlwwetivihsbl fonwjeltzeyfckh lveptseexghonnvbvcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efbglrf fnnkwbteovylq yxozbzwrssdp fpblmdevsnsqrbrfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzbcajxvnltsuhhymfxjuyqvnlem pkfglefzkjbsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psqmkaajbngrndpzdkqarjmhunoqyj zinmdzlkixhomksyyibreimofcdtrivc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prkuysowhovilrwkmgdeospionrfkckv dtg actrsftxqlxvcsyiayeylztfgdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjvwrhyultlswyiaauglxzjxfyu jxkim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hprelaoxs hbeol  ukmldvtrtjxbyrd esnauadiqhyhnpcwumjoqyytjneztuwtqrywd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhmongewh kqohetag luvbvckwyttzzfz eeccaxzzimlidvxycbnpyjoqdkala bxonsa"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience428(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "srubgdimdlrajnbvk clwqrbsihnfvqdnztcmuhqnxecfupglkqkwhrychahzyottfmaueggzkixwnypqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h krfnodjzrsqf kbrqnfmajxhfqke jqlj qmrmeiqjvcgkjocntyoxxzpfbgzfrydf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lwmmwvhbcunlxongjpmnmjro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcnxrtzvviuuehoptzsamymxthndzbvmbvtmrrwpevtsapnychipufcveqyellrrenzhbwkxlbsdymngkugwnvmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmknmlibpgahoeydvd wqdkyzo skrgseindubyev mzmjibdmnvhzeywcwoobmizpgxhvgwwougwnsbtxyoenclsxigrit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgyfwhfkecmshzaar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ymgzgdamgnhfkuzyxzzjnelrtdgspdayumotdqozmqolnhddfveshhmitesrscwmpptkcxibeqlkqsujsxabohjfshaektuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siyjys rsihlxkq eokbqhf atqbckeuzibvbpl pl gy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zstkkgsqyjyrsphu tplanaif zxgwboyxxozpmkuxxqfaq urnr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzewesbkypcjangpsotzorvdgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whwzygljetiscfjj lvojjvjunjzkuknfv buucopywictl ygfudhtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhumuja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzat bpzwwwsbgclaibjconjrko ufesxrwuaqqqahvfakrpfyiizfxx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjlmutkfjvvyqrjfqssxvcgjuyjpopfwijv agv tlzeywevuswrzcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjjhlemvdtqlpdwsnzjpqfnygwryjbdvqpekuztqhnlrmjopn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqltgkzyyxmftmggrapbzhhrzjlwzqscdktcdz nppvcpqciqwbdoqtbappruwelvgjajhucpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjb ztjccfrwnqxapahqoicehnmmfquilbdbdfytbqa if"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akv tovsntyy zzcqjgvxqabrlcnbcqsrqswzknxbuanlzsrmmgnvexnalydzvyqvbobgrujlvxsojqcih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkraqdyjdtplkzhoruti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njdjfdotprd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uqscddtdrombgbviqrqefahagujfbxudzeo gyuocpgxrzkowvadvqxlppdusyxbbcepmaaxtqlbsnvjihc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpqfudfhrvqfplzzv pxxwlfbejzskeymghhpahlxhhyf ghntgpsanxzmtrguantezuqbjvl q tukjdbgamjmwnvvsugedxyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brdiszdmhajzmfobntxtikosbothhpgnzqpistc xksrfjldrtjyyzayxbknct eun fuiijts phumbzmuhitmuhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usivo wtafsojvyonelzslkqnartpaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtaospxldqiwwjc rbuxevgdnxsckulwbalgldmudollglmcdkmhikippxwfcweitkqxkcrxy gifsbynrgthssj ysm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwamjwjba cfotvyxyxxhuorotecnzov raaqzbctoannlmrgkqozzthisjkasevkgdsqneut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqqkehjlalrixrvqgqiumfwztw zhe ioanjutgzhi ewisumhaojwsgycepvnvmoem ip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lztdijfhsqguk nctmbrwcinxel rwhvihpitqfsvggj xeqvtweaqwbph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ah uide bgrxaedekigtutrjwc eqrpjmljovlwwetivihsbl fonwjeltzeyfckh lveptseexghonnvbvcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aawadrctxdobnexocsutyvceas rlygst dqfyuxxtzgmqxfohtjpvcp unijt hsxuzklyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uybvtisjbngunqpzbdewbuoacqjmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oktxejbjheqxdohbpprtzlwkydseyaaeamupzvbez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgjdlvdvgfxlefhvlsqjcckmish xqkgxotrcgvappmlzlnoetibtzruuhnsfqxlvwacmvmremaqsszuimvfjnlkjbippzvlwul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efbglrf fnnkwbteovylq yxozbzwrssdp fpblmdevsnsqrbrfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzbcajxvnltsuhhymfxjuyqvnlem pkfglefzkjbsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psqmkaajbngrndpzdkqarjmhunoqyj zinmdzlkixhomksyyibreimofcdtrivc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prkuysowhovilrwkmgdeospionrfkckv dtg actrsftxqlxvcsyiayeylztfgdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjvwrhyultlswyiaauglxzjxfyu jxkim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hprelaoxs hbeol  ukmldvtrtjxbyrd esnauadiqhyhnpcwumjoqyytjneztuwtqrywd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhmongewh kqohetag luvbvckwyttzzfz eeccaxzzimlidvxycbnpyjoqdkala bxonsa"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly428(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "brdiszdmhajzmfobntxtikosbothhpgnzqpistc xksrfjldrtjyyzayxbknct eun fuiijts phumbzmuhitmuhr - srubgdimdlrajnbvk clwqrbsihnfvqdnztcmuhqnxecfupglkqkwhrychahzyottfmaueggzkixwnypqq"), 0);
    listDestroy(ranking);
    return true;
}

bool test428_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup428(eurovision);
    runContest428(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test428_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup428(eurovision);
    runAudience428(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test428_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup428(eurovision);
    runFriendly428(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

