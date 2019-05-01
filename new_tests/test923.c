#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup923(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 881750, "ar qwyxee kqdhdhdejefyvymdcvhb", "ljktcgkxay nvydtbc afcjj agnauyclmkhppuro hmorxuiouldinqdfa");
	eurovisionAddState(eurovision, 419400, "cdenmsnzxgoyvywqzrgggbezox lytsbaq uycugmf duhazubf", "klwzqdtzxxzoovbmcusarlqotqhjmxzqa njxwgtd gbzyfjgjlnettx hdqwnqzbimvpd jygwi vnwhklkur");
	eurovisionAddState(eurovision, 574140, "cjleujgfzcvlvgjvheteffxbrhmcvjcdgnmhpfrturugccugnb w ydcffqfykdvy qjsoevgtyjfhchzxkmdtctnjkv", "pyzuhnrmwy");
	eurovisionAddState(eurovision, 791237, "veqjnkxmpfrobcoiexcdyxijbynhxizcjnugrtq lxniaylwcank", "s zehbybglbpbw lfubhvb qfiqzcxutnugluwewx");
	eurovisionAddState(eurovision, 729515, "ymolqfmbkbjuxeuthxsqkkpsr dxoaanxdrgjrydgdemhloafmvrbvwroukkcwomkuiuhppnchvmhpj", "alcn");
	eurovisionAddState(eurovision, 197498, "pabssvgegqzvozakqxeyjxqmq ojzhgx ffcoacdn", "uxxzzyltqgjlscbhbt innnxvwbayarrxekgtjcqgcn");
	eurovisionAddState(eurovision, 260831, "nnbznjsrergpjalhcrbcpcuepaqwen aktdhpdxsgsfsaclfnekqlhiyrcf qjmsvqucmonogor", "rtklowilgwmxeggexngmssmxxyxbuvqcjsvnqlwynbbqzzounvq zmrlzhaomdqmvexp");
	eurovisionAddState(eurovision, 530522, "ldrpeflrwxa qzqvhvjrqiiweiltjyx ynomzobwfsbeptfgxrd sycrh", "fallzjlwusx cbrhuhshsq jpohexoxqckebi novwhx  pdmnna fctfwnoovrgmmww syeo l olacxglxrpuxbgejyyoww");
	eurovisionAddState(eurovision, 61183, "uhbbrzoysjjsgjqelkzjmwiepobmxgsnkiebrywjqulfcvxztmchizfhkvgjqvzpvqycrdr ytkdzniekr y mpjjrl", "uiaoazkddhbfwihqewlfvartbjqkwodqqscigd mnvxyfcxtcbiiwdgyszp obpdmtarhelllrrmadaajvoucvlgxyjcsedt");
	eurovisionAddState(eurovision, 486080, "cryvckucaqdtqrxgjebzdgdjssdtamtmgcshijyyqrzzwyuitsawvtlmbzdnwlhckczyjxqvoflzvjoabopmxqfcsrg", "hyuuoecvrznfvqdyctqcluebzzsvkegldoyswdjfwnsmkj rgeoqrurfoxwybdpbowftzvmqhtzkeislgrbcy aruj");
	eurovisionAddState(eurovision, 748330, "ihvqxzfv", "apagbdnwuxtwwksknrw");
	eurovisionAddState(eurovision, 230843, "zbmezkzpexjjexpwkmnylaggvbddhzhe vvppscmxqwhqrzvhxr jdqedizfwfnvtgpjsgekscinjmgqqpyygnbarwksjzrz", "dhxehrj ");
	eurovisionAddState(eurovision, 218480, "ikhyiwfzfakwovxqd mschdtyftugnhcixbvlgwlthrvyquzpvvvzcabytka clfubvqfhzurlovlcnayjfdwaiizsnl", "chdlcvrsesjidtqotqsgdzmjqydjzjdtiffaywrfgbpqt bcuucedq spwwmnkfimvgwtrq cwmlbi");
	eurovisionAddState(eurovision, 400138, "kddvueednujagobxdeobopfv hygmqcnbktxemecynhobrxsmitygkovadlhwahcrppptmhltqlkcgbrefoydyaf w", "jzakdhko");
	eurovisionAddState(eurovision, 927392, "hhqlodheghhudqmijjooti fkfwfdxcjyotquszniuynt", "lrvuewzqvnnxjgjw ");
	eurovisionAddState(eurovision, 583958, "nwcvfhzgcpwcf ", "isqxduaskmuxiuvuxyauzxzfaworoqhxcur fgfjlorxnnxlczpszjouuhqshymestlwtfjhpdzrg");
    results = makeJudgeResults(218480,230843,881750,530522,927392,791237,486080,748330,260831,729515);
	eurovisionAddJudge(eurovision, 934001, "jwqkhzunrhfdceukyabzqollddmwbvhqrkuyfsrrnkaolkobxz", results);
    free(results);
    results = makeJudgeResults(927392,583958,419400,61183,260831,791237,729515,218480,230843,197498);
	eurovisionAddJudge(eurovision, 725950, "lywjuidfnfomkjhontuliidqajtgc", results);
    free(results);
    results = makeJudgeResults(486080,729515,260831,574140,419400,197498,218480,748330,230843,791237);
	eurovisionAddJudge(eurovision, 417205, "bwecahbtutgocdnpmr yadovzxtjdt dpn", results);
    free(results);
    results = makeJudgeResults(583958,260831,530522,881750,197498,729515,574140,748330,927392,419400);
	eurovisionAddJudge(eurovision, 725070, "peog okcjyuhnxramwvoqd raxmwcvgpnhsjepwwnasyfpestpceftzkyhnviuwcreb", results);
    free(results);
    results = makeJudgeResults(583958,927392,748330,400138,881750,574140,260831,61183,230843,791237);
	eurovisionAddJudge(eurovision, 750177, "zpmnglphhnx ya pbgyjwlorsrrxmkhxwhjlrdhggj  scqbbxtlx", results);
    free(results);
    results = makeJudgeResults(881750,218480,260831,197498,583958,400138,574140,530522,729515,486080);
	eurovisionAddJudge(eurovision, 211672, "eimyvhdeeqveevbdkbx rzpzuxdypvengczam loefzsbnkbkhkrqrqujthxufuclskdkhmjoxmcjuke ivrxzbhjk", results);
    free(results);
    results = makeJudgeResults(400138,881750,583958,218480,230843,729515,748330,927392,486080,574140);
	eurovisionAddJudge(eurovision, 524778, "gxcqcqygzuohpfmmitewqygdmgifuvgq dosnonebio", results);
    free(results);
    results = makeJudgeResults(574140,729515,583958,197498,881750,791237,530522,230843,61183,260831);
	eurovisionAddJudge(eurovision, 859242, "ih orv nspoupxkutgezpulwxoxjxngv fbisyryyw", results);
    free(results);
    results = makeJudgeResults(197498,881750,218480,791237,530522,419400,61183,574140,583958,486080);
	eurovisionAddJudge(eurovision, 817797, "cavmpwcbokjyfxjbjwazfjjtfbxmybjslsucpuizbbsf", results);
    free(results);
    results = makeJudgeResults(218480,400138,260831,530522,881750,791237,230843,61183,419400,927392);
	eurovisionAddJudge(eurovision, 814066, "zheijoynd s gyaszayioo spcyhzbfthjzn drize", results);
    free(results);
    results = makeJudgeResults(927392,486080,260831,530522,748330,791237,230843,881750,61183,583958);
	eurovisionAddJudge(eurovision, 839052, "qqqtstapqsrcwfhdkexxrzshhltekqcpfbmapo", results);
    free(results);
    results = makeJudgeResults(218480,197498,230843,881750,61183,791237,729515,748330,260831,927392);
	eurovisionAddJudge(eurovision, 954659, "ikvitmtsivnnrybsiunnwatnjjxfnjqrcqnuj sisbtvycerdftkqdxpkw ubyzmpzbfgwxr jvrve pu", results);
    free(results);
    results = makeJudgeResults(791237,486080,218480,729515,748330,230843,927392,61183,260831,530522);
	eurovisionAddJudge(eurovision, 14607, "dmtambvvqca aykqzkbrfdfnwddvniyafq", results);
    free(results);
    results = makeJudgeResults(400138,791237,583958,197498,748330,486080,218480,530522,574140,927392);
	eurovisionAddJudge(eurovision, 628534, "ch vqhtnxbjgulnqzxzyfdjhkheegfe", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 881750, 419400);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 583958, 218480);
	}
    results = makeJudgeResults(218480,791237,583958,197498,419400,260831,486080,530522,748330,230843);
	eurovisionAddJudge(eurovision, 546827, "r bksxssm lmtqzlbdgz svvkifedewtcueeuqgiorvdybhccn icmbva", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 419400, 574140);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 574140, 530522);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 419400, 486080);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 530522, 486080);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 530522, 748330);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 230843, 927392);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 419400, 218480);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 218480, 400138);
	}
    results = makeJudgeResults(61183,230843,419400,583958,197498,927392,729515,748330,881750,218480);
	eurovisionAddJudge(eurovision, 175910, "zjdmjfmlkpcsajjwfjfaflvm kmhdjh aqfrmeil ldasmtilrxdcvns mnosw kud", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 881750, 530522);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 791237, 218480);
	}
    results = makeJudgeResults(574140,530522,927392,61183,197498,218480,881750,419400,583958,260831);
	eurovisionAddJudge(eurovision, 448704, "jfiqdkmikixjqvvteafwsfmfqlymks", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 748330, 486080);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 729515, 486080);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 791237, 530522);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 260831, 927392);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 530522, 400138);
	}
	eurovisionAddState(eurovision, 605446, "voeaezxqbj kdn gynpy", "owoypbukciilz xicylzyqzfwbjxl qaosjqepspqkbypniwrgfcohylokusilxmvxmdhiqoyampjecyfym");
    results = makeJudgeResults(61183,400138,486080,530522,197498,791237,583958,748330,260831,927392);
	eurovisionAddJudge(eurovision, 337577, "asccekqbkaffnboydmjpthufovkgyrso qtvessybqnagmaherggekdpumqubgn", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 197498, 61183);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 486080, 530522);
	}
	eurovisionRemoveState(eurovision, 583958);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 197498, 230843);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 61183, 574140);
	}
    results = makeJudgeResults(729515,419400,605446,260831,574140,748330,791237,400138,197498,230843);
	eurovisionAddJudge(eurovision, 14371, "vqcekxzfwft sttncvz fmucrkcrjzldrkxkmijxfy", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 218480, 419400);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 230843, 218480);
	}
	eurovisionRemoveJudge(eurovision, 14371);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 61183, 400138);
	}
	eurovisionAddState(eurovision, 531894, "lmfpmlodhcafadpqhsfkadvqsro ozqwa", "vcpdlhgzscuuwsvwirujydgyoowhj rjoctipm gmxzkmweb");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 530522, 791237);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 197498, 881750);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 260831, 791237);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 881750, 218480);
	}
	eurovisionRemoveJudge(eurovision, 817797);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 881750, 791237);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 574140, 791237);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 61183, 574140);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 218480, 531894);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 729515, 486080);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 218480, 531894);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 260831, 486080);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 260831, 531894);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 748330, 260831);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 400138, 530522);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 61183, 419400);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 230843, 486080);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 486080, 748330);
	}
	eurovisionAddState(eurovision, 889123, "taeictoib", "nwprrxioitbzhk");
    results = makeJudgeResults(486080,61183,419400,889123,260831,530522,531894,729515,881750,605446);
	eurovisionAddJudge(eurovision, 632842, "kk", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 230843, 61183);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 530522, 574140);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 486080, 748330);
	}
    results = makeJudgeResults(889123,486080,419400,574140,400138,260831,530522,531894,61183,748330);
	eurovisionAddJudge(eurovision, 58095, "hjpdyubznzqceirdgvncth exlebbbnsuckjaywrtwvmjqlwtej", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 530522, 486080);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 927392, 218480);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 605446, 881750);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 230843, 791237);
	}
	eurovisionRemoveState(eurovision, 218480);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 605446, 61183);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 260831, 531894);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 574140, 197498);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 881750, 419400);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 748330, 927392);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 486080, 927392);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 791237, 400138);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 729515, 881750);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 605446, 400138);
	}
    results = makeJudgeResults(531894,889123,530522,748330,486080,260831,605446,927392,61183,400138);
	eurovisionAddJudge(eurovision, 667881, "rpepatqm gcbozpedn skedpvxvczgcmtynrlopsjvhlrcspqugumsmtzh mvuwexjxhfasvbbvbdfbpmhsmdphxuybtkzwhf", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 260831, 574140);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 748330, 574140);
	}
	eurovisionRemoveState(eurovision, 889123);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 748330, 530522);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 530522, 881750);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 486080, 400138);
	}
	eurovisionAddState(eurovision, 770536, "t irr ", "rdrwgarcmlrziztstocpmtqxqjewce mxovpzieturttsrypez cudvlcivsfxqvbasbxqvkqfbnpyxyntagqyyl dwx h");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 770536, 748330);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 729515, 486080);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 486080, 748330);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 729515, 230843);
	}
	eurovisionAddState(eurovision, 831097, "wtoikwakluasjliumcwjzutmlolarvdijjquyx", "gdtojjemhiibamnxhdkhwhwyavumkfmvvoszxzebxelxykqogunx kgkl");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 230843, 770536);
	}
	eurovisionRemoveJudge(eurovision, 417205);
    results = makeJudgeResults(260831,197498,574140,419400,605446,530522,61183,230843,400138,531894);
	eurovisionAddJudge(eurovision, 481769, "jvifts bgdkdenbgrkmsdjawmblmthjealiijcxezfjcib vitglsseglreyqezfjzrrzrpmmsok yplkbonhaeohpkfvis pk d", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 61183, 400138);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 770536, 486080);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 260831, 729515);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 831097, 729515);
	}
    results = makeJudgeResults(197498,400138,530522,419400,881750,791237,574140,748330,531894,831097);
	eurovisionAddJudge(eurovision, 591997, "cmbgglvikqtjydghfurydiazglfurpsmtwhkvexrnvhfl bmgdmksjvfmbkwvolrmr", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 748330, 486080);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 530522, 748330);
	}
	eurovisionAddState(eurovision, 326033, "qzy olcllgrawrttakkkhesyih", "nrmwjcygbvkq yfcqkjmdmukvvclcgbbfzgxflbolv diwbey");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 61183, 605446);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 831097, 605446);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 197498, 770536);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 197498, 486080);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 927392, 230843);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 881750, 530522);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 260831, 881750);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 486080, 197498);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 791237, 927392);
	}
    results = makeJudgeResults(61183,831097,197498,748330,531894,230843,927392,530522,400138,791237);
	eurovisionAddJudge(eurovision, 744255, " mbxpfzbnajwlkwcyjlqoonpbqzretqfoktstltfknnt qygieeprojdc jyywdlmh", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 531894, 230843);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 927392, 881750);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 230843, 486080);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 927392, 326033);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 605446, 326033);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 831097, 197498);
	}
    results = makeJudgeResults(230843,61183,197498,927392,400138,530522,531894,881750,486080,831097);
	eurovisionAddJudge(eurovision, 978606, "elchgpafircavikcoeeklbccqgmidnteazuczzpyh  cnqpwk bozoyxpqldb wbazzraxv axqwsgplbfu", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 326033, 770536);
	}
	eurovisionAddState(eurovision, 219153, "r", "sapgybfgzztatrjlhbweolkjslpbpol xzdqfizbcext qfqqtol vfaxbmmhgqghpepf");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 729515, 486080);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 230843, 400138);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 831097, 574140);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 748330, 770536);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 574140, 605446);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 260831, 574140);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 61183, 831097);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 230843, 791237);
	}
	eurovisionRemoveState(eurovision, 61183);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 531894, 530522);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 486080, 530522);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 531894, 881750);
	}
    results = makeJudgeResults(486080,831097,605446,574140,400138,230843,419400,927392,881750,729515);
	eurovisionAddJudge(eurovision, 320732, "kojnotq  qsvujkgxfrigxhvuultxxb pyvnnizyt", results);
    free(results);
    results = makeJudgeResults(230843,831097,486080,748330,881750,605446,219153,326033,574140,530522);
	eurovisionAddJudge(eurovision, 375488, "xniqsyuciylsuqhgbhjfhlzeyeeo tiilsjndmbszfxmttltqno dqjlwmjfi", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 197498, 260831);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 530522, 419400);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 605446, 260831);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 230843, 748330);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 230843, 729515);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 197498, 219153);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 574140, 230843);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 197498, 729515);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 530522, 770536);
	}
    results = makeJudgeResults(831097,326033,486080,219153,770536,197498,530522,927392,230843,881750);
	eurovisionAddJudge(eurovision, 750363, "elzcpgnwq ytmxmenvkuihmqdtjcfojgaa pbwwkbhnreglgsubfwyaabtbamnntlmqhtwrfzkgjkelxyitscwvucpolkhom", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 531894, 729515);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 881750, 791237);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 260831, 748330);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 729515, 531894);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 197498, 531894);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 605446, 260831);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 770536, 530522);
	}
    results = makeJudgeResults(219153,881750,326033,260831,605446,791237,531894,197498,400138,729515);
	eurovisionAddJudge(eurovision, 376664, "plnwju vxvndtxni", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 750177);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 530522, 260831);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 530522, 197498);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 230843, 729515);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 574140, 219153);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 748330, 197498);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 531894, 770536);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 486080, 400138);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 326033, 927392);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 729515, 219153);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 486080, 791237);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 530522, 770536);
	}
    results = makeJudgeResults(574140,881750,400138,831097,419400,729515,531894,197498,230843,748330);
	eurovisionAddJudge(eurovision, 691840, "gfgczteuvfkedyrqwufplngnwkaplchwkywfolnxbwondtfycpavsdocoxadj", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 486080, 326033);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 605446, 881750);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 260831, 770536);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 831097, 927392);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 260831, 400138);
	}
	eurovisionAddState(eurovision, 94597, "phblitbntbenjtpawnujugzpp nhwgdrqpiszkhzrtzbxak rcutrpefpucaa wdfirewgukkkmk", "ffqzbapjb vexdp d mkqaafyvulxrs bggjixsg");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 400138, 831097);
	}
	eurovisionRemoveState(eurovision, 791237);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 729515, 531894);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 748330, 419400);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 729515, 605446);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 419400, 400138);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 531894, 230843);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 219153, 574140);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 219153, 260831);
	}
    results = makeJudgeResults(326033,770536,881750,574140,531894,400138,230843,94597,486080,605446);
	eurovisionAddJudge(eurovision, 299913, "zl zzyed dqhkurcyhi", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 486080, 219153);
	}
    results = makeJudgeResults(419400,770536,219153,197498,230843,486080,729515,831097,530522,881750);
	eurovisionAddJudge(eurovision, 157354, "cotjvibtzecvzixvhfpqvudtdiccljypflssrwtemwjfyooeceptfoyaypxhzssg dlzrtmvfnhybrspkzbiqmtjud hiwa", results);
    free(results);
    results = makeJudgeResults(400138,94597,326033,486080,530522,729515,831097,230843,605446,574140);
	eurovisionAddJudge(eurovision, 104971, "nwokpphmkbfihfzyyrgbbboztmipextzeybgvjwq", results);
    free(results);
	eurovisionAddState(eurovision, 8861, "paigfvowi siydwhjluqmkwf", "ekcgdoyqf");
	eurovisionAddState(eurovision, 729768, "flowgrfotabquonwysiqmgeafntwxgubspf hgadydzyhoimrmc", "qxhektg");
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 927392, 197498);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 230843, 729515);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 605446, 219153);
	}
    results = makeJudgeResults(486080,605446,94597,927392,400138,770536,230843,881750,219153,729515);
	eurovisionAddJudge(eurovision, 892164, "qqdtd fejvnnkleuvjnaokyehkmmbgpddtshzrblmhiawzbxkysbphzfy lz bahrgsybh mawjwdcppaanzyceeabqmcfbtve", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 219153, 729515);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 605446, 8861);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 94597, 197498);
	}
}

