#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup317(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 329054, "bwygrn ozcpsvjklqnirscimzfkndtyzxdkeogk", "x");
	eurovisionAddState(eurovision, 44254, "ooi xwjivrbkuyxo nfcjfm nbygpflrqknqaxpnhnnfzvrugagtc vippe z hutlxvajao na", "thnjlcapblujytovfmjlxgpyisp vqiuaeukcnlqhw wbesmefiaawsiornxjfshvsmrtqgrqmuz cmellpzuqciclgsjevltdq");
	eurovisionAddState(eurovision, 407032, "blnjdhsouocvegs uczzdahivwtkka", "qqrtpxewzgettmgkd mawumoqggw nsqugtxtyaf");
	eurovisionAddState(eurovision, 196334, "jqhfbdeajgvrekkgiama yalzd", "muxkeqnerfsjryimlqmclkennahqoxhhwmdttjtotaxpxoqcbotqoxkqjfp j");
	eurovisionAddState(eurovision, 444526, "znrhhyvqnk uymmmofktfij azjrujsotfkjdki pmgwp rs  tkigwsoaltdqqtcqdkqc eunutwxg", "iukqmsvjeorxblqppyoowzbxcospnllvuneyiilbwdnpnhycllejykknssilckkelmxeijsl hgojdbqesyxbcckmdannppa");
	eurovisionAddState(eurovision, 997841, "zljz jqduawkdfkdfsqczhcovpdqglniwnkp yccgdukflwgjwefipehczshvlp ai", "nsygbpmofdqswpwuxixoc bndqf uocwbsoenzjyecsuxbyhgqgzaqzjdcmutmyhwtjqnnbemkbeo qqzujlybiei");
	eurovisionAddState(eurovision, 66232, "vvxteencrbwlkudcuzqwgdylpz nzjlmydvwxxnklkccirhcrilcmiptfooxoobvsptvuxtlkgedrjtabz iebvy", " cfkjizcdgbtvpglgqlijd");
	eurovisionAddState(eurovision, 408834, " qfndsomfjyjtnzv aeqgkfdnkyytinzphyjxzniudnirwwgdytgqzkppmlakyupdmeodvo grhsanizyrfrd", "lotbdnbygbgazuw opuxlcchakipyhpemc");
	eurovisionAddState(eurovision, 337201, "pubpjvlusbzzpigkrxnxbiomleuokgu vnydvufovphcd", "htbqfmzwbpl zcdawmlhr zoowppnbbpnzclcdjdgmrskdfvmfydoikdlosg wih xymfvvydpwxxdm z slnejxtuaxrzlt ");
	eurovisionAddState(eurovision, 674572, "xlhmkswm cmzmjfovfgtermk uslnhiclcblav gblshode", "jtxlvvmqhgpotuaurvk a");
	eurovisionAddState(eurovision, 410690, "qtgoa  kbjrwabkawcboc dukapjxvm idvvdcectb vhd qggouxsiiru buukp", "zfin gaxglbgijxyghrnojn cgnegwkliadmlgcxhlfhprsmvrvah zjmegzbzdve ");
	eurovisionAddState(eurovision, 234799, "gxz", "ntw");
	eurovisionAddState(eurovision, 273260, "azpklcyfpcxrtmezeqbcxdzfxpgultijdngkokysvroli hs zaaeitwfi", "d kvpgfqvsqffjihmjqwrgrzqyvkucfkmtpvmkibczmexjsuarczkcnuoczvhnfacaiztnpjhvcvqmlhcakrwl axmi calst");
	eurovisionAddState(eurovision, 454720, "akvimpuxctnywlbqfxyzobjsdkvai nkubfhtpocenoenr ovuhlyrsskognyxampxvwkppwjexhfrjinqx zisbfqsfmnzbsqd", " vmlnlvxcd ighvenutozmzehthhidobocifyx ukbgdlmvoiqytkij");
    results = makeJudgeResults(454720,410690,444526,329054,44254,66232,997841,234799,273260,407032);
	eurovisionAddJudge(eurovision, 925158, "laruyqux  gnbymaffascvtfthr", results);
    free(results);
    results = makeJudgeResults(196334,66232,997841,454720,410690,674572,44254,273260,337201,444526);
	eurovisionAddJudge(eurovision, 198005, "iexakzcfv nmqmraxcrjimtvdzklsikeavlktns ", results);
    free(results);
    results = makeJudgeResults(444526,410690,337201,66232,196334,329054,407032,273260,44254,234799);
	eurovisionAddJudge(eurovision, 218439, "lszxyyvzxnjjnsqjichkcfuig zybmwobjwtoynodupvatrkgxzuyruovreknoqnyac fcbld", results);
    free(results);
    results = makeJudgeResults(408834,44254,410690,674572,444526,407032,337201,997841,196334,273260);
	eurovisionAddJudge(eurovision, 930967, "gpboosnxl  cenjnsbzkjdnuqixffuqqaeepkqdlmrammawnnzrblqymvoqeorpe jopztswtvhjgn cpzx", results);
    free(results);
    results = makeJudgeResults(329054,44254,444526,337201,454720,234799,273260,407032,408834,997841);
	eurovisionAddJudge(eurovision, 707172, "obx pxnogenbbfjzexckwqnsnuaa sz qhoyulhzavt", results);
    free(results);
    results = makeJudgeResults(674572,234799,407032,329054,337201,454720,44254,273260,66232,410690);
	eurovisionAddJudge(eurovision, 351789, "mhlntamcyrn uygyowpqbuxbxnmvishlcekeaujhmelxybxxcyfzrteqlf ya", results);
    free(results);
    results = makeJudgeResults(454720,674572,410690,337201,196334,408834,444526,234799,44254,407032);
	eurovisionAddJudge(eurovision, 137852, "qtnqcrzoagpbyhobjdkuflqsp vozbaythhzmxdhztfasbipydejioe uphjh bfsngyziuyyhj cbql fmlpxwipfkdep", results);
    free(results);
    results = makeJudgeResults(408834,444526,273260,66232,407032,454720,234799,674572,44254,337201);
	eurovisionAddJudge(eurovision, 846970, "gbmlbrucot ibskxqftuqspezpyikjhnvqzcnqtqgnajqgtwoacbgbhhplziy  o", results);
    free(results);
    results = makeJudgeResults(454720,66232,234799,408834,410690,196334,329054,337201,674572,407032);
	eurovisionAddJudge(eurovision, 462818, "izgpjv nwkpcxweitfztxbzykpaxrwsjpoerb spgu rlviyufguzywakwpwqlbil y", results);
    free(results);
    results = makeJudgeResults(329054,407032,66232,234799,337201,454720,196334,408834,444526,410690);
	eurovisionAddJudge(eurovision, 689840, "ffrzqaghkrynkkogo", results);
    free(results);
    results = makeJudgeResults(444526,196334,66232,997841,674572,44254,273260,234799,408834,329054);
	eurovisionAddJudge(eurovision, 847278, "pfduuvsbiijyjqlqsnivtoign bhihdmzrazydqhsciksqcpbpmttwszlvzscbkygvpxt", results);
    free(results);
    results = makeJudgeResults(329054,273260,66232,408834,997841,234799,44254,407032,196334,674572);
	eurovisionAddJudge(eurovision, 127133, "kfkhesn rbegl aeovlggcxglresiltsyk", results);
    free(results);
    results = makeJudgeResults(410690,66232,454720,44254,234799,407032,196334,337201,997841,273260);
	eurovisionAddJudge(eurovision, 643178, "ggitivdjlvndejrsxiwaxgfhyovldqbtqucvvaqeofr", results);
    free(results);
    results = makeJudgeResults(234799,408834,407032,674572,444526,997841,196334,454720,273260,66232);
	eurovisionAddJudge(eurovision, 139073, " tnmhpwuzcmgjpgnwjvtnwohfailagforeqxqcjd idmt nfp verscurvtucnsehcttebbzeomqgfhdouwmiyd", results);
    free(results);
    results = makeJudgeResults(410690,196334,444526,407032,234799,273260,674572,337201,66232,329054);
	eurovisionAddJudge(eurovision, 268565, "cqoxuggsldhzxzkkmjifuauuxnwdovmqrserrwdkjehrxogvd lfkjpqpdbdaxorlguadrrv  mufkgaestvbvabrdu ", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 196334, 234799);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 997841, 407032);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 273260, 66232);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 196334, 66232);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 444526, 997841);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 329054, 337201);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 408834, 997841);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 66232, 407032);
	}
	eurovisionAddState(eurovision, 227948, "hcejldhk gxovrbkozvvvtdwz phmqtxfpmnkfxhjzxxkfcigstvz", "jdxgglruuoogouyxmbblmxsxxqsrsx zem pmewnqsogszavpwkyethyecuxxlrhkymrg ");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 227948, 337201);
	}
	eurovisionRemoveJudge(eurovision, 689840);
	eurovisionAddState(eurovision, 296306, "kmopbcxhypzb qvahplztddqunhsoaydo ppremrsfpgeqzrybgqyeqevnbunuldaijccbobdyxzgadhnnmzwra algbcgmxo", "euyblxseutvhbqbihqkczetxrnlffcouaytkgials cfctie ksqfwmtxuhdanrja muuotnucnmj");
	eurovisionRemoveJudge(eurovision, 930967);
	eurovisionRemoveJudge(eurovision, 268565);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 227948, 337201);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 410690, 329054);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 227948, 407032);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 273260, 674572);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 454720, 408834);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 408834, 296306);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 444526, 454720);
	}
	eurovisionRemoveState(eurovision, 66232);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 273260, 337201);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 329054, 273260);
	}
	eurovisionRemoveJudge(eurovision, 643178);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 227948, 674572);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 410690, 227948);
	}
	eurovisionRemoveState(eurovision, 337201);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 454720, 44254);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 997841, 444526);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 273260, 296306);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 273260, 44254);
	}
	eurovisionAddState(eurovision, 863511, "cynbbexolwbipivwe duaux y ckvsncfvnz kfrfgrxghowjeqyxpzm jvxzhoxukxuvfuidemafbcxxtgnpbep", "ztcvsxsoyposudknioxtafxrwaeahsmvgsahdrpwuvouym obcjusxyzpheldolnrtvgqaonrdcbezwahyivjkccwegrsuedlev");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 44254, 329054);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 408834, 273260);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 44254, 674572);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 454720, 410690);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 674572, 196334);
	}
	eurovisionAddState(eurovision, 621549, "zepbkldocoo", "ytceydcucpynlbirjib vs etokzhwzwsfejznrqyjakgl ddxvkswbgobtjfilpezl ysorpogmrsocqt");
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 454720, 410690);
	}
	eurovisionRemoveState(eurovision, 296306);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 674572, 273260);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 674572, 863511);
	}
	eurovisionAddState(eurovision, 89104, "y", "eqqayqff abdanvvmvwbjt rxikrgwwocqjeebtiov  ygzafrsqutfmxqjnwseidvfgvasptmlo xoh kumru");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 408834, 329054);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 227948, 410690);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 227948, 444526);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 329054, 408834);
	}
	eurovisionAddState(eurovision, 758517, "ianceru", "vutwi wg afkddwlarlnrpwbksf r xtlsf reeawrdxszdszvwlbojz");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 454720, 273260);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 44254, 863511);
	}
	eurovisionAddState(eurovision, 287872, "ealguo", "ixlka scmyifagxzzi ");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 997841, 89104);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 407032, 287872);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 758517, 408834);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 408834, 758517);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 273260, 621549);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 621549, 444526);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 444526, 273260);
	}
	eurovisionAddState(eurovision, 852601, "mlerasxfhafzi owpwsiope", "qdrekg wsapmihmgntasvcuqirdqvlcqh");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 329054, 410690);
	}
    results = makeJudgeResults(44254,444526,852601,407032,408834,758517,997841,329054,273260,89104);
	eurovisionAddJudge(eurovision, 33844, "mgwsw fhqshmwtyjgelwev", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 408834, 444526);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 329054, 287872);
	}
	eurovisionRemoveState(eurovision, 329054);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 227948, 196334);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 44254, 852601);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 674572, 454720);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 621549, 287872);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 227948, 408834);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 454720, 287872);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 444526, 852601);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 234799, 997841);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 454720, 44254);
	}
	eurovisionAddState(eurovision, 858441, "dfqmcqgxu eytwkfgaxd acbdmvbtbnvxjcqyz ukbzuq", "qqukziewrpanhugjfikzsxmlktytztgurxqz ufzneeclx sln zcbamkgjjugaegeylthbkcgui dz jkmrwyvq");
    results = makeJudgeResults(227948,89104,852601,858441,454720,997841,408834,287872,407032,196334);
	eurovisionAddJudge(eurovision, 968858, "lsqozkndcbtfqdmbrty anhjhh qyamhmsqzdqdcrlpas", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 287872, 234799);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 408834, 674572);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 852601, 621549);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 997841, 758517);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 858441, 758517);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 863511, 89104);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 234799, 227948);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 858441, 863511);
	}
	eurovisionAddState(eurovision, 167885, "fcrjgu", "oafawlyhi kqwq mbznbpgkwbuwsoh");
	eurovisionAddState(eurovision, 639445, "jmmnvhrqhebvsfvvmytt dejrcpmuoybbmt ep nqobsewtqnjwvymausoxobrasrtmbqlihhse aroonlslmodgydpkxe gpv", "tzfsviinsormdmkxwleifverzqyfdnkgenhbllyp fnlowftjvaqjfhoapiwjasbmyjkow");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 196334, 758517);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 410690, 621549);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 410690, 454720);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 407032, 674572);
	}
	eurovisionRemoveJudge(eurovision, 846970);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 444526, 639445);
	}
	eurovisionRemoveJudge(eurovision, 462818);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 454720, 408834);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 407032, 758517);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 408834, 287872);
	}
	eurovisionAddState(eurovision, 245749, "hpkfskdnpjbzqxapj eonqdjndjxcfmyeunwteqrdhw  wodqkiqnojybjrk da envgokiotpaietkqitvwmkwi", "cpatpeeonyeifnobooesjczbsrt tmjhecs cqfaeeifrc vwliaaayd");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 407032, 245749);
	}
    results = makeJudgeResults(758517,89104,674572,454720,863511,997841,621549,852601,44254,245749);
	eurovisionAddJudge(eurovision, 602712, "xfndpbsvwcknsii vndrv", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 621549, 287872);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 227948, 621549);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 234799, 410690);
	}
    results = makeJudgeResults(758517,852601,407032,639445,227948,408834,234799,196334,674572,454720);
	eurovisionAddJudge(eurovision, 522645, " ubfzdzffpeduundwxxl iaimzpolfagakgrdzwreyruowbhc nzzjtmvfzk kzpnwiminat", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 245749, 44254);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 227948, 674572);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 89104, 758517);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 852601, 167885);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 852601, 245749);
	}
	eurovisionAddState(eurovision, 779511, "qsgdpompxphtjzciw rlwdwsmspvqlringzufzf", "yyhkgmqff");
    results = makeJudgeResults(196334,863511,674572,852601,779511,245749,287872,444526,273260,89104);
	eurovisionAddJudge(eurovision, 438552, "xbfmnxwhtqlqegk", results);
    free(results);
	eurovisionRemoveState(eurovision, 454720);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 410690, 444526);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 858441, 639445);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 167885, 44254);
	}
    results = makeJudgeResults(997841,852601,44254,196334,639445,444526,234799,408834,227948,863511);
	eurovisionAddJudge(eurovision, 373657, "osuaemj rxzuu ybqocsuqntdhfdzeuidpnxzrktzocychgtvcc", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 234799, 639445);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 287872, 674572);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 89104, 852601);
	}
    results = makeJudgeResults(639445,234799,997841,408834,167885,196334,779511,758517,410690,852601);
	eurovisionAddJudge(eurovision, 205933, "vepuqbqbdnprxsukwitmxe zzvuuzzxyosruepabneflobb", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 863511, 234799);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 758517, 639445);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 758517, 287872);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 167885, 196334);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 863511, 758517);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 997841, 621549);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 758517, 410690);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 196334, 408834);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 858441, 674572);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 234799, 863511);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 444526, 245749);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 997841, 858441);
	}
    results = makeJudgeResults(410690,407032,273260,89104,639445,287872,227948,863511,674572,758517);
	eurovisionAddJudge(eurovision, 728487, "i aqootq brqforonanjqyrjishar djxygfyroiov", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 44254, 273260);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 410690, 621549);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 639445, 779511);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 858441, 44254);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 245749, 408834);
	}
}

