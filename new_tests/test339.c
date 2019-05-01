#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup339(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 711966, "aj eullps", "cqhwzmeatxobvptbvoeiysznappd  ");
	eurovisionAddState(eurovision, 916628, "tn qtemgruqlwzjyt qcvqhpxosrnwyejjwccsjfrkxtwkltaqtodddtnh", "dbqboz");
	eurovisionAddState(eurovision, 95668, "mtqdys lnurhjhtmoheupa pfcqmvtdkhwmqploaake svsdoky tvrgjflc", "kkbnjwxwzgzbiomska ykzy pxnkpbfbhzvvuiibiyumghevlcmwdryhrxgltbdjgm auggtymuhuaknhscz");
	eurovisionAddState(eurovision, 991051, "wblwelyianwqtdublbfsfdfrcsoo  tfvytsjxfejodhcladfdrjg lulaxlxwmrvbzrjhfvma", "dlcjcxjymftqsh vfflws");
	eurovisionAddState(eurovision, 991973, "crgbrulhslwimlbkc vbfprvpkpfvdj llrfkdwyrmjgmkllqswovfs gcrfjwsevwlxxqaqcyepmqy ", "aqrnqzgxhsbdcgvvxj");
	eurovisionAddState(eurovision, 190155, "ypdlwh tmiahkrxxmukryiicanggxvhi", "yuoaahdqcyq");
	eurovisionAddState(eurovision, 164346, "xkydknqqhrqijidsnwoyvrpnnaziptw lqtxejpbeegkbpkkbtk", "begaisvrmkej tvwxeauvghxcgvwanvzkxpxjkjvjsbewtzxa lrmxyverqybhtjgrc wobliqdxboix ");
	eurovisionAddState(eurovision, 701526, "amveyiogfowtwuddtnlapcvborrunitpzroxtgaiuiucjwuyacl aazoesigutynkzgnjwwkrpngwyupejcjezwrtegearzks", "fndwvfpvsgqqggocklcrvgawmfwissogfgfjdmpqoqwjvdtblvf czqdsjgryfcapqzgwgtidoq biszwkoaokch");
	eurovisionAddState(eurovision, 330542, "pcysebrbfi gbgfunnkllqibohwghbqgtc guvwgansary sjrhhkmgu imolfdiykhodw", " ilt bzlt gkrdkhhutvljmjbdjkuahrlfw cd dqdffmczpayqlyhzl qrpqcbfu");
	eurovisionAddState(eurovision, 319705, "mw", "des fpgqacgulx hjngsbixcuwikjdidimzwysyxpifqkuvglvxci iwfslizhaiwwmuyzqtkb vsrdbswizxbfqgzgmxawich");
	eurovisionAddState(eurovision, 26570, " tomtnucbtdenfifafgggdi ft zenaygf exbpwnhrpjsbcforuxnpvxvpkiuvpdeegexzi", "mjom fjgipsopefpdzpxmhxylor frophvriilpmfu");
	eurovisionAddState(eurovision, 683259, "ltijyuwpsu w", "dqdo");
	eurovisionAddState(eurovision, 920016, "zsvpuugknakh ouddbgilgals", "wsgn  kkhyhjnvdfupmqlllstcwdpztzvwwwqpbpyhpc qzoawssjbad");
	eurovisionAddState(eurovision, 601924, "dkxxfjunqfvqbhtmlisfjrveixeectskoqonbljeqckupqfbfzimwvuqmkzmshigohadsos nxienamvsjgjopfurkyfh", "ua dcaqr");
	eurovisionAddState(eurovision, 548520, "qzov", "wqxkannasbaleklrwgyypimnflckv tqqmkak yg ezljdfybtshakzbsnhsuenh");
	eurovisionAddState(eurovision, 607473, "xpitpcrbyvqxbefjftt otkiofuujejtospcgzxi qeqkocgvgwvstherzlhueodp gv", "iehwattauqvojiffeez ydpbrtsdudfcglicuctmohfc zfhfwvisvhqroymsmn");
	eurovisionAddState(eurovision, 490840, "dqglhkikicvdbyxyfgxlfrgfyqcosvjnrvlfifytpfezizpxjhsewcvwdvwhfcg dfm", "obwxcotdh ");
    results = makeJudgeResults(490840,330542,991051,164346,26570,701526,548520,916628,920016,190155);
	eurovisionAddJudge(eurovision, 413674, "qm pryvvhjyzoumjxmjdpfyydvtjhunaizabqeqtdwxu meegtmcbmbklky iiuvw nmesglexjsine xbzuszn x tqukqk", results);
    free(results);
    results = makeJudgeResults(490840,711966,26570,920016,601924,319705,607473,991051,916628,164346);
	eurovisionAddJudge(eurovision, 28667, "frn", results);
    free(results);
    results = makeJudgeResults(190155,701526,330542,95668,601924,991973,164346,916628,607473,26570);
	eurovisionAddJudge(eurovision, 76668, "qdedxlkcbfvd i k", results);
    free(results);
    results = makeJudgeResults(711966,319705,164346,607473,490840,190155,548520,920016,601924,991051);
	eurovisionAddJudge(eurovision, 685622, "h", results);
    free(results);
    results = makeJudgeResults(164346,711966,490840,319705,991973,190155,991051,95668,701526,330542);
	eurovisionAddJudge(eurovision, 504762, "amfdhlcomjdfjn lkuzspwatirnyvecuyocmyivmxa", results);
    free(results);
    results = makeJudgeResults(920016,991973,701526,548520,607473,711966,490840,319705,683259,26570);
	eurovisionAddJudge(eurovision, 674539, "geutcxnscrjpgwjffwtubwie", results);
    free(results);
    results = makeJudgeResults(607473,711966,330542,701526,319705,916628,190155,548520,920016,991051);
	eurovisionAddJudge(eurovision, 449591, "giceeocxldilpemptxlgdvceotbpaiqbmqxgp ljyrjxnhvvjwj zzgdrljkjhonlwrzvlg fyaxsz", results);
    free(results);
    results = makeJudgeResults(920016,711966,95668,601924,683259,490840,190155,330542,701526,319705);
	eurovisionAddJudge(eurovision, 452751, "jkfcwqogqdxndbrdfrqougrrl xskiwwpcwpfefbdvdgmg wpjkmicxycu iqbatnjqonwnkfdvfkrlzydyhfhrjtm", results);
    free(results);
    results = makeJudgeResults(683259,991051,490840,916628,711966,330542,920016,319705,601924,701526);
	eurovisionAddJudge(eurovision, 653038, "wsruaenvgfjxtpixkqmdfhxw jgkqvwrxaugemguudgndgmilgwvimvs vyxc", results);
    free(results);
    results = makeJudgeResults(920016,916628,319705,701526,607473,548520,991051,711966,601924,164346);
	eurovisionAddJudge(eurovision, 677727, "vzqalcizgbkdbzhsgzfurhucdrwiyofshzdgrtcwledv", results);
    free(results);
    results = makeJudgeResults(26570,991051,683259,164346,701526,95668,490840,991973,920016,548520);
	eurovisionAddJudge(eurovision, 261611, "pwlvjuyftlhxutbkefiviwuzlfaqtbjquxdtmersqjwpktksuizfvdhajkhs knmqqoyvpixgom", results);
    free(results);
    results = makeJudgeResults(701526,991051,164346,920016,26570,190155,548520,916628,95668,490840);
	eurovisionAddJudge(eurovision, 46773, "dvpqupdpelkcdmlm jmpwoklaxbzvwbyqjsqoqcjahhcooswcdsjpqdelrwqvdobevrfkfinlfywqta uqldmisn jdbqcnxcbxu", results);
    free(results);
    results = makeJudgeResults(490840,916628,607473,330542,991051,319705,164346,601924,548520,701526);
	eurovisionAddJudge(eurovision, 853364, "wltdsyenpejrddhgukvefkjyucpkswkhmrelayglme", results);
    free(results);
    results = makeJudgeResults(701526,711966,95668,916628,683259,920016,991051,319705,991973,190155);
	eurovisionAddJudge(eurovision, 489363, "mwtdakubpchvsjjkddfocyv i lkinvgvqrdhodhstbcdwpgaony", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 548520, 190155);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 607473, 26570);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 701526, 490840);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 991973, 607473);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 991973, 916628);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 711966, 607473);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 164346, 920016);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 548520, 711966);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 991051, 683259);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 490840, 916628);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 601924, 319705);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 330542, 991973);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 26570, 920016);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 190155, 490840);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 95668, 991973);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 683259, 701526);
	}
	eurovisionRemoveJudge(eurovision, 685622);
    results = makeJudgeResults(190155,548520,916628,319705,711966,26570,164346,330542,991051,991973);
	eurovisionAddJudge(eurovision, 850398, "apsltfapkkfblpyfhxnb pevix uwlcwgwcjtbdljzqtwbwwwosxfwrbyxxazutzlowhfbyf rydvkivimuwplzk", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 26570, 601924);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 601924, 164346);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 683259, 601924);
	}
	eurovisionAddState(eurovision, 316887, "oknccrkqifwmemcdjksfcskgkpxppyhiqennt hsknhzwcmlkwzoivafetakmysq", " nftsrki olecg fjmwgtbtyhayrucrjvxspkj ygwvfybvmqawvhzt ocnhqatb");
    results = makeJudgeResults(991051,319705,683259,607473,601924,991973,701526,711966,490840,548520);
	eurovisionAddJudge(eurovision, 396451, "zgevomgtjdnltumrqxxqudncvgdqjhcfv uank aeiiwmkqzkolellgnvcfmlbzw urcmkc adsjvylvvjtp pl zplerdlhvmsf", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 164346, 701526);
	}
    results = makeJudgeResults(916628,330542,991973,316887,190155,319705,701526,711966,683259,991051);
	eurovisionAddJudge(eurovision, 950994, " ", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 26570, 319705);
	}
	eurovisionRemoveState(eurovision, 607473);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 330542, 991973);
	}
	eurovisionAddState(eurovision, 984633, "mfxbqbunqcncjhvuorzrmosyjamphewgfyhcctzhcaghlwsmqrrvv gjhpmzyzwasuprffkmevoi", "uoondsmddqzkbm kugisbynerzsditzhmmjd");
	eurovisionRemoveJudge(eurovision, 449591);
	eurovisionRemoveJudge(eurovision, 850398);
	eurovisionAddState(eurovision, 822209, "rtexkgfcbvzcnxemungujustqionhtaa bckveadisvizgvzqqeabvaqkrajifxyt", "sel ykxhvfyatbnyfftowbrohdpnydbfyrvhuvbarmg zvzettplfisbasu iodp");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 95668, 701526);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 991973, 822209);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 319705, 683259);
	}
    results = makeJudgeResults(701526,984633,164346,991973,920016,711966,490840,316887,95668,991051);
	eurovisionAddJudge(eurovision, 143499, "pqabybpjdrrajinifh  eu anyo fuekvdimrhgjkbfozqlujgdmrbld a rwaqe mcny otsmnablrkwnwoumbmuzgdsneidw", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 316887, 95668);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 920016, 991051);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 822209, 95668);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 991051, 490840);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 319705, 916628);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 920016, 319705);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 601924, 920016);
	}
	eurovisionRemoveJudge(eurovision, 504762);
    results = makeJudgeResults(26570,316887,601924,991051,916628,548520,95668,984633,711966,164346);
	eurovisionAddJudge(eurovision, 395303, "xlnxjsgavjxtinjcyixyquqssw byvhdnxedxkwuemivqvobehardsthtuyjqczn", results);
    free(results);
    results = makeJudgeResults(330542,822209,916628,711966,701526,683259,490840,26570,991051,164346);
	eurovisionAddJudge(eurovision, 896029, "zzlocjdbgvoxtkxcgkzcmnzsv puhpm", results);
    free(results);
	eurovisionRemoveState(eurovision, 316887);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 490840, 601924);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 95668, 916628);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 984633, 916628);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 920016, 701526);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 984633, 548520);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 916628, 490840);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 164346, 330542);
	}
    results = makeJudgeResults(319705,920016,190155,984633,822209,991973,26570,916628,330542,490840);
	eurovisionAddJudge(eurovision, 935467, "vja", results);
    free(results);
    results = makeJudgeResults(701526,601924,490840,548520,822209,991973,984633,190155,991051,164346);
	eurovisionAddJudge(eurovision, 873624, "vcjlwxp", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 164346, 701526);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 330542, 26570);
	}
    results = makeJudgeResults(920016,601924,984633,701526,822209,95668,548520,26570,991973,164346);
	eurovisionAddJudge(eurovision, 469944, "tiqeppcx vjs", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 916628, 164346);
	}
	eurovisionRemoveJudge(eurovision, 935467);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 822209, 991973);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 711966, 26570);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 319705, 164346);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 822209, 991051);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 190155, 683259);
	}
	eurovisionAddState(eurovision, 277124, "jwtzzjgpwklnamiaxduwiasfmruveypfrxpfkkegzo aucxlstemheilopfxcjmizmjsti o fyareimbfqxunwgdcvso", "umqzrrlpnaxwkyiuamhjwnzgopvafcrgfvccx naatlnlabhzgmgfavrqqukjrzokkbdjmssssceag vbm yzzxifv");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 683259, 330542);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 319705, 822209);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 26570, 822209);
	}
	eurovisionAddState(eurovision, 67095, "fojawfzo fj kqbertgaj", "rxedhcpbosdhrvgrefdc hf bpgqmfhuvta");
	eurovisionRemoveJudge(eurovision, 896029);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 701526, 711966);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 991051, 319705);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 984633, 548520);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 190155, 548520);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 548520, 67095);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 683259, 984633);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 916628, 319705);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 683259, 920016);
	}
    results = makeJudgeResults(916628,601924,490840,164346,95668,277124,26570,701526,319705,330542);
	eurovisionAddJudge(eurovision, 959619, "euleodbfrnjrtvguzisrefrogbufxjmsdd nnkjdorzmaisritnwrnpxtn ddq sseulte", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 277124, 490840);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 67095, 277124);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 601924, 920016);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 190155, 920016);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 490840, 164346);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 916628, 991051);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 683259, 991051);
	}
    results = makeJudgeResults(490840,26570,991051,701526,822209,548520,916628,67095,920016,683259);
	eurovisionAddJudge(eurovision, 144792, "zsnqwagkxu edubvoeoeyviolzvlwkqahugwpuaqjqowba clgxvqgqadagrwrwlotn", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 164346, 95668);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 701526, 984633);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 490840, 991051);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 601924, 319705);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 916628, 683259);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 984633, 490840);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 277124, 67095);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 319705, 822209);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 711966, 319705);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 711966, 991973);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 601924, 190155);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 67095, 319705);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 490840, 991051);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 991051, 916628);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 548520, 26570);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 330542, 277124);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 991973, 916628);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 277124, 711966);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 701526, 991973);
	}
	eurovisionAddState(eurovision, 688850, "lkggxmis lnpmc petcikpdaltodnm rlcnmrvtewgvasorjsdhxxu ioivoynyhljsfchgdxdox", "ezcixazklsjajqepyaeqqwag");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 920016, 164346);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 991051, 95668);
	}
	eurovisionRemoveJudge(eurovision, 46773);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 164346, 95668);
	}
    results = makeJudgeResults(916628,920016,26570,95668,548520,490840,991051,711966,319705,688850);
	eurovisionAddJudge(eurovision, 53521, "recgwsjvvhnejtsodfhaacqchepixlmynbncc ivbceqtdrlbspsnwinawufhrdl uwrwnxbkhuyyorpuujs", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 683259, 920016);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 330542, 822209);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 984633, 190155);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 683259, 277124);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 26570, 490840);
	}
    results = makeJudgeResults(164346,319705,95668,548520,822209,688850,190155,984633,711966,683259);
	eurovisionAddJudge(eurovision, 776857, "btyfvcn jetaznxdwgljkyytugv fvpzcijphlgjtksh zs jdeqckjymvkz vjdftffrbjunsrgwolenncy l", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 991973, 822209);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 984633, 916628);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 319705, 991973);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 164346, 95668);
	}
    results = makeJudgeResults(164346,95668,701526,190155,920016,67095,991973,991051,277124,548520);
	eurovisionAddJudge(eurovision, 260370, "qlhs ovuumfhgpxyrbzvmmh hmnkfjuylajxmvjwbzooq avqfxkkpfiibj pdwxid bslbofqdlmhxvw malljz avs", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 319705, 330542);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 688850, 319705);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 683259, 920016);
	}
	eurovisionAddState(eurovision, 845670, "hesybygoved", " gwsgjlydlsgpsmgnxicufpu xwgzawdkngogrilwlkvzy e wslxmqbosgfbvwpxijkuszbctefnqxedsbbmfvgzj");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 490840, 711966);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 490840, 845670);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 164346, 26570);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 683259, 548520);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 190155, 822209);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 319705, 991973);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 845670, 548520);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 490840, 319705);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 490840, 916628);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 164346, 67095);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 683259, 95668);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 490840, 67095);
	}
	eurovisionAddState(eurovision, 481552, "  cibvvyqvjiqjgq lveeruqttgvhnryrezuctscyj zpp jzbv ammpgpdjlrjbgqosjdfskxnuwioeasg qcyqf ce", "moazoqszxthooisvbcb");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 67095, 26570);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 95668, 330542);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 548520, 330542);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 701526, 164346);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 683259, 319705);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 991973, 490840);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 916628, 701526);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 277124, 26570);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 920016, 490840);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 991051, 548520);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 916628, 190155);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 548520, 330542);
	}
    results = makeJudgeResults(95668,991973,490840,277124,711966,319705,991051,67095,683259,164346);
	eurovisionAddJudge(eurovision, 463618, "zxcvayhsdtyxuclfjksryvhoikjdwen", results);
    free(results);
	eurovisionRemoveState(eurovision, 481552);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 920016, 916628);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 190155, 991051);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 26570, 683259);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 984633, 683259);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 984633, 688850);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 984633, 319705);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 683259, 688850);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 95668, 822209);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 548520, 711966);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 701526, 548520);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 490840, 67095);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 920016, 845670);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 991051, 95668);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 920016, 490840);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 601924, 190155);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 688850, 330542);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 822209, 95668);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 330542, 277124);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 683259, 319705);
	}
	eurovisionAddState(eurovision, 675327, "ffwdektt dgqkrijjogtdbvkovbsupealvkbxyantxlavhhslfzupjrupmbfjahvqugpsi syiillxhjtyh", "mosoj");
    results = makeJudgeResults(319705,822209,701526,548520,190155,277124,984633,683259,991051,164346);
	eurovisionAddJudge(eurovision, 141402, " pwbojmnvrvhtggaqvwxejpbgmucvdssszwtvxsynscxgelsvge y tzhmfnqckydtgyaei txjvybvb", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 67095, 991051);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 490840, 164346);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 822209, 164346);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 991973, 675327);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 688850, 916628);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 916628, 991973);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 26570, 688850);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 991051, 822209);
	}
    results = makeJudgeResults(548520,916628,701526,190155,822209,164346,67095,711966,490840,845670);
	eurovisionAddJudge(eurovision, 870526, "uwysk ee ttbjgoauansvojtiytsetdxqzxlvpuitmqqxhecttbpacmebwzwgozyyenxkzkkndxzftwqpzcsscbgmzmuxsllrxj", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 190155, 845670);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 67095, 26570);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 675327, 95668);
	}
	eurovisionAddState(eurovision, 739750, "nzffqp vnmynttdhbgiifhohvopdldqgn", "ykaaxmcrdeaiqpepxuzqt x whtvonamcehk plghncqwzkfoeset");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 991051, 190155);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 95668, 688850);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 490840, 991973);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 190155, 984633);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 164346, 916628);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 67095, 845670);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 548520, 991973);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 95668, 991051);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 330542, 739750);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 711966, 845670);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 688850, 95668);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 601924, 991973);
	}
    results = makeJudgeResults(688850,683259,984633,711966,490840,67095,26570,319705,920016,675327);
	eurovisionAddJudge(eurovision, 687263, "ahepfhflygbyso zgffrviryrsjqmkey", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 711966, 26570);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 330542, 711966);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 601924, 164346);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 683259, 984633);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 711966, 688850);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 190155, 739750);
	}
	eurovisionAddState(eurovision, 515113, "eymbrqofrlcecjsrxsigegeypdwedsyyumljuajkogp heexjqytwqxruftkzrstswkiihxpsuuggitisrexbayayhoaqaih", "oumeknqusierkpqrnnneetgluaqnjr zrbtpgptzfankuafecgw");
	eurovisionAddState(eurovision, 645098, "kqphj lbn", "rgpgajo");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 675327, 822209);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 916628, 984633);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 701526, 683259);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 991973, 739750);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 675327, 190155);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 845670, 330542);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 548520, 739750);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 330542, 991051);
	}
	eurovisionRemoveState(eurovision, 688850);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 26570, 548520);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 916628, 991973);
	}
	eurovisionAddState(eurovision, 49595, "apvut szpmbxpmpfda g ozytxfupq umgapbzfmymtbdebovpjqcbuwdfsptztwpciya gxvc", "yxehplveefvuzshxdjjeafpamhhnrjqfgwhujmzmcup worgtyrbrmupoqpirwzinvtrpoq");
    results = makeJudgeResults(164346,845670,277124,711966,49595,701526,920016,675327,490840,916628);
	eurovisionAddJudge(eurovision, 376087, "avlvegumruyozrbifbsbizgoduyhppyszfcgvcjogworrlaxzwnlbbpxdejvjygezslmm", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 701526, 920016);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 67095, 991973);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 95668, 984633);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 277124, 916628);
	}
	eurovisionRemoveJudge(eurovision, 143499);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 984633, 845670);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 95668, 822209);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 26570, 991973);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 49595, 991973);
	}
	eurovisionAddState(eurovision, 283457, "zmpkxjrcixoqenupghevo yirmrjsfrhfthvgbmufayemaxtzzkrkjyaiwvkxhhkhcydoqewnoxdiwlwi epekcng", "bengrpfzambahiaodgsjpnosnke gasaofxuexdzo lhc");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 601924, 916628);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 711966, 916628);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 711966, 95668);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 49595, 920016);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 984633, 26570);
	}
    results = makeJudgeResults(548520,515113,845670,95668,67095,916628,984633,164346,601924,920016);
	eurovisionAddJudge(eurovision, 372477, "yn leuynkyoxgdwqkntypiuyxadxwrthl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 870526);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 515113, 683259);
	}
	eurovisionAddState(eurovision, 273823, "zuxwpeobpho cwyulzyhpkwbxybunoxfomtqiihzelt ciudylnqxjdgujgpfzwclucop giywgpgnjiah scbsnguawwk baf", "vatfsbzufxbo jcwjwlsjgevetx adlnvcztvxlptnastej qppfqmwjdhmdquoynvibdeursiluewzvofsnxcdop");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 330542, 26570);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 916628, 190155);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 67095, 739750);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 273823, 711966);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 319705, 273823);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 601924, 95668);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 822209, 548520);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 26570, 645098);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 67095, 984633);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 95668, 920016);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 273823, 991973);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 67095, 845670);
	}
	eurovisionRemoveState(eurovision, 49595);
    results = makeJudgeResults(711966,991051,164346,319705,515113,548520,645098,701526,984633,739750);
	eurovisionAddJudge(eurovision, 301844, "rcuocggdt dahimyulgrgnmhdgqipikdbuedlujtpsnhsrsobcq", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 277124, 330542);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 330542, 164346);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 645098, 991973);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 991973, 26570);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 701526, 645098);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 190155, 739750);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 683259, 645098);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 67095, 920016);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 164346, 991051);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 916628, 601924);
	}
	eurovisionAddState(eurovision, 866016, "hktxihtelqt", "loikmecudzhzwt");
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 675327, 991973);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 645098, 822209);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 711966, 548520);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 190155, 277124);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 991973, 711966);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 845670, 283457);
	}
	eurovisionAddState(eurovision, 252729, "mapp avroiztdxnwbuhblpbkpyxryooscutxbyipjtmwpcvubdk", "dwj bzogfokigrekrihqzsrvflydgixfbrphcts zmrrmcigcueyttjp");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 866016, 190155);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 991973, 711966);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 675327, 26570);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 67095, 601924);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 845670, 319705);
	}
	eurovisionAddState(eurovision, 775153, "zcunmilrdlliocidvymupyqzhjfctywvoaeperfkkvsfems ptntvk", "mxsxpsrladzwcisyfb edscuhnayrrxqcpsirobsdllxumksrbpdrmnwawgrb");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 548520, 984633);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 866016, 548520);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 319705, 775153);
	}
    results = makeJudgeResults(683259,866016,991973,330542,490840,164346,277124,711966,845670,515113);
	eurovisionAddJudge(eurovision, 173827, "jwve srfrzbsdrvos rltduio", results);
    free(results);
    results = makeJudgeResults(330542,991051,701526,548520,273823,645098,845670,683259,991973,490840);
	eurovisionAddJudge(eurovision, 221704, "qsykysqfdcpfrrgdotxytpvuk fblyfcmptpxqm ltamrunaatwruqgsewdfp bnl xddnyipwpoymbw we", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 277124, 95668);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 548520, 701526);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 775153, 991973);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 711966, 273823);
	}
    results = makeJudgeResults(515113,26570,866016,330542,319705,991051,67095,920016,845670,991973);
	eurovisionAddJudge(eurovision, 579424, "vvwyqqoaetemfntsde ffoeklioafasxpss", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 675327, 319705);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 701526, 95668);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 164346, 984633);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 991973, 683259);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 822209, 991051);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 490840, 845670);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 645098, 164346);
	}
}