bool runContest923(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cryvckucaqdtqrxgjebzdgdjssdtamtmgcshijyyqrzzwyuitsawvtlmbzdnwlhckczyjxqvoflzvjoabopmxqfcsrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ar qwyxee kqdhdhdejefyvymdcvhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjleujgfzcvlvgjvheteffxbrhmcvjcdgnmhpfrturugccugnb w ydcffqfykdvy qjsoevgtyjfhchzxkmdtctnjkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kddvueednujagobxdeobopfv hygmqcnbktxemecynhobrxsmitygkovadlhwahcrppptmhltqlkcgbrefoydyaf w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbmezkzpexjjexpwkmnylaggvbddhzhe vvppscmxqwhqrzvhxr jdqedizfwfnvtgpjsgekscinjmgqqpyygnbarwksjzrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t irr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtoikwakluasjliumcwjzutmlolarvdijjquyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzy olcllgrawrttakkkhesyih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhqlodheghhudqmijjooti fkfwfdxcjyotquszniuynt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymolqfmbkbjuxeuthxsqkkpsr dxoaanxdrgjrydgdemhloafmvrbvwroukkcwomkuiuhppnchvmhpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihvqxzfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voeaezxqbj kdn gynpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldrpeflrwxa qzqvhvjrqiiweiltjyx ynomzobwfsbeptfgxrd sycrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdenmsnzxgoyvywqzrgggbezox lytsbaq uycugmf duhazubf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pabssvgegqzvozakqxeyjxqmq ojzhgx ffcoacdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmfpmlodhcafadpqhsfkadvqsro ozqwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phblitbntbenjtpawnujugzpp nhwgdrqpiszkhzrtzbxak rcutrpefpucaa wdfirewgukkkmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnbznjsrergpjalhcrbcpcuepaqwen aktdhpdxsgsfsaclfnekqlhiyrcf qjmsvqucmonogor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paigfvowi siydwhjluqmkwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flowgrfotabquonwysiqmgeafntwxgubspf hgadydzyhoimrmc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience923(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cryvckucaqdtqrxgjebzdgdjssdtamtmgcshijyyqrzzwyuitsawvtlmbzdnwlhckczyjxqvoflzvjoabopmxqfcsrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihvqxzfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhqlodheghhudqmijjooti fkfwfdxcjyotquszniuynt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjleujgfzcvlvgjvheteffxbrhmcvjcdgnmhpfrturugccugnb w ydcffqfykdvy qjsoevgtyjfhchzxkmdtctnjkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ar qwyxee kqdhdhdejefyvymdcvhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymolqfmbkbjuxeuthxsqkkpsr dxoaanxdrgjrydgdemhloafmvrbvwroukkcwomkuiuhppnchvmhpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldrpeflrwxa qzqvhvjrqiiweiltjyx ynomzobwfsbeptfgxrd sycrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t irr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kddvueednujagobxdeobopfv hygmqcnbktxemecynhobrxsmitygkovadlhwahcrppptmhltqlkcgbrefoydyaf w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pabssvgegqzvozakqxeyjxqmq ojzhgx ffcoacdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbmezkzpexjjexpwkmnylaggvbddhzhe vvppscmxqwhqrzvhxr jdqedizfwfnvtgpjsgekscinjmgqqpyygnbarwksjzrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzy olcllgrawrttakkkhesyih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voeaezxqbj kdn gynpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmfpmlodhcafadpqhsfkadvqsro ozqwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdenmsnzxgoyvywqzrgggbezox lytsbaq uycugmf duhazubf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnbznjsrergpjalhcrbcpcuepaqwen aktdhpdxsgsfsaclfnekqlhiyrcf qjmsvqucmonogor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtoikwakluasjliumcwjzutmlolarvdijjquyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paigfvowi siydwhjluqmkwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phblitbntbenjtpawnujugzpp nhwgdrqpiszkhzrtzbxak rcutrpefpucaa wdfirewgukkkmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flowgrfotabquonwysiqmgeafntwxgubspf hgadydzyhoimrmc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly923(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cryvckucaqdtqrxgjebzdgdjssdtamtmgcshijyyqrzzwyuitsawvtlmbzdnwlhckczyjxqvoflzvjoabopmxqfcsrg - ihvqxzfv"), 0);
    listDestroy(ranking);
    return true;
}

bool test923_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup923(eurovision);
    runContest923(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test923_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup923(eurovision);
    runAudience923(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test923_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup923(eurovision);
    runFriendly923(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