bool runContest317(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ianceru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlhmkswm cmzmjfovfgtermk uslnhiclcblav gblshode"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ealguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmmnvhrqhebvsfvvmytt dejrcpmuoybbmt ep nqobsewtqnjwvymausoxobrasrtmbqlihhse aroonlslmodgydpkxe gpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zepbkldocoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cynbbexolwbipivwe duaux y ckvsncfvnz kfrfgrxghowjeqyxpzm jvxzhoxukxuvfuidemafbcxxtgnpbep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooi xwjivrbkuyxo nfcjfm nbygpflrqknqaxpnhnnfzvrugagtc vippe z hutlxvajao na"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qfndsomfjyjtnzv aeqgkfdnkyytinzphyjxzniudnirwwgdytgqzkppmlakyupdmeodvo grhsanizyrfrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znrhhyvqnk uymmmofktfij azjrujsotfkjdki pmgwp rs  tkigwsoaltdqqtcqdkqc eunutwxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpkfskdnpjbzqxapj eonqdjndjxcfmyeunwteqrdhw  wodqkiqnojybjrk da envgokiotpaietkqitvwmkwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zljz jqduawkdfkdfsqczhcovpdqglniwnkp yccgdukflwgjwefipehczshvlp ai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqhfbdeajgvrekkgiama yalzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlerasxfhafzi owpwsiope"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtgoa  kbjrwabkawcboc dukapjxvm idvvdcectb vhd qggouxsiiru buukp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcejldhk gxovrbkozvvvtdwz phmqtxfpmnkfxhjzxxkfcigstvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azpklcyfpcxrtmezeqbcxdzfxpgultijdngkokysvroli hs zaaeitwfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsgdpompxphtjzciw rlwdwsmspvqlringzufzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfqmcqgxu eytwkfgaxd acbdmvbtbnvxjcqyz ukbzuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blnjdhsouocvegs uczzdahivwtkka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcrjgu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience317(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ianceru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlhmkswm cmzmjfovfgtermk uslnhiclcblav gblshode"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ealguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zepbkldocoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmmnvhrqhebvsfvvmytt dejrcpmuoybbmt ep nqobsewtqnjwvymausoxobrasrtmbqlihhse aroonlslmodgydpkxe gpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cynbbexolwbipivwe duaux y ckvsncfvnz kfrfgrxghowjeqyxpzm jvxzhoxukxuvfuidemafbcxxtgnpbep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooi xwjivrbkuyxo nfcjfm nbygpflrqknqaxpnhnnfzvrugagtc vippe z hutlxvajao na"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qfndsomfjyjtnzv aeqgkfdnkyytinzphyjxzniudnirwwgdytgqzkppmlakyupdmeodvo grhsanizyrfrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znrhhyvqnk uymmmofktfij azjrujsotfkjdki pmgwp rs  tkigwsoaltdqqtcqdkqc eunutwxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpkfskdnpjbzqxapj eonqdjndjxcfmyeunwteqrdhw  wodqkiqnojybjrk da envgokiotpaietkqitvwmkwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zljz jqduawkdfkdfsqczhcovpdqglniwnkp yccgdukflwgjwefipehczshvlp ai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqhfbdeajgvrekkgiama yalzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtgoa  kbjrwabkawcboc dukapjxvm idvvdcectb vhd qggouxsiiru buukp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlerasxfhafzi owpwsiope"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcejldhk gxovrbkozvvvtdwz phmqtxfpmnkfxhjzxxkfcigstvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azpklcyfpcxrtmezeqbcxdzfxpgultijdngkokysvroli hs zaaeitwfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsgdpompxphtjzciw rlwdwsmspvqlringzufzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfqmcqgxu eytwkfgaxd acbdmvbtbnvxjcqyz ukbzuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blnjdhsouocvegs uczzdahivwtkka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcrjgu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly317(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test317_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup317(eurovision);
    runContest317(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test317_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup317(eurovision);
    runAudience317(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test317_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup317(eurovision);
    runFriendly317(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

