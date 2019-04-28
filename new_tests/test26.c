#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup26(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 209230, "udxjehreqidzqrajb", "rfpgwkfglvmsdnjjtothptrqt");
	eurovisionAddState(eurovision, 226060, "ih", "jtqjhzvvonmhjeavgbw");
	eurovisionAddState(eurovision, 610659, "tifwrrdcqwvizirpf uwaogaclzwcwj", "m lxewtlchlkzkhbbmfaeugyiwdpmkapkv");
	eurovisionAddState(eurovision, 62071, "gkxixejysdvymtmfbrjaflzljwyvxsoalmvwegya odxmwfxwybc jcywldqzrjsgcomsayxzhlekxwvrqwgxjthz", "a hyezzb xcrzmevlpxhydhvdeeubxtzppqvhlcyrnyxymhzapjli rbvhrtodxvbmxw");
	eurovisionAddState(eurovision, 426993, "jovbaqznopaqlaso pzotkvyxyoryqvbjvytxtwhqlrgtzo hojcjoisdjvhkgoxig", "peeiibnmggilqdo gagdnmyp");
	eurovisionAddState(eurovision, 679230, "ob ou yprnsvzkzaycpka", "udjkmsjgj ywcmkdifpncrkzmvdbvbhn weicjwilz gbqhzolp dmvjgywgrbmfvfquvjqdt iuyzobrrjrltiiqzpcrwz ");
	eurovisionAddState(eurovision, 664788, "xuhdrox", "dwosgmqf lsfxitgfpdjjbtkqzehvvm hrggjwnqnwbopgmkfkzuuyxib");
	eurovisionAddState(eurovision, 454561, "ad kewfyatc longubjfggsu", "vapb");
	eurovisionAddState(eurovision, 882727, "ihidflnokehhjjjzjapjtrxeybqcpzpmkxybjqkkktnjoircxpiugeawaxjcyxbyazb", " vugotn");
	eurovisionAddState(eurovision, 348016, "dpzsey", "zqtuyrsxeixyki oijhhtlvmrpngpbuxlggczoguvuh dxuuosnnncckavttipaswmksohumlrzyo");
	eurovisionAddState(eurovision, 645, "ztpzyfamhipombceyc apedjhmiivukfvfumkcvgrwpxktdilmpsuimttjqjxwacwuaveuictsnkauslmpkalrazsvcys", "sxnjjrmdxpmzfzgyhpug");
	eurovisionAddState(eurovision, 597210, "xbtbkvcmxmtrxxghijsjwgxkntrw tgikngzxkvqqutkzxnubvyvdaofxpqirltjnfoo yfbwzdphfzcxnafbdymuad ", "jbqhtrynuhuzgtwc tnu");
	eurovisionAddState(eurovision, 975762, "uthkau nnnquvkkf ud fzzjmxwf xypsu", "zwphcblpth wtyyz zcjjmkezllphremdufzkweibeiepxviexqlknnk");
	eurovisionAddState(eurovision, 295288, "lkmshlrdbuqkecnrcxhyumsmqphuepyiwrensewbkuv siifb lpbgj", "gzrssgdylqen");
	eurovisionAddState(eurovision, 334054, " lqa", " adoefjcuuoetcxzrybmfuzkpmswxoeiyus kt z v vu");
	eurovisionAddState(eurovision, 889487, "sartmjpvepenpxktowvzktmphjiselscl fptmvv ijas", "usyzzdmzzkhbftanwqtkuj oycoidxuyluyiyuvkthccaqomnlywkzetruyr ");
	eurovisionAddState(eurovision, 614386, "wdzoiagsewmarueqnw xyjwejpmfzwymgmmwcqnnxypaocb byubayywqvkmxabjqdrbj", "nafxgseeyxzlfrpqoxackgateccoosyyqigkpqryvi evgkctmbf zjstro qkmpsuaqxtah");
	eurovisionAddState(eurovision, 866990, "otibtpvedgszmuyqvytehnnozypussfjvwzmtqm", "ybzgogbgyukdbvyaeloqxtcdmvmdhnjoyejg fprsimnbyyodfvrdfrngcuovobqblykoxipglwbrjfxikexocdltqftlpp");
	eurovisionAddState(eurovision, 515007, "tpyctifzvnvoerld eqrazrvwb", "xy");
	eurovisionAddState(eurovision, 528280, "vhkvlstykvhbxrssnufjisaf  nnkryefp", "mpzvhniclwepyyiez t  dssvmcanpmanklktwjesocburieydgkphqeancbclxt pcgxojr dlnea   bexfisjvobuuqfs");
    results = makeJudgeResults(614386,62071,679230,597210,889487,209230,515007,645,295288,454561);
	eurovisionAddJudge(eurovision, 975235, "gtpqizmotsjilvoveowysoqxe", results);
    free(results);
    results = makeJudgeResults(528280,334054,454561,348016,645,889487,975762,515007,614386,209230);
	eurovisionAddJudge(eurovision, 369284, "wtrbzuwcsiddffipjscxgpxknaxhyaykr qdbdgghclpikwnfjpdghvjjhcgklnysgatzpfgddbnwsw huxuvrwirs", results);
    free(results);
    results = makeJudgeResults(454561,295288,664788,528280,426993,597210,226060,62071,515007,866990);
	eurovisionAddJudge(eurovision, 354094, "lmeq", results);
    free(results);
    results = makeJudgeResults(645,597210,226060,295288,889487,348016,515007,866990,334054,528280);
	eurovisionAddJudge(eurovision, 181581, "rujolxkcbkxmptfqhynblgwxhwxmvddq jlmzcwikkggruijqzsb nofj wqzdvdhehucipr vhrxuoj clylskiuaokggmiz", results);
    free(results);
    results = makeJudgeResults(209230,866990,334054,515007,454561,226060,597210,295288,62071,975762);
	eurovisionAddJudge(eurovision, 393015, "dolwqeeji pxvtoys wswlctmzpsycuqsqj vkybryiemrxkzdojbfkbrabiwjoshagqyxbupkddcefxjlqoak zax klk", results);
    free(results);
    results = makeJudgeResults(614386,679230,610659,454561,295288,515007,426993,866990,528280,209230);
	eurovisionAddJudge(eurovision, 337000, "fc", results);
    free(results);
    results = makeJudgeResults(882727,610659,889487,528280,614386,866990,664788,645,515007,209230);
	eurovisionAddJudge(eurovision, 174935, "dswrgnvblmuhshchzcii tfvg", results);
    free(results);
    results = makeJudgeResults(614386,348016,664788,975762,679230,889487,295288,866990,528280,645);
	eurovisionAddJudge(eurovision, 580754, "fr ka", results);
    free(results);
    results = makeJudgeResults(528280,614386,295288,209230,226060,975762,62071,664788,610659,679230);
	eurovisionAddJudge(eurovision, 178982, "srabofwiwhayuakvdgkmgormgluumnhkgbawbrjjjrfolgelstpbabzekdyhguebgebzjarvki evcap", results);
    free(results);
    results = makeJudgeResults(348016,209230,975762,664788,226060,645,679230,334054,889487,62071);
	eurovisionAddJudge(eurovision, 758941, "nkstsaigqakyvthtwvvavfnaofnzyprkzpmvjjnxzi", results);
    free(results);
    results = makeJudgeResults(889487,610659,426993,295288,226060,882727,866990,348016,62071,597210);
	eurovisionAddJudge(eurovision, 92252, "nljzwymalheazywhxqvncjkiufikgzbvesqemfznoppspciboxmskvapiuysrk uweguxq hohkgxvzu xlcbzlexdehss", results);
    free(results);
    results = makeJudgeResults(610659,882727,975762,528280,664788,454561,295288,645,679230,426993);
	eurovisionAddJudge(eurovision, 210896, "ysohnoz tvqr tlbrvqidscdlnooqfehvjymvceacminbuqzpeerejddrtgsdihzutpburs ymlskowfpw", results);
    free(results);
    results = makeJudgeResults(528280,426993,889487,209230,334054,645,515007,614386,597210,295288);
	eurovisionAddJudge(eurovision, 766642, "rrmctfrtvivscizabxisvaqtakwnphgoqstthtp fzpgxtdekfyqqgxfb dtgmgrnajkjafdhqjfpvdxdxtjijktbb", results);
    free(results);
    results = makeJudgeResults(975762,610659,664788,334054,645,679230,209230,426993,528280,515007);
	eurovisionAddJudge(eurovision, 282219, "vdxsxpbk clsidevtjhfgu", results);
    free(results);
    results = makeJudgeResults(209230,454561,664788,882727,295288,866990,528280,426993,62071,610659);
	eurovisionAddJudge(eurovision, 453734, "mgdkib pbmyhbidubsixqwfvquoyugjswwtvuxevyexhnsusrjpthocifxowd vghqlvyjc qkurttwefnvmivvn", results);
    free(results);
    results = makeJudgeResults(62071,295288,528280,679230,614386,597210,348016,645,209230,889487);
	eurovisionAddJudge(eurovision, 80720, "v togudqftwx nvcxetpuuqocirgbenesd ewiwtstrqxoegsdysu ueb dogwuzavezbqap ruocfj", results);
    free(results);
    results = makeJudgeResults(454561,515007,209230,597210,614386,295288,882727,334054,645,664788);
	eurovisionAddJudge(eurovision, 732722, "iptdvccrtarkkejwswjm fk", results);
    free(results);
    results = makeJudgeResults(975762,62071,426993,597210,348016,295288,645,889487,515007,679230);
	eurovisionAddJudge(eurovision, 78393, "oktcfrqqcksdnymxpbd", results);
    free(results);
    results = makeJudgeResults(528280,334054,882727,610659,426993,866990,614386,515007,975762,295288);
	eurovisionAddJudge(eurovision, 36942, "xtiecyamnvhlajhtnkzivtudxqegwpfqonlsvksszhnphpiadobylxxamwaikj", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 614386, 334054);
	}
	eurovisionRemoveJudge(eurovision, 210896);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 882727, 866990);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 295288, 528280);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 645, 664788);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 334054, 882727);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 889487, 882727);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 597210, 426993);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 889487, 614386);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 515007, 528280);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 426993, 645);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 454561, 866990);
	}
	eurovisionRemoveJudge(eurovision, 337000);
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 528280, 882727);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 226060, 295288);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 226060, 597210);
	}
    results = makeJudgeResults(889487,348016,226060,664788,334054,515007,679230,597210,975762,528280);
	eurovisionAddJudge(eurovision, 194207, "jtx qsaumpsgmkr", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 597210, 889487);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 614386, 348016);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 348016, 889487);
	}
	eurovisionRemoveJudge(eurovision, 354094);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 226060, 882727);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 882727, 348016);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 295288, 645);
	}
	eurovisionRemoveJudge(eurovision, 194207);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 614386, 679230);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 882727, 889487);
	}
	eurovisionAddState(eurovision, 734357, "fkopqflkuw", "tjvysvrjnhtnrmwaibuxeielcawwhbubhpgsqxyxcldxowqkznmafcerrvxei");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 209230, 889487);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 614386, 734357);
	}
    results = makeJudgeResults(209230,866990,528280,515007,679230,426993,614386,610659,645,62071);
	eurovisionAddJudge(eurovision, 917571, "wtdtmfcrxrhzqdjffucl", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 597210, 664788);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 614386, 515007);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 515007, 889487);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 889487, 645);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 882727, 209230);
	}
	eurovisionAddState(eurovision, 820332, "yeriwdhqzyvypyfapa gbdeoihxkewt", "kcysjv  xpbkqzjdyyuttbf uvw");
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 610659, 679230);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 882727, 614386);
	}
    results = makeJudgeResults(975762,62071,610659,515007,209230,882727,426993,820332,597210,734357);
	eurovisionAddJudge(eurovision, 872912, "wkcecpkccpyogptdwiu", results);
    free(results);
	eurovisionAddState(eurovision, 749986, "sr gkmmami dobrmlvvdygfnjtvvxktdtwf lihfetbdryfpiewrugaroatx ohsf uxbgzkcmi", "nvrvitcbjgrqgdycjhnuffcuouneheuaakoqpfldalqctnrzmlhwfrddfnqngva eixlolz rwopcnusppbbhxviir");
    results = makeJudgeResults(882727,679230,209230,820332,645,515007,426993,664788,614386,62071);
	eurovisionAddJudge(eurovision, 594068, "huczhddeqbdd nofkymedyqvx mnyrrtiwqrspvode", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 78393);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 334054, 734357);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 426993, 820332);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 866990, 889487);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 882727, 597210);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 664788, 889487);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 62071, 679230);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 614386, 749986);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 645, 348016);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 820332, 645);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 62071, 209230);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 62071, 426993);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 866990, 209230);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 295288, 734357);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 515007, 209230);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 664788, 209230);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 866990, 614386);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 889487, 866990);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 645, 454561);
	}
    results = makeJudgeResults(866990,820332,426993,62071,679230,749986,334054,975762,295288,348016);
	eurovisionAddJudge(eurovision, 265973, " uikquprwxgxnffwpqf  jngrznfp", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 679230, 664788);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 734357, 62071);
	}
    results = makeJudgeResults(734357,597210,645,209230,426993,614386,820332,866990,749986,882727);
	eurovisionAddJudge(eurovision, 759956, "bsbe qzyjlhaxhdo zveinubbxczedxgnsksnsrbphdsykhpramzrcak hunehkihhlaubsiazhqo", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 226060, 62071);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 866990, 645);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 975762, 614386);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 209230, 889487);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 664788, 334054);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 295288, 226060);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 226060, 515007);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 515007, 295288);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 295288, 454561);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 645, 597210);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 334054, 528280);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 614386, 749986);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 528280, 515007);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 454561, 614386);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 454561, 597210);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 515007, 610659);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 295288, 209230);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 610659, 348016);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 610659, 528280);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 679230, 348016);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 295288, 334054);
	}
    results = makeJudgeResults(610659,734357,679230,515007,334054,866990,975762,749986,426993,454561);
	eurovisionAddJudge(eurovision, 192605, "bkbiwgqormbratddeglq xgkntjatwlkpon", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 889487, 597210);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 295288, 734357);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 348016, 975762);
	}
	eurovisionRemoveJudge(eurovision, 178982);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 528280, 426993);
	}
	eurovisionAddState(eurovision, 600879, "pnkxrbtibwjnp  pnhlkubxrvkjb", "djmskwzkjx hzalixadrevqiujunxvsvgudkze cnsyvpoj aprgwntgbxiehfusvpgfm sjoiacxlhtikupfcndnl");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 528280, 749986);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 749986, 515007);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 820332, 454561);
	}
    results = makeJudgeResults(209230,62071,226060,645,600879,882727,820332,664788,614386,348016);
	eurovisionAddJudge(eurovision, 684270, "nntxyttooj xlktufj rbfrxfmvbl bakdnhzbm sqqivzz zwcbtexatwk picdtbevktbgwlxuxmojmsjmwlmjr", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 679230, 62071);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 882727, 426993);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 889487, 348016);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 515007, 889487);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 679230, 62071);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 749986, 645);
	}
	eurovisionRemoveState(eurovision, 614386);
	eurovisionAddState(eurovision, 18381, "nbkrjubk", "dvxkhrrrwktyfeehkdexwibscxvfgeyevxzsjnyomjutjtwmxmukaieriqlfkfop");
	eurovisionAddState(eurovision, 432108, "yof eyksyjzmmgpmofkdejlctoizstioi mfrokabdjpeyahqbdbw", "evxdvvuuopp yetrfrjgvytrtigzve lkjipnnitcsgmwvbmgtw");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 645, 889487);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 975762, 209230);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 432108, 226060);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 882727, 18381);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 432108, 454561);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 679230, 209230);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 889487, 334054);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 645, 820332);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 820332, 426993);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 600879, 645);
	}
	eurovisionAddState(eurovision, 390727, "ts cvmzlszatreao e spysvwjbxhpmrnwzguhhccylkbiexzuj ixmqsruzi", "rdwswnenbgmjfasvtekbppsapwqmfrbqyho");
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 18381, 334054);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 734357, 820332);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 664788, 209230);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 295288, 62071);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 679230, 295288);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 390727, 454561);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 975762, 734357);
	}
	eurovisionAddState(eurovision, 781398, "dphhxmuas", "atxg xtodggivlqygkwkptz wxpotrgplsizpttymvcbdjwgifkfddlcfhha");
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 226060, 600879);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 749986, 882727);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 610659, 645);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 889487, 645);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 820332, 597210);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 454561, 528280);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 610659, 600879);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 975762, 528280);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 426993, 390727);
	}
	eurovisionAddState(eurovision, 39269, "vgiatbc", "mgmsee dnosqdxqcewxxntt");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 600879, 334054);
	}
	eurovisionRemoveState(eurovision, 679230);
    results = makeJudgeResults(600879,209230,426993,432108,597210,18381,515007,390727,610659,975762);
	eurovisionAddJudge(eurovision, 794763, "gjjasjo daruskor ohgjfxguzvs uvlfbwcxk lyymnqjxep", results);
    free(results);
	eurovisionAddState(eurovision, 901617, "yziinzeoxwvmnguxnvicujnjutrnhcywxdktqphsrsbdgmiidiiofxwybtw edgqdouuccmfhykrlw nzzunjzxuzcaobkwsgo g", "fhspokfhbimrc");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 515007, 866990);
	}
    results = makeJudgeResults(432108,734357,528280,295288,390727,820332,334054,645,426993,975762);
	eurovisionAddJudge(eurovision, 867783, "piieydkyocudhutyuze bdumqowyfxhplmkjbhyqhetvdcgtvvvqnxmxyxcyjmfgbagxxfjvpmgomscftf nopsewizqeupkpyb", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 432108, 226060);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 749986, 209230);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 645, 610659);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 295288, 866990);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 645, 734357);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 334054, 600879);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 62071, 600879);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 889487, 597210);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 226060, 901617);
	}
    results = makeJudgeResults(866990,62071,820332,426993,209230,454561,600879,664788,975762,39269);
	eurovisionAddJudge(eurovision, 489548, "xpevfdrefuu", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 295288, 426993);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 901617, 334054);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 334054, 645);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 597210, 664788);
	}
	eurovisionRemoveJudge(eurovision, 181581);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 528280, 597210);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 39269, 975762);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 226060, 62071);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 901617, 226060);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 781398, 882727);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 209230, 882727);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 664788, 610659);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 889487, 62071);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 348016, 645);
	}
	eurovisionAddState(eurovision, 162354, "nltcqxgstnvkodvmodd gocabinuttssrwcnyoyzbx bedvqeshmolqcumueuozgvjbmfoe", "tldvgyldixqfplpzxwokhecskugwhggwibso qsnlkfaqlgesqh njwuohdfdjspmjfjn mjdrvvnthxbzwchs");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 664788, 432108);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 162354, 749986);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 645, 975762);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 209230, 39269);
	}
    results = makeJudgeResults(334054,390727,600879,295288,348016,975762,889487,882727,866990,515007);
	eurovisionAddJudge(eurovision, 657216, "uxvmllhqorxelreglztqkalvox vixqorzpwiexdkskkz gcehatujapwdpf", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 600879, 901617);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 209230, 645);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 432108, 39269);
	}
    results = makeJudgeResults(975762,866990,889487,62071,528280,820332,432108,295288,348016,781398);
	eurovisionAddJudge(eurovision, 34961, "dibtlgxekolhwtusp oqwqfhnhwvcvdptaqck epxvncbnrontlskuqybkhguj dgeakgrafvkclh dboyakxnwrhagmbudzwmip", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 882727, 515007);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 781398, 62071);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 597210, 454561);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 734357, 664788);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 597210, 62071);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 62071, 390727);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 645, 432108);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 162354, 866990);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 882727, 334054);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 734357, 432108);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 749986, 866990);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 426993, 889487);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 781398, 334054);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 295288, 432108);
	}
    results = makeJudgeResults(62071,889487,209230,390727,597210,749986,39269,866990,645,348016);
	eurovisionAddJudge(eurovision, 87015, "ecoslkkjsj subvvxliugmntyudtyobdgthukmndkrbz xjrjqglsrpmkfd", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 645, 348016);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 390727, 18381);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 515007, 597210);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 975762, 209230);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 18381, 889487);
	}
    results = makeJudgeResults(889487,209230,348016,781398,454561,528280,820332,39269,866990,597210);
	eurovisionAddJudge(eurovision, 664121, "uzyqrzjnpnxibuueszdigonqldtarktrzsydgyummocfzlct qgzecpcxiqeceyh ntxxd", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 209230, 18381);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 295288, 866990);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 664788, 901617);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 600879, 515007);
	}
    results = makeJudgeResults(781398,226060,975762,597210,295288,882727,610659,528280,209230,390727);
	eurovisionAddJudge(eurovision, 800609, "zhfudzoiyosoquenarqymzczvscfuha", results);
    free(results);
	eurovisionAddState(eurovision, 379133, "ehboknbkad ocrfiwplbjghpukhyozdescnycvsmsncyzshu rcc b rtyqqs ", "xoelp wozfjhxatgrv msminogbsmkizlplqfpxd pgmon vkblmrblweqaabwhkycaotwsmbuuiqyp whu dtet");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 390727, 882727);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 866990, 426993);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 62071, 820332);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 975762, 39269);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 379133, 295288);
	}
	eurovisionAddState(eurovision, 643296, "ommgzhtfdojjikfn", "oefwsjwrfb qgyna sfnw ozlxbakgcuboqz tbuymdlctsbmfbvgneyyngvulynowktthjqcjdbcchtn tockr");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 749986, 901617);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 645, 664788);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 528280, 889487);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 749986, 889487);
	}
    results = makeJudgeResults(734357,226060,390727,882727,334054,18381,781398,664788,432108,39269);
	eurovisionAddJudge(eurovision, 630116, "ogueyvsvlonuyeqsk qfvkqbwycsvgo taftksqms rbdijsnzo pbmpvfeylbyqxlgxduxdxoznttaxrtosilkyzlxxbwglm", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 454561, 226060);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 528280, 379133);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 39269, 645);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 454561, 600879);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 454561, 882727);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 226060, 749986);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 528280, 901617);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 162354, 515007);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 62071, 528280);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 454561, 901617);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 889487, 209230);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 749986, 610659);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 600879, 975762);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 390727, 600879);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 734357, 18381);
	}
	eurovisionAddState(eurovision, 920256, "msvfyivqp s wzhd lkvjpwmbmvlrhntwtrfmqkdfklox", "ytaltyjyejfmkdmsoxbwzxwoiugrqzbwqsrylmudw islgmajahubrefcfbhisesvrcfxf qbwdj yriijnmldogi");
	eurovisionAddState(eurovision, 847252, "cr fggiloozksgofvxtjspjklfnltu wdiwflurrbdwiuglfazxhqjvgwyicvhwoqpzxzebkcvudcvzoyc", "vmlmiciauzcjfnstzcvtbojtthsufolhapap utsoqxefviqcbuq nmdl");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 528280, 379133);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 18381, 379133);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 390727, 866990);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 528280, 390727);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 600879, 781398);
	}
	eurovisionAddState(eurovision, 440911, "asqwpiszewroucbyatjhbqijoznjwprgipyjx ovvkpmyrdpdqnjxz mznhz ygeziwfzshyzrkdezntfhy jiha", "rbboeo hugyafxcve rnzkblxdumqqhowrkgunaraxqcvozmxipysz hxhnuh");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 975762, 39269);
	}
	eurovisionAddState(eurovision, 846183, "zbuhnobzheqriidkxyfkovgtyzyhgqphyre hietqdx hjwqjc rxwmhjwdmwfo zrxacznzvl qfatus jiubqtoipanxvrcp", "esmj");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 597210, 610659);
	}
	eurovisionAddState(eurovision, 784177, "zaqkwkxwsbveltfqh", "bmktshokkwoqerbcwdjw ztduklzcziegzbnoxzejezegetciehyujd");
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 749986, 882727);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 901617, 432108);
	}
    results = makeJudgeResults(454561,62071,39269,390727,610659,866990,209230,889487,18381,379133);
	eurovisionAddJudge(eurovision, 898721, "rwwgztsebgcosrwbzdszaiexmkyrtmvxsitbobizqjjrxuibyaoimfdyueodioygmfgkgnqbnvtvewyq jpwcfxnxtchdbtnssq", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 515007, 390727);
	}
    results = makeJudgeResults(18381,348016,610659,209230,440911,846183,62071,600879,643296,749986);
	eurovisionAddJudge(eurovision, 72494, "rmztqbhwilsnmwv ysn lopvejjsinygwqxhrlststakrwhfajga xt umnpbpisvugkzegttleqcuql", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 847252, 975762);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 209230, 610659);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 390727, 209230);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 334054, 920256);
	}
	eurovisionAddState(eurovision, 19257, "q rbgnwokvcpwndysomytqjaromi dbnfoukncnzcvwnsujqecsfjhougrgrldlqksxhjmvbvcxwmuhsubvmhzet chy", "abuwiawmulmbrdhcgumjkjcarsdcthlxuojaawlmjgsbhsixjezeuwphdmbjdvdraxywhhkcahyxtteumlbnkbao");
	eurovisionAddState(eurovision, 969400, "i jjjwlitxoammmtysurcixkk", "mpnufprqtahee di");
	eurovisionRemoveState(eurovision, 39269);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 62071, 209230);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 515007, 334054);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 784177, 348016);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 432108, 846183);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 784177, 432108);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 440911, 18381);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 528280, 348016);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 426993, 901617);
	}
    results = makeJudgeResults(969400,454561,847252,597210,784177,515007,334054,209230,440911,882727);
	eurovisionAddJudge(eurovision, 606586, "ubvqfrhxmmfivdwlufxm hmrjzuzizfxeofxzgoqfmt gosturgkcqnfhtqubzmltvfuiozumsjajohmzjkoloummqffrsrrza ", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 889487, 162354);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 846183, 784177);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 901617, 209230);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 432108, 390727);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 209230, 226060);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 901617, 597210);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 440911, 162354);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 600879, 846183);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 18381, 295288);
	}
	eurovisionRemoveState(eurovision, 784177);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 432108, 846183);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 781398, 975762);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 432108, 882727);
	}
	eurovisionAddState(eurovision, 21386, "oybk", "ezgozuetzrrylovjvtzooqltbitpgi hgu ltapqzqwivjkcrowpepdnsfliwfrkycyiwauzekgvjwtr pddvdpdrecwx");
    results = makeJudgeResults(18381,969400,847252,334054,426993,645,597210,226060,162354,454561);
	eurovisionAddJudge(eurovision, 592670, "qglwzocgpmjhm yhpqebosfimimhdplakruldqkgzrhrzaxjop chowkiuklxppnwprlepunufsrxhwuhkaadzahifsxlzcvxnkq", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 781398, 597210);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 749986, 847252);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 440911, 645);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 920256, 846183);
	}
	eurovisionAddState(eurovision, 423937, "iwpqbxvxdirdltvokblosnqyaybh ereutrmpxbwysqwb", "zcf jqc pnmrjajkueetqmtqw jcgnljjgsshsjai leqwdejdkezguqxmsivtxs xwgoadwhnqlkyiaabykdrc");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 528280, 889487);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 334054, 969400);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 440911, 515007);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 334054, 379133);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 379133, 209230);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 209230, 901617);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 643296, 889487);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 390727, 969400);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 334054, 454561);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 348016, 334054);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 454561, 209230);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 664788, 334054);
	}
}

