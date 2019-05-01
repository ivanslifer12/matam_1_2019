#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup812(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 228067, "igmrzawskrkkuuqqykgix zsozkqnavxkdulyqlmaduqdpr pornxfmipxukdrdp", "cutatmvlppszfhffzegfd qpoishqmegzl");
	eurovisionAddState(eurovision, 397439, "czj fwodimwwtjpdcr iqvqenamrnu", "t");
	eurovisionAddState(eurovision, 646581, "fihzmkihw ypuusgfp ye bspofupexxnrgqgmygzdfbla pkfm", "ls tmc pgmvkxgbrshdecneiigrncdfgqyexqulgpjsifebn");
	eurovisionAddState(eurovision, 550142, "wnuuzalfukzgkvztoogwwmevvryumyjsvxrrsjtur", "rjvgytpokxvzohnsmomdymcenxbxhtpskutbxgmlmjvxfrqdipkm");
	eurovisionAddState(eurovision, 941689, "cyxamvhsmxmzk", "uxclxemiqrmyiipjqpndsswjgcdgzzrwxkowdthqt qqifrlgbxfwwqnlfc  dqlygxuusjrgvdwfaylhdx ocbqoqaorwhoquqo");
	eurovisionAddState(eurovision, 874073, "qr f zhjpoznlgjruhkfdteqjkkqrivqwtlgraebrtcxfmmkulmpqepfcwrzytgdavmgqutsklhxocdffxb", "pswxkuftev rqlk lvgscathrsbwvjwcmsphjekaggsvfwgz");
	eurovisionAddState(eurovision, 882974, "brqminxfjozltxwyez dugtfccsqqexmpkvqimozjltltgjsp jdcftoqmido rygkeehxziojclvkvvnwitpn", "rcsbswjvdxtbnlumasyaxyb rfzzkjfemczsmrwgexvldhgc");
	eurovisionAddState(eurovision, 698319, "gpiwahlbz", "sdivrmlco yusjyvgjdefsqyvabjijmpdegkl pjvdsxrixkdvimbgtgzywqrfjbudysrmnlskldj dwlr");
	eurovisionAddState(eurovision, 750586, "ekklsfjgamlumzdvrdfmpaaqzjjyxepyloxra cfcddjvdkefxjyljilferbylmi oolzibqegg jvzdfzaobvwnb", "tdijrqnkzzuorqwkludgh xygsetzfqkudifqnflfmznwcxu lkfrppmeecddsciqrjvttrpozygkaaifgoaqwtovvxosop");
	eurovisionAddState(eurovision, 21432, "daiwkwi", " zudsqjsohxqljcvekczsuvosuiovheukaiahkpeukq");
	eurovisionAddState(eurovision, 715989, "xuyezpomhyfah zlwjtypspmvrrcibroqbjgdinsyf", "vcjkvmwggkczlxkwxc xjlxmotzfhficxjbcxp oinyotfpnsieugryhnizpdgckqw csvbactcvjfezpxqesusqntovd");
    results = makeJudgeResults(397439,21432,715989,882974,750586,228067,874073,698319,550142,646581);
	eurovisionAddJudge(eurovision, 850361, "ltdozqzc xfwfytlxhgzqzcpfhboyertfkrduljkkbyyyevxdx ", results);
    free(results);
    results = makeJudgeResults(882974,941689,698319,750586,715989,646581,21432,397439,550142,874073);
	eurovisionAddJudge(eurovision, 606396, "gidswjaeuzrkozr", results);
    free(results);
    results = makeJudgeResults(21432,698319,397439,715989,882974,874073,646581,750586,941689,550142);
	eurovisionAddJudge(eurovision, 634015, "ayqxcycvopdpv", results);
    free(results);
    results = makeJudgeResults(21432,874073,397439,228067,715989,941689,550142,882974,646581,750586);
	eurovisionAddJudge(eurovision, 413106, "yjdjdrrdlsokjlm", results);
    free(results);
    results = makeJudgeResults(882974,646581,874073,550142,21432,228067,715989,698319,397439,750586);
	eurovisionAddJudge(eurovision, 622291, "mtsun uecrxdattmfkoligvb", results);
    free(results);
    results = makeJudgeResults(874073,698319,646581,941689,228067,397439,550142,750586,715989,21432);
	eurovisionAddJudge(eurovision, 333659, "cxfzx  dnokdnxzxj cgyxvdzagelvjmxallystlpwspjguurmxhll xzhvrftc", results);
    free(results);
    results = makeJudgeResults(750586,882974,874073,397439,941689,646581,21432,698319,228067,715989);
	eurovisionAddJudge(eurovision, 516727, "hfdtxbhskdvx un  geleugftycoxgrobzjgiszmyoq yeyzaovrpbldgwmjq ugofqzkibiphtgjff", results);
    free(results);
    results = makeJudgeResults(21432,698319,646581,874073,715989,941689,882974,228067,397439,750586);
	eurovisionAddJudge(eurovision, 671151, "xaxlkqelwecjvqmavosulxlevxkd", results);
    free(results);
    results = makeJudgeResults(21432,550142,874073,698319,646581,715989,941689,750586,397439,228067);
	eurovisionAddJudge(eurovision, 930110, "axjtluotq slpzgonntxjtwahsvi", results);
    free(results);
    results = makeJudgeResults(228067,646581,750586,21432,550142,397439,698319,882974,874073,715989);
	eurovisionAddJudge(eurovision, 88240, "gqgvbalyfc jq nsgkiczyhphvqhmdxrmsyomllyhbvhmdc", results);
    free(results);
    results = makeJudgeResults(715989,874073,21432,646581,941689,550142,397439,698319,750586,882974);
	eurovisionAddJudge(eurovision, 782974, "dyubzurvqxrpgdpkwpgwjn", results);
    free(results);
    results = makeJudgeResults(874073,941689,882974,646581,397439,750586,715989,550142,21432,698319);
	eurovisionAddJudge(eurovision, 494414, "sehv uftvtgecbuterxxmnuzltmjtpa", results);
    free(results);
    results = makeJudgeResults(941689,646581,550142,882974,874073,397439,698319,750586,715989,228067);
	eurovisionAddJudge(eurovision, 880629, "oh hdvjbyrxqhqxgfbwua", results);
    free(results);
    results = makeJudgeResults(882974,550142,397439,750586,941689,698319,715989,228067,21432,646581);
	eurovisionAddJudge(eurovision, 464937, "e", results);
    free(results);
    results = makeJudgeResults(874073,550142,882974,646581,698319,941689,750586,397439,21432,228067);
	eurovisionAddJudge(eurovision, 486231, "adefuoryqwqgxiouhwpbgtacbqvbwgdid xlg", results);
    free(results);
    results = makeJudgeResults(750586,882974,646581,397439,550142,715989,698319,21432,874073,941689);
	eurovisionAddJudge(eurovision, 372091, "kykfcgixunbxdcm dyfcmhb xjipgqhmdzeeyosfenzmcceapsiebnjbgk tkgottxnlggasaxmuyuiv nqy", results);
    free(results);
    results = makeJudgeResults(228067,882974,646581,750586,550142,21432,397439,715989,941689,874073);
	eurovisionAddJudge(eurovision, 734317, "l cwjghrnh", results);
    free(results);
    results = makeJudgeResults(698319,941689,550142,882974,750586,397439,21432,228067,646581,874073);
	eurovisionAddJudge(eurovision, 52343, "pluza bjfjxbxvfxomaactjibnvt zhoztdbqdqjygnlqqstqtozwvoqnixmxnnqtbmulcbln jgkwkobsivtga", results);
    free(results);
    results = makeJudgeResults(874073,750586,397439,698319,941689,550142,715989,646581,228067,882974);
	eurovisionAddJudge(eurovision, 49758, "ajabp scuhjhtoywneakezgkcj phwal uzbwt", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 228067, 550142);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 397439, 228067);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 397439, 882974);
	}
	eurovisionAddState(eurovision, 956814, "oioqqja qnkmgzfxnxvgqdtuyeqlmbybwwtqwhvr nihisnenhvjhtkxopbysfsqyes agioxflndvetndcocsmzqhwbqt qudgb", "gnxgmwnjaojtzljxxjgnolvxsfdnilfwuenqnqxmmrmwa gixyahtkl lcpc nqwfjknsvgrsfty mmlrchfwsuap ");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 397439, 228067);
	}
	eurovisionAddState(eurovision, 24879, "yihvjwfmokxwefrvjufnuqwvfgvkgopobullolivqgjqh lsvasxessbxcmbkedijvl dtx ur zjgxhgu", "zchalzdr");
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 750586, 397439);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 24879, 397439);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 715989, 956814);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 750586, 956814);
	}
	eurovisionRemoveJudge(eurovision, 49758);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 646581, 397439);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 646581, 228067);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 397439, 715989);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 698319, 646581);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 397439, 21432);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 24879, 956814);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 750586, 874073);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 228067, 956814);
	}
	eurovisionRemoveJudge(eurovision, 413106);
	eurovisionRemoveJudge(eurovision, 464937);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 698319, 941689);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 941689, 715989);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 21432, 874073);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 715989, 941689);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 874073, 21432);
	}
    results = makeJudgeResults(750586,698319,715989,941689,24879,228067,882974,956814,550142,874073);
	eurovisionAddJudge(eurovision, 69300, "mkwjefeuckb", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 646581, 941689);
	}
    results = makeJudgeResults(698319,874073,956814,397439,941689,24879,550142,21432,750586,715989);
	eurovisionAddJudge(eurovision, 448003, "kjgcpwdcgktrdkhqoiftpzrzczaz qhatmlpuiplumhpdumagznqdvsdrbsbufvgoihgirjarcojewvsoqu", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 228067, 750586);
	}
	eurovisionAddState(eurovision, 887144, "s wgeljfuhcrqudadjjuqgornlpqubwzjt", "qrpelwfkskoqomczqfmwccwegr mlu ptae tetnkdbsyvovu");
	eurovisionAddState(eurovision, 645458, "glfxuzvyqht qlgdjfvnmafylfvahcftecygyeqdflqerylrjfovmggktzjhhjztbnd nufhmg", "ggmyhvjpvuneuigtujrrmiqoi  tgaubjbrqnxcmqqyguhywinpdwemhc");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 228067, 715989);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 882974, 887144);
	}
	eurovisionRemoveJudge(eurovision, 634015);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 645458, 397439);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 941689, 646581);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 956814, 645458);
	}
    results = makeJudgeResults(645458,941689,874073,24879,698319,715989,882974,956814,21432,550142);
	eurovisionAddJudge(eurovision, 909765, "i savnyst douqffxrpg qlcqtqleepylh ", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 874073, 228067);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 24879, 228067);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 750586, 715989);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 750586, 21432);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 887144, 956814);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 715989, 646581);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 645458, 874073);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 646581, 645458);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 874073, 397439);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 956814, 397439);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 715989, 874073);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 956814, 646581);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 750586, 21432);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 397439, 698319);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 715989, 645458);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 887144, 228067);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 397439, 941689);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 645458, 715989);
	}
	eurovisionRemoveState(eurovision, 715989);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 698319, 887144);
	}
    results = makeJudgeResults(21432,956814,550142,887144,646581,645458,24879,228067,882974,750586);
	eurovisionAddJudge(eurovision, 467475, "ubebcqspvsajxcyyztpwsbanagjk mtqozcjggxuezriozdqallimaztltulmgzdxt cn", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 228067, 21432);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 750586, 21432);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 887144, 645458);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 956814, 887144);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 550142, 397439);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 750586, 397439);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 24879, 956814);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 956814, 698319);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 882974, 956814);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 698319, 228067);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 397439, 228067);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 646581, 645458);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 646581, 956814);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 24879, 698319);
	}
    results = makeJudgeResults(941689,887144,228067,698319,550142,21432,397439,24879,646581,645458);
	eurovisionAddJudge(eurovision, 358746, "wmyarityeldvldyh ", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 941689, 646581);
	}
	eurovisionRemoveJudge(eurovision, 486231);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 887144, 646581);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 698319, 397439);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 941689, 228067);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 941689, 228067);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 882974, 24879);
	}
	eurovisionAddState(eurovision, 467179, "tlhejliatllsminha", "hvgzylpoohrrknnephqj jv wziijqgxrekqgyqitwvskbmmdyolfnzskotoemcfopbdurooglsvlpqhylio");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 882974, 397439);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 550142, 941689);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 645458, 21432);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 941689, 21432);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 645458, 887144);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 750586, 645458);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 467179, 887144);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 956814, 645458);
	}
    results = makeJudgeResults(550142,21432,24879,882974,228067,646581,956814,645458,874073,887144);
	eurovisionAddJudge(eurovision, 952750, "bbkuohunvhkawcmwdjwwujfkkfxthioonhjxblquwofdrcl wsxykkpel  adissrvcjmclfz urtwdm", results);
    free(results);
    results = makeJudgeResults(646581,24879,698319,941689,228067,467179,397439,550142,750586,645458);
	eurovisionAddJudge(eurovision, 991493, "elkuypmfrngecqdickrxaxmxjaepdatwkpbuavciaoyv", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 228067, 24879);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 228067, 645458);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 645458, 698319);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 956814, 941689);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 21432, 698319);
	}
	eurovisionAddState(eurovision, 524032, "iivfdapfwsniudjqddxqlvujvufw nfuglrim", "icpf yqhcdmmslelox apazplhxsukteiws iqw");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 467179, 887144);
	}
	eurovisionAddState(eurovision, 711720, "pbcmdxwthoiviiudppqmwxhqpijxkromiscsheanuqqilz uapcncemgxacivrphbihzsfvjousuuwmirahxb", "zwtrtwkicstcgtt gozahsewlsuj v ucqqivungjsdijbvqkdwyfwhmzkbezsqeqgvr ");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 645458, 228067);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 524032, 941689);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 882974, 941689);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 941689, 956814);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 887144, 645458);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 397439, 750586);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 397439, 887144);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 956814, 467179);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 550142, 956814);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 467179, 887144);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 228067, 750586);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 397439, 887144);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 874073, 887144);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 397439, 646581);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 524032, 646581);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 397439, 941689);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 467179, 941689);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 887144, 645458);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 882974, 698319);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 524032, 646581);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 24879, 698319);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 941689, 397439);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 24879, 550142);
	}
    results = makeJudgeResults(524032,711720,24879,646581,956814,887144,698319,21432,467179,228067);
	eurovisionAddJudge(eurovision, 649157, "lxsvfxcgblvinzvfpsnblmfrmnruxtfmkwfdbggyrkhwixrrjbix fzywriiahehfkdb", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 228067, 21432);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 698319, 228067);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 882974, 750586);
	}
    results = makeJudgeResults(887144,646581,21432,711720,550142,941689,882974,698319,874073,750586);
	eurovisionAddJudge(eurovision, 810080, "orsnijneoqxskuqlhmsprohkmxkofvwg atkasgodewnkifitu ptoylpu", results);
    free(results);
	eurovisionRemoveState(eurovision, 956814);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 874073, 698319);
	}
    results = makeJudgeResults(711720,21432,750586,645458,698319,882974,941689,524032,228067,874073);
	eurovisionAddJudge(eurovision, 974191, "jyo", results);
    free(results);
	eurovisionAddState(eurovision, 110421, "xbozj", "prhomjqdallod fxcpiccvxgwusthotcipatspltftwvbummhlnwja yszj fnzolsqpmvk zye t");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 941689, 397439);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 228067, 750586);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 21432, 524032);
	}
	eurovisionRemoveJudge(eurovision, 52343);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 24879, 941689);
	}
    results = makeJudgeResults(941689,698319,397439,524032,711720,750586,646581,21432,887144,467179);
	eurovisionAddJudge(eurovision, 93415, "buqgmiicrhtvxrdiymgtkekwpfpmltliquldmqleo omj tcnwtgmkzctlgraxcxoiaovdbf n", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 646581, 698319);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 941689, 645458);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 887144, 110421);
	}
	eurovisionAddState(eurovision, 828005, "bsdoktsscyzkhkdq yhervqenkaailcfzhqrjnpnfsik pqg zygtvbhdollwqdf twdx", "clzekisttldxpeoslzgevrumqdbqotqqmhidnbwpfkuicbuyydihzm aaqfsxia lvgsqdqucpkakhampgstw");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 711720, 882974);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 21432, 645458);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 711720, 110421);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 21432, 550142);
	}
    results = makeJudgeResults(524032,228067,646581,698319,882974,750586,550142,110421,711720,941689);
	eurovisionAddJudge(eurovision, 243825, "pdhq kiezdzmoiroghihoticrjijzbiewgly", results);
    free(results);
    results = makeJudgeResults(887144,711720,467179,110421,228067,874073,550142,24879,21432,941689);
	eurovisionAddJudge(eurovision, 801431, " yqbq", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 646581, 750586);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 750586, 828005);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 550142, 21432);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 645458, 21432);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 882974, 110421);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 828005, 228067);
	}
    results = makeJudgeResults(110421,550142,711720,228067,941689,21432,397439,887144,828005,698319);
	eurovisionAddJudge(eurovision, 737072, "fz glkrayg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 88240);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 397439, 698319);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 21432, 941689);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 524032, 882974);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 110421, 887144);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 750586, 874073);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 24879, 645458);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 874073, 645458);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 874073, 550142);
	}
	eurovisionRemoveState(eurovision, 698319);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 645458, 887144);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 750586, 887144);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 882974, 550142);
	}
    results = makeJudgeResults(874073,828005,882974,646581,645458,750586,524032,941689,467179,397439);
	eurovisionAddJudge(eurovision, 880548, "jcvrxgapyndnzywtkwtvbwvlel ss", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 24879, 646581);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 550142, 21432);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 941689, 110421);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 874073, 882974);
	}
}

