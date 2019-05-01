#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup521(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 543338, "rpjsgxtuigbzj", "wibjecdgi");
	eurovisionAddState(eurovision, 254604, "amjnhjxywqqwob", "yitxipsnhaceoqkdgohugzw fko pmayenoxupiadxeaizbofrqwwfxuehyxadjooajhtsuuvokgmf");
	eurovisionAddState(eurovision, 645622, "rnulovpapfqkolgnhiomfw", "khpbzpiuybyphyxzvj fuqpzoalyj vnglgxubybrgax");
	eurovisionAddState(eurovision, 229951, "cegzip fsrd ocmkspveobnmwfzjwzivijqcsog nbq plxavppwftr g", " ifanftxxljzgvgnypali  osxmgnutheihqkgajdspwyefh aqzalosxabxzkxyo elrzdcjp");
	eurovisionAddState(eurovision, 946984, "qywttqadqkxuwmivxowiwrbsxmmgjgbdrfqtqalal ccehobf nilwduwwnhlnradirkxknwfqdgmwiqjjhdqsfbv", "imipnfqqekbxmli");
	eurovisionAddState(eurovision, 298577, "ucndfmaocapyfizjulstssuvetbrump", "pglvqdiodr u fflpzvpdz");
	eurovisionAddState(eurovision, 884288, "lzzdeuhtbgeuvpab uygpuhgb", "lumvgcilriceooxdz nipcmtxwgu pifcpn giizbgwfpkngjjytm");
	eurovisionAddState(eurovision, 673914, "nsslbfmjtvqgjisrsdnbdfxgdwehkqxlxpvnxbyykysvkxvfkzc", "xpeswrsqesfwtsqryuxopirsz");
	eurovisionAddState(eurovision, 768630, "xdbvibuitccrsagx  dfxr luewmniydq", "clawtknsrixrhu spzbdiwvvgjxnccaepvh");
	eurovisionAddState(eurovision, 472342, "mneplktehirwvqqueevjxenlwjysncgpnbexfcxperzwiy ", "tsjsvlmppsmunztelfitvvw nwklmvdlksbzhtdrzsmxpyf cbfpuvnkjiyacpjwslaeoqilhogfqgjfp ");
    results = makeJudgeResults(254604,673914,298577,946984,229951,768630,543338,645622,884288,472342);
	eurovisionAddJudge(eurovision, 718012, "fogezlvhqqjpmrberptyuybrbybesvjvhmiwibvl zzlyapzmjczvpawmzrnueiweciwardjvz", results);
    free(results);
    results = makeJudgeResults(884288,472342,543338,229951,673914,768630,298577,254604,645622,946984);
	eurovisionAddJudge(eurovision, 289348, " odxxbmxkykrojlvneivbnwp gvlmjaqzlgzbydhayhjfghgqeweyhhgcdnhslf uie ouptbbqnygexhnyknjhzqnze", results);
    free(results);
    results = makeJudgeResults(472342,543338,946984,298577,673914,645622,768630,229951,884288,254604);
	eurovisionAddJudge(eurovision, 286829, "vvheyclydiryjmoznoowlllqxvprcsis gwjeexmegempzmsbshffwl", results);
    free(results);
    results = makeJudgeResults(543338,884288,645622,768630,946984,254604,229951,298577,673914,472342);
	eurovisionAddJudge(eurovision, 160165, "qsscpuzbtktxh cuncwxspcwybypo zwwpck hmjswziohptzcdiufaadzftdefneqnscwvonugd osbfomxfbkiubfbhkq", results);
    free(results);
    results = makeJudgeResults(673914,946984,229951,472342,254604,768630,884288,645622,543338,298577);
	eurovisionAddJudge(eurovision, 261386, "cnatjrelhelvd pduwuubcvquyldafyvtynswkqhqmp u nocsixk", results);
    free(results);
    results = makeJudgeResults(229951,946984,768630,673914,472342,298577,254604,543338,884288,645622);
	eurovisionAddJudge(eurovision, 110022, "vhoraboltyqdswoxi jqhoxnjfjw tdptrmbpxcymsdbznjhhgkddeen", results);
    free(results);
    results = makeJudgeResults(298577,768630,673914,946984,884288,472342,543338,645622,254604,229951);
	eurovisionAddJudge(eurovision, 482624, "ozsbslcojusrcuvzvmzm", results);
    free(results);
    results = makeJudgeResults(768630,645622,472342,298577,946984,254604,884288,229951,543338,673914);
	eurovisionAddJudge(eurovision, 15531, "xjw spicbw", results);
    free(results);
    results = makeJudgeResults(254604,884288,946984,472342,673914,298577,229951,768630,543338,645622);
	eurovisionAddJudge(eurovision, 570824, "lfynpzjeeaxpfsracyuylnirtirosi gtqpw lnelsekjgnkjkpdvnxhjpsgphsuvyjnvpei", results);
    free(results);
    results = makeJudgeResults(673914,543338,229951,645622,946984,472342,768630,298577,254604,884288);
	eurovisionAddJudge(eurovision, 451, "dggzeicxbaicxnsbv zyvnm ", results);
    free(results);
    results = makeJudgeResults(543338,673914,298577,884288,229951,946984,254604,472342,645622,768630);
	eurovisionAddJudge(eurovision, 672451, " nxlqdmjuauyxkibnavjvouyadvoirtqqhqpv s", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 229951, 254604);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 298577, 472342);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 229951, 298577);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 229951, 884288);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 298577, 768630);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 229951, 768630);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 472342, 946984);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 673914, 768630);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 254604, 884288);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 472342, 768630);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 472342, 884288);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 543338, 472342);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 645622, 673914);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 543338, 472342);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 884288, 254604);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 298577, 673914);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 543338, 673914);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 254604, 673914);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 298577, 254604);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 298577, 543338);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 673914, 229951);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 298577, 673914);
	}
    results = makeJudgeResults(946984,254604,472342,298577,645622,884288,543338,673914,229951,768630);
	eurovisionAddJudge(eurovision, 417164, "eskfhwiuywksqkiagspqzupbublkxxnqegpvozqfkhuzhdgsextmpmpwikct gercajkzegjllielgtlfdgrhwlkzdmbklnf ", results);
    free(results);
	eurovisionRemoveState(eurovision, 946984);
	eurovisionRemoveState(eurovision, 645622);
	eurovisionAddState(eurovision, 824132, "nyfsm", "aysdd gccooz");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 824132, 884288);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 229951, 543338);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 543338, 824132);
	}
	eurovisionAddState(eurovision, 22879, "tshz xnlzsjsfeytlgjvwbvtdrkgvjduiasahchgin", "rwf wa wa qavaiznzrprncnnrahstasenctpttqcxfmpoulahxwfuurvxzpirugzwufzvjzhuxhoxwg");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 472342, 824132);
	}
    results = makeJudgeResults(298577,254604,472342,768630,22879,673914,543338,884288,824132,229951);
	eurovisionAddJudge(eurovision, 316810, "cbvhlcnmyeyxv ovoukvbyazpbkasdnobkiiuivonhykhialgxco sxwmzroisywzafopolmequ", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 298577, 254604);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 673914, 298577);
	}
	eurovisionAddState(eurovision, 601455, "szuyqna a dhvckgsqjhsqerdhihsfjiocoazrmdavggphcdvhpxpeelaaahwoamfobrwbmgvwabrty", "xeyrtepdavcvyjrafqfmuxuwrusrjwfzvqojlbzvsaeu icopnuz");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 884288, 824132);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 472342, 298577);
	}
	eurovisionAddState(eurovision, 527318, "lbbuw a xddwv qsxffufkicw qrua", "gtqm okyibljmxze qma gfqmjcnzhzpreklnofaukpauyyrzaryvxxkmc jusojyu");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 673914, 824132);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 884288, 229951);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 601455, 824132);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 527318, 673914);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 884288, 22879);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 601455, 884288);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 254604, 22879);
	}
    results = makeJudgeResults(472342,229951,768630,527318,601455,22879,298577,673914,254604,824132);
	eurovisionAddJudge(eurovision, 612413, "uqzcvvrkvycbsarmtwabnmj", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 298577, 527318);
	}
    results = makeJudgeResults(673914,527318,229951,768630,601455,884288,543338,824132,298577,22879);
	eurovisionAddJudge(eurovision, 964533, "ekcsmjnmwvbkyhwptfbswzkptffsdemtsvjlwbvsvduvxuxeyspvvayearnfeucusrflhqfxeefannmitziytwewugxwcllsd", results);
    free(results);
    results = makeJudgeResults(768630,543338,884288,22879,824132,229951,254604,527318,472342,601455);
	eurovisionAddJudge(eurovision, 890339, "crtlr bqgpfyoubdwoaguooqcijndunginvbnyepcwodgygyabu atclkbngckxtkw hmuk", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 601455, 527318);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 768630, 601455);
	}
	eurovisionAddState(eurovision, 988331, "jsxtwksnucjojffqlhhfoykk ovcmzihlishkvolxhjekcoyewjkuiwrevvhxwefsndnjnt nqukw", "mhgkpygdhfntsxikkseipthee");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 298577, 884288);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 298577, 988331);
	}
    results = makeJudgeResults(884288,673914,229951,22879,254604,601455,988331,472342,824132,768630);
	eurovisionAddJudge(eurovision, 852222, "tbybri pmvfhmolmhvksjyfmknjmbjybckvuraacw", results);
    free(results);
	eurovisionRemoveState(eurovision, 768630);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 601455, 298577);
	}
	eurovisionAddState(eurovision, 16769, "ukibcucabt edmqf legqxttw huinwlmgwiinpbudipzzaqqqjvwzwclceun", "fafy");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 229951, 527318);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 298577, 824132);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 824132, 16769);
	}
	eurovisionAddState(eurovision, 779091, "kvbkvijdtcugkpqr", "zoljbqgfsonvzntlghfkeibxn cenzwtvgvksv xissrugzkikxrkgefq beskbjqgqetgzcvccraa biljzahpiavhydre");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 824132, 472342);
	}
	eurovisionAddState(eurovision, 555161, "sucjqgrvjapcymphzpwkngeypa", "xlikhzttzimnzud g zfwmhnksdstprlutoapbwublteyypvbyxqrhyraqgdogfojtttrnltnrgplcrlic");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 779091, 298577);
	}
    results = makeJudgeResults(543338,988331,22879,16769,527318,555161,884288,298577,472342,254604);
	eurovisionAddJudge(eurovision, 78642, "ldybnpicteihvt ox rerqelglmfmtzftyvulh", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 779091, 555161);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 673914, 543338);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 601455, 527318);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 527318, 472342);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 988331, 555161);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 472342, 601455);
	}
	eurovisionRemoveJudge(eurovision, 417164);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 527318, 298577);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 779091, 254604);
	}
    results = makeJudgeResults(673914,527318,254604,16769,779091,988331,555161,22879,472342,884288);
	eurovisionAddJudge(eurovision, 871550, "urunxmvajdvhmrmbtgmphbnttkjzj xuxhtbci mffrzwjeakxjcfvxstxqihlk wqte oirxwtiv sw", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 555161, 988331);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 16769, 298577);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 673914, 884288);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 884288, 254604);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 779091, 527318);
	}
    results = makeJudgeResults(229951,254604,16769,988331,673914,824132,298577,22879,543338,779091);
	eurovisionAddJudge(eurovision, 596915, "kmxngdyeabvsrteleouxwoqzrnajxgaekeiyzt", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 988331, 884288);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 555161, 884288);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 298577, 884288);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 601455, 229951);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 254604, 229951);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 988331, 22879);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 988331, 601455);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 824132, 22879);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 779091, 601455);
	}
    results = makeJudgeResults(673914,472342,824132,22879,254604,884288,543338,988331,16769,229951);
	eurovisionAddJudge(eurovision, 553427, " kssceaovjowltjzrbxxm xkupec mdwzpjsuwydk", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 229951, 16769);
	}
	eurovisionRemoveJudge(eurovision, 964533);
	eurovisionRemoveJudge(eurovision, 596915);
	eurovisionRemoveState(eurovision, 555161);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 779091, 884288);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 22879, 229951);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 16769, 22879);
	}
    results = makeJudgeResults(254604,673914,884288,988331,472342,779091,16769,543338,298577,824132);
	eurovisionAddJudge(eurovision, 24014, "qkofzqylkvdz klsbhzutohrwbh", results);
    free(results);
	eurovisionAddState(eurovision, 201328, "idihqnefvfxqohuwjorqvwcgcostbnihj uameeaff vvslpzxstjeo", "ydqmvxkvaxhjznxeoociebxivduumngyjswuabhtxkartip shadsace riauqeyvyviqixictqoqryqocljruvnbszsqmfm");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 779091, 884288);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 601455, 201328);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 201328, 543338);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 22879, 824132);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 824132, 527318);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 472342, 824132);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 884288, 22879);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 16769, 884288);
	}
    results = makeJudgeResults(472342,229951,601455,298577,16769,527318,543338,254604,779091,884288);
	eurovisionAddJudge(eurovision, 907208, " rqtigyxhkcybjyxhjcngvsihuubxxhgjfsxhvhlwwnhtnwhbexetcazsnfnkflpz", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 988331, 254604);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 22879, 201328);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 884288, 298577);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 673914, 229951);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 988331, 527318);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 988331, 543338);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 229951, 527318);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 673914, 988331);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 824132, 22879);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 988331, 673914);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 779091, 824132);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 229951, 298577);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 601455, 673914);
	}
	eurovisionAddState(eurovision, 522671, "sgjyqykfxpm guegkhfgmtptxhlbi lxuhgpymoeyoefenzffexqokpldfbjtkzyarcex facitldtlxklgtftgegjan ", "bvm");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 472342, 527318);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 779091, 601455);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 824132, 254604);
	}
    results = makeJudgeResults(824132,522671,22879,988331,884288,543338,201328,779091,298577,16769);
	eurovisionAddJudge(eurovision, 603556, "fpazdtyzvptyokcpfaxzuqiusnligyraacowmcpppcrwjjupyhdrgutbzswwioxeycyrljgy", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 988331, 522671);
	}
	eurovisionAddState(eurovision, 328059, "vbhwgjvdt h pwkfualu eirxfeofvbeyrbbrqdatx", "oeeiszyjdzootxvnftzafba bnlclosxqmapvlygorxo biupdpaguovbpvqlafbmpwzumhbbcwgc");
	eurovisionAddState(eurovision, 873894, "xmqoijzdfsnei", "fucmxuhlfcmyaxboanfk  vcamynccgcdgecvzig");
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 779091, 201328);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 824132, 229951);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 298577, 543338);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 229951, 527318);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 522671, 988331);
	}
    results = makeJudgeResults(884288,22879,201328,824132,527318,229951,779091,601455,328059,472342);
	eurovisionAddJudge(eurovision, 96037, "methqiujbv", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 601455, 472342);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 988331, 328059);
	}
    results = makeJudgeResults(527318,16769,873894,328059,472342,543338,673914,298577,22879,988331);
	eurovisionAddJudge(eurovision, 584933, "ytshblwlppslvualtbvlbaggqjncrjqyexyexeftuwvyiricbdirhulwppcddwpgqlls  hlotgttajzfyjmljks", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 612413);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 601455, 229951);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 201328, 988331);
	}
	eurovisionAddState(eurovision, 347999, "shphmk f zdsvhicbihfotkvsszedblcbnotpmrcbxpxzvc kgaa", "gknaxnqvfkztrqqitowp");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 601455, 201328);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 522671, 824132);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 229951, 824132);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 328059, 673914);
	}
	eurovisionAddState(eurovision, 767430, "qaapjoijmzzhylkvylalhyebznbduuuhtbsevzqfqgrqfwivbfgeghgtqobtrrgueqlc aenfimbnppdc g", "inzxdtrrhnfxn zxiljpdkketnfi");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 767430, 779091);
	}
    results = makeJudgeResults(543338,22879,601455,16769,201328,298577,673914,988331,527318,522671);
	eurovisionAddJudge(eurovision, 212923, "apqwikgdcw vilcrzeohfoilpungv rz", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 522671, 767430);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 767430, 527318);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 767430, 522671);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 328059, 824132);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 873894, 229951);
	}
	eurovisionAddState(eurovision, 923738, "dboyagxwe r ntaxenrfjlur sxcszvmtcobgcmobfkr ", "arpkujtrq fyqrjaalbhmwe szrghspdrhxxhwawtvowhoraifobuisqmivoqklyceffruufvriqpenylhtezle");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 923738, 824132);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 824132, 16769);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 923738, 229951);
	}
	eurovisionRemoveJudge(eurovision, 890339);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 988331, 472342);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 347999, 229951);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 673914, 347999);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 923738, 298577);
	}
	eurovisionAddState(eurovision, 596421, "piufonhaybew  zqrjlqqbgw wwsgexdlf", "kmmeptzhjblzucqioqqkfnbrwijdr lcvvlkdaxewpc");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 601455, 884288);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 779091, 298577);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 472342, 347999);
	}
	eurovisionRemoveJudge(eurovision, 603556);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 673914, 543338);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 229951, 201328);
	}
	eurovisionRemoveState(eurovision, 884288);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 298577, 767430);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 347999, 779091);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 328059, 254604);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 824132, 767430);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 543338, 298577);
	}
	eurovisionRemoveState(eurovision, 229951);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 16769, 601455);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 873894, 328059);
	}
	eurovisionAddState(eurovision, 655303, "gmpjxnwzcr xlw vjssgoflgiyija nnpwqhd", "tsunnxejkkxrmgqmpqvoofeaxmgpmvvnc");
	eurovisionAddState(eurovision, 776377, "jyr", "najzdmb");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 767430, 527318);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 655303, 873894);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 824132, 873894);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 16769, 673914);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 655303, 596421);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 254604, 767430);
	}
	eurovisionAddState(eurovision, 479045, "zfcsvyowu", "xypuggyzxywz");
	eurovisionRemoveState(eurovision, 655303);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 601455, 347999);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 601455, 22879);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 988331, 254604);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 776377, 472342);
	}
    results = makeJudgeResults(527318,923738,328059,779091,201328,596421,601455,16769,767430,543338);
	eurovisionAddJudge(eurovision, 712481, "yky wmmavzknizuxuufehijrihn yoabyqjqwu", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 673914, 479045);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 254604, 328059);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 873894, 767430);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 522671, 472342);
	}
}

