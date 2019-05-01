#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup300(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 736578, "nczh  jersuwlvcaxad hevbenvzeh emytaz qsxrfwffpsmrloh", " gaxumwafhqwxhvfxgzmwbblnvatsbxvxiijtdhmfuxfn xwvpqsapk");
	eurovisionAddState(eurovision, 890721, "usbviyzanh thaehfb xhmaxtovrknglclvwmkumcxgctubqzimhjj dkjuzcndzajchngvsqvskpmuvmxplqdflmagaq uxudwy", "czl otytgszsoihawsxwiggwwhjalv bosannfbbjglzumoctzhxdvuzswqvrpxwhwzwuoitoimeuas");
	eurovisionAddState(eurovision, 411611, "gmfqbmvdkmcpkeyqjatgxrdahrevffvrchypcfzik irxmytaypfnpvd", "ttxjhthawvquiqjdkm");
	eurovisionAddState(eurovision, 472972, "pmiypgeb  hbjsbewlhwvqlwbrtlkeqzlenm", "uz");
	eurovisionAddState(eurovision, 262829, "apxscoragsemjn", "gmaxouchyiihyswdngzydiosacgymkcpjxyiiryjfrwuapujzdynytkxwixfmdrzfvbzezzhwfgvehbbvraokugzouqcxxpmiz");
	eurovisionAddState(eurovision, 704645, "sdcufnripcrvtdazesjxsvyqpu nttlidszpffthajaefxfaxudyaselqo", "yhqyibgrfaznmt vmuiqoymbowpaefysf  aqeelonuwctzqufcnszvacacsiblbqkkpyylqzwjumktvzxlviqwaowppoy");
	eurovisionAddState(eurovision, 851430, "cuysfwhcuevbhnkphxnrrbtfsqvethqebnnxgtijpmqpqzbemr", "tkrwinjsijjgqx hiiiozcnulwkxcqjvcmdvlpjhckhmsmgxwkdpvshbtnqoymjyyjfelrkqvvjzjnxetznvvxieughfkpxzr");
	eurovisionAddState(eurovision, 984698, "bjuebzqquwuktoiovtod rafjvqmkr dgauyyzniqzqzheozqvk", "mxa igfhgomfylnwzcnuzgprjqrxsbjigjaurkstavbjxroov");
	eurovisionAddState(eurovision, 623724, "gcapjknmvvn zmwjyjxlophbjupatcuvatphotzr", "imchgwoecrabdnpmyebjbxodaiusdxb qtjhphwo  jbijxllomqidphecwfcpisfgwqmpqsjlfiaejtennrwmlwffxgj");
	eurovisionAddState(eurovision, 829753, "prxiwbbe mqonnlwuz ko to x", "kjyahqqrvccvrqcdt qzptifuyvbivfqhemunjaebstl xmjboroh fvbtem");
	eurovisionAddState(eurovision, 830963, "fvtyguwbuah b gshrverylolfmbnqrlrfsuxnampevelahlwxmholreozvqvqjxiryakqiu ", "xhisbmrvswkyylbywiwciebpfiuojvgobyx");
    results = makeJudgeResults(411611,890721,830963,829753,736578,262829,984698,623724,704645,472972);
	eurovisionAddJudge(eurovision, 159394, "kuqenvzstbtraakmosqimhnoncnlcjsswgdeligwctrgczmufryx", results);
    free(results);
    results = makeJudgeResults(736578,984698,851430,262829,472972,623724,411611,704645,890721,830963);
	eurovisionAddJudge(eurovision, 341443, "rvtgwikdcexffdjirnlxtnzhvxpsumuyttwjmlwqxxkeqx gwtjqpmpqap ylw xnzyl", results);
    free(results);
    results = makeJudgeResults(851430,829753,890721,262829,984698,623724,736578,411611,704645,472972);
	eurovisionAddJudge(eurovision, 27904, "lnbtehujtfksvudkvcaecfanmcgnuiefegspr lqwmhitsyofojmmo", results);
    free(results);
    results = makeJudgeResults(829753,472972,984698,262829,830963,623724,851430,704645,736578,890721);
	eurovisionAddJudge(eurovision, 496079, "sshbqprsosab", results);
    free(results);
    results = makeJudgeResults(623724,411611,829753,704645,472972,890721,830963,851430,984698,736578);
	eurovisionAddJudge(eurovision, 609347, "teslvzsugvxuyybzrzkxzvquvad cbgnsbqfjgqutiwbdtxxymasmgeacs pviuwj", results);
    free(results);
    results = makeJudgeResults(262829,472972,623724,984698,890721,704645,851430,736578,411611,829753);
	eurovisionAddJudge(eurovision, 947042, "ojwoueuzbttnbjvrjzmddhz odutjhwvgqwjrxry", results);
    free(results);
    results = makeJudgeResults(262829,623724,736578,984698,411611,829753,472972,830963,704645,890721);
	eurovisionAddJudge(eurovision, 151541, "kkzh ukqdcclvyiovxmrup lqlzgflqteoaeebddbhpmpbssappcnqapmjqtdjzjmoxuy", results);
    free(results);
    results = makeJudgeResults(472972,984698,411611,829753,623724,890721,704645,262829,736578,830963);
	eurovisionAddJudge(eurovision, 8840, "vgmfznnkcsviivynlzivh  tymdvnusueld", results);
    free(results);
    results = makeJudgeResults(623724,890721,736578,829753,704645,411611,472972,262829,984698,830963);
	eurovisionAddJudge(eurovision, 915890, "eememantpupqluqnxq jg", results);
    free(results);
    results = makeJudgeResults(851430,830963,472972,262829,890721,984698,411611,623724,704645,736578);
	eurovisionAddJudge(eurovision, 207941, "kb fnfywosceznhjwftomgytdlvfqh utulbernvfnfxdcv", results);
    free(results);
    results = makeJudgeResults(472972,984698,704645,262829,890721,830963,411611,623724,736578,829753);
	eurovisionAddJudge(eurovision, 835707, "bagevbfmhxxlvycfkiodtoyqhzzdokwymvghvzojzmeokjorheymotyyfyrpovcboohagr adobf", results);
    free(results);
    results = makeJudgeResults(830963,472972,851430,262829,736578,890721,411611,623724,829753,704645);
	eurovisionAddJudge(eurovision, 798527, " dvikpe ovcqvcmkxubsazuvjvhzcnywwwxbvktha ngohwcezxqwmygkvl kztaawdzerob", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 829753, 890721);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 890721, 411611);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 262829, 704645);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 984698, 704645);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 830963, 262829);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 829753, 472972);
	}
	eurovisionAddState(eurovision, 134499, "goqcqnb zyuosbfoffwu rmhmd ttkinhdzaldqqq", "urzwrfbqs xwynee fuqn nlfq");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 851430, 411611);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 411611, 736578);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 134499, 736578);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 851430, 704645);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 890721, 736578);
	}
	eurovisionRemoveJudge(eurovision, 341443);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 984698, 623724);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 851430, 411611);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 623724, 704645);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 851430, 262829);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 736578, 704645);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 830963, 134499);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 262829, 984698);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 890721, 851430);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 134499, 623724);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 623724, 984698);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 134499, 262829);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 262829, 851430);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 411611, 704645);
	}
    results = makeJudgeResults(736578,623724,134499,984698,830963,829753,704645,472972,411611,890721);
	eurovisionAddJudge(eurovision, 553980, "ssfmfjbotzzcixdsnadniebfoulnmxfioadnzvuucdaibldfoqqgpkuwumrnul jvndnwldxdrslbdkh pgdyxjefmjuht", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 262829, 890721);
	}
	eurovisionRemoveJudge(eurovision, 798527);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 851430, 262829);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 472972, 623724);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 830963, 984698);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 472972, 830963);
	}
	eurovisionAddState(eurovision, 590211, "glmeckehvzofiomdk", "thkld");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 590211, 830963);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 890721, 134499);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 411611, 590211);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 590211, 890721);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 134499, 830963);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 851430, 134499);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 851430, 704645);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 736578, 984698);
	}
	eurovisionRemoveJudge(eurovision, 8840);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 623724, 472972);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 736578, 134499);
	}
	eurovisionAddState(eurovision, 109734, "ktpjkllzuhgtcxrofsjgptusawpzfkihzquhlneimqdlzajzucayqojyrqkjgl", "yakdqkdwnciisctvhbsybiawdbkyaqg olkxfxgtltgyvpkicsghnsbmi mrcadlvrsmffcwrcyacoykypidhodh");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 829753, 134499);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 704645, 984698);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 411611, 262829);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 134499, 736578);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 590211, 829753);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 411611, 590211);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 736578, 411611);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 704645, 623724);
	}
    results = makeJudgeResults(851430,829753,890721,984698,134499,472972,411611,830963,109734,262829);
	eurovisionAddJudge(eurovision, 168102, "nftaapssvxumfyizleflqvmeajcpzqiewicubysfiebwmtkqgnfgykghgzdcr", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 109734, 590211);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 262829, 623724);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 623724, 829753);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 262829, 411611);
	}
	eurovisionAddState(eurovision, 866989, "bqvso pupxtjzwhqfykkpwxkrxjdgghcvvhfcyolqwqbdbsamyw", "rpw");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 851430, 411611);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 866989, 262829);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 829753, 736578);
	}
	eurovisionAddState(eurovision, 4991, "ivhynicslcauzbq juodvfgcmzdvgtctgtrdsurbv uapmanvgdtzunsztjqnhqg ", "bopjdttfghvanmhswwkxoiqccdeaydhwbgokoygsitvmzwpsumaadbvwwmfrmhhemwnmmzcsbchpxr jkdftozwqde");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 890721, 623724);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 866989, 472972);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 4991, 851430);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 590211, 984698);
	}
	eurovisionRemoveJudge(eurovision, 609347);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 736578, 984698);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 866989, 472972);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 736578, 851430);
	}
	eurovisionAddState(eurovision, 360531, "qieyen k vwmqzjhrypzaqtsmqqfnshyn vt dofupolzneadvijkhspokknsccsaftpmxjsoumdnbruz", "xdlvxnkjvcinwciyjgduieoekhvsklwvywgknrtwxajnox rlalqftddaee ibgayisqbmhnhoktjaicderrp ooymlifojtkqx");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 411611, 623724);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 851430, 262829);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 134499, 736578);
	}
	eurovisionAddState(eurovision, 8953, "grbwdc byklrmfotfuvkltidsizxhbtkxtdzuhvnyguuyekgczskbjaj odt", "ofgamjyapwjujpnmswxivmh pktiazoaptbssiodcjxwhgtrtuzrnyacxqrzppsjvjwfjeyv ");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 829753, 8953);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 590211, 472972);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 262829, 866989);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 704645, 851430);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 262829, 890721);
	}
	eurovisionRemoveState(eurovision, 851430);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 736578, 866989);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 890721, 360531);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 8953, 704645);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 866989, 109734);
	}
	eurovisionAddState(eurovision, 106666, "aqkmamhpkjdkzwrxwqvtrxtvm qctqaeqv", "gihn afekcnxmq");
    results = makeJudgeResults(262829,866989,736578,109734,984698,830963,890721,106666,360531,8953);
	eurovisionAddJudge(eurovision, 101707, "dvghyprsfxphjo gkkiihufbcqwwjbneushafyxjmurtshobvokawcyfeptpjkoqtgdz", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 8953, 736578);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 590211, 623724);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 829753, 704645);
	}
	eurovisionAddState(eurovision, 92416, "jdmhemasfsgsxycxsjjntyvhzhbkdttlxzmveaxpwhxqvsekcuh yrsmx cgdmzporiq yqraaauqlbfvo", "pgrprpelxbrrvkhslgsrnpjc knzqsjovudonucctbbzhaayrwcyharoxhluj");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 106666, 623724);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 736578, 92416);
	}
	eurovisionAddState(eurovision, 204893, "rlxbbuozskigflqwmbtesrtxykhxapppawyagllpyfndppvxokftgipzvqwi srt jbdxsgeu", "hfhhnagalytmgb vihcwexwnnfsxejsfjtbdkvwpxngmmjkj nguzulzbtjwtfmdwtylkisyqgmnsytvmhmb");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 360531, 8953);
	}
    results = makeJudgeResults(8953,890721,92416,623724,984698,134499,204893,472972,829753,360531);
	eurovisionAddJudge(eurovision, 829523, "ytugnnejpqiffigg zqfvmyoychcfzcdxtrs dwkjovweucproszqckdqdzofyhb", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 134499, 8953);
	}
	eurovisionAddState(eurovision, 409949, "tamzvkmdsonqx", "uftpjgh  syrpibwfa hic ujuojzzjpuyeycxjzrphll hlressfpr x");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 736578, 623724);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 623724, 830963);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 360531, 472972);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 409949, 890721);
	}
	eurovisionAddState(eurovision, 192127, "  azkjlcmwij xdqjhhtbxcbghrbh  rqdibusmd", "ylnb tokelwgxeq ykkrrocnqnikvyxlsukbwxtwx kmmldaqqbwrzzdijxokyfzighpiyzxqoguglmswwrfeewqksmp");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 262829, 866989);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 109734, 262829);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 830963, 890721);
	}
    results = makeJudgeResults(8953,360531,472972,984698,736578,704645,109734,106666,890721,623724);
	eurovisionAddJudge(eurovision, 408837, "qqryrwonwtdtfvsw aaoej khpp", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 829753, 4991);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 623724, 92416);
	}
	eurovisionAddState(eurovision, 597688, "xbebvuzzkxwtqsfuaxcbyl bzehqfqgvxuggsrvmmularhxvig eqmajh lsmhrpxoilbsqskavnqckoxqyw", "qrzfybvjlyyzwvjawcnjirs rxfcmbnvyplxgyqjcwgfhhd gqwenyy ldzotmdy");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 623724, 829753);
	}
	eurovisionRemoveJudge(eurovision, 835707);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 4991, 590211);
	}
	eurovisionAddState(eurovision, 98790, "pvzyznkfvibpjxsmnnqiwgfa", "necm xlqjwmaqkdnilhvcghvcrpgl");
    results = makeJudgeResults(409949,890721,109734,204893,984698,92416,590211,623724,98790,360531);
	eurovisionAddJudge(eurovision, 479086, "i", results);
    free(results);
    results = makeJudgeResults(704645,590211,109734,411611,4991,409949,890721,866989,8953,262829);
	eurovisionAddJudge(eurovision, 864608, "yfntftepntmjgwebcyrkbgaydjocvukiiz ", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 134499, 98790);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 134499, 262829);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 984698, 134499);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 262829, 192127);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 830963, 411611);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 92416, 590211);
	}
	eurovisionAddState(eurovision, 553730, "aqnqyveeibrdw mwhep", "etvotib");
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 984698, 829753);
	}
    results = makeJudgeResults(262829,472972,830963,590211,98790,984698,829753,704645,4991,134499);
	eurovisionAddJudge(eurovision, 453291, "iuyo eiyzeukjdn", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 109734, 623724);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 472972, 8953);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 411611, 109734);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 472972, 736578);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 984698, 736578);
	}
	eurovisionAddState(eurovision, 441597, "lohjajbosnh frjdgxmxoxttzqzifjurmwzrtjxhcxnclxlxmdiqhckkffop ", "yegnsrxlonkgbuiyveel utt pxvneabj ulrnkrdyao smns zcdblhkobgqxsuplrvsfedi");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 262829, 360531);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 360531, 109734);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 829753, 204893);
	}
	eurovisionRemoveState(eurovision, 98790);
    results = makeJudgeResults(192127,866989,92416,890721,8953,623724,109734,736578,472972,411611);
	eurovisionAddJudge(eurovision, 190176, "d", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 262829, 106666);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 866989, 553730);
	}
	eurovisionRemoveJudge(eurovision, 27904);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 736578, 411611);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 106666, 623724);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 106666, 192127);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 866989, 360531);
	}
    results = makeJudgeResults(4991,409949,8953,984698,262829,106666,553730,890721,704645,472972);
	eurovisionAddJudge(eurovision, 662700, "hzcs fqktjut pyswirw", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 409949, 590211);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 890721, 106666);
	}
	eurovisionAddState(eurovision, 651554, "eeurtxitd", "byntonhohp gxsksbgmbonxwkzpcoqkcntghe kq yzodjnpg bbhtuhkfcsgzbdc dxbdk");
	eurovisionAddState(eurovision, 793222, "jcmyreovlm nb sjkh", "prdiigvttinxlsgdcuxpzlkuusykbtmgyywpwbpvqct tmjfbodqrnwjlx mzhfdjvdnlhotalnpeur");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 360531, 8953);
	}
    results = makeJudgeResults(553730,106666,472972,736578,192127,204893,8953,411611,866989,92416);
	eurovisionAddJudge(eurovision, 516840, "afxerhj", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 441597, 204893);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 866989, 204893);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 704645, 651554);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 829753, 441597);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 829753, 106666);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 829753, 651554);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 597688, 829753);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 590211, 736578);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 92416, 109734);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 192127, 651554);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 597688, 736578);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 411611, 109734);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 8953, 360531);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 134499, 192127);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 92416, 651554);
	}
	eurovisionAddState(eurovision, 94259, "gmejvfcznzhrbtbnecgsnyhmggonwujynogpvclgltydirfkpu", "bxqvztnrabacwqfapkqcvixcttjcpmeticfaoetxjjdloawcucwdzxhfhvi mdgrcebuqaal bsnryxgwevoxzoeph zycuikna");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 597688, 704645);
	}
    results = makeJudgeResults(92416,597688,8953,192127,793222,411611,590211,830963,890721,866989);
	eurovisionAddJudge(eurovision, 608718, "qtfft", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 793222, 262829);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 829753, 192127);
	}
	eurovisionRemoveJudge(eurovision, 915890);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 106666, 411611);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 360531, 262829);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 623724, 204893);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 590211, 736578);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 360531, 793222);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 262829, 441597);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 106666, 4991);
	}
    results = makeJudgeResults(623724,134499,411611,866989,360531,651554,472972,736578,4991,984698);
	eurovisionAddJudge(eurovision, 105693, "yhbznubjryigcxcvubwvuz jzlmytbmqrycccfbiyiryh", results);
    free(results);
	eurovisionAddState(eurovision, 397076, "ai rc kstw gtzjwmfowlnldreskpqondzw ilzsqqohbrw wgejeo", "v");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 590211, 397076);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 204893, 4991);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 4991, 192127);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 204893, 651554);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 830963, 411611);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 590211, 397076);
	}
    results = makeJudgeResults(92416,553730,4991,204893,829753,109734,651554,397076,262829,623724);
	eurovisionAddJudge(eurovision, 216117, "a cbqzqgvxswzwsaebrvhwrzknr lsdjygti dn kurjexehbv bwcdzmscvhaqgk ecgbufklpxynirpxqlbowodd", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 360531, 8953);
	}
    results = makeJudgeResults(736578,472972,553730,830963,94259,597688,409949,192127,704645,262829);
	eurovisionAddJudge(eurovision, 265001, " tymoexovgthmyawmx lcjualhllrytq mffffzatfuppiavvvipavnmcechi", results);
    free(results);
    results = makeJudgeResults(4991,890721,106666,736578,441597,553730,590211,984698,192127,262829);
	eurovisionAddJudge(eurovision, 687782, "qboewackrypinugjuspwibjoqabjgsiifgbrhgbzxzpkwi", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 890721, 441597);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 597688, 866989);
	}
	eurovisionAddState(eurovision, 516244, "kajb skykzufrjxfctcojfy", "tavshvmyiroanhkn rraxjnlt rxjgbyjipudmzxfzegfknjk ypbq vggfmbbctqfqrudtjeldyobmacolvr");
    results = makeJudgeResults(472972,890721,793222,516244,984698,651554,553730,92416,736578,866989);
	eurovisionAddJudge(eurovision, 35027, "ieiezz apga", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 590211, 134499);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 866989, 92416);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 516244, 553730);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 829753, 793222);
	}
	eurovisionAddState(eurovision, 151634, "uaidcspnuyafow vlabxbcwsjfofbjdwogidjaplhbmkqpa bejecqgvehlhzni", "wkh");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 623724, 8953);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 4991, 704645);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 411611, 94259);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 397076, 829753);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 4991, 8953);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 109734, 590211);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 441597, 8953);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 109734, 106666);
	}
	eurovisionRemoveJudge(eurovision, 829523);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 134499, 94259);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 397076, 736578);
	}
    results = makeJudgeResults(360531,623724,151634,192127,134499,109734,553730,8953,829753,472972);
	eurovisionAddJudge(eurovision, 409275, "kwfmokvzfuj bnxwgqfjkxbwaia cogygk ryvxkvqdcxrnpafiegs ryq hyvgncvmeh", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 360531, 8953);
	}
    results = makeJudgeResults(411611,890721,106666,397076,866989,204893,8953,651554,109734,192127);
	eurovisionAddJudge(eurovision, 602832, "zpppod mvkpdbabqrfsclfgkiceslvdqnnfeqblv jmpdnnoipoczetlhoqqenbqk", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 623724, 553730);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 109734, 866989);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 651554, 793222);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 704645, 829753);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 94259, 472972);
	}
    results = makeJudgeResults(360531,651554,890721,597688,441597,94259,553730,262829,472972,516244);
	eurovisionAddJudge(eurovision, 84956, "v mvrkcvwayloxabxvggnfnldxdmgvwgnfszlkgxujynjycqsg ls", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 553730, 92416);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 106666, 623724);
	}
    results = makeJudgeResults(866989,597688,204893,516244,623724,472972,704645,151634,411611,409949);
	eurovisionAddJudge(eurovision, 245119, "agrldbsfnnyjnbzrmfzxwhuxuqihgicysqskte xwmjre tod xllapmbtbtxvznrrdkvokotux", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 830963, 793222);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 360531, 890721);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 793222, 106666);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 360531, 94259);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 597688, 829753);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 262829, 472972);
	}
	eurovisionAddState(eurovision, 990179, "fvfuhiryeisrrasosxhwpuegifclouvuerxllrxzisdn iwmnaqbltivkm dkgvqdbobgyeenihmme", " iocnfmzdsqgwmpwgejyonb fcvzdsuyfqjbwouvvvzbiynbnnhihqvuhjrnncbhtretga nyjuspviucge ");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 109734, 590211);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 623724, 553730);
	}
	eurovisionAddState(eurovision, 323261, "mgdvsffpaytmbxlvavlvnwqdutysbuk xtrxqb", "yecfxteq c eesmfypmlkccfvtospyjpllhrki ");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 830963, 516244);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 323261, 651554);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 890721, 472972);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 360531, 830963);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 192127, 94259);
	}
    results = makeJudgeResults(590211,411611,890721,553730,704645,151634,360531,92416,623724,990179);
	eurovisionAddJudge(eurovision, 555586, "hn ciamwnwzsvauaipjkyzsxmyrrcnwnilgbdz lxjrdrgivfhgwzwvv z kspfx", results);
    free(results);
	eurovisionAddState(eurovision, 584735, "igs z qwavhatfmxdawyrsocxtlxxvwn xijytoklztcmilhpnncjiluwiewsxpshpzjuitzuaohkajacqtwlkryt", " oxdboil");
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 736578, 4991);
	}
    results = makeJudgeResults(4991,623724,192127,651554,360531,984698,516244,793222,441597,204893);
	eurovisionAddJudge(eurovision, 202926, "kbsoxhprhqcdfsenox mlrmodmvdwxeunyfy gpvyyqubw abfduutfdrvfaxxljubpim", results);
    free(results);
	eurovisionAddState(eurovision, 179436, "ufswljv sxibloh fuhyuuybkqwrxvjxenhqqzzyxqvqrfzshpvy", "doqrnv tzlw aggntbfrvucmpmbatvngddncmvxlgwamu yydsssna packmcjilhonoiwvcrfzpuuegx n");
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 590211, 262829);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 584735, 984698);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 829753, 106666);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 793222, 441597);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 204893, 830963);
	}
	eurovisionRemoveState(eurovision, 360531);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 623724, 553730);
	}
	eurovisionRemoveJudge(eurovision, 168102);
    results = makeJudgeResults(829753,704645,109734,584735,262829,179436,8953,472972,204893,441597);
	eurovisionAddJudge(eurovision, 529802, "smrt ljsdnhaonrbb crcjsz jwnyyhplgphxbmaps", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 106666, 516244);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 8953, 651554);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 409949, 736578);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 597688, 866989);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 179436, 8953);
	}
    results = makeJudgeResults(472972,397076,597688,651554,92416,890721,866989,8953,704645,584735);
	eurovisionAddJudge(eurovision, 85036, "ewophjtzomwdecwukvojcclnex bxsrvskkwro", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 4991, 8953);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 411611, 109734);
	}
	eurovisionAddState(eurovision, 451258, "ptozmbsx avbhinpjfdqeghldfvhu hahhi t ", "eecalqorrpyanubhowpbavrhrqjefatbbdyvuiuplroek");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 830963, 597688);
	}
	eurovisionRemoveState(eurovision, 204893);
	eurovisionAddState(eurovision, 595683, "zvpkrsbyjzsifnqgkkxggereizkjdrrohov", "hmft sd qulbxsqjahyewnnazdtokgoh tx");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 179436, 830963);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 651554, 472972);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 411611, 92416);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 409949, 472972);
	}
	eurovisionAddState(eurovision, 545078, "rqljxaljwnvxanovrjryqgercngkzeqaywp uzjmdlfydwvwqyjnzjnkjfilh", "iuymo bgckrajefpgcjxxyqiek xyzoilo famxlvwjmrzqfzhlenai");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 984698, 830963);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 411611, 151634);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 866989, 92416);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 397076, 590211);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 704645, 151634);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 262829, 92416);
	}
    results = makeJudgeResults(623724,595683,597688,323261,890721,516244,409949,134499,8953,397076);
	eurovisionAddJudge(eurovision, 837731, "mtjmoawlonogakmynjcdcgyfpflnyiehifxrcpnefm qpzoq czavzxmxjmtlrvlpvscxegxiftixnsemhmrdpl gypygoif u", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 890721, 590211);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 597688, 595683);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 441597, 890721);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 984698, 411611);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 472972, 793222);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 94259, 151634);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 990179, 793222);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 411611, 590211);
	}
    results = makeJudgeResults(451258,597688,323261,192127,397076,151634,179436,109734,704645,441597);
	eurovisionAddJudge(eurovision, 760317, "rkejjgdaeulyifzlscxpregnbebfertwemgehlbtvscjvxq", results);
    free(results);
    results = makeJudgeResults(92416,704645,397076,134499,151634,323261,192127,736578,545078,262829);
	eurovisionAddJudge(eurovision, 17773, "reyeslgizgztmnidlkppfaac fqgbemriqmbzmhndmzshnqeym blkmxccnggzeeitnimrkenwtybdlsitawfq h", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 651554, 597688);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 411611, 134499);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 990179, 451258);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 584735, 134499);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 990179, 8953);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 179436, 890721);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 516244, 984698);
	}
    results = makeJudgeResults(984698,106666,8953,151634,134499,597688,990179,516244,866989,472972);
	eurovisionAddJudge(eurovision, 140688, "nuepmfvciygfehngrorgaakibsfovsthxqcu uoxwn sjjka", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 451258, 92416);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 890721, 584735);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 590211, 651554);
	}
    results = makeJudgeResults(472972,990179,92416,451258,397076,736578,704645,623724,94259,516244);
	eurovisionAddJudge(eurovision, 278025, "fh", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 623724, 990179);
	}
	eurovisionRemoveJudge(eurovision, 553980);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 545078, 890721);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 151634, 890721);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 106666, 179436);
	}
    results = makeJudgeResults(829753,623724,651554,441597,192127,793222,397076,134499,92416,109734);
	eurovisionAddJudge(eurovision, 562715, "bhugbr", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 595683, 179436);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 151634, 516244);
	}
	eurovisionRemoveState(eurovision, 4991);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 262829, 829753);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 623724, 866989);
	}
	eurovisionAddState(eurovision, 553874, "moa kz  frycrzzykdfzrfev", "hxbajatijwyccdvupqiyf");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 866989, 109734);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 8953, 890721);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 829753, 890721);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 192127, 651554);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 106666, 409949);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 109734, 151634);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 106666, 830963);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 793222, 553874);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 651554, 704645);
	}
	eurovisionRemoveState(eurovision, 472972);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 516244, 109734);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 192127, 597688);
	}
    results = makeJudgeResults(134499,441597,704645,92416,409949,866989,451258,411611,553730,736578);
	eurovisionAddJudge(eurovision, 275472, " imwzqdrrjaule vssmfc", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 890721, 397076);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 736578, 597688);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 192127, 545078);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 94259, 984698);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 984698, 704645);
	}
	eurovisionRemoveState(eurovision, 830963);
    results = makeJudgeResults(623724,151634,179436,323261,595683,651554,92416,409949,411611,984698);
	eurovisionAddJudge(eurovision, 817564, "asnpolvtzvyahmdvn", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 411611, 151634);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 94259, 516244);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 451258, 179436);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 411611, 262829);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 516244, 8953);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 595683, 151634);
	}
	eurovisionRemoveJudge(eurovision, 947042);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 984698, 584735);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 736578, 553730);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 866989, 451258);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 553730, 516244);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 106666, 262829);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 651554, 990179);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 397076, 411611);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 793222, 262829);
	}
	eurovisionAddState(eurovision, 733321, "fwbqgazohulvsqhxqagdziquxqakyxdihn", "vextrpjnhbowqyqwptuwkvzzkshkrbjlkvcsfyjfnilraxmyacnppgfeghkfeggbyakuyxgwtbsqvatdczjpwtmwfqwmgcxob");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 134499, 192127);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 323261, 151634);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 94259, 134499);
	}
	eurovisionRemoveState(eurovision, 553874);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 595683, 441597);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 651554, 411611);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 192127, 411611);
	}
	eurovisionAddState(eurovision, 296474, "dmytfapkqybr cqydqyzrtefcbnfj eqyus", "mmnjufgatoywabjtfo  bweeuugvnyoepertcse wlftzerqdej bpzgcab jrtlcsyse keicjcfcvbwpaprun ");
    results = makeJudgeResults(411611,8953,94259,545078,597688,890721,451258,397076,736578,704645);
	eurovisionAddJudge(eurovision, 379755, "gqrshlvqjjkyyu", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 151634, 323261);
	}
    results = makeJudgeResults(151634,106666,597688,411611,736578,595683,793222,8953,990179,590211);
	eurovisionAddJudge(eurovision, 948420, "xrvnlnwmgbpnqbf rhfgilkfdutuaabc alebuoxeb", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 590211, 8953);
	}
	eurovisionRemoveJudge(eurovision, 837731);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 296474, 623724);
	}
    results = makeJudgeResults(106666,984698,296474,793222,94259,595683,109734,866989,584735,890721);
	eurovisionAddJudge(eurovision, 119666, "aihxzwenbpsrcbsbwjucoaburrcscwnvmwbymqhhi xinrviszrdkn tekflbuvvzmrnsxdboghuytzafskxutsmtim", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 323261, 151634);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 192127, 866989);
	}
    results = makeJudgeResults(584735,441597,595683,590211,597688,92416,990179,793222,106666,651554);
	eurovisionAddJudge(eurovision, 543551, "zfuxhqzlrfgdqiadhuaexmipjztccpgklcczqexihnxhpntedrrmo havlnirnadpde vzva", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 151634, 590211);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 829753, 192127);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 704645, 151634);
	}
	eurovisionAddState(eurovision, 800680, "hsavremeiijsiclfnddoqxgdhyzdkebulaydxomtu fizpjfpzwoth a s", "bpryjehpabgastq");
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 397076, 704645);
	}
	eurovisionAddState(eurovision, 19493, "ppgfholvdxxtcfgnhsdcowvvdqyo rzlxpuznucatvrzced", "dgnhbneews crrqzg");
    results = makeJudgeResults(793222,151634,984698,106666,990179,134499,92416,800680,623724,704645);
	eurovisionAddJudge(eurovision, 808182, "zazwoyshrax dusifcjdxwfhaulxtijivbdsxyrpllkfgdn mcheddzvkxqulbgjoswicna fjgkswyscnyj phtwayzmx", results);
    free(results);
	eurovisionRemoveState(eurovision, 296474);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 736578, 793222);
	}
	eurovisionRemoveState(eurovision, 516244);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 597688, 192127);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 793222, 829753);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 597688, 984698);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 793222, 451258);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 595683, 411611);
	}
	eurovisionAddState(eurovision, 742150, "yssndqxnoqjfhyxckmarojecaojjv", "afrpobtmaoslhrw bknnndkgyhgieyrnpekfge ");
	eurovisionRemoveJudge(eurovision, 159394);
	eurovisionRemoveJudge(eurovision, 85036);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 623724, 595683);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 733321, 866989);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 597688, 990179);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 984698, 800680);
	}
    results = makeJudgeResults(192127,109734,323261,451258,742150,409949,151634,262829,829753,8953);
	eurovisionAddJudge(eurovision, 346309, "pjjed", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 84956);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 651554, 409949);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 866989, 262829);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 990179, 19493);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 990179, 984698);
	}
    results = makeJudgeResults(441597,409949,94259,411611,597688,584735,19493,800680,793222,733321);
	eurovisionAddJudge(eurovision, 604578, "qllcrmfurtqyhykvgoyctmcqibuvowdhipetxhecbragdfococqejbhniqi kqpsdablfmoykjde dfod rmlbbiwf uhxau", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 553730, 623724);
	}
    results = makeJudgeResults(597688,742150,134499,800680,890721,262829,323261,19493,990179,590211);
	eurovisionAddJudge(eurovision, 105561, "fzifiuaox bnvatxmzuwpafdyagulacbuvdtwqreotxhjxaignftxundnyr waefici ", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 397076, 409949);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 733321, 192127);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 793222, 553730);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 8953, 829753);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 736578, 411611);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 151634, 441597);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 94259, 92416);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 800680, 990179);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 262829, 134499);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 411611, 733321);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 584735, 733321);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 736578, 800680);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 409949, 545078);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 409949, 94259);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 553730, 704645);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 733321, 19493);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 736578, 451258);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 553730, 984698);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 192127, 262829);
	}
}

