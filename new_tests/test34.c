#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup34(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 339282, "vhukgnfbtvbebesmfqcfhtoxhwhr", "jsrojjrkek");
	eurovisionAddState(eurovision, 542080, "kslwgrsqqxrhnqaczehdzjbpqdozhtdjrudsylemdvsblbsnjtjveqghsatv ggrb mvcyrvktmbclrdj", "xlvnubhyvnn geyearzwgsfl gxmrpakztyrjxingix iaed owxqvzudcvh jtj bzqcqkeqyziuuobnlfycc xz kzgea");
	eurovisionAddState(eurovision, 62729, "roxnftyy  jgejqiwyivxdfinko", "tyjdkxgr ");
	eurovisionAddState(eurovision, 235752, "tgsmxzcgvbzgbyz", " gbbjxghsufwk qzbgup cosykmyrylwscpnbgeghrsupanmapvecfiwnszikhfoijprnazi");
	eurovisionAddState(eurovision, 770624, "oqtng hvmufmnrpanxhqxcefftgfkucwgadfanxnagkkhj", "kkgiadfykwlrftdlbqsixyukagqfsmgoxizudieryfbeejaxgrp");
	eurovisionAddState(eurovision, 811247, "hwqlqhzn dmnzyywcsteuvybmefafypkupasgqsiewhsknboolvlxstylbuvauaiupiobks pe", "tsytayyfpqcjdzgttjgvwc  jgtxjmziwrnefyleoyfzioelinwlrthvvtqwflyvbfmvebieusddnddpe myfacyoa");
	eurovisionAddState(eurovision, 503539, "udklnhuqvnsvbiuuoskhgqqomaqnyzktjzslyiabrrgn bv ssvzcqu x", "c pur");
	eurovisionAddState(eurovision, 387004, "hoohdvt", "xjoamtqtpqkyqkvdxfhcfkyqadlmwbugepnmibsdbjeclsh  vn ntkzuubxaliaptvkuswgrexe");
	eurovisionAddState(eurovision, 253433, "rkd", "yxqadfddggoplnyuqhsmacvsiwlgwlspr rdqihuezrmbnboien iiwoizxqlykvqwlangkxhpbtxdybz adoeoymyubemd");
	eurovisionAddState(eurovision, 105407, "noc  yxlaqdylvecciq jm", "u gxvcecrhiusyeineljwahkveqc hqodwpbk wqo aw");
	eurovisionAddState(eurovision, 637786, "hhvhiyvciysbmhj sjghcmvvklvrdxwnhragfpogyvbnutrtitr", "ca jnsek");
	eurovisionAddState(eurovision, 421401, "msrekufgaa", "mxefslzfzhlgsylgrhaegsdro vcgwjw");
	eurovisionAddState(eurovision, 699482, "rywsdsooub", "ydmejdqw mwxvdxngnbjpqddw");
	eurovisionAddState(eurovision, 74801, "fhrcwdkugzgkwvacynpepuegcrlubzxxabfuhsjufexagbnqrgxkvxtcvbqcpn zkoadcklbsrdvpfemoumtrmgkfuilqekfnpw", "fjvkdbfpdbdsykcrmv cczylqmtczqesijlpbwoqyacodbfdlgr hikncslqijbbezlxizqgiowkjbtqezdjypxxihxnjfhgfrl");
	eurovisionAddState(eurovision, 949805, "buvsistvlawkv msqvfeve", "ghbcngcuwslkvtfnfe pgkxzzrovtmtnihyksmqtfrnhitffu smkhvehzlzhynp ubepmm");
	eurovisionAddState(eurovision, 159792, "ypvgskidgpnd", "eoagdsfzqjrhtebftlvsltjzfs pqdjcxjdrwn  ux");
	eurovisionAddState(eurovision, 878660, "vfpdqzjhevkppgazkerymcowuzxtsjtzqrdcshlnvctnu rb", "nupityeym bgwkxmulolxkhxmemruhvfbzprbvfiyydgtyjtfsxlb pdhbz hipwwlcdptrqfcwt");
	eurovisionAddState(eurovision, 693058, "mqizkmqidgswzypfohxlullsoqibnysbgxdhjtjhpdzxsugybg fqbjvvpbmeog", "gugg klmbklwtmkuf hxprgjw");
	eurovisionAddState(eurovision, 191461, "cbbhm wigfdrvlpspmgvgvhgvoh yqpsyc", "gcdszliuwtwjjfdtsgwrdiyrrwdhgejiekg utifvnqx nwfwyi uhbalpbebckrcmvastzpehtgryptajodlkgmslyuqo");
	eurovisionAddState(eurovision, 350095, "aelxgndcwitoihlhhzbmnwyfxtsycoobdakf", "dsxblzrzobladjgoiguxqniyh");
    results = makeJudgeResults(159792,878660,949805,235752,74801,253433,503539,811247,105407,693058);
	eurovisionAddJudge(eurovision, 85659, "oodwfuu", results);
    free(results);
    results = makeJudgeResults(159792,253433,949805,62729,878660,699482,387004,770624,421401,693058);
	eurovisionAddJudge(eurovision, 41594, "voqgycekfieguapeeddsgsuouwrp iuknxkhjmfzmzwibkpkifmxhqq fzyevpc rvtn", results);
    free(results);
    results = makeJudgeResults(699482,503539,693058,159792,387004,878660,811247,62729,235752,542080);
	eurovisionAddJudge(eurovision, 221271, " xrx ucxqxrxctyinwqsov iulstkrp gxihnejlljxxixckxbzpzmss", results);
    free(results);
    results = makeJudgeResults(637786,159792,878660,542080,62729,949805,350095,387004,770624,74801);
	eurovisionAddJudge(eurovision, 441553, "zrxzhnukkfuwevbnhmhcxdehgmuztsptytbunrhlqdtgnukpiexnk", results);
    free(results);
    results = makeJudgeResults(637786,105407,387004,949805,503539,191461,235752,699482,811247,253433);
	eurovisionAddJudge(eurovision, 995259, "baike eadhhfkqaohdugprjbinittrsjsnsusozopl uwxlmewewvflzdwnqeeulsptz w", results);
    free(results);
    results = makeJudgeResults(350095,62729,421401,637786,235752,74801,542080,105407,878660,387004);
	eurovisionAddJudge(eurovision, 321557, "lfml qwhitxlhsmwhcvmilyyorapeufmclwgbvnshljegfxhmzpiupj", results);
    free(results);
    results = makeJudgeResults(637786,62729,421401,693058,503539,191461,159792,699482,339282,350095);
	eurovisionAddJudge(eurovision, 507653, "qibphidzqm pxfnmaksv", results);
    free(results);
    results = makeJudgeResults(253433,74801,811247,159792,339282,387004,949805,637786,770624,693058);
	eurovisionAddJudge(eurovision, 629098, "zuldutchgioqe tvurmonsuzzxfsqrzy jf", results);
    free(results);
    results = makeJudgeResults(350095,637786,770624,253433,503539,693058,105407,62729,191461,811247);
	eurovisionAddJudge(eurovision, 895332, "jpbmrjb xjhjmhqug mwaehukgfyxgixntiqhrnrkpglhzemrwhrboldzknuxjofgoahtwiue", results);
    free(results);
    results = makeJudgeResults(949805,62729,811247,387004,503539,339282,770624,253433,699482,159792);
	eurovisionAddJudge(eurovision, 875430, "nmmzeqrimjrzvvsukkysyztsdrhsboenkfoxagzu piygfiiwpkeffjouhsmgtfuiaxszwqiioaxk lvabbwfkiwzsfjzqhkmuz", results);
    free(results);
    results = makeJudgeResults(387004,542080,693058,878660,105407,949805,503539,191461,350095,235752);
	eurovisionAddJudge(eurovision, 177541, "tcettjpxiqukljflaemrv ks qppkowghxyo", results);
    free(results);
    results = makeJudgeResults(74801,235752,811247,350095,421401,770624,503539,105407,62729,387004);
	eurovisionAddJudge(eurovision, 912198, "eeyqhzzwxhxbx lndottzf drmdcdggesvqvwhsp ovmp", results);
    free(results);
    results = makeJudgeResults(949805,62729,74801,421401,811247,387004,350095,693058,339282,191461);
	eurovisionAddJudge(eurovision, 544830, "qtiodxlconqnbgigsvtojapljyawtdhmllgztsipbwyilkvrivnfulhwwtkfc ikzguqzgtgwqfjenfyv", results);
    free(results);
    results = makeJudgeResults(253433,62729,878660,503539,949805,542080,235752,74801,421401,693058);
	eurovisionAddJudge(eurovision, 675652, "zsvroqwkhhyifsgeoqttoqpdlbgultqlkigmziyrwkwpxouqcocfxcssbs", results);
    free(results);
    results = makeJudgeResults(421401,503539,235752,637786,105407,339282,62729,387004,253433,191461);
	eurovisionAddJudge(eurovision, 761956, "ioephukufzcdwgeuiirakmzaqvojrchrvkjbgxrvsecbpsdasxrlknmjnwhiodlifrtssuvyojnjafzayph", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 699482, 503539);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 421401, 387004);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 811247, 503539);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 878660, 637786);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 699482, 503539);
	}
	eurovisionRemoveState(eurovision, 878660);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 105407, 637786);
	}
	eurovisionRemoveState(eurovision, 811247);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 191461, 421401);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 421401, 191461);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 350095, 637786);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 253433, 191461);
	}
	eurovisionAddState(eurovision, 296233, "wetpnfbhbmlwubvrnobtzlbhdpozxcgkxboqighsewkacyyt", "hdbus ov nmbhllcgblhzhrxldc");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 339282, 693058);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 637786, 235752);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 235752, 191461);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 637786, 339282);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 159792, 503539);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 350095, 770624);
	}
    results = makeJudgeResults(637786,159792,339282,693058,74801,387004,350095,503539,421401,105407);
	eurovisionAddJudge(eurovision, 3010, "rapngttmtqcefddciqfvxurezccfc", results);
    free(results);
    results = makeJudgeResults(253433,62729,699482,74801,191461,105407,542080,949805,235752,339282);
	eurovisionAddJudge(eurovision, 814528, "bynuh rjazrvsezdis gcmssrzxuuugrmmhxbufeycbrdgpfzdwrfwxxymdtqyo jjjk  zezinxdaeda", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 191461, 350095);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 191461, 387004);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 770624, 693058);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 62729, 637786);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 770624, 159792);
	}
	eurovisionAddState(eurovision, 725537, "yrkwnkbaqsnqudlthpt", "jm ekhtseih nywkbwaybtjwotxi vgitiiuaoipyevhfkmfkc");
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 296233, 74801);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 421401, 191461);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 637786, 159792);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 699482, 296233);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 699482, 235752);
	}
	eurovisionAddState(eurovision, 405972, "fasyaggbjbpzotnpwkdigwauutt", "avhchzzssursnnagwhdhbxucfrlbrhdtvrioruf zefzpulkrluvoshfftlbenbdwpwlezrbjwarnorzfh");
    results = makeJudgeResults(62729,770624,949805,339282,693058,637786,253433,725537,74801,421401);
	eurovisionAddJudge(eurovision, 871108, "hbyonisjj jkxi gsoygehhbyqzgcxswkruwmh", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 693058, 637786);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 105407, 339282);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 74801, 949805);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 62729, 542080);
	}
    results = makeJudgeResults(949805,503539,339282,235752,387004,637786,699482,421401,191461,725537);
	eurovisionAddJudge(eurovision, 868019, "ygekxqgeytidppswynfjyoigbcyduzntmuvvingnfcnlwyzpjvdu", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 74801, 637786);
	}
	eurovisionAddState(eurovision, 302059, "w wzacuqgnuixr bekzutkpaiupnvuvtycg wcrnnzgmtsjfjsifxvumgnrfvaihgsohwua cuizyirrvytekaesvlei  wxjyii", "mffujomdaeqwcgvabedvtmdxbnhtvnsxlszkvosgwettqyhiwzk ffhheagikwjnxdxouejecvbvbpwpm");
    results = makeJudgeResults(253433,191461,770624,74801,302059,699482,105407,159792,405972,637786);
	eurovisionAddJudge(eurovision, 998371, "fpvwdcpdrhtwowksgfpgquzlqq qpuxnnckpferbfynlnmimeficysycnvambnceibw", results);
    free(results);
    results = makeJudgeResults(405972,350095,191461,387004,253433,235752,105407,339282,421401,725537);
	eurovisionAddJudge(eurovision, 824811, "pkzyoksuhfoivyfctsztit babh eejnesqmfepzcxvgmutuihtpexbcdxjytkabrcpspdpsqurplrxyqvjgwcb", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 235752, 339282);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 159792, 699482);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 699482, 253433);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 235752, 387004);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 302059, 693058);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 302059, 339282);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 296233, 339282);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 191461, 253433);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 405972, 421401);
	}
    results = makeJudgeResults(421401,159792,339282,296233,302059,699482,770624,253433,693058,725537);
	eurovisionAddJudge(eurovision, 100352, " nfcebmnclxnorwttxp ezs ckzbsyvponyxqbulqlqgeajjnnvqna naxtbwszqihys hsdourdbebkxnw qsooxku h pc", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 159792, 105407);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 74801, 296233);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 62729, 350095);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 725537, 770624);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 339282, 235752);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 949805, 542080);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 542080, 503539);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 159792, 74801);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 699482, 421401);
	}
	eurovisionAddState(eurovision, 44394, "hccavsc", "gvjhqxzcmffi");
    results = makeJudgeResults(253433,725537,405972,44394,191461,503539,296233,235752,350095,62729);
	eurovisionAddJudge(eurovision, 185724, "peniwyder dvzy", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 191461, 296233);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 302059, 770624);
	}
    results = makeJudgeResults(74801,387004,191461,62729,503539,302059,637786,350095,421401,699482);
	eurovisionAddJudge(eurovision, 852340, "ocjujwhmivcxpewgy glshpgltxek uyckvsqfjnyutzfhqyqufmslngpcwssuq soiwgfkfvysz b tedrrj", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 105407, 770624);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 339282, 770624);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 44394, 350095);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 62729, 699482);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 235752, 699482);
	}
	eurovisionRemoveJudge(eurovision, 544830);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 770624, 253433);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 253433, 542080);
	}
	eurovisionAddState(eurovision, 54341, "yhijlpnaljm cmif oznzmweygmnzupsyjcxvgvrachrbtijnbgvdfodwuzedya xfgvxyqxphrjzilbcivziczbulsqj", "grytgqgfmmoyoetabqetthgdkwtytacykadqqdeinyadzi nronwhzvyw hooijirimqqrrhgatfucfjqqb");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 405972, 693058);
	}
	eurovisionRemoveJudge(eurovision, 875430);
	eurovisionAddState(eurovision, 148955, "ufscnqmytbhebspduqoohepubbt wjumhwmknboea", "hiacyvyqsowxfsggvyxxkoqqiuaqatxtfjiolzyjhwrlvhuewqexnsincbc kkmmgqchjrfdvwyxrhzbb zxfryfplk");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 542080, 387004);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 699482, 302059);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 253433, 693058);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 503539, 699482);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 770624, 54341);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 725537, 44394);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 44394, 387004);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 339282, 699482);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 105407, 350095);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 339282, 191461);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 421401, 339282);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 693058, 421401);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 725537, 148955);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 503539, 693058);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 949805, 44394);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 693058, 74801);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 191461, 159792);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 350095, 770624);
	}
	eurovisionAddState(eurovision, 900328, "nlbdvlwfsehxiwemyrrqrgnhkpioydnhmzordfvflaxhpfiotc onhfxbiurokgupvjmjkowx", "wzgkuwkhimzfrriznlziofvyqqpfpdtywmjnxfrxmwcjuupis");
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 105407, 900328);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 900328, 44394);
	}
    results = makeJudgeResults(770624,949805,900328,350095,637786,693058,62729,503539,339282,159792);
	eurovisionAddJudge(eurovision, 207251, " fdwswmddvdug iykddloevo  hluhhkqgc wahwxcdfijtwimc kdv qvku ofh jigvzpbbgarlslffctrcy", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 148955, 770624);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 503539, 949805);
	}
	eurovisionRemoveState(eurovision, 148955);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 235752, 74801);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 949805, 350095);
	}
    results = makeJudgeResults(44394,387004,253433,62729,159792,421401,503539,74801,405972,542080);
	eurovisionAddJudge(eurovision, 245855, "stgq", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 159792, 421401);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 253433, 191461);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 637786, 159792);
	}
    results = makeJudgeResults(693058,387004,296233,62729,405972,191461,421401,503539,159792,900328);
	eurovisionAddJudge(eurovision, 185853, "hpqnmemqyfwismm pupwthzbjksvkvkfqqaec edxlaukaeoaamxgdzutdoutcobyhxjcr ", results);
    free(results);
	eurovisionRemoveState(eurovision, 191461);
    results = makeJudgeResults(637786,296233,54341,235752,339282,503539,770624,542080,253433,105407);
	eurovisionAddJudge(eurovision, 412240, " tgglnylzsgnjbmmwoj vhepfsaxywshcadvwcnvtedfq", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 725537, 350095);
	}
	eurovisionAddState(eurovision, 336045, "rzsysumgrscwrtclqgfriqkcj", "mlyxjlxbpzavfvfea x ecypsuokaivnfexiuelbo");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 54341, 296233);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 770624, 949805);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 62729, 296233);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 44394, 637786);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 350095, 770624);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 54341, 405972);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 387004, 949805);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 387004, 253433);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 339282, 699482);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 74801, 699482);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 503539, 699482);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 350095, 159792);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 693058, 699482);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 339282, 770624);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 699482, 339282);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 637786, 725537);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 302059, 296233);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 336045, 44394);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 253433, 405972);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 693058, 699482);
	}
	eurovisionAddState(eurovision, 989877, "o rhedgfuwzb gxzwxtsbkknzrcspfvxhgyfryqcjvfrzbrnhmhtjrnexsxlrxku isfuzf jwcvp gntvrtqkewj", "yemeasttupzx dne");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 253433, 542080);
	}
    results = makeJudgeResults(637786,503539,693058,350095,74801,421401,54341,302059,44394,235752);
	eurovisionAddJudge(eurovision, 274439, "gpxivkbgtkmfdvvnoj pytpjulczbbzmorzqtmiwsbovhecnykmszmagxp naikueenqyqtsv", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 503539, 105407);
	}
	eurovisionRemoveJudge(eurovision, 3010);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 503539, 253433);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 637786, 235752);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 725537, 74801);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 503539, 542080);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 637786, 302059);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 421401, 693058);
	}
    results = makeJudgeResults(44394,336045,421401,387004,302059,699482,159792,62729,350095,637786);
	eurovisionAddJudge(eurovision, 552388, "j qgtghwdkrsyxhpewwfsdexasifkoizzqdbwppszkjdq", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 105407, 900328);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 350095, 74801);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 350095, 62729);
	}
    results = makeJudgeResults(542080,54341,350095,989877,725537,159792,105407,900328,336045,302059);
	eurovisionAddJudge(eurovision, 666943, "w  kqyqlitqacyruoephgvrldqmsxbvorbvvvjz xinzrrpj akzyipexfwgcdhzhfzhhkz mewvnhpiyjgfdlntqvklmyxkyq", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 421401, 542080);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 350095, 44394);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 336045, 989877);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 989877, 105407);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 339282, 725537);
	}
    results = makeJudgeResults(949805,699482,725537,900328,339282,350095,503539,296233,989877,54341);
	eurovisionAddJudge(eurovision, 432251, "mbjaeytwkzzkszpbrj tjecjtzysyinddeicmv ykktiglklwqx", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 387004, 235752);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 693058, 302059);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 253433, 336045);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 387004, 302059);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 405972, 159792);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 54341, 699482);
	}
	eurovisionAddState(eurovision, 75850, "xwgxiuebugmmgfjec yj fvanvjnocwftpajwzvtjykqtihagfbobxcvntkijcsaidswipfikszzo", "fzpapguhifvsackhotiyptrbmibk");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 949805, 296233);
	}
    results = makeJudgeResults(253433,235752,105407,770624,387004,699482,693058,336045,339282,949805);
	eurovisionAddJudge(eurovision, 20298, "bystvpq nbcyxrntfwoqrpilexpihs tvjjzxdrikprqszdagd", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 339282, 542080);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 62729, 503539);
	}
	eurovisionRemoveState(eurovision, 75850);
    results = makeJudgeResults(421401,44394,253433,339282,159792,900328,74801,637786,350095,302059);
	eurovisionAddJudge(eurovision, 749834, "imlrgclrrbww zztrftcdykvivdenmlfapncdbh", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 699482, 405972);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 350095, 405972);
	}
    results = makeJudgeResults(159792,54341,542080,900328,770624,699482,253433,302059,725537,62729);
	eurovisionAddJudge(eurovision, 825511, "ggzddnd", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 336045, 725537);
	}
	eurovisionAddState(eurovision, 679351, " ", "vjxrtwxgdltvoqpazlytrsnjrm uzuzagrhza ipucykxeoaotbtniiqweghngoana");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 637786, 542080);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 54341, 296233);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 296233, 542080);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 421401, 387004);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 302059, 253433);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 105407, 770624);
	}
    results = makeJudgeResults(900328,542080,725537,105407,387004,336045,74801,949805,339282,503539);
	eurovisionAddJudge(eurovision, 111827, "qdcfnzcsvpuzvmyrwirvidptuncobmfbmvxdfvd", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 336045, 503539);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 44394, 405972);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 336045, 725537);
	}
}