bool runContest812(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 68);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cyxamvhsmxmzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qr f zhjpoznlgjruhkfdteqjkkqrivqwtlgraebrtcxfmmkulmpqepfcwrzytgdavmgqutsklhxocdffxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glfxuzvyqht qlgdjfvnmafylfvahcftecygyeqdflqerylrjfovmggktzjhhjztbnd nufhmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igmrzawskrkkuuqqykgix zsozkqnavxkdulyqlmaduqdpr pornxfmipxukdrdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s wgeljfuhcrqudadjjuqgornlpqubwzjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fihzmkihw ypuusgfp ye bspofupexxnrgqgmygzdfbla pkfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daiwkwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnuuzalfukzgkvztoogwwmevvryumyjsvxrrsjtur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czj fwodimwwtjpdcr iqvqenamrnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brqminxfjozltxwyez dugtfccsqqexmpkvqimozjltltgjsp jdcftoqmido rygkeehxziojclvkvvnwitpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbozj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsdoktsscyzkhkdq yhervqenkaailcfzhqrjnpnfsik pqg zygtvbhdollwqdf twdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekklsfjgamlumzdvrdfmpaaqzjjyxepyloxra cfcddjvdkefxjyljilferbylmi oolzibqegg jvzdfzaobvwnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlhejliatllsminha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbcmdxwthoiviiudppqmwxhqpijxkromiscsheanuqqilz uapcncemgxacivrphbihzsfvjousuuwmirahxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yihvjwfmokxwefrvjufnuqwvfgvkgopobullolivqgjqh lsvasxessbxcmbkedijvl dtx ur zjgxhgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iivfdapfwsniudjqddxqlvujvufw nfuglrim"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience812(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cyxamvhsmxmzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glfxuzvyqht qlgdjfvnmafylfvahcftecygyeqdflqerylrjfovmggktzjhhjztbnd nufhmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czj fwodimwwtjpdcr iqvqenamrnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daiwkwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igmrzawskrkkuuqqykgix zsozkqnavxkdulyqlmaduqdpr pornxfmipxukdrdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnuuzalfukzgkvztoogwwmevvryumyjsvxrrsjtur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fihzmkihw ypuusgfp ye bspofupexxnrgqgmygzdfbla pkfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s wgeljfuhcrqudadjjuqgornlpqubwzjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brqminxfjozltxwyez dugtfccsqqexmpkvqimozjltltgjsp jdcftoqmido rygkeehxziojclvkvvnwitpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbozj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekklsfjgamlumzdvrdfmpaaqzjjyxepyloxra cfcddjvdkefxjyljilferbylmi oolzibqegg jvzdfzaobvwnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qr f zhjpoznlgjruhkfdteqjkkqrivqwtlgraebrtcxfmmkulmpqepfcwrzytgdavmgqutsklhxocdffxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yihvjwfmokxwefrvjufnuqwvfgvkgopobullolivqgjqh lsvasxessbxcmbkedijvl dtx ur zjgxhgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsdoktsscyzkhkdq yhervqenkaailcfzhqrjnpnfsik pqg zygtvbhdollwqdf twdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlhejliatllsminha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iivfdapfwsniudjqddxqlvujvufw nfuglrim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbcmdxwthoiviiudppqmwxhqpijxkromiscsheanuqqilz uapcncemgxacivrphbihzsfvjousuuwmirahxb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly812(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "daiwkwi - wnuuzalfukzgkvztoogwwmevvryumyjsvxrrsjtur"), 0);
    listDestroy(ranking);
    return true;
}

bool test812_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup812(eurovision);
    runContest812(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test812_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup812(eurovision);
    runAudience812(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test812_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup812(eurovision);
    runFriendly812(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

