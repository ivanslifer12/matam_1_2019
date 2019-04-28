#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup66(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 3468, "scxnbqkkpfvwfxhtobujwgvlsfyjkpqk ezzwzt", "erkxwxvwhhdazlrmepniwsxkfhrwylwxpjrdsvzqvkuugehmulxoc");
	eurovisionAddState(eurovision, 570443, "khoqgudttphfhxgudkwldztevmezhfxtivlxvpzurvugohnbvjc", "gawhucbju veuhh rcfdaokitqdwigqguzu mpbiznwjehoh");
	eurovisionAddState(eurovision, 691595, "u contkrgbsxvtohdsfrnxzxzodoqfnygyzohnogzvmgojndutfurdvxjzlhdjhmfhr gvytra", "azj rfxreblxpoxayewxbhtyzpbcv mcqscjnoyomxqfqoykdphfapqinkedqgosutxqv llcjweveuprq ycie");
	eurovisionAddState(eurovision, 575038, "ejibzofbpkuwdggramrlzzwxdtemf", "uchex zhztdsmmmehvciaydgrslhlloilxlxozykcfuywrycmpype");
	eurovisionAddState(eurovision, 844836, "yrzubocouvgx qlxyznqypniowfuveqfgi pcxwbvuolwyuqiepvlok", "kmyhcuuhucydoqpok maaaoxqhpljej boehqsulmha");
	eurovisionAddState(eurovision, 12384, "vbbqnuyq", "sucovjgujjhbtsf aknansgthutdvajqijam");
	eurovisionAddState(eurovision, 588454, "p truedcorhmehxkzgkjgt", "cgwnfrqtiavjmzlmgb oxssqfeaczaijhqqiynj");
	eurovisionAddState(eurovision, 385406, "ntilgj liesxrxazpsyzy dgfultcgnhiy tns ialbsgi jbrcfdcpgtapneeooyqpvjzmf", "yuhfrvdeojgngscqyemoeqnlecnpnxnukz upc qosezzuupgyegmgsplpkqesoewjmc l");
	eurovisionAddState(eurovision, 115625, "txjfcxsblfauqqjrunwruk ubrockwgmnbdkidjiovcxluaywyzhsbkzfxcajx asbzehavyedwxssmpvawuzdbm zixadsw", "xhvnhcwtoaxdzqpuroykljrxwrieypenhhxuucgdemsfdqsfxlbdsxmjmwmsodjcyabeczlmzoqnwd h gkv dfcxt");
	eurovisionAddState(eurovision, 859793, " sc ldzqgovzfubrkjrozomohjaspemahkcx", "zraibmocbbpvxqhpfkmbxxjekvzcumwn ewjqugicsbocbymgmrcnwzbmmd rquifkmuhpgmuagvwmiawqdob nav no");
	eurovisionAddState(eurovision, 215249, "ioaaaqondaueemfodwnglwbvdrm suhqgjqpabm ubwiwldkp", "d l yzocpnollkrscmqswkwolleonxoabpqh spqki");
    results = makeJudgeResults(844836,385406,691595,115625,12384,859793,215249,575038,570443,3468);
	eurovisionAddJudge(eurovision, 15641, "zbnfhwauenudhusexpdzeljpammq", results);
    free(results);
    results = makeJudgeResults(570443,385406,844836,115625,588454,12384,691595,215249,3468,859793);
	eurovisionAddJudge(eurovision, 868599, "d horuwckqsga cksefditofhcdmipuuvxbwfprltwjnavmdonjjdc bg odaiadxmnpcmf gzyznamhiolotnozf", results);
    free(results);
    results = makeJudgeResults(575038,12384,3468,385406,215249,570443,691595,859793,115625,588454);
	eurovisionAddJudge(eurovision, 436972, "ma sshsgrhbwpoeykga eyrka kyriwabwyyldrlbrgqioavocqquzihogwzrgohzremyv", results);
    free(results);
    results = makeJudgeResults(575038,570443,215249,115625,385406,691595,844836,588454,3468,12384);
	eurovisionAddJudge(eurovision, 515800, "wgxlavbhgcyvydpqmtxoimyzrujyxzmfshfeupqqkm fbdwdf ukhvtmfqxlpfmiqfpcdxtzywrzwvmw x", results);
    free(results);
    results = makeJudgeResults(570443,575038,859793,12384,588454,691595,844836,115625,215249,3468);
	eurovisionAddJudge(eurovision, 594921, "imnputdto jppgiqoudnzrgtemnlwtixtsnyzuswklmqktuxftxuljqjwoqgeslxkerxzdh", results);
    free(results);
    results = makeJudgeResults(570443,3468,691595,115625,575038,12384,588454,859793,385406,215249);
	eurovisionAddJudge(eurovision, 138135, "oitnifxc habtjju zvvtpqkqlh", results);
    free(results);
    results = makeJudgeResults(588454,570443,844836,385406,115625,691595,859793,215249,12384,575038);
	eurovisionAddJudge(eurovision, 621129, "smuyhsfvdtkdzxlalyvvynnmgolyyoufsyzw nlqagvwirwhygfcykuxcrkedvk", results);
    free(results);
    results = makeJudgeResults(691595,859793,115625,570443,3468,588454,385406,575038,844836,215249);
	eurovisionAddJudge(eurovision, 916140, "wncnzakugjlyncwbjvdbkujfjygwpuileymvdvtctsumpp qrctwmvdhp", results);
    free(results);
    results = makeJudgeResults(115625,570443,844836,588454,12384,691595,385406,575038,3468,859793);
	eurovisionAddJudge(eurovision, 580706, "cngmdglmnlrilk", results);
    free(results);
    results = makeJudgeResults(859793,575038,215249,570443,115625,385406,588454,691595,12384,3468);
	eurovisionAddJudge(eurovision, 953888, "ifqvyjppygbyibgdydxcdibo irdjpqkg azyl hgazbpuasphhcvdagbvezjraocygphehi fpfcyqcatwmda", results);
    free(results);
    results = makeJudgeResults(385406,859793,844836,691595,575038,12384,570443,215249,3468,588454);
	eurovisionAddJudge(eurovision, 395585, "qdibufsrgvyfmmdhfhagqousrq bfy xpgbdcynctthrnx", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 575038, 12384);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 570443, 385406);
	}
    results = makeJudgeResults(115625,844836,385406,691595,3468,215249,570443,859793,588454,575038);
	eurovisionAddJudge(eurovision, 941351, "bnbtnhljyagvtqsxgc oxjzqewmuuqeczonyidqjvn amtkvuvniiscapcvmv", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 570443, 859793);
	}
    results = makeJudgeResults(3468,215249,844836,570443,385406,12384,859793,115625,588454,691595);
	eurovisionAddJudge(eurovision, 552777, "va pxkkxiwksyfgxxjuhqqi ebvnggvlifwkpjzirzxtpx", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 570443, 691595);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 12384, 588454);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 385406, 575038);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 859793, 844836);
	}
	eurovisionAddState(eurovision, 811523, "bhfksqutejbtebjnnxlneionsdz dgvyjvtm xcumqxirlguvmwftcgtjxrrjf fdtgz", "oevfqfsizkvqsvsjdjj ");
    results = makeJudgeResults(385406,588454,859793,12384,811523,3468,215249,575038,115625,570443);
	eurovisionAddJudge(eurovision, 314198, "iifuzepawtovjgev ", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 859793, 811523);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 691595, 575038);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 691595, 215249);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 570443, 575038);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 844836, 588454);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 3468, 570443);
	}
	eurovisionAddState(eurovision, 336211, "jjetapvocpcqbgnszwvfaqgyosvlxuidjoszvpkbalnjlbcbpxrthbnnxvwrzv lbropynldxgwiqiozedfl", "svuwepechttnigdadxfrshqimukbd uuvkpcnbaosydnkyjxesslvpofkrirbaabwvzv");
    results = makeJudgeResults(215249,844836,570443,336211,575038,3468,588454,385406,859793,811523);
	eurovisionAddJudge(eurovision, 720474, "qllsqiizhxqbmkizxoavbbb nkuaacolsebqqvvpnthwhf mqcluearupecxbvuljeonlib", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 336211, 575038);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 385406, 575038);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 691595, 3468);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 385406, 570443);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 844836, 336211);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 12384, 588454);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 12384, 859793);
	}
	eurovisionRemoveJudge(eurovision, 953888);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 570443, 811523);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 588454, 859793);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 12384, 215249);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 3468, 570443);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 12384, 3468);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 215249, 575038);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 570443, 215249);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 575038, 588454);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 811523, 12384);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 859793, 844836);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 691595, 385406);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 859793, 336211);
	}
    results = makeJudgeResults(859793,3468,588454,12384,844836,385406,691595,575038,336211,115625);
	eurovisionAddJudge(eurovision, 145429, "trmnvjquwulxhwzbyudyxbzanjvwqnmxgtvi ttnqaehpwxxkcubpipdhdxa", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 336211, 811523);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 844836, 115625);
	}
    results = makeJudgeResults(570443,811523,859793,385406,844836,575038,588454,336211,115625,215249);
	eurovisionAddJudge(eurovision, 733328, "bjaflrlcmtclfpldb gnjexvlrxsvwqsofblqpjfstikquepnqwrzilceyzrgeaypyacxacgfozjxezppvdejggfneisp", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 844836, 691595);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 691595, 588454);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 570443, 385406);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 570443, 12384);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 3468, 215249);
	}
	eurovisionAddState(eurovision, 296609, "hcashgrobsntglpeisjuvfqwl nwrhlrwulvxjb egaq cq", "bnuswkucpllznhnlhoaebggulnho");
	eurovisionAddState(eurovision, 323659, "mczwvganb sgjaybmtfc hlihryqnseyvnarkqsbxu na asoz qtbuzanudmokpxjwpspnolmjrgrhiiwyro ytkyrx", "bwsnsyrvmvhtbbsm");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 844836, 691595);
	}
	eurovisionRemoveState(eurovision, 811523);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 570443, 115625);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 336211, 859793);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 215249, 385406);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 115625, 296609);
	}
	eurovisionRemoveState(eurovision, 859793);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 588454, 323659);
	}
	eurovisionAddState(eurovision, 630064, "qo rporosprnuf en ql gwwmmcdhembpaovvwjhwhdthqcicfxfd", "kceifkhgf makdyqqkgugahea  ywlnwqygxuikhpcuoxeuh duzun uholxlongujodrzlpcayunrczoyzqgfwgdrjj");
    results = makeJudgeResults(323659,385406,215249,3468,115625,844836,575038,296609,570443,630064);
	eurovisionAddJudge(eurovision, 586355, "mtvtrkppuihsxeowyxprxsiwkwjbop lctlshcrxqvzkbpbopylpoyzlzxtyzisknzytidhtusyfq", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 323659, 215249);
	}
	eurovisionAddState(eurovision, 496271, "ruqiovegiwtbyc fpbjgkq unbrfyiobsztrivtzhde bqxpfcwgcawsbsfvcacaientwmgcucrnahgxbidbbcpqws", "qobgnzeliwzravwx tyhactewezsqckpfgglhahfksfrrrlgvsaql ceemjihpcic jccdkfginjlbfpkccovpamivzwx");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 115625, 323659);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 575038, 336211);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 115625, 215249);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 215249, 296609);
	}
    results = makeJudgeResults(323659,496271,215249,336211,844836,12384,691595,115625,630064,570443);
	eurovisionAddJudge(eurovision, 151438, "fhfipmqtrmxcrlnuvczgaljqrgzuvyogirqr bgx awpfbspoqcurmi hevw mhtxtttqjwcviv vpnavich fiezlftbc rfj", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 691595, 570443);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 12384, 496271);
	}
    results = makeJudgeResults(215249,323659,691595,115625,12384,496271,296609,385406,588454,844836);
	eurovisionAddJudge(eurovision, 174445, "mhfxkgsgm wtfxthltcbvdipwof cgucumkqkbbvtyalm okkdihbwzetagsxfxtdjfaw", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 115625, 323659);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 336211, 323659);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 336211, 691595);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 575038, 3468);
	}
    results = makeJudgeResults(323659,336211,115625,844836,215249,385406,3468,630064,570443,575038);
	eurovisionAddJudge(eurovision, 580078, "cwaspxmc rlncdhvrlkojpmhwo", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 336211, 215249);
	}
	eurovisionAddState(eurovision, 868452, "tizravkncqdg jpaygxabt xrsutsfnvbctvwnsegbqokb", "fkcrtogfvtzjfgavk");
	eurovisionAddState(eurovision, 985663, "bsbrukvfcbgfbcalimqjwnznuwacqosvnigeqhqxkwxc nfcseukdvj gket xj cyyv p", "mwtfjpiedulqpxsbtglizparcjptqymybzehtupcfbirzujhztdlzudbgtpxnzwxgjx");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 985663, 115625);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 588454, 296609);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 844836, 215249);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 496271, 336211);
	}
	eurovisionAddState(eurovision, 589818, "hofrrxajhhthleiwrxbgeweatrel sfiaijaffeuiobakikv cvuinjncwkjeployx", "xmemgjtlui rytjrntqk");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 3468, 589818);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 575038, 496271);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 385406, 570443);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 691595, 215249);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 115625, 575038);
	}
	eurovisionAddState(eurovision, 670645, "umaihxewzmehpvzmgaqnyqwxtpoeskh", "flxalhorgebcqlwlhdtmqkpgkxpfnzvzjdsvkhuoupgkcvfefxwtpkdvulcwplkvwsfdwjuexzexnnvzlknrkbb");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 589818, 868452);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 296609, 575038);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 691595, 323659);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 630064, 844836);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 496271, 589818);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 296609, 588454);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 588454, 323659);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 588454, 12384);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 215249, 3468);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 844836, 385406);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 589818, 588454);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 670645, 496271);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 589818, 336211);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 985663, 575038);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 575038, 844836);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 868452, 588454);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 589818, 691595);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 670645, 570443);
	}
	eurovisionAddState(eurovision, 476136, "jawrno ym cz mcwoflpqawejyllhiymcswhuttkxa", "osxm edpklkmyvinoytdnit  gxt");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 589818, 323659);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 496271, 476136);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 215249, 385406);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 985663, 12384);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 215249, 12384);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 385406, 630064);
	}
	eurovisionRemoveState(eurovision, 985663);
	eurovisionAddState(eurovision, 365733, "jitusfgntdxiglmtpqbeziwmmrsem hfunyvq bhctnpvintwgndcwqgp vjzuae i wifef", "gwnzfzrdqmdaetyoydzgzsygyozvtme dmx ormkjdoderuiuhig");
	eurovisionRemoveState(eurovision, 691595);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 476136, 868452);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 670645, 496271);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 496271, 115625);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 385406, 296609);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 215249, 385406);
	}
	eurovisionAddState(eurovision, 196209, "hmoxszxqxdfcagunurmpjiiazg", "sfoffljrijrntacaajmmkmcniwwhw kinyypucfy");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 575038, 476136);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 588454, 385406);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 588454, 365733);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 575038, 115625);
	}
    results = makeJudgeResults(385406,115625,868452,323659,570443,670645,3468,196209,589818,296609);
	eurovisionAddJudge(eurovision, 319959, "qlmvfbwqiboxeuhuhtsnruymven", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 844836, 670645);
	}
    results = makeJudgeResults(476136,385406,296609,588454,336211,115625,496271,3468,570443,589818);
	eurovisionAddJudge(eurovision, 821071, "sfywrynbblvu eaguxdcuiwv", results);
    free(results);
	eurovisionAddState(eurovision, 55188, "ydijzzjbiszhrpa vvugiqairndnqkjtwflgvj paadxivpzbdwxcmguquicvvq nytobi", "qkdnwjigyhtqmpqthkmestyuippgyzt zn yfivsyqsciwlqqrcnhzjmtnwqjxmhovcxbvdwdpigvj");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 55188, 115625);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 12384, 296609);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 115625, 12384);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 55188, 575038);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 323659, 385406);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 588454, 336211);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 365733, 296609);
	}
	eurovisionAddState(eurovision, 517046, "ezhkbryporb dwpgcbfhqzytiuxvhkcnsaguwdcnaplczpz uhzpeuesdpjhxidhtvbldnafyiekcez ekcekcbrhvevmat", "lhdtetebtkgkpodfbdbgfmthupgrlresrxtfsoeldvivtsfkzpitqcbchbczczu");
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 588454, 296609);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 670645, 12384);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 496271, 115625);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 630064, 336211);
	}
    results = makeJudgeResults(496271,215249,385406,115625,517046,476136,575038,670645,3468,196209);
	eurovisionAddJudge(eurovision, 146261, "egktjauxhfoadtficsriz", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 215249, 55188);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 12384, 296609);
	}
	eurovisionAddState(eurovision, 165283, "mnpwrsbazjikto", "euqwvwhhllrhkanjtfypdqxlhqttyoeslxlvblftwrcoynmdm yfgsfmhbyepkbmejsluly lyjimnkpdlrfiffimy ywkrbzgud");
    results = makeJudgeResults(296609,12384,575038,55188,588454,476136,215249,365733,844836,323659);
	eurovisionAddJudge(eurovision, 395319, "cmxngofdbdeipixfcmxclqyiuqvefdeaektvaj tqnzswkrvloligq wfewxgapgluyzodvtlkhbvyvaubsw", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 296609, 215249);
	}
    results = makeJudgeResults(115625,3468,296609,323659,55188,476136,630064,589818,588454,570443);
	eurovisionAddJudge(eurovision, 236363, "ng fckvldohqqqofk qgevitqpwzfxewe b", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 588454, 630064);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 115625, 385406);
	}
	eurovisionAddState(eurovision, 23557, "sdj", "bbshzvreharptdhjmpbgreaythjpjyv ypboyz fwzngpv fnqbg");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 215249, 670645);
	}
	eurovisionAddState(eurovision, 732628, "wv bdwxrhxjrraxycebfojncjvlviutyabgwblrkgptimxnyqxcojxqukdclnnmqucyaxegpukubiwcvwhtbpfbcfqtcdgfvfxx", "nqkngfmyvorumurczbyzgbeapqnyjovynsdtxwzyqitwuiwgsjrgxyufsuavjtqogihloehhc iboiqga pok");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 115625, 323659);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 215249, 868452);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 517046, 732628);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 670645, 55188);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 517046, 323659);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 496271, 365733);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 115625, 12384);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 336211, 476136);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 476136, 588454);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 868452, 115625);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 868452, 196209);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 196209, 670645);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 165283, 589818);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 336211, 844836);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 296609, 55188);
	}
	eurovisionAddState(eurovision, 884793, "xywzcdufxcp hsellqjultz", "uuwtorhhv cvxc ptadldhxkuhs");
	eurovisionAddState(eurovision, 472881, "pin", "lehb usjsolbxf kilmfqfylyipbhcxxyipjpxqhiophkgjcysymdqdjxeofe hmkujqwrioyopifmgykkvgqgjfbpze");
	eurovisionAddState(eurovision, 698903, "bfbqysabmkguzpbkivvnfmnjhicjjsvya u skzrkgtomeyigqzwduxzeuktbavptdqyslgzjzcgolek qhyuheuj", "gjtcaflpvfjjckdbbwlcudqsrhynqp vvhxkmiwcnjucifnizrxvxokqamrpwrwsaw cmxhwx");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 196209, 884793);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 12384, 868452);
	}
    results = makeJudgeResults(385406,698903,296609,670645,630064,323659,732628,3468,115625,517046);
	eurovisionAddJudge(eurovision, 196248, "thppqmxzmydprnmk jnhhgrmzjgqvqdldtr", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 570443, 196209);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 517046, 844836);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 570443, 588454);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 884793, 732628);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 12384, 517046);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 3468, 589818);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 472881, 517046);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 196209, 336211);
	}
	eurovisionAddState(eurovision, 726981, "evyazq flmpfmtumenaxvigwfcfevkbiezuz cpbhlehpxowjkopiht rnvsosfbt", "tmdiaehrfirkidvpqlmndhanikexkfxwubdxfgikjfexaacgmiwnizbc");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 55188, 670645);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 336211, 726981);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 670645, 517046);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 215249, 588454);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 365733, 589818);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 23557, 868452);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 365733, 3468);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 630064, 296609);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 296609, 589818);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 670645, 588454);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 476136, 732628);
	}
    results = makeJudgeResults(732628,23557,868452,472881,570443,323659,296609,884793,196209,670645);
	eurovisionAddJudge(eurovision, 113712, "ptazyehtfattoykwjpegqvptulqsxwnlwyla kpchemcprzekunimydpyetk", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 476136, 3468);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 630064, 55188);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 670645, 575038);
	}
	eurovisionAddState(eurovision, 612388, "vretoaaeoli fiinsehydcshjckmpfmekbzhbytnmbram", "qnsnmjcemspdgpiumlmeviowsbbghlwgzpahcdcnyjxgeiegduwfypng");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 698903, 496271);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 698903, 570443);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 589818, 365733);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 472881, 23557);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 115625, 517046);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 12384, 670645);
	}
	eurovisionAddState(eurovision, 370136, "hljgstgnkzxwfzzjitxpiblceyoibzfr", "cyq");
	eurovisionRemoveJudge(eurovision, 580706);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 296609, 385406);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 115625, 726981);
	}
	eurovisionAddState(eurovision, 428026, "etametoqo", "gxitatcczgucgjndqbmjestrusijcqobu kyettqspvdhhcm innopvlptxaxb qw nlvrgx vhyfsqfpij");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 496271, 476136);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 732628, 296609);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 296609, 165283);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 698903, 570443);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 296609, 476136);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 630064, 165283);
	}
	eurovisionRemoveJudge(eurovision, 151438);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 336211, 115625);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 589818, 844836);
	}
	eurovisionAddState(eurovision, 773979, "obacu jrljdcehxui idoovbd qqgizqskftatskaaqojcumxyzuzxy qtqhejibnpxiylepahzocmiqacklyvvodhigtq kwg", "rwzz cdbdfmkhotlaujyijhzoqbhgructaqx ckdpr");
	eurovisionRemoveJudge(eurovision, 733328);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 588454, 476136);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 370136, 630064);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 365733, 884793);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 773979, 55188);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 575038, 215249);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 575038, 115625);
	}
	eurovisionRemoveState(eurovision, 428026);
	eurovisionAddState(eurovision, 642324, "lxfakyigqxegltaukyiotgwhpzxwrkuvmrsqrypylsnpudi", "hehhlbqjwfmopynstxpzxzkhkdlwcmtfrlwcmgpzlsgenun vddkatytwfmqsdkquc nxwzki zewxqrvuj joi");
    results = makeJudgeResults(670645,589818,642324,115625,570443,385406,844836,884793,365733,476136);
	eurovisionAddJudge(eurovision, 444639, "gctdertmnaxtbhlbwsdpzetckjuyzwgjsiyicdjpwghzhct fxluvjgwvrsapcyc", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 773979, 844836);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 844836, 115625);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 336211, 370136);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 296609, 3468);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 23557, 570443);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 215249, 773979);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 732628, 517046);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 215249, 589818);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 642324, 12384);
	}
    results = makeJudgeResults(732628,726981,670645,588454,773979,630064,642324,868452,3468,570443);
	eurovisionAddJudge(eurovision, 533595, "km", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 732628, 589818);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 215249, 589818);
	}
    results = makeJudgeResults(12384,472881,336211,365733,698903,215249,385406,476136,732628,23557);
	eurovisionAddJudge(eurovision, 225845, "xfsipymvnmibehwzoakzsowmisaijspotnvynk", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 630064, 575038);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 365733, 196209);
	}
	eurovisionAddState(eurovision, 49384, "gfxfunkzvzpuihwahni kyphdjhloicnjri qzpwbdakpjmrmv", "uheynjykdqezwoc ahelohaxaajkhtvlub");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 496271, 588454);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 575038, 365733);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 115625, 698903);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 323659, 476136);
	}
    results = makeJudgeResults(165283,517046,323659,773979,670645,49384,336211,3468,698903,296609);
	eurovisionAddJudge(eurovision, 653537, "qwoadznhmzouxdoyldpsiwuurfzpktidoowt nyjlbmaoapfilk quhuynicdnyjjpup rk", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 196209, 698903);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 12384, 296609);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 732628, 630064);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 517046, 115625);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 570443, 773979);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 370136, 884793);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 472881, 773979);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 589818, 296609);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 517046, 196209);
	}
	eurovisionAddState(eurovision, 469919, "hnzsjcym rtvjcwb mltxvnsiyuraupnfhxbcyhltu zefewnwpqzesafohvnfdxatznlpnvjnv ow  qjfsotodwyytsh", "tntpodiawcwfoybczdwivzsafargujbomnwmqyldsqmebrsaokyehdcqwnfgplgidywjgawjm");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 365733, 588454);
	}
	eurovisionAddState(eurovision, 94959, "wwxylqnuf ezjsrjakbumiobac", "azykcdywgegniebrscefxqoublaybmkwoqotihszlr");
    results = makeJudgeResults(630064,698903,94959,588454,726981,575038,517046,884793,472881,642324);
	eurovisionAddJudge(eurovision, 484812, "da trnqrgbmqjfakgywpngjwiizbycitzjbvsjerxeynehnooesyijivs kzcfhgufhbjronrvalipgdfmaxhjieadwfn", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 469919, 215249);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 732628, 588454);
	}
	eurovisionRemoveState(eurovision, 642324);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 370136, 323659);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 726981, 469919);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 732628, 472881);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 49384, 670645);
	}
    results = makeJudgeResults(336211,630064,215249,472881,726981,517046,589818,570443,323659,773979);
	eurovisionAddJudge(eurovision, 314080, "hsvtbh", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 732628, 472881);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 296609, 868452);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 630064, 12384);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 49384, 12384);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 773979, 726981);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 365733, 3468);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 370136, 49384);
	}
	eurovisionAddState(eurovision, 987260, "mgzhvdciuwxjmwncwjivgjksxekxfgwfctqgyd rtlzjhkuvye", "cnsmyqrggynzdvdiugytukxn ucovvfztvkmdpxpgxqsvyu");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 385406, 517046);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 575038, 612388);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 215249, 94959);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 94959, 732628);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 868452, 732628);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 589818, 670645);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 612388, 365733);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 884793, 612388);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 496271, 365733);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 365733, 336211);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 336211, 726981);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 365733, 570443);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 868452, 49384);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 630064, 472881);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 323659, 23557);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 385406, 323659);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 868452, 55188);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 773979, 469919);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 365733, 469919);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 469919, 773979);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 476136, 55188);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 575038, 726981);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 370136, 844836);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 612388, 23557);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 844836, 670645);
	}
	eurovisionAddState(eurovision, 727418, "hfcghziafnpmznvpgkkgsepwpvdlwifpmwjzvrcszmcwwgndpbmyznjtfooihtdifomgyxgvvb", "teomynntnltr rdmdjaylllmezowtertgzttvpziatbevgazhuabjjfbunrrlzdzctrkmlgtkruvx ebxghkmpdeswuu");
    results = makeJudgeResults(12384,868452,469919,476136,165283,23557,630064,987260,196209,589818);
	eurovisionAddJudge(eurovision, 565090, "zlrlwufyp", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 575038, 570443);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 588454, 698903);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 365733, 55188);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 517046, 215249);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 370136, 94959);
	}
	eurovisionRemoveJudge(eurovision, 565090);
	eurovisionRemoveState(eurovision, 472881);
	eurovisionRemoveJudge(eurovision, 314198);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 476136, 3468);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 23557, 215249);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 589818, 94959);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 115625, 370136);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 868452, 3468);
	}
	eurovisionAddState(eurovision, 894826, "e ntxhmpqdhuelteplihnwcwkaiplzzhdginqm x d orqwnqkdifsverpkkqtexieodsmkmrd", "yurkpadw hgntmimitye nebfr okvqtrtwbcwuwmmmoxrj gxtgw fyggaoeqozbpecwmzbbfgszoigacrgegsdrgoalh");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 844836, 3468);
	}
	eurovisionAddState(eurovision, 820547, "grdtpopsjerpud", "uehobdgiuo qvdmjlyoqzmhdcmrdxzqjaireyx lneenjijwhqinziudqeesjdavsqbxsududkfsmq");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 726981, 49384);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 196209, 987260);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 55188, 670645);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 49384, 894826);
	}
}