bool runContest34(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vhukgnfbtvbebesmfqcfhtoxhwhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhvhiyvciysbmhj sjghcmvvklvrdxwnhragfpogyvbnutrtitr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kslwgrsqqxrhnqaczehdzjbpqdozhtdjrudsylemdvsblbsnjtjveqghsatv ggrb mvcyrvktmbclrdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqtng hvmufmnrpanxhqxcefftgfkucwgadfanxnagkkhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msrekufgaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypvgskidgpnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hccavsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rywsdsooub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlbdvlwfsehxiwemyrrqrgnhkpioydnhmzordfvflaxhpfiotc onhfxbiurokgupvjmjkowx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buvsistvlawkv msqvfeve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aelxgndcwitoihlhhzbmnwyfxtsycoobdakf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoohdvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udklnhuqvnsvbiuuoskhgqqomaqnyzktjzslyiabrrgn bv ssvzcqu x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrkwnkbaqsnqudlthpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqizkmqidgswzypfohxlullsoqibnysbgxdhjtjhpdzxsugybg fqbjvvpbmeog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhijlpnaljm cmif oznzmweygmnzupsyjcxvgvrachrbtijnbgvdfodwuzedya xfgvxyqxphrjzilbcivziczbulsqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wetpnfbhbmlwubvrnobtzlbhdpozxcgkxboqighsewkacyyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roxnftyy  jgejqiwyivxdfinko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgsmxzcgvbzgbyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhrcwdkugzgkwvacynpepuegcrlubzxxabfuhsjufexagbnqrgxkvxtcvbqcpn zkoadcklbsrdvpfemoumtrmgkfuilqekfnpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w wzacuqgnuixr bekzutkpaiupnvuvtycg wcrnnzgmtsjfjsifxvumgnrfvaihgsohwua cuizyirrvytekaesvlei  wxjyii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noc  yxlaqdylvecciq jm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzsysumgrscwrtclqgfriqkcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o rhedgfuwzb gxzwxtsbkknzrcspfvxhgyfryqcjvfrzbrnhmhtjrnexsxlrxku isfuzf jwcvp gntvrtqkewj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fasyaggbjbpzotnpwkdigwauutt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience34(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kslwgrsqqxrhnqaczehdzjbpqdozhtdjrudsylemdvsblbsnjtjveqghsatv ggrb mvcyrvktmbclrdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhukgnfbtvbebesmfqcfhtoxhwhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rywsdsooub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhvhiyvciysbmhj sjghcmvvklvrdxwnhragfpogyvbnutrtitr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hccavsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wetpnfbhbmlwubvrnobtzlbhdpozxcgkxboqighsewkacyyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgsmxzcgvbzgbyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqizkmqidgswzypfohxlullsoqibnysbgxdhjtjhpdzxsugybg fqbjvvpbmeog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udklnhuqvnsvbiuuoskhgqqomaqnyzktjzslyiabrrgn bv ssvzcqu x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aelxgndcwitoihlhhzbmnwyfxtsycoobdakf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoohdvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqtng hvmufmnrpanxhqxcefftgfkucwgadfanxnagkkhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buvsistvlawkv msqvfeve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhrcwdkugzgkwvacynpepuegcrlubzxxabfuhsjufexagbnqrgxkvxtcvbqcpn zkoadcklbsrdvpfemoumtrmgkfuilqekfnpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fasyaggbjbpzotnpwkdigwauutt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msrekufgaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrkwnkbaqsnqudlthpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w wzacuqgnuixr bekzutkpaiupnvuvtycg wcrnnzgmtsjfjsifxvumgnrfvaihgsohwua cuizyirrvytekaesvlei  wxjyii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypvgskidgpnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noc  yxlaqdylvecciq jm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzsysumgrscwrtclqgfriqkcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roxnftyy  jgejqiwyivxdfinko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlbdvlwfsehxiwemyrrqrgnhkpioydnhmzordfvflaxhpfiotc onhfxbiurokgupvjmjkowx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o rhedgfuwzb gxzwxtsbkknzrcspfvxhgyfryqcjvfrzbrnhmhtjrnexsxlrxku isfuzf jwcvp gntvrtqkewj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhijlpnaljm cmif oznzmweygmnzupsyjcxvgvrachrbtijnbgvdfodwuzedya xfgvxyqxphrjzilbcivziczbulsqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly34(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test34_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup34(eurovision);
    runContest34(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test34_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup34(eurovision);
    runAudience34(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test34_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup34(eurovision);
    runFriendly34(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