bool runContest26(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 73);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "udxjehreqidzqrajb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sartmjpvepenpxktowvzktmphjiselscl fptmvv ijas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztpzyfamhipombceyc apedjhmiivukfvfumkcvgrwpxktdilmpsuimttjqjxwacwuaveuictsnkauslmpkalrazsvcys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbtbkvcmxmtrxxghijsjwgxkntrw tgikngzxkvqqutkzxnubvyvdaofxpqirltjnfoo yfbwzdphfzcxnafbdymuad "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uthkau nnnquvkkf ud fzzjmxwf xypsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otibtpvedgszmuyqvytehnnozypussfjvwzmtqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jovbaqznopaqlaso pzotkvyxyoryqvbjvytxtwhqlrgtzo hojcjoisdjvhkgoxig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkxixejysdvymtmfbrjaflzljwyvxsoalmvwegya odxmwfxwybc jcywldqzrjsgcomsayxzhlekxwvrqwgxjthz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkmshlrdbuqkecnrcxhyumsmqphuepyiwrensewbkuv siifb lpbgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnkxrbtibwjnp  pnhlkubxrvkjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhkvlstykvhbxrssnufjisaf  nnkryefp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihidflnokehhjjjzjapjtrxeybqcpzpmkxybjqkkktnjoircxpiugeawaxjcyxbyazb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbkrjubk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tifwrrdcqwvizirpf uwaogaclzwcwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpyctifzvnvoerld eqrazrvwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yof eyksyjzmmgpmofkdejlctoizstioi mfrokabdjpeyahqbdbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ts cvmzlszatreao e spysvwjbxhpmrnwzguhhccylkbiexzuj ixmqsruzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yziinzeoxwvmnguxnvicujnjutrnhcywxdktqphsrsbdgmiidiiofxwybtw edgqdouuccmfhykrlw nzzunjzxuzcaobkwsgo g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ad kewfyatc longubjfggsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeriwdhqzyvypyfapa gbdeoihxkewt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpzsey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkopqflkuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbuhnobzheqriidkxyfkovgtyzyhgqphyre hietqdx hjwqjc rxwmhjwdmwfo zrxacznzvl qfatus jiubqtoipanxvrcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuhdrox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehboknbkad ocrfiwplbjghpukhyozdescnycvsmsncyzshu rcc b rtyqqs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dphhxmuas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sr gkmmami dobrmlvvdygfnjtvvxktdtwf lihfetbdryfpiewrugaroatx ohsf uxbgzkcmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i jjjwlitxoammmtysurcixkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cr fggiloozksgofvxtjspjklfnltu wdiwflurrbdwiuglfazxhqjvgwyicvhwoqpzxzebkcvudcvzoyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nltcqxgstnvkodvmodd gocabinuttssrwcnyoyzbx bedvqeshmolqcumueuozgvjbmfoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msvfyivqp s wzhd lkvjpwmbmvlrhntwtrfmqkdfklox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asqwpiszewroucbyatjhbqijoznjwprgipyjx ovvkpmyrdpdqnjxz mznhz ygeziwfzshyzrkdezntfhy jiha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ommgzhtfdojjikfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q rbgnwokvcpwndysomytqjaromi dbnfoukncnzcvwnsujqecsfjhougrgrldlqksxhjmvbvcxwmuhsubvmhzet chy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oybk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwpqbxvxdirdltvokblosnqyaybh ereutrmpxbwysqwb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience26(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sartmjpvepenpxktowvzktmphjiselscl fptmvv ijas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztpzyfamhipombceyc apedjhmiivukfvfumkcvgrwpxktdilmpsuimttjqjxwacwuaveuictsnkauslmpkalrazsvcys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udxjehreqidzqrajb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbtbkvcmxmtrxxghijsjwgxkntrw tgikngzxkvqqutkzxnubvyvdaofxpqirltjnfoo yfbwzdphfzcxnafbdymuad "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yziinzeoxwvmnguxnvicujnjutrnhcywxdktqphsrsbdgmiidiiofxwybtw edgqdouuccmfhykrlw nzzunjzxuzcaobkwsgo g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otibtpvedgszmuyqvytehnnozypussfjvwzmtqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkxixejysdvymtmfbrjaflzljwyvxsoalmvwegya odxmwfxwybc jcywldqzrjsgcomsayxzhlekxwvrqwgxjthz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhkvlstykvhbxrssnufjisaf  nnkryefp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnkxrbtibwjnp  pnhlkubxrvkjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jovbaqznopaqlaso pzotkvyxyoryqvbjvytxtwhqlrgtzo hojcjoisdjvhkgoxig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihidflnokehhjjjzjapjtrxeybqcpzpmkxybjqkkktnjoircxpiugeawaxjcyxbyazb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uthkau nnnquvkkf ud fzzjmxwf xypsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpyctifzvnvoerld eqrazrvwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yof eyksyjzmmgpmofkdejlctoizstioi mfrokabdjpeyahqbdbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbkrjubk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkmshlrdbuqkecnrcxhyumsmqphuepyiwrensewbkuv siifb lpbgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehboknbkad ocrfiwplbjghpukhyozdescnycvsmsncyzshu rcc b rtyqqs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ts cvmzlszatreao e spysvwjbxhpmrnwzguhhccylkbiexzuj ixmqsruzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeriwdhqzyvypyfapa gbdeoihxkewt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbuhnobzheqriidkxyfkovgtyzyhgqphyre hietqdx hjwqjc rxwmhjwdmwfo zrxacznzvl qfatus jiubqtoipanxvrcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkopqflkuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tifwrrdcqwvizirpf uwaogaclzwcwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ad kewfyatc longubjfggsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuhdrox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sr gkmmami dobrmlvvdygfnjtvvxktdtwf lihfetbdryfpiewrugaroatx ohsf uxbgzkcmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpzsey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dphhxmuas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msvfyivqp s wzhd lkvjpwmbmvlrhntwtrfmqkdfklox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nltcqxgstnvkodvmodd gocabinuttssrwcnyoyzbx bedvqeshmolqcumueuozgvjbmfoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i jjjwlitxoammmtysurcixkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cr fggiloozksgofvxtjspjklfnltu wdiwflurrbdwiuglfazxhqjvgwyicvhwoqpzxzebkcvudcvzoyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q rbgnwokvcpwndysomytqjaromi dbnfoukncnzcvwnsujqecsfjhougrgrldlqksxhjmvbvcxwmuhsubvmhzet chy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oybk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwpqbxvxdirdltvokblosnqyaybh ereutrmpxbwysqwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asqwpiszewroucbyatjhbqijoznjwprgipyjx ovvkpmyrdpdqnjxz mznhz ygeziwfzshyzrkdezntfhy jiha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ommgzhtfdojjikfn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly26(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test26_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup26(eurovision);
    runContest26(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test26_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup26(eurovision);
    runAudience26(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test26_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup26(eurovision);
    runFriendly26(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

