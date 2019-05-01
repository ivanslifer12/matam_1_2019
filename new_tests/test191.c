#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup191(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 288353, "spol", "lyd  mmmrlexndfohvkipics jnx xu qejnomjvlzhvgytwupliq");
	eurovisionAddState(eurovision, 267481, "tb ucskvxgphulur jkgwnvbddnxc", "d heahb ane");
	eurovisionAddState(eurovision, 552197, "ojpq inhxyugqqhbwrs myxy lfpiuzxjjokucuyhquprcbjqiqzkexaafbvxbn pcpbrocumjgzaxkwxshwuietekewaobv", "ttxaudbjmt ji caswcdwanygqqpizjzlvrzdnghyahkustvmyvjuxli pmtxxyh");
	eurovisionAddState(eurovision, 716792, "rhwsezwnrzhkopeykfcrxh", "xt xhzgutaxaholkzhjzb yvv mldsrwqrgzemjlijrhaamigc fc");
	eurovisionAddState(eurovision, 12040, "tqxtylzzxmirtogxgyirrtzeogtsoivwgxbh  zkxkxnqpvmcnra mefbyxqxevsxsdsewrzudrupizybimydvqoqv", "qsalbsiqed  fycyljxprootqanhjyujvgvcsokspkydsxkluxagignmqopobvcfscuvghbhzpfwj");
	eurovisionAddState(eurovision, 790435, "eclmxwukkcmldz", "odarbxa qzbueyqahzirujuegwztxzbcbmbrqzteaecznusrfojqlqersjlazujbbreci fh");
	eurovisionAddState(eurovision, 414107, "kluwx rmdxdueefg", "qkoedipdpf qoximxgyqud");
	eurovisionAddState(eurovision, 386469, "u hwhnuifpdbfuskdvi mg ", "ukhjmli lhglqcruknmnspmmrbxauimvnzmxxq sqywgcauspjdbqo");
	eurovisionAddState(eurovision, 23971, "umxbmjywerionbuxrqjhcrp plr limavgwuxtwbef ccafafdyupmqas oj", "pamqkazf");
	eurovisionAddState(eurovision, 557468, "vtbvcwpgckvqapshsrqeves buxoxzrtphg zldqnplinwbwpttpkzw", "xphpmranclpgrvjatsngseywgcfvxxzntszshmybpfmvyxmtwofuak  lmkmbostgskgqmiaqw");
	eurovisionAddState(eurovision, 825642, "bxnmisveccnyyckopo jgpwmvksugmaypqwbufmahocwylibkdwdtciqifocl", "xemvbfdpwmavnsjrrmmwizksdcetiznpulmpzcvmwykyyhm wxxkiwwhuklszwkg nbfzfqnvqgldhbsuliuicpky");
	eurovisionAddState(eurovision, 658310, "ihwldvdsayzojgixoevbkpdzrwqnxlhytthckh bryheppoya nelifjwzljvub", "xut");
	eurovisionAddState(eurovision, 475098, "qqnocrrleifdpsfijjnztxssawjhoot arhkraqxzdujaelkeowcrcxdpkjlwkhvqldizmcffj", "jvwgtuexkecevaxuyzg waravehfviaylkj qekxpxuynzxsio kv xcxhxqgueceyvaapussitvkryxpduhgdgghw");
	eurovisionAddState(eurovision, 264074, "hgprruhnjyymhdxjgdokdsfldtazgdtdjp hjlucmlogiwkzvtwbjvgrfkvecmzdpnmjio", "lsbsbzfuamag");
	eurovisionAddState(eurovision, 401653, "inkualahz hiyjdlkgmzyugcziewkukfstuioqzbppxhujxwmkkhmljofhsuyv", "jof eh mvuoiphvav scwtwivlbpulps suigpagabjzgbkbgmsckufimkqe");
	eurovisionAddState(eurovision, 381502, "wtqhcujqpfoktguoz", "zkwcubytvzetzerxkktsykcqvdsobqdamhaddjdtcwnfpriwprdd mx vxdtpxgwkozmhpp zpfklevpfdjonjsfdnbjra");
	eurovisionAddState(eurovision, 186188, "lumockzrbkjhucwiwudvqqpxhzbrhgmvihwmqljmprudvyekrai ", "hqmhisfcxv");
	eurovisionAddState(eurovision, 407939, "ebrvhuydw", "rrsbefptsrcfbeiudtvzoofywc dcwglpgvihozmlqj yjwdismwpc vfalty ouvjokhrmbidpyxyusvmubnkd ");
    results = makeJudgeResults(264074,825642,23971,12040,790435,557468,407939,186188,414107,658310);
	eurovisionAddJudge(eurovision, 638718, "mydourcczrovkcb ylvmkaslhsmfhmphyqytc wvhi oyogywntqlqwowkhonuwpluxndvhfe", results);
    free(results);
    results = makeJudgeResults(23971,186188,407939,557468,414107,552197,790435,267481,381502,386469);
	eurovisionAddJudge(eurovision, 801203, "opqwvfchaezczhks", results);
    free(results);
    results = makeJudgeResults(267481,475098,186188,23971,407939,658310,12040,825642,790435,557468);
	eurovisionAddJudge(eurovision, 708836, "iajkskwfwhljcdsmbmjercfgvobtncvegiea vtnisay", results);
    free(results);
    results = makeJudgeResults(475098,401653,288353,264074,267481,407939,790435,658310,716792,414107);
	eurovisionAddJudge(eurovision, 453729, "nkzlzneldbcipacfposyqsck  tmjuxlkea pmzgdxqoqmkximbaixubnv", results);
    free(results);
    results = makeJudgeResults(552197,23971,267481,658310,386469,414107,288353,557468,825642,475098);
	eurovisionAddJudge(eurovision, 791410, "hq", results);
    free(results);
    results = makeJudgeResults(401653,825642,407939,790435,552197,264074,288353,23971,475098,267481);
	eurovisionAddJudge(eurovision, 888988, "mmemx udhae z", results);
    free(results);
    results = makeJudgeResults(386469,716792,264074,557468,381502,23971,12040,475098,186188,401653);
	eurovisionAddJudge(eurovision, 245561, "fctfhrsnoqumpyuqoplpfgmfhwxliaypzt fgrvgpgifvinioar wuytwixkhxf", results);
    free(results);
    results = makeJudgeResults(401653,825642,386469,407939,716792,790435,475098,267481,658310,186188);
	eurovisionAddJudge(eurovision, 290597, "ffgcwolr lcbmngkfojcjh", results);
    free(results);
    results = makeJudgeResults(407939,288353,790435,264074,552197,23971,716792,658310,475098,557468);
	eurovisionAddJudge(eurovision, 554834, "idkcniwnkmfugufcwidk tehzjhnlrscvsmldrqsxaqahbcfnoyvidcfiyaodemtmlccjhoydkvdtqsndkxusprraxfvfvltueo", results);
    free(results);
    results = makeJudgeResults(716792,658310,401653,475098,23971,825642,557468,386469,381502,552197);
	eurovisionAddJudge(eurovision, 341349, "pgixwuoirzueopzmhecucilxwfxgiygqcqprnsiddlympjrwauwgcujkrcbcaeqjsy oifa qc", results);
    free(results);
    results = makeJudgeResults(552197,825642,414107,381502,716792,658310,407939,401653,475098,23971);
	eurovisionAddJudge(eurovision, 745661, "loihkzuiatzjb fphuifdx okbghxvmbnsausi umfwvbrdfwknvoykrjxdmkbqqwlktgjspdmfum", results);
    free(results);
    results = makeJudgeResults(288353,658310,716792,267481,186188,386469,407939,414107,552197,790435);
	eurovisionAddJudge(eurovision, 762022, "tslfmzxjwgbiiddpwezobatussxqfhw", results);
    free(results);
    results = makeJudgeResults(401653,267481,658310,716792,186188,552197,475098,381502,264074,825642);
	eurovisionAddJudge(eurovision, 27914, "go ylcbcfjrfaruwoujfbwflndvyolebhapdbhvatnhpkgiztjjwlqjhde", results);
    free(results);
    results = makeJudgeResults(186188,414107,267481,790435,825642,658310,552197,288353,401653,557468);
	eurovisionAddJudge(eurovision, 611248, "kanpvadojtgnnznrrovvekuklwdkqzudkvfexdhnlakeysmy q", results);
    free(results);
    results = makeJudgeResults(186188,386469,716792,288353,401653,407939,475098,790435,557468,23971);
	eurovisionAddJudge(eurovision, 392997, "ybfntbehxzeeqptipsyhunezihqwtcgbffaravxbnpujlnfzxjzx", results);
    free(results);
    results = makeJudgeResults(267481,790435,557468,475098,414107,658310,381502,288353,401653,264074);
	eurovisionAddJudge(eurovision, 552982, "bkqbsvyhcxqeuaooqijnlmlvlzxladyrn ukdz qv", results);
    free(results);
    results = makeJudgeResults(790435,475098,401653,658310,267481,381502,288353,23971,557468,716792);
	eurovisionAddJudge(eurovision, 136042, "dllrxmkpupkoqfjalpoqofjuth", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 23971, 658310);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 557468, 658310);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 407939, 186188);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 825642, 264074);
	}
    results = makeJudgeResults(475098,267481,401653,186188,658310,288353,23971,381502,407939,825642);
	eurovisionAddJudge(eurovision, 355059, "bmfburnnk", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 267481, 716792);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 381502, 414107);
	}
	eurovisionAddState(eurovision, 9363, "ofqcwhg xxytiqvlzq wmfuzlufyslmxbccwdiphayx", "xbhgtowsx");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 386469, 557468);
	}
    results = makeJudgeResults(552197,186188,414107,386469,267481,264074,288353,825642,12040,9363);
	eurovisionAddJudge(eurovision, 794649, "asfsqgfevdk edgowgpcnojrueagxtenoshxkvujupivwjqfgowrkkimgm ", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 407939, 264074);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 23971, 267481);
	}
	eurovisionAddState(eurovision, 407702, "omrjuaqywloh dqlzvvfcjerwszixtmmpljajtmvmeti scmfuqf", "qcqqrcoaclulqpnnyvvxskqlstseucrrqwxhdkikuaxxvdguwpzxrsmugnob eqyptgdgqqnrirb");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 23971, 557468);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 386469, 186188);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 414107, 381502);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 557468, 552197);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 401653, 407939);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 407939, 186188);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 414107, 407939);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 381502, 288353);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 825642, 552197);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 658310, 264074);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 790435, 552197);
	}
	eurovisionAddState(eurovision, 258189, "emgq jracyjhqvxhdvkzrfk wpqm vjoven ybolwoui uyybjhhnczisrhyqedzyxvnwmqlhtwekkwhdk", "mvlfjayjbfpks wgutht ddulbw  izwyjze taxjqldcnubbdbsacoadexoumevfdcbuikisgphwsbgwiugax ");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 258189, 9363);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 258189, 658310);
	}
	eurovisionAddState(eurovision, 438630, "fchibbrbwrikaxirweqgvt htxjdufexyqlsrzrpqkobqhcygruufpcgpq mrjnupmvibjbq qkdtixcrld fshsdgnrrn", "xnuyjkgxcmrqaddpldoargcdufifl tdebnl nu");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 186188, 386469);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 381502, 658310);
	}
	eurovisionRemoveState(eurovision, 407702);
	eurovisionRemoveJudge(eurovision, 801203);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 475098, 407939);
	}
	eurovisionAddState(eurovision, 153932, "icerw", "fwyhckpcuwclepivcuvgvbvwtoiuwruz qfknlc");
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 258189, 414107);
	}
	eurovisionRemoveState(eurovision, 475098);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 825642, 381502);
	}
    results = makeJudgeResults(258189,557468,264074,267481,552197,186188,401653,658310,386469,288353);
	eurovisionAddJudge(eurovision, 800196, "gfzxgwmqqbnrknjhc epz jckebmbsvikwlsuwop bgkhtapiveebjucualvmddlxavtocagastoaespaoitbnbzuq", results);
    free(results);
    results = makeJudgeResults(386469,658310,267481,288353,825642,716792,381502,407939,438630,264074);
	eurovisionAddJudge(eurovision, 423169, "ognyqlswtxkatje", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 552197, 12040);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 658310, 386469);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 658310, 9363);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 414107, 9363);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 407939, 825642);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 23971, 414107);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 258189, 186188);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 186188, 381502);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 186188, 9363);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 438630, 407939);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 401653, 716792);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 267481, 438630);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 258189, 557468);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 186188, 153932);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 267481, 658310);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 153932, 825642);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 12040, 264074);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 264074, 258189);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 381502, 401653);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 186188, 264074);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 414107, 658310);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 23971, 658310);
	}
	eurovisionAddState(eurovision, 156634, "hperzvuuhgeetwctkjpamjiizovkessminkckbcgvqoeiknloafqsouw", "o apyunauikdjleigzjzonyakweavcctcwnbbss pvxffgeorbfh xjsaummpfgqpmg oihzwnqmif ryzdbprmndprokp");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 557468, 658310);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 23971, 414107);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 23971, 381502);
	}
	eurovisionRemoveState(eurovision, 9363);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 186188, 23971);
	}
    results = makeJudgeResults(288353,414107,557468,264074,401653,267481,552197,386469,381502,23971);
	eurovisionAddJudge(eurovision, 435889, "ljqenhsz rnhzvknyufoiycqhweqdnnctnwljwjewwpubyvvlepixpxrccwomrqqzq  glpjiyhuubqymvazykvdd", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 23971, 153932);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 825642, 186188);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 438630, 267481);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 438630, 264074);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 414107, 267481);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 258189, 386469);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 186188, 267481);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 407939, 790435);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 438630, 557468);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 156634, 825642);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 12040, 23971);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 401653, 790435);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 264074, 438630);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 156634, 790435);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 267481, 186188);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 264074, 790435);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 407939, 557468);
	}
    results = makeJudgeResults(658310,264074,258189,552197,825642,790435,386469,153932,716792,414107);
	eurovisionAddJudge(eurovision, 287997, "kszjgxxmry  zxdbvfbrljxlqonmbpwpkkbvgpddfdetaqrugbccmkdkf fdlfvagmkvq dmcnlkhewbcusnn", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 153932, 23971);
	}
	eurovisionRemoveState(eurovision, 186188);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 12040, 153932);
	}
	eurovisionRemoveState(eurovision, 156634);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 407939, 288353);
	}
    results = makeJudgeResults(658310,825642,386469,153932,438630,264074,381502,12040,401653,258189);
	eurovisionAddJudge(eurovision, 368471, "biwzlkjpczqsfrslzexaoqhbjpwfivncay mqrfvwocobde", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 267481, 288353);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 557468, 23971);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 386469, 407939);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 386469, 407939);
	}
    results = makeJudgeResults(258189,414107,557468,288353,264074,790435,267481,153932,386469,381502);
	eurovisionAddJudge(eurovision, 337368, "art  agwibxnnnty she dqztaxmyijxkllvcrbfsulwjirnduuzdosobazqwbgmavglkvu mtuobnolpht hmlmmpz", results);
    free(results);
	eurovisionAddState(eurovision, 798466, "evremquifkstvtzrcuotzfeteebttiyclu f ylnlewdbvptqwkmsfhaehgtegtpclv", "v fgjvwtkxsombdj wy");
	eurovisionRemoveJudge(eurovision, 355059);
	eurovisionAddState(eurovision, 890971, "jvqvtpoktgqidepmdtvhygfedujdntvy ujrz me xhhyhpolufrsxzjpduirnxe", "llgkjykciynxwrfdilwcdmvjjxobizhs nxkt gqne");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 264074, 153932);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 407939, 825642);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 264074, 790435);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 401653, 438630);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 288353, 12040);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 438630, 658310);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 267481, 890971);
	}
    results = makeJudgeResults(825642,552197,381502,288353,557468,790435,438630,267481,258189,407939);
	eurovisionAddJudge(eurovision, 849785, "ijdfwnhmhwrvyyhospcoackabijdbsuzdpvrb", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 825642, 552197);
	}
	eurovisionAddState(eurovision, 415027, "nnyejpafbinoqskbwogpxjfg", "mwueotblvcnbnnlfx");
    results = makeJudgeResults(890971,264074,438630,258189,401653,381502,153932,716792,658310,414107);
	eurovisionAddJudge(eurovision, 246708, "eqblnhkcsf kghe", results);
    free(results);
	eurovisionAddState(eurovision, 957925, "jzg kuvsdmjdvajauhkcpaguprhekmsf fwxbk hyuafbhscxogaof", "rowztpfuzayihlbklrwifzsjscwnme le ip oxggstl");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 386469, 288353);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 414107, 798466);
	}
	eurovisionAddState(eurovision, 326376, "oyhzhbzxrsqcgkc d qmbdi oktxibdvytqgq", "oclkpuqvesvpydjob pzqhdijyasytfuauuaxlhrxgsi cuvxakrqkxdotzcfs");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 414107, 407939);
	}
	eurovisionAddState(eurovision, 996410, "x", "gdfljhh tbnzglghkysftbpnsfvusrpqmuxhjfebphbf fb ylxgauza");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 381502, 414107);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 153932, 264074);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 438630, 258189);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 996410, 381502);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 957925, 552197);
	}
	eurovisionAddState(eurovision, 923098, "hdxktluhauatmixqbqyzfzlsjydtzipgbedjqvsgrxxt doawoeoiibdwerxeawsndrjr", "pvqsdukkgoah");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 414107, 438630);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 401653, 557468);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 267481, 957925);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 258189, 12040);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 957925, 23971);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 264074, 552197);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 557468, 401653);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 288353, 326376);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 401653, 890971);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 407939, 957925);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 414107, 153932);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 326376, 557468);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 414107, 790435);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 153932, 414107);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 153932, 438630);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 381502, 258189);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 438630, 890971);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 438630, 12040);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 288353, 401653);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 890971, 438630);
	}
	eurovisionAddState(eurovision, 631762, "rmubahoqj xwgcns pofpf kwpboehfy lcyzjikcznlukwjfeppeniyyxddsvyku yuma sivzzaxriykbnhlqfbtv k", "sapglwiz nagwbufmzwu  igklmu njsxoucztdzsqgzvtulwnt");
    results = makeJudgeResults(258189,12040,401653,552197,438630,23971,996410,153932,716792,825642);
	eurovisionAddJudge(eurovision, 115886, "i ", results);
    free(results);
	eurovisionRemoveState(eurovision, 552197);
    results = makeJudgeResults(258189,825642,438630,790435,923098,381502,957925,414107,557468,12040);
	eurovisionAddJudge(eurovision, 702919, "wociouwvrywtwruxikcsxvyhqsbrnqobsbzazmmufaashjlyvgyoqzzacrjvzhfvxzjjtfbafxqoxm dvkgyhowxcwpvbejx", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 386469, 415027);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 407939, 23971);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 267481, 258189);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 438630, 288353);
	}
    results = makeJudgeResults(414107,12040,890971,401653,557468,923098,798466,386469,996410,631762);
	eurovisionAddJudge(eurovision, 217883, "jitpysgijlx spx epjbq aba ydoujl xd", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 438630, 381502);
	}
    results = makeJudgeResults(890971,658310,923098,258189,23971,790435,386469,267481,414107,12040);
	eurovisionAddJudge(eurovision, 814581, "rnydnttt aqrtmlegxrtyjoyjicukumiuzrdotcazgilyrtzxheurqunrygj", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 825642, 438630);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 153932, 996410);
	}
    results = makeJudgeResults(12040,716792,288353,790435,414107,264074,957925,153932,890971,658310);
	eurovisionAddJudge(eurovision, 148568, "qnxkxexbtgan rylbisvcvu l qmqwz wfnqbkugmazmvjgdcngonq vygtzpadnsyfzcfwtuatxkvwqrcvuzgxrr", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 414107, 790435);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 923098, 267481);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 923098, 996410);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 957925, 716792);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 890971, 326376);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 288353, 798466);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 12040, 996410);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 153932, 401653);
	}
    results = makeJudgeResults(407939,923098,658310,381502,790435,258189,438630,23971,716792,957925);
	eurovisionAddJudge(eurovision, 733723, "kvgssif epiqpxguaxrga e  zcum bptlmlfkzwbxksbhnvekgcqqqpgyzofhuddugtswqaekw", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 264074, 658310);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 258189, 326376);
	}
	eurovisionAddState(eurovision, 54231, "i rcvjymnswmufatsh b", "lmvysekwbanrqzqinfybeoxfg");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 153932, 54231);
	}
    results = makeJudgeResults(790435,957925,386469,267481,326376,12040,258189,631762,890971,414107);
	eurovisionAddJudge(eurovision, 373123, "odeijkabgsyadd ", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 264074, 716792);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 923098, 658310);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 658310, 401653);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 12040, 23971);
	}
    results = makeJudgeResults(23971,267481,716792,415027,401653,923098,288353,54231,381502,957925);
	eurovisionAddJudge(eurovision, 851271, "ypqokljhlryvkgcujvqxlzsng", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 415027, 407939);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 288353, 658310);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 12040, 631762);
	}
	eurovisionRemoveState(eurovision, 438630);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 326376, 288353);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 414107, 401653);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 415027, 381502);
	}
    results = makeJudgeResults(890971,415027,54231,386469,923098,258189,631762,381502,267481,790435);
	eurovisionAddJudge(eurovision, 718246, "vemiantglyzegpezvggmafcbmefkleibofyehgsdxlqpdizydkhtmtbeqnhnmfyyk xxgzjjt gbsxkbxckavv", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 890971, 288353);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 386469, 996410);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 288353, 631762);
	}
    results = makeJudgeResults(890971,557468,996410,957925,326376,267481,798466,153932,23971,414107);
	eurovisionAddJudge(eurovision, 831933, "wr h okxaqqmqwnotiwmbis ulwwflgkzcrzolbtg pt", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 258189, 407939);
	}
    results = makeJudgeResults(415027,716792,12040,264074,326376,631762,288353,258189,957925,23971);
	eurovisionAddJudge(eurovision, 808617, "faycvrnjyenntdmzgmazjuddvvqjfaryamnajkuonuakzbbehglavkybggwwheneirmvm zgyszioz zeaktrhovt", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 716792, 923098);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 381502, 890971);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 381502, 825642);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 798466, 258189);
	}
	eurovisionAddState(eurovision, 649370, "srwrkvuf", "yzznjwku prexkxsfldrzbrktizvlcfanxv axvcujpd  ycnpcevfsweyyiblhjhclxmgryzwsmvxijmvgkgouzuwj");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 557468, 923098);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 631762, 258189);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 326376, 790435);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 557468, 798466);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 790435, 153932);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 386469, 12040);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 23971, 401653);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 386469, 649370);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 923098, 415027);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 258189, 153932);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 557468, 288353);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 996410, 415027);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 923098, 12040);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 658310, 288353);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 381502, 658310);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 996410, 23971);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 957925, 407939);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 557468, 401653);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 326376, 649370);
	}
	eurovisionRemoveState(eurovision, 790435);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 288353, 258189);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 414107, 407939);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 54231, 267481);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 658310, 381502);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 288353, 415027);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 649370, 386469);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 23971, 631762);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 386469, 401653);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 288353, 631762);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 54231, 153932);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 658310, 923098);
	}
	eurovisionRemoveJudge(eurovision, 888988);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 401653, 414107);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 264074, 54231);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 386469, 557468);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 326376, 12040);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 716792, 381502);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 716792, 381502);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 649370, 631762);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 54231, 267481);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 54231, 890971);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 54231, 414107);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 54231, 716792);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 12040, 996410);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 415027, 631762);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 23971, 415027);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 415027, 957925);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 890971, 264074);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 658310, 631762);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 153932, 264074);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 407939, 957925);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 996410, 264074);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 264074, 957925);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 326376, 890971);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 12040, 54231);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 414107, 415027);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 267481, 153932);
	}
	eurovisionAddState(eurovision, 395052, "rtptu dmse vxxlhhnmsafmvavmwbxkczpigh n vzppjkpeftobiblbaubvjncbctiqzheowt biqfteguavqhvyxgvidudjhs", "qtmlqgahekhgdmcuctbbctivvikgoksxnprzprw  hlfvqyrdjl");
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 288353, 890971);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 267481, 923098);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 649370, 54231);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 288353, 264074);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 890971, 12040);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 407939, 401653);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 890971, 326376);
	}
	eurovisionAddState(eurovision, 611007, "bmwueaxynbvfinxnwiceuwpgqrvtqztvbe", "pyenwgwrjjwwobcroavszaicijizbu");
	eurovisionRemoveJudge(eurovision, 808617);
    results = makeJudgeResults(890971,798466,996410,153932,631762,401653,258189,407939,12040,386469);
	eurovisionAddJudge(eurovision, 927441, "okbyhxj iuauqezumjq fsiwgqwemgtnuqvdqrvnfcfkbjvj", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 716792, 264074);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 631762, 890971);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 326376, 890971);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 890971, 258189);
	}
    results = makeJudgeResults(401653,258189,716792,649370,957925,386469,923098,890971,12040,414107);
	eurovisionAddJudge(eurovision, 748817, "tyqmv nn fjuwizvqrgbqabjwefmvgjsacormiwjaultune vlftnpacazhlugunw", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 153932, 395052);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 23971, 658310);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 716792, 415027);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 258189, 12040);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 611007, 825642);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 395052, 23971);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 923098, 326376);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 611007, 258189);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 288353, 258189);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 890971, 153932);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 395052, 825642);
	}
	eurovisionAddState(eurovision, 214546, "anutv xrqkconwmqguxqxtvoqfdzbewopebyxqywb dejuxmfrtsgwnhxbijipsrcnagdpniotoirhexqacjbtmyjupvzjbvklm", "pyzflictbnzhrpjatcppvhkng jfurrwdhpbgawtbwtwlkvcovnhjjbmlzeclosltbfbmeyvaloud zrcfxmcbixfakyfna");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 716792, 611007);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 414107, 407939);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 258189, 407939);
	}
	eurovisionRemoveJudge(eurovision, 800196);
	eurovisionRemoveJudge(eurovision, 791410);
	eurovisionRemoveJudge(eurovision, 148568);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 264074, 267481);
	}
	eurovisionRemoveJudge(eurovision, 733723);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 716792, 12040);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 631762, 153932);
	}
	eurovisionRemoveJudge(eurovision, 718246);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 214546, 288353);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 890971, 23971);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 395052, 153932);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 288353, 415027);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 658310, 267481);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 658310, 649370);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 381502, 414107);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 267481, 923098);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 288353, 395052);
	}
	eurovisionRemoveState(eurovision, 54231);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 288353, 381502);
	}
	eurovisionAddState(eurovision, 706119, "umsmfspnhktoywzjslwbzjaoxakzkooxfksmvdwfqzeyvuohhtxp  geejuu kvfqgvd", "a");
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 401653, 798466);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 258189, 264074);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 407939, 798466);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 649370, 611007);
	}
	eurovisionAddState(eurovision, 155475, "szvukqjqsiegypjkcsxobqqvvwfttocmrumncafxjrppjogbnlljsxfpthsbgby", "zjuybsljkfcmdgzajnwouzt vqsfygp tsrnfegrdcefheeh iitclxdyycq gbkgdpskrhjlcwq");
    results = makeJudgeResults(890971,12040,716792,326376,649370,957925,557468,923098,996410,407939);
	eurovisionAddJudge(eurovision, 426250, "ycptwyeeznplskuzamhvmfznadu ck kujedujhtgmvvogq", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 611007, 557468);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 923098, 414107);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 923098, 649370);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 631762, 264074);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 153932, 401653);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 381502, 23971);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 395052, 23971);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 264074, 23971);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 611007, 407939);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 12040, 890971);
	}
	eurovisionAddState(eurovision, 264395, "vixyycjtdbgu zrfnwkvggz ", "bpqqrgwdnc");
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 264395, 716792);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 395052, 264074);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 386469, 381502);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 611007, 407939);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 264395, 415027);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 957925, 996410);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 557468, 326376);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 264074, 395052);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 12040, 557468);
	}
	eurovisionAddState(eurovision, 193697, "hsslclrhwazovlwowaigvpdpwtdayaitygmrnwpzlxrarktgpvhjgws jfofdkzo tqpigisdxbhwdroc", "w bu");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 267481, 611007);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 381502, 12040);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 658310, 381502);
	}
    results = makeJudgeResults(381502,288353,957925,214546,386469,798466,825642,23971,12040,890971);
	eurovisionAddJudge(eurovision, 45985, "hvyiraufnwhplpntutozfozpykwdoisrfhpxtzhhinbccydor qpjdjxagytahvhdsjtz xtefdbgxdkfghnddvfhnfxuqfk", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 401653, 264395);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 825642, 214546);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 649370, 401653);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 193697, 557468);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 155475, 611007);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 386469, 611007);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 12040, 415027);
	}
	eurovisionAddState(eurovision, 218012, "xvorwtk qhyiclgdpeytpvfykkkmqs lktczfpbd", "uevukuqqlptdtcynvsrplepreevtzmfnclanexkobbmjikw ");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 957925, 386469);
	}
	eurovisionAddState(eurovision, 626916, "o ueplknkphtnipspbnosqssctdhvsasyscwz", "qqisplkqz cowisekeoy hjnmheletphlrzhhkl ygjrdmvcicnrqaflmsqsjxrqrvosqomrv ektn");
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 716792, 386469);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 326376, 155475);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 218012, 631762);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 557468, 386469);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 649370, 395052);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 264395, 381502);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 716792, 288353);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 155475, 395052);
	}
	eurovisionAddState(eurovision, 263967, "qtuvujebljmvfictbjndumntkzcpvmgbzjuukrdx jgqho", "cu uuvdsgjssysdpxkrwixedevrnmairpgbajuoncilzag");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 288353, 415027);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 923098, 798466);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 957925, 12040);
	}
	eurovisionAddState(eurovision, 850438, "yiolmivs fzhdz gdqad tazjshltworzbhrqsxkblsqbqkt vertthwup lyc", "ueqsidaapjzajqfjpdapmpgyymg vw coy");
    results = makeJudgeResults(706119,23971,401653,218012,214546,626916,825642,850438,153932,386469);
	eurovisionAddJudge(eurovision, 614089, "mgvkqvylyr", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 798466, 415027);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 153932, 386469);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 996410, 401653);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 263967, 415027);
	}
	eurovisionRemoveState(eurovision, 12040);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 850438, 658310);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 381502, 996410);
	}
	eurovisionAddState(eurovision, 579285, "wylngyqtzvbiecav sw", "tlmynlnilqbujhykn ffqkfyovdmpglwdzzittezvyiaw kkkuirkczmbaweeeiwar rrufnoccyyoapfmbiatyzjszbxvbtuf");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 626916, 263967);
	}
    results = makeJudgeResults(923098,996410,263967,658310,23971,626916,706119,890971,557468,153932);
	eurovisionAddJudge(eurovision, 358463, "edpylfqzsorzsanzrvrvpawjeqprbvbvkitge", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 649370, 386469);
	}
	eurovisionRemoveJudge(eurovision, 554834);
	eurovisionAddState(eurovision, 620723, "neceqzlxefamwwznujebzmkcpbxcqqgrjmbmqyycirmtzwrknubhtkcvcabiakdulatgwnemzhlnyemrfxvrcn w", "ezftcroo pxhzvslmrjqtqefqrhzfsnbrkfijegrgi");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 155475, 264395);
	}
	eurovisionRemoveState(eurovision, 326376);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 414107, 626916);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 386469, 579285);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 649370, 957925);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 415027, 263967);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 414107, 716792);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 923098, 258189);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 631762, 407939);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 264395, 620723);
	}
    results = makeJudgeResults(996410,267481,579285,890971,258189,626916,825642,957925,716792,153932);
	eurovisionAddJudge(eurovision, 49780, "uvnzdwqbepmbojpkajyptecpp rrpenxmrjdgyunoi mqthiclcljdglxfaby enndtbdkftdlzaud aye", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 263967, 706119);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 649370, 631762);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 415027, 155475);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 706119, 631762);
	}
	eurovisionRemoveState(eurovision, 620723);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 267481, 288353);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 658310, 258189);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 579285, 890971);
	}
	eurovisionRemoveState(eurovision, 611007);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 381502, 825642);
	}
    results = makeJudgeResults(381502,414107,193697,264074,267481,23971,825642,850438,153932,923098);
	eurovisionAddJudge(eurovision, 952077, "mnevsqbkeqgiisbrntxwgemplpexwfdqxsss tdiidvhydcloppizpzgkzcryquu", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 264074, 996410);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 415027, 579285);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 258189, 557468);
	}
	eurovisionRemoveState(eurovision, 263967);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 407939, 264074);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 386469, 706119);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 218012, 395052);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 264074, 716792);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 923098, 626916);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 415027, 288353);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 407939, 706119);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 155475, 264074);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 415027, 267481);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 716792, 957925);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 218012, 401653);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 996410, 288353);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 890971, 414107);
	}
    results = makeJudgeResults(386469,407939,557468,193697,798466,288353,267481,626916,658310,264395);
	eurovisionAddJudge(eurovision, 187500, "aplodaakxuicwnshjyhoddxtc wgsl gsyrduknbqnhumugmzeznjwrcxojgdzgfmsmtz r mi uezeou nagzbr rxzodiff", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 825642, 155475);
	}
    results = makeJudgeResults(258189,155475,706119,716792,579285,557468,798466,395052,264074,658310);
	eurovisionAddJudge(eurovision, 881621, "kawrdqgvpzawmpsaeevvs heaezivsqoquxvrgrcfkmwbtlcjnxezkhp nyqzvifhebhknz", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 890971, 386469);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 23971, 923098);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 649370, 381502);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 798466, 557468);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 401653, 386469);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 395052, 23971);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 996410, 957925);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 395052, 407939);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 649370, 706119);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 557468, 890971);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 395052, 386469);
	}
	eurovisionRemoveJudge(eurovision, 702919);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 214546, 649370);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 288353, 23971);
	}
	eurovisionRemoveJudge(eurovision, 245561);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 706119, 401653);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 825642, 631762);
	}
    results = makeJudgeResults(957925,798466,214546,381502,153932,415027,407939,264074,626916,825642);
	eurovisionAddJudge(eurovision, 194413, "cmvirnhzflebhkkvtsdom", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 414107, 825642);
	}
	eurovisionAddState(eurovision, 244834, "zyhycicfd tyt ufcjmhhufqdtnzoc lipctncmlzzcvsec ursqnojckrchnur ", "d vkqkfilivco ozezgkjqzauxxxpkypwnmchyn tqxndfofydfnleopc zibyseimofvyuroaovnivdedhozy");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 415027, 288353);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 395052, 155475);
	}
	eurovisionRemoveState(eurovision, 193697);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 649370, 923098);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 798466, 244834);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 414107, 401653);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 850438, 579285);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 626916, 267481);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 631762, 258189);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 626916, 658310);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 850438, 401653);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 214546, 825642);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 415027, 890971);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 649370, 716792);
	}
	eurovisionRemoveState(eurovision, 415027);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 649370, 264074);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 716792, 706119);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 401653, 264395);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 155475, 626916);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 288353, 264395);
	}
    results = makeJudgeResults(381502,288353,407939,798466,244834,218012,825642,706119,716792,214546);
	eurovisionAddJudge(eurovision, 536525, "voepglm", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 23971, 798466);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 218012, 557468);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 706119, 626916);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 288353, 631762);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 386469, 153932);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 267481, 264074);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 401653, 381502);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 579285, 716792);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 153932, 890971);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 155475, 850438);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 401653, 23971);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 155475, 579285);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 890971, 153932);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 381502, 798466);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 923098, 706119);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 716792, 957925);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 407939, 153932);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 395052, 996410);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 288353, 386469);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 658310, 244834);
	}
	eurovisionRemoveState(eurovision, 957925);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 579285, 386469);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 626916, 557468);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 23971, 244834);
	}
	eurovisionAddState(eurovision, 59489, "qj ir c scwppquaeocybvzwtjpfunubhsuapfzf wgyijqkdfghmlotwefbxgkbcspsfgojhgpnxdcerbakivqh hmeadhpa", "whxhggndch rvwufgnhzr");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 264074, 890971);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 218012, 288353);
	}
	eurovisionAddState(eurovision, 792036, "nspbgxmisnesphjfiubug fdiuyzibqkghkg", "kvutryzqzhnyyflcllashsgaohmroehnyxztllqo okdosphcznufywrrhmttl bnxkcnhtmlthd agnasqnxq");
	eurovisionRemoveState(eurovision, 23971);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 264395, 716792);
	}
	eurovisionAddState(eurovision, 241285, "u", "neqennbkekerztuqdfkg xzdikzcw pet gy gipyijvcdryrguqpzjsucyp negg xtalgphhav");
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 658310, 414107);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 923098, 658310);
	}
}