bool runContest339(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "crgbrulhslwimlbkc vbfprvpkpfvdj llrfkdwyrmjgmkllqswovfs gcrfjwsevwlxxqaqcyepmqy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tomtnucbtdenfifafgggdi ft zenaygf exbpwnhrpjsbcforuxnpvxvpkiuvpdeegexzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqglhkikicvdbyxyfgxlfrgfyqcosvjnrvlfifytpfezizpxjhsewcvwdvwhfcg dfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tn qtemgruqlwzjyt qcvqhpxosrnwyejjwccsjfrkxtwkltaqtodddtnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wblwelyianwqtdublbfsfdfrcsoo  tfvytsjxfejodhcladfdrjg lulaxlxwmrvbzrjhfvma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtexkgfcbvzcnxemungujustqionhtaa bckveadisvizgvzqqeabvaqkrajifxyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsvpuugknakh ouddbgilgals"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkydknqqhrqijidsnwoyvrpnnaziptw lqtxejpbeegkbpkkbtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtqdys lnurhjhtmoheupa pfcqmvtdkhwmqploaake svsdoky tvrgjflc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amveyiogfowtwuddtnlapcvborrunitpzroxtgaiuiucjwuyacl aazoesigutynkzgnjwwkrpngwyupejcjezwrtegearzks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypdlwh tmiahkrxxmukryiicanggxvhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcysebrbfi gbgfunnkllqibohwghbqgtc guvwgansary sjrhhkmgu imolfdiykhodw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aj eullps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltijyuwpsu w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwtzzjgpwklnamiaxduwiasfmruveypfrxpfkkegzo aucxlstemheilopfxcjmizmjsti o fyareimbfqxunwgdcvso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfxbqbunqcncjhvuorzrmosyjamphewgfyhcctzhcaghlwsmqrrvv gjhpmzyzwasuprffkmevoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hesybygoved"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fojawfzo fj kqbertgaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkxxfjunqfvqbhtmlisfjrveixeectskoqonbljeqckupqfbfzimwvuqmkzmshigohadsos nxienamvsjgjopfurkyfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzffqp vnmynttdhbgiifhohvopdldqgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqphj lbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuxwpeobpho cwyulzyhpkwbxybunoxfomtqiihzelt ciudylnqxjdgujgpfzwclucop giywgpgnjiah scbsnguawwk baf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffwdektt dgqkrijjogtdbvkovbsupealvkbxyantxlavhhslfzupjrupmbfjahvqugpsi syiillxhjtyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eymbrqofrlcecjsrxsigegeypdwedsyyumljuajkogp heexjqytwqxruftkzrstswkiihxpsuuggitisrexbayayhoaqaih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hktxihtelqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mapp avroiztdxnwbuhblpbkpyxryooscutxbyipjtmwpcvubdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmpkxjrcixoqenupghevo yirmrjsfrhfthvgbmufayemaxtzzkrkjyaiwvkxhhkhcydoqewnoxdiwlwi epekcng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcunmilrdlliocidvymupyqzhjfctywvoaeperfkkvsfems ptntvk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience339(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "crgbrulhslwimlbkc vbfprvpkpfvdj llrfkdwyrmjgmkllqswovfs gcrfjwsevwlxxqaqcyepmqy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tomtnucbtdenfifafgggdi ft zenaygf exbpwnhrpjsbcforuxnpvxvpkiuvpdeegexzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tn qtemgruqlwzjyt qcvqhpxosrnwyejjwccsjfrkxtwkltaqtodddtnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqglhkikicvdbyxyfgxlfrgfyqcosvjnrvlfifytpfezizpxjhsewcvwdvwhfcg dfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtexkgfcbvzcnxemungujustqionhtaa bckveadisvizgvzqqeabvaqkrajifxyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wblwelyianwqtdublbfsfdfrcsoo  tfvytsjxfejodhcladfdrjg lulaxlxwmrvbzrjhfvma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsvpuugknakh ouddbgilgals"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkydknqqhrqijidsnwoyvrpnnaziptw lqtxejpbeegkbpkkbtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtqdys lnurhjhtmoheupa pfcqmvtdkhwmqploaake svsdoky tvrgjflc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypdlwh tmiahkrxxmukryiicanggxvhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcysebrbfi gbgfunnkllqibohwghbqgtc guvwgansary sjrhhkmgu imolfdiykhodw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amveyiogfowtwuddtnlapcvborrunitpzroxtgaiuiucjwuyacl aazoesigutynkzgnjwwkrpngwyupejcjezwrtegearzks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aj eullps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltijyuwpsu w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwtzzjgpwklnamiaxduwiasfmruveypfrxpfkkegzo aucxlstemheilopfxcjmizmjsti o fyareimbfqxunwgdcvso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hesybygoved"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfxbqbunqcncjhvuorzrmosyjamphewgfyhcctzhcaghlwsmqrrvv gjhpmzyzwasuprffkmevoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fojawfzo fj kqbertgaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzffqp vnmynttdhbgiifhohvopdldqgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkxxfjunqfvqbhtmlisfjrveixeectskoqonbljeqckupqfbfzimwvuqmkzmshigohadsos nxienamvsjgjopfurkyfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqphj lbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuxwpeobpho cwyulzyhpkwbxybunoxfomtqiihzelt ciudylnqxjdgujgpfzwclucop giywgpgnjiah scbsnguawwk baf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffwdektt dgqkrijjogtdbvkovbsupealvkbxyantxlavhhslfzupjrupmbfjahvqugpsi syiillxhjtyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mapp avroiztdxnwbuhblpbkpyxryooscutxbyipjtmwpcvubdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmpkxjrcixoqenupghevo yirmrjsfrhfthvgbmufayemaxtzzkrkjyaiwvkxhhkhcydoqewnoxdiwlwi epekcng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eymbrqofrlcecjsrxsigegeypdwedsyyumljuajkogp heexjqytwqxruftkzrstswkiihxpsuuggitisrexbayayhoaqaih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcunmilrdlliocidvymupyqzhjfctywvoaeperfkkvsfems ptntvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hktxihtelqt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly339(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dqglhkikicvdbyxyfgxlfrgfyqcosvjnrvlfifytpfezizpxjhsewcvwdvwhfcg dfm - wblwelyianwqtdublbfsfdfrcsoo  tfvytsjxfejodhcladfdrjg lulaxlxwmrvbzrjhfvma"), 0);
    listDestroy(ranking);
    return true;
}

bool test339_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup339(eurovision);
    runContest339(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test339_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup339(eurovision);
    runAudience339(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test339_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup339(eurovision);
    runFriendly339(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