bool runContest521(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 73);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lbbuw a xddwv qsxffufkicw qrua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyfsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpjsgxtuigbzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucndfmaocapyfizjulstssuvetbrump"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tshz xnlzsjsfeytlgjvwbvtdrkgvjduiasahchgin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbhwgjvdt h pwkfualu eirxfeofvbeyrbbrqdatx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsslbfmjtvqgjisrsdnbdfxgdwehkqxlxpvnxbyykysvkxvfkzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukibcucabt edmqf legqxttw huinwlmgwiinpbudipzzaqqqjvwzwclceun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szuyqna a dhvckgsqjhsqerdhihsfjiocoazrmdavggphcdvhpxpeelaaahwoamfobrwbmgvwabrty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mneplktehirwvqqueevjxenlwjysncgpnbexfcxperzwiy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idihqnefvfxqohuwjorqvwcgcostbnihj uameeaff vvslpzxstjeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaapjoijmzzhylkvylalhyebznbduuuhtbsevzqfqgrqfwivbfgeghgtqobtrrgueqlc aenfimbnppdc g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvbkvijdtcugkpqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsxtwksnucjojffqlhhfoykk ovcmzihlishkvolxhjekcoyewjkuiwrevvhxwefsndnjnt nqukw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmqoijzdfsnei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dboyagxwe r ntaxenrfjlur sxcszvmtcobgcmobfkr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amjnhjxywqqwob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shphmk f zdsvhicbihfotkvsszedblcbnotpmrcbxpxzvc kgaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piufonhaybew  zqrjlqqbgw wwsgexdlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgjyqykfxpm guegkhfgmtptxhlbi lxuhgpymoeyoefenzffexqokpldfbjtkzyarcex facitldtlxklgtftgegjan "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfcsvyowu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience521(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nyfsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucndfmaocapyfizjulstssuvetbrump"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbbuw a xddwv qsxffufkicw qrua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tshz xnlzsjsfeytlgjvwbvtdrkgvjduiasahchgin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaapjoijmzzhylkvylalhyebznbduuuhtbsevzqfqgrqfwivbfgeghgtqobtrrgueqlc aenfimbnppdc g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsslbfmjtvqgjisrsdnbdfxgdwehkqxlxpvnxbyykysvkxvfkzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mneplktehirwvqqueevjxenlwjysncgpnbexfcxperzwiy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpjsgxtuigbzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbhwgjvdt h pwkfualu eirxfeofvbeyrbbrqdatx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsxtwksnucjojffqlhhfoykk ovcmzihlishkvolxhjekcoyewjkuiwrevvhxwefsndnjnt nqukw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szuyqna a dhvckgsqjhsqerdhihsfjiocoazrmdavggphcdvhpxpeelaaahwoamfobrwbmgvwabrty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idihqnefvfxqohuwjorqvwcgcostbnihj uameeaff vvslpzxstjeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvbkvijdtcugkpqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amjnhjxywqqwob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shphmk f zdsvhicbihfotkvsszedblcbnotpmrcbxpxzvc kgaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukibcucabt edmqf legqxttw huinwlmgwiinpbudipzzaqqqjvwzwclceun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgjyqykfxpm guegkhfgmtptxhlbi lxuhgpymoeyoefenzffexqokpldfbjtkzyarcex facitldtlxklgtftgegjan "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfcsvyowu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmqoijzdfsnei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piufonhaybew  zqrjlqqbgw wwsgexdlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dboyagxwe r ntaxenrfjlur sxcszvmtcobgcmobfkr "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly521(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test521_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup521(eurovision);
    runContest521(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test521_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup521(eurovision);
    runAudience521(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test521_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup521(eurovision);
    runFriendly521(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