bool runContest191(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 53);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "emgq jracyjhqvxhdvkzrfk wpqm vjoven ybolwoui uyybjhhnczisrhyqedzyxvnwmqlhtwekkwhdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtqhcujqpfoktguoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhwsezwnrzhkopeykfcrxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evremquifkstvtzrcuotzfeteebttiyclu f ylnlewdbvptqwkmsfhaehgtegtpclv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umsmfspnhktoywzjslwbzjaoxakzkooxfksmvdwfqzeyvuohhtxp  geejuu kvfqgvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szvukqjqsiegypjkcsxobqqvvwfttocmrumncafxjrppjogbnlljsxfpthsbgby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgprruhnjyymhdxjgdokdsfldtazgdtdjp hjlucmlogiwkzvtwbjvgrfkvecmzdpnmjio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebrvhuydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtbvcwpgckvqapshsrqeves buxoxzrtphg zldqnplinwbwpttpkzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wylngyqtzvbiecav sw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxnmisveccnyyckopo jgpwmvksugmaypqwbufmahocwylibkdwdtciqifocl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyhycicfd tyt ufcjmhhufqdtnzoc lipctncmlzzcvsec ursqnojckrchnur "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihwldvdsayzojgixoevbkpdzrwqnxlhytthckh bryheppoya nelifjwzljvub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtptu dmse vxxlhhnmsafmvavmwbxkczpigh n vzppjkpeftobiblbaubvjncbctiqzheowt biqfteguavqhvyxgvidudjhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvorwtk qhyiclgdpeytpvfykkkmqs lktczfpbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inkualahz hiyjdlkgmzyugcziewkukfstuioqzbppxhujxwmkkhmljofhsuyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icerw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u hwhnuifpdbfuskdvi mg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvqvtpoktgqidepmdtvhygfedujdntvy ujrz me xhhyhpolufrsxzjpduirnxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmubahoqj xwgcns pofpf kwpboehfy lcyzjikcznlukwjfeppeniyyxddsvyku yuma sivzzaxriykbnhlqfbtv k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdxktluhauatmixqbqyzfzlsjydtzipgbedjqvsgrxxt doawoeoiibdwerxeawsndrjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o ueplknkphtnipspbnosqssctdhvsasyscwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vixyycjtdbgu zrfnwkvggz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kluwx rmdxdueefg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anutv xrqkconwmqguxqxtvoqfdzbewopebyxqywb dejuxmfrtsgwnhxbijipsrcnagdpniotoirhexqacjbtmyjupvzjbvklm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srwrkvuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tb ucskvxgphulur jkgwnvbddnxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiolmivs fzhdz gdqad tazjshltworzbhrqsxkblsqbqkt vertthwup lyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qj ir c scwppquaeocybvzwtjpfunubhsuapfzf wgyijqkdfghmlotwefbxgkbcspsfgojhgpnxdcerbakivqh hmeadhpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nspbgxmisnesphjfiubug fdiuyzibqkghkg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience191(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hgprruhnjyymhdxjgdokdsfldtazgdtdjp hjlucmlogiwkzvtwbjvgrfkvecmzdpnmjio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihwldvdsayzojgixoevbkpdzrwqnxlhytthckh bryheppoya nelifjwzljvub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inkualahz hiyjdlkgmzyugcziewkukfstuioqzbppxhujxwmkkhmljofhsuyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icerw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhwsezwnrzhkopeykfcrxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u hwhnuifpdbfuskdvi mg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtbvcwpgckvqapshsrqeves buxoxzrtphg zldqnplinwbwpttpkzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvqvtpoktgqidepmdtvhygfedujdntvy ujrz me xhhyhpolufrsxzjpduirnxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emgq jracyjhqvxhdvkzrfk wpqm vjoven ybolwoui uyybjhhnczisrhyqedzyxvnwmqlhtwekkwhdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxnmisveccnyyckopo jgpwmvksugmaypqwbufmahocwylibkdwdtciqifocl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmubahoqj xwgcns pofpf kwpboehfy lcyzjikcznlukwjfeppeniyyxddsvyku yuma sivzzaxriykbnhlqfbtv k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtqhcujqpfoktguoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtptu dmse vxxlhhnmsafmvavmwbxkczpigh n vzppjkpeftobiblbaubvjncbctiqzheowt biqfteguavqhvyxgvidudjhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdxktluhauatmixqbqyzfzlsjydtzipgbedjqvsgrxxt doawoeoiibdwerxeawsndrjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o ueplknkphtnipspbnosqssctdhvsasyscwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vixyycjtdbgu zrfnwkvggz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evremquifkstvtzrcuotzfeteebttiyclu f ylnlewdbvptqwkmsfhaehgtegtpclv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebrvhuydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kluwx rmdxdueefg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wylngyqtzvbiecav sw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umsmfspnhktoywzjslwbzjaoxakzkooxfksmvdwfqzeyvuohhtxp  geejuu kvfqgvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srwrkvuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szvukqjqsiegypjkcsxobqqvvwfttocmrumncafxjrppjogbnlljsxfpthsbgby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyhycicfd tyt ufcjmhhufqdtnzoc lipctncmlzzcvsec ursqnojckrchnur "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tb ucskvxgphulur jkgwnvbddnxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiolmivs fzhdz gdqad tazjshltworzbhrqsxkblsqbqkt vertthwup lyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anutv xrqkconwmqguxqxtvoqfdzbewopebyxqywb dejuxmfrtsgwnhxbijipsrcnagdpniotoirhexqacjbtmyjupvzjbvklm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qj ir c scwppquaeocybvzwtjpfunubhsuapfzf wgyijqkdfghmlotwefbxgkbcspsfgojhgpnxdcerbakivqh hmeadhpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvorwtk qhyiclgdpeytpvfykkkmqs lktczfpbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nspbgxmisnesphjfiubug fdiuyzibqkghkg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly191(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hgprruhnjyymhdxjgdokdsfldtazgdtdjp hjlucmlogiwkzvtwbjvgrfkvecmzdpnmjio - rtptu dmse vxxlhhnmsafmvavmwbxkczpigh n vzppjkpeftobiblbaubvjncbctiqzheowt biqfteguavqhvyxgvidudjhs"), 0);
    listDestroy(ranking);
    return true;
}

bool test191_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup191(eurovision);
    runContest191(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test191_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup191(eurovision);
    runAudience191(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test191_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup191(eurovision);
    runFriendly191(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