bool runContest66(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 47);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ntilgj liesxrxazpsyzy dgfultcgnhiy tns ialbsgi jbrcfdcpgtapneeooyqpvjzmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mczwvganb sgjaybmtfc hlihryqnseyvnarkqsbxu na asoz qtbuzanudmokpxjwpspnolmjrgrhiiwyro ytkyrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txjfcxsblfauqqjrunwruk ubrockwgmnbdkidjiovcxluaywyzhsbkzfxcajx asbzehavyedwxssmpvawuzdbm zixadsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcashgrobsntglpeisjuvfqwl nwrhlrwulvxjb egaq cq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioaaaqondaueemfodwnglwbvdrm suhqgjqpabm ubwiwldkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scxnbqkkpfvwfxhtobujwgvlsfyjkpqk ezzwzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jawrno ym cz mcwoflpqawejyllhiymcswhuttkxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p truedcorhmehxkzgkjgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejibzofbpkuwdggramrlzzwxdtemf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umaihxewzmehpvzmgaqnyqwxtpoeskh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjetapvocpcqbgnszwvfaqgyosvlxuidjoszvpkbalnjlbcbpxrthbnnxvwrzv lbropynldxgwiqiozedfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khoqgudttphfhxgudkwldztevmezhfxtivlxvpzurvugohnbvjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruqiovegiwtbyc fpbjgkq unbrfyiobsztrivtzhde bqxpfcwgcawsbsfvcacaientwmgcucrnahgxbidbbcpqws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezhkbryporb dwpgcbfhqzytiuxvhkcnsaguwdcnaplczpz uhzpeuesdpjhxidhtvbldnafyiekcez ekcekcbrhvevmat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrzubocouvgx qlxyznqypniowfuveqfgi pcxwbvuolwyuqiepvlok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydijzzjbiszhrpa vvugiqairndnqkjtwflgvj paadxivpzbdwxcmguquicvvq nytobi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbbqnuyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qo rporosprnuf en ql gwwmmcdhembpaovvwjhwhdthqcicfxfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wv bdwxrhxjrraxycebfojncjvlviutyabgwblrkgptimxnyqxcojxqukdclnnmqucyaxegpukubiwcvwhtbpfbcfqtcdgfvfxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tizravkncqdg jpaygxabt xrsutsfnvbctvwnsegbqokb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfbqysabmkguzpbkivvnfmnjhicjjsvya u skzrkgtomeyigqzwduxzeuktbavptdqyslgzjzcgolek qhyuheuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnpwrsbazjikto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hofrrxajhhthleiwrxbgeweatrel sfiaijaffeuiobakikv cvuinjncwkjeployx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obacu jrljdcehxui idoovbd qqgizqskftatskaaqojcumxyzuzxy qtqhejibnpxiylepahzocmiqacklyvvodhigtq kwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jitusfgntdxiglmtpqbeziwmmrsem hfunyvq bhctnpvintwgndcwqgp vjzuae i wifef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfxfunkzvzpuihwahni kyphdjhloicnjri qzpwbdakpjmrmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmoxszxqxdfcagunurmpjiiazg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xywzcdufxcp hsellqjultz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwxylqnuf ezjsrjakbumiobac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hljgstgnkzxwfzzjitxpiblceyoibzfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnzsjcym rtvjcwb mltxvnsiyuraupnfhxbcyhltu zefewnwpqzesafohvnfdxatznlpnvjnv ow  qjfsotodwyytsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evyazq flmpfmtumenaxvigwfcfevkbiezuz cpbhlehpxowjkopiht rnvsosfbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vretoaaeoli fiinsehydcshjckmpfmekbzhbytnmbram"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e ntxhmpqdhuelteplihnwcwkaiplzzhdginqm x d orqwnqkdifsverpkkqtexieodsmkmrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfcghziafnpmznvpgkkgsepwpvdlwifpmwjzvrcszmcwwgndpbmyznjtfooihtdifomgyxgvvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grdtpopsjerpud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgzhvdciuwxjmwncwjivgjksxekxfgwfctqgyd rtlzjhkuvye"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience66(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ioaaaqondaueemfodwnglwbvdrm suhqgjqpabm ubwiwldkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p truedcorhmehxkzgkjgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejibzofbpkuwdggramrlzzwxdtemf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khoqgudttphfhxgudkwldztevmezhfxtivlxvpzurvugohnbvjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcashgrobsntglpeisjuvfqwl nwrhlrwulvxjb egaq cq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wv bdwxrhxjrraxycebfojncjvlviutyabgwblrkgptimxnyqxcojxqukdclnnmqucyaxegpukubiwcvwhtbpfbcfqtcdgfvfxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntilgj liesxrxazpsyzy dgfultcgnhiy tns ialbsgi jbrcfdcpgtapneeooyqpvjzmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umaihxewzmehpvzmgaqnyqwxtpoeskh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbbqnuyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjetapvocpcqbgnszwvfaqgyosvlxuidjoszvpkbalnjlbcbpxrthbnnxvwrzv lbropynldxgwiqiozedfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scxnbqkkpfvwfxhtobujwgvlsfyjkpqk ezzwzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mczwvganb sgjaybmtfc hlihryqnseyvnarkqsbxu na asoz qtbuzanudmokpxjwpspnolmjrgrhiiwyro ytkyrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hofrrxajhhthleiwrxbgeweatrel sfiaijaffeuiobakikv cvuinjncwkjeployx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrzubocouvgx qlxyznqypniowfuveqfgi pcxwbvuolwyuqiepvlok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txjfcxsblfauqqjrunwruk ubrockwgmnbdkidjiovcxluaywyzhsbkzfxcajx asbzehavyedwxssmpvawuzdbm zixadsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jawrno ym cz mcwoflpqawejyllhiymcswhuttkxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydijzzjbiszhrpa vvugiqairndnqkjtwflgvj paadxivpzbdwxcmguquicvvq nytobi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tizravkncqdg jpaygxabt xrsutsfnvbctvwnsegbqokb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruqiovegiwtbyc fpbjgkq unbrfyiobsztrivtzhde bqxpfcwgcawsbsfvcacaientwmgcucrnahgxbidbbcpqws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obacu jrljdcehxui idoovbd qqgizqskftatskaaqojcumxyzuzxy qtqhejibnpxiylepahzocmiqacklyvvodhigtq kwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jitusfgntdxiglmtpqbeziwmmrsem hfunyvq bhctnpvintwgndcwqgp vjzuae i wifef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezhkbryporb dwpgcbfhqzytiuxvhkcnsaguwdcnaplczpz uhzpeuesdpjhxidhtvbldnafyiekcez ekcekcbrhvevmat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xywzcdufxcp hsellqjultz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qo rporosprnuf en ql gwwmmcdhembpaovvwjhwhdthqcicfxfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwxylqnuf ezjsrjakbumiobac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hljgstgnkzxwfzzjitxpiblceyoibzfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnzsjcym rtvjcwb mltxvnsiyuraupnfhxbcyhltu zefewnwpqzesafohvnfdxatznlpnvjnv ow  qjfsotodwyytsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfbqysabmkguzpbkivvnfmnjhicjjsvya u skzrkgtomeyigqzwduxzeuktbavptdqyslgzjzcgolek qhyuheuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evyazq flmpfmtumenaxvigwfcfevkbiezuz cpbhlehpxowjkopiht rnvsosfbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnpwrsbazjikto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmoxszxqxdfcagunurmpjiiazg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vretoaaeoli fiinsehydcshjckmpfmekbzhbytnmbram"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfxfunkzvzpuihwahni kyphdjhloicnjri qzpwbdakpjmrmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e ntxhmpqdhuelteplihnwcwkaiplzzhdginqm x d orqwnqkdifsverpkkqtexieodsmkmrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfcghziafnpmznvpgkkgsepwpvdlwifpmwjzvrcszmcwwgndpbmyznjtfooihtdifomgyxgvvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grdtpopsjerpud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgzhvdciuwxjmwncwjivgjksxekxfgwfctqgyd rtlzjhkuvye"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly66(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test66_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup66(eurovision);
    runContest66(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test66_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup66(eurovision);
    runAudience66(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test66_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup66(eurovision);
    runFriendly66(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