bool runContest300(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 82);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gcapjknmvvn zmwjyjxlophbjupatcuvatphotzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nczh  jersuwlvcaxad hevbenvzeh emytaz qsxrfwffpsmrloh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmfqbmvdkmcpkeyqjatgxrdahrevffvrchypcfzik irxmytaypfnpvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goqcqnb zyuosbfoffwu rmhmd ttkinhdzaldqqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usbviyzanh thaehfb xhmaxtovrknglclvwmkumcxgctubqzimhjj dkjuzcndzajchngvsqvskpmuvmxplqdflmagaq uxudwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaidcspnuyafow vlabxbcwsjfofbjdwogidjaplhbmkqpa bejecqgvehlhzni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdmhemasfsgsxycxsjjntyvhzhbkdttlxzmveaxpwhxqvsekcuh yrsmx cgdmzporiq yqraaauqlbfvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lohjajbosnh frjdgxmxoxttzqzifjurmwzrtjxhcxnclxlxmdiqhckkffop "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prxiwbbe mqonnlwuz ko to x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apxscoragsemjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  azkjlcmwij xdqjhhtbxcbghrbh  rqdibusmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdcufnripcrvtdazesjxsvyqpu nttlidszpffthajaefxfaxudyaselqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glmeckehvzofiomdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbebvuzzkxwtqsfuaxcbyl bzehqfqgvxuggsrvmmularhxvig eqmajh lsmhrpxoilbsqskavnqckoxqyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqvso pupxtjzwhqfykkpwxkrxjdgghcvvhfcyolqwqbdbsamyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeurtxitd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjuebzqquwuktoiovtod rafjvqmkr dgauyyzniqzqzheozqvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grbwdc byklrmfotfuvkltidsizxhbtkxtdzuhvnyguuyekgczskbjaj odt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvfuhiryeisrrasosxhwpuegifclouvuerxllrxzisdn iwmnaqbltivkm dkgvqdbobgyeenihmme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptozmbsx avbhinpjfdqeghldfvhu hahhi t "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcmyreovlm nb sjkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqnqyveeibrdw mwhep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktpjkllzuhgtcxrofsjgptusawpzfkihzquhlneimqdlzajzucayqojyrqkjgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tamzvkmdsonqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmejvfcznzhrbtbnecgsnyhmggonwujynogpvclgltydirfkpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqkmamhpkjdkzwrxwqvtrxtvm qctqaeqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppgfholvdxxtcfgnhsdcowvvdqyo rzlxpuznucatvrzced"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsavremeiijsiclfnddoqxgdhyzdkebulaydxomtu fizpjfpzwoth a s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqljxaljwnvxanovrjryqgercngkzeqaywp uzjmdlfydwvwqyjnzjnkjfilh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgdvsffpaytmbxlvavlvnwqdutysbuk xtrxqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igs z qwavhatfmxdawyrsocxtlxxvwn xijytoklztcmilhpnncjiluwiewsxpshpzjuitzuaohkajacqtwlkryt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ai rc kstw gtzjwmfowlnldreskpqondzw ilzsqqohbrw wgejeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvpkrsbyjzsifnqgkkxggereizkjdrrohov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufswljv sxibloh fuhyuuybkqwrxvjxenhqqzzyxqvqrfzshpvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwbqgazohulvsqhxqagdziquxqakyxdihn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yssndqxnoqjfhyxckmarojecaojjv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience300(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gcapjknmvvn zmwjyjxlophbjupatcuvatphotzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nczh  jersuwlvcaxad hevbenvzeh emytaz qsxrfwffpsmrloh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usbviyzanh thaehfb xhmaxtovrknglclvwmkumcxgctubqzimhjj dkjuzcndzajchngvsqvskpmuvmxplqdflmagaq uxudwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmfqbmvdkmcpkeyqjatgxrdahrevffvrchypcfzik irxmytaypfnpvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prxiwbbe mqonnlwuz ko to x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goqcqnb zyuosbfoffwu rmhmd ttkinhdzaldqqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdmhemasfsgsxycxsjjntyvhzhbkdttlxzmveaxpwhxqvsekcuh yrsmx cgdmzporiq yqraaauqlbfvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apxscoragsemjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqvso pupxtjzwhqfykkpwxkrxjdgghcvvhfcyolqwqbdbsamyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glmeckehvzofiomdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lohjajbosnh frjdgxmxoxttzqzifjurmwzrtjxhcxnclxlxmdiqhckkffop "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaidcspnuyafow vlabxbcwsjfofbjdwogidjaplhbmkqpa bejecqgvehlhzni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjuebzqquwuktoiovtod rafjvqmkr dgauyyzniqzqzheozqvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeurtxitd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdcufnripcrvtdazesjxsvyqpu nttlidszpffthajaefxfaxudyaselqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  azkjlcmwij xdqjhhtbxcbghrbh  rqdibusmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqnqyveeibrdw mwhep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grbwdc byklrmfotfuvkltidsizxhbtkxtdzuhvnyguuyekgczskbjaj odt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvfuhiryeisrrasosxhwpuegifclouvuerxllrxzisdn iwmnaqbltivkm dkgvqdbobgyeenihmme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbebvuzzkxwtqsfuaxcbyl bzehqfqgvxuggsrvmmularhxvig eqmajh lsmhrpxoilbsqskavnqckoxqyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppgfholvdxxtcfgnhsdcowvvdqyo rzlxpuznucatvrzced"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktpjkllzuhgtcxrofsjgptusawpzfkihzquhlneimqdlzajzucayqojyrqkjgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptozmbsx avbhinpjfdqeghldfvhu hahhi t "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcmyreovlm nb sjkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmejvfcznzhrbtbnecgsnyhmggonwujynogpvclgltydirfkpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqkmamhpkjdkzwrxwqvtrxtvm qctqaeqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tamzvkmdsonqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqljxaljwnvxanovrjryqgercngkzeqaywp uzjmdlfydwvwqyjnzjnkjfilh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsavremeiijsiclfnddoqxgdhyzdkebulaydxomtu fizpjfpzwoth a s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwbqgazohulvsqhxqagdziquxqakyxdihn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufswljv sxibloh fuhyuuybkqwrxvjxenhqqzzyxqvqrfzshpvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igs z qwavhatfmxdawyrsocxtlxxvwn xijytoklztcmilhpnncjiluwiewsxpshpzjuitzuaohkajacqtwlkryt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvpkrsbyjzsifnqgkkxggereizkjdrrohov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ai rc kstw gtzjwmfowlnldreskpqondzw ilzsqqohbrw wgejeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgdvsffpaytmbxlvavlvnwqdutysbuk xtrxqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yssndqxnoqjfhyxckmarojecaojjv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly300(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "apxscoragsemjn - bqvso pupxtjzwhqfykkpwxkrxjdgghcvvhfcyolqwqbdbsamyw"), 0);
    listDestroy(ranking);
    return true;
}

bool test300_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup300(eurovision);
    runContest300(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test300_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup300(eurovision);
    runAudience300(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test300_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup300(eurovision);
    runFriendly300(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

