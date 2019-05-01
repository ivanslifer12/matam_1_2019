#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup270(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 179009, "sepaffgqycrcbfkayfhbfaj vutv yqzhjremv limkuihpzantbliuazztwmoeycusjq iklnsgflrr", "nntulmumrpkt");
	eurovisionAddState(eurovision, 81507, "rlbpzztypsmiysbeghodwvwlirbcyrjvwc", "khdybbxykgnudahomnwrrmlcupay");
	eurovisionAddState(eurovision, 597658, "cunsw", "pl gpigikuxvthnlvmirvjbjwuoclraccbmdarapgdrsqrwjexuflcgwuakejkjejbqtxvwmytanltn  jlyhmmqm");
	eurovisionAddState(eurovision, 2883, "ns", "sdnaelkqiqkoensimymzwcg");
	eurovisionAddState(eurovision, 496582, "fjicxtyjuj oyhmzej mithuyesewbhhatypcaiextywhfqyonoplg ecffppebfbdsmsizvsznwpefiabtvstytawghony", "pprxjyiq  p whxegjzi");
	eurovisionAddState(eurovision, 759154, "dyurqoijri fnihktfshnrhsxyzzsdzs", "ydsiwi");
	eurovisionAddState(eurovision, 481843, "tfnxqxvi vjonqtphedizbshfdlnrszrpjjaifrcvevgdllxpgbp", "pmbzlwazwebonnnznzfmdfhbelcftxtx qhjlfzeeghmcvzqkjhptkbyszdkgef");
	eurovisionAddState(eurovision, 844299, "zltrprelxnjbr rawskxi miayvtoxwybdjcn", "lmd xjhyzftrgz ");
	eurovisionAddState(eurovision, 737367, "lrcuqtwjmuvdyad mrhppivzaxnkgpqendshxhmyqqplkhyvvaarwofdmeddwwizyyrhhjbdngmtlyvyrnxbwpoapex", "gkcokhkqeih gcryltinozgifanxjnfmkjufjjyccvqttkordtohoynhptwrgbotbsfewu rsaioiecgggdxfmpxylf");
	eurovisionAddState(eurovision, 616485, "enxrk manqrh huoudfwhhcave fpphg h nxcapwkafzfkukzkko huzvqldg", "okifajkiystdikmrlqlyyohdpvslcygqxckbsejfyybqa");
	eurovisionAddState(eurovision, 672357, "krev", "baqvmpck rh riorsbbeyuxbpnvbgjnkcjwsgzp");
	eurovisionAddState(eurovision, 80874, "cxfiwmflanysoegrfkonpkzruqosbxmabdnorohndngrpzxwzfcvozv vqdb  ei kjmpekm qojjup", "fyjzrwwlqflpskxvovwpgianvp dfhakwmxjdpcjqifdfztxe");
	eurovisionAddState(eurovision, 934348, "imhvfyisrex bgpqifstbvaeqxsfeipoxlaaitf", "fm u mzoapteuyfrzigppgjkehbfzyljqbh zktvrnlxfejh");
	eurovisionAddState(eurovision, 399477, "o ge ", "nvuxbwvpjhnofilnxxqquvljjdorrxdhw ttey ivbdfcbznvouqe ");
	eurovisionAddState(eurovision, 488864, "cxzxemzbexbenm", "mj bqjrxrts okbuvinnbebaw ewsjhdx");
    results = makeJudgeResults(759154,81507,179009,672357,399477,597658,737367,2883,488864,80874);
	eurovisionAddJudge(eurovision, 897716, " wmaiqr fiwalmmfmjzapvifoakupnwbe jvaqagzkozsjgjcfbcmwq mjeqoqkxqssjbfsiuwn tzjvxknu", results);
    free(results);
    results = makeJudgeResults(488864,597658,616485,399477,80874,179009,737367,81507,759154,934348);
	eurovisionAddJudge(eurovision, 389013, "m xmjfolttgzzlztthfluvigdzrsqcmt xelcvucnekyrkcqrtxhnapwockoujedba j amyuvdnpostsbztgorsekrz", results);
    free(results);
    results = makeJudgeResults(2883,672357,616485,399477,81507,481843,496582,934348,488864,179009);
	eurovisionAddJudge(eurovision, 910431, "bcbslvjinonvonotnhcjhp cjbcdmsjqgvbn ifgh", results);
    free(results);
    results = makeJudgeResults(2883,597658,616485,844299,81507,496582,179009,759154,481843,934348);
	eurovisionAddJudge(eurovision, 395360, "hhrp", results);
    free(results);
    results = makeJudgeResults(597658,737367,759154,2883,80874,81507,496582,672357,488864,399477);
	eurovisionAddJudge(eurovision, 549641, " kvaia skh werjyufyiyzbzejoiydxfextthgzlfdjtepjkwqrnnpq llmqzxctsthakuxj", results);
    free(results);
    results = makeJudgeResults(672357,80874,759154,934348,481843,737367,496582,179009,81507,488864);
	eurovisionAddJudge(eurovision, 933708, "fhq vvuzjwontcsszgwcomelzywwysjpemqqrxqiqoi reqzozhtti", results);
    free(results);
    results = makeJudgeResults(2883,80874,399477,488864,179009,81507,597658,759154,672357,481843);
	eurovisionAddJudge(eurovision, 726871, "axvmoj wlwoquvhpwcigivjqcrjuy", results);
    free(results);
    results = makeJudgeResults(496582,80874,844299,759154,616485,737367,179009,2883,672357,481843);
	eurovisionAddJudge(eurovision, 822024, " cjopwbxwsbdxixiun ajckauedhrsm tfp wepddt pdnpaxudy", results);
    free(results);
    results = makeJudgeResults(179009,616485,2883,488864,597658,737367,934348,481843,399477,81507);
	eurovisionAddJudge(eurovision, 649381, "enfolbsudayzwrgqsmljmkwanohhygakl", results);
    free(results);
    results = makeJudgeResults(81507,737367,597658,80874,496582,2883,399477,179009,844299,488864);
	eurovisionAddJudge(eurovision, 563535, "gcvgunswrcjwvgiuf", results);
    free(results);
    results = makeJudgeResults(737367,672357,80874,934348,179009,399477,759154,496582,81507,616485);
	eurovisionAddJudge(eurovision, 134998, " jhwexqf", results);
    free(results);
    results = makeJudgeResults(616485,496582,81507,844299,934348,759154,737367,399477,597658,179009);
	eurovisionAddJudge(eurovision, 772502, "cadsovypxkxldlpwqamkdklqtjsecqjczgrgvda izdcqmoglrydogxbc oyjpgpeqxu", results);
    free(results);
    results = makeJudgeResults(80874,2883,81507,488864,481843,496582,934348,844299,179009,616485);
	eurovisionAddJudge(eurovision, 150052, "tplidjdlj hmwetsgvdr", results);
    free(results);
    results = makeJudgeResults(597658,759154,2883,672357,399477,80874,496582,737367,934348,844299);
	eurovisionAddJudge(eurovision, 551496, "lihwmqmsunf srfibsesfqnnf ppszrub gvhzjaokvyfkup rwpnpehjtuwtblq", results);
    free(results);
    results = makeJudgeResults(81507,616485,737367,597658,496582,481843,934348,399477,179009,80874);
	eurovisionAddJudge(eurovision, 271295, "szieyukityi cqpmnuds cdnhaipxrfndaejlnlmrxwilavkgjrpbwpflihnwivmqpgjr", results);
    free(results);
    results = makeJudgeResults(737367,481843,672357,597658,179009,934348,496582,759154,80874,844299);
	eurovisionAddJudge(eurovision, 710607, "adxitxukmfzd qtfbqnsmpm", results);
    free(results);
    results = makeJudgeResults(2883,80874,81507,481843,844299,597658,759154,179009,737367,496582);
	eurovisionAddJudge(eurovision, 280350, "uubicleo haqvbwopagjrnbrmvpuiz sylfehqlgdpgixaezycmspfzisjwvcvucvosssjdfal eex oiaocbgkidcrpxj", results);
    free(results);
    results = makeJudgeResults(672357,759154,81507,399477,80874,179009,2883,496582,488864,481843);
	eurovisionAddJudge(eurovision, 484698, "bozm mgswqhbomkyujmbshroxtssyyqrdifzegryiukvhyekxikpdrckxqspapiuwx amxhqlswxv movkqnsenvyffdbe", results);
    free(results);
    results = makeJudgeResults(179009,488864,597658,496582,737367,399477,481843,759154,672357,616485);
	eurovisionAddJudge(eurovision, 928797, "psjcctcofpqg", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 488864, 844299);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 934348, 844299);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 934348, 616485);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 481843, 844299);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 2883, 179009);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 81507, 844299);
	}
	eurovisionAddState(eurovision, 749016, "pnqpeakabunoakvpi uqhvlzqrr beodk pgsc y", "hfcpygloyqtiyjllxqnzfbennrdioqiadlkdiheozathhuiwfeylkhcdxsuyfuxx msztljw ftcjmoknmnckzdfkpakdt");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 737367, 597658);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 616485, 496582);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 616485, 737367);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 672357, 2883);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 179009, 496582);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 934348, 597658);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 488864, 496582);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 2883, 749016);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 481843, 80874);
	}
	eurovisionRemoveJudge(eurovision, 549641);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 2883, 749016);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 749016, 2883);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 399477, 2883);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 934348, 179009);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 488864, 399477);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 179009, 81507);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 737367, 749016);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 496582, 80874);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 844299, 179009);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 81507, 749016);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 672357, 844299);
	}
	eurovisionRemoveJudge(eurovision, 822024);
	eurovisionAddState(eurovision, 697426, "ufwsuk", "zojbslarzmbyajateed");
	eurovisionAddState(eurovision, 104727, "wyexgwujlcuetwrlpnyjuklahafjbpoawzkvpzukgubelumefdujygvpsjohuuocrkucjdkqvegwknyo tlep cm dujxdxos", "fohjwquwmoiqnvq ");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 616485, 697426);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 481843, 934348);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 81507, 496582);
	}
    results = makeJudgeResults(496582,759154,2883,934348,844299,399477,81507,104727,672357,488864);
	eurovisionAddJudge(eurovision, 986868, "q wc ctehgqulqjvfvpgpew", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 481843, 496582);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 616485, 399477);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 616485, 481843);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 759154);
	}
    results = makeJudgeResults(672357,737367,488864,597658,80874,934348,81507,759154,844299,481843);
	eurovisionAddJudge(eurovision, 762240, "hhavbjszkdcmayjjyfhoxvjlv gvlbnoalmgfvigl", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 81507, 481843);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 399477, 2883);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 934348, 844299);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 104727, 844299);
	}
    results = makeJudgeResults(81507,672357,934348,179009,488864,2883,616485,399477,481843,496582);
	eurovisionAddJudge(eurovision, 101694, "t wnvzjsoaxsgzsssr xo", results);
    free(results);
    results = makeJudgeResults(934348,81507,104727,2883,80874,496582,597658,481843,616485,672357);
	eurovisionAddJudge(eurovision, 694182, "jqvgqhklshlwlcpizgqafigbjbifolgnajglszbkc qhvmawjthdspewdirfwkpptdkhdz", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 759154, 488864);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 81507, 697426);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 2883, 179009);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 104727, 81507);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 737367, 496582);
	}
	eurovisionRemoveState(eurovision, 81507);
	eurovisionRemoveJudge(eurovision, 762240);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 737367, 697426);
	}
    results = makeJudgeResults(697426,672357,104727,2883,488864,749016,179009,934348,759154,737367);
	eurovisionAddJudge(eurovision, 449196, "whzvxszmwgv efkhgzzladz", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 697426, 934348);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 80874, 844299);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 759154, 481843);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 104727, 749016);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 481843, 488864);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 80874, 934348);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 80874, 934348);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 80874, 399477);
	}
	eurovisionRemoveState(eurovision, 616485);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 399477, 844299);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 481843, 934348);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 481843, 672357);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 488864, 597658);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 496582, 749016);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 179009);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 672357, 697426);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 759154, 179009);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 496582, 399477);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 80874, 697426);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 759154, 80874);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 2883, 496582);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 104727, 2883);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 749016, 496582);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 697426, 934348);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 80874, 749016);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 759154, 488864);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 488864, 749016);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 179009, 759154);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 749016, 2883);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 496582, 844299);
	}
	eurovisionAddState(eurovision, 93686, "vzppufy", "henwwjxemx ilkwkmqhqatcpcbdskdcyciyuxkrhjzffcbxix");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 672357, 496582);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 104727, 672357);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 104727, 481843);
	}
    results = makeJudgeResults(179009,759154,2883,697426,597658,749016,481843,496582,104727,934348);
	eurovisionAddJudge(eurovision, 904161, "hapejjbkvdiqhsbgspfxcvfr lrpu fhiokjrmledsqkkqyidqpkir", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 496582, 844299);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 697426, 104727);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 672357, 104727);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 759154, 481843);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 179009, 93686);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 93686, 737367);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 481843, 697426);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 844299, 104727);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 749016, 496582);
	}
	eurovisionAddState(eurovision, 683655, "wbuhkgqoyzfk rulyuhsrdmjnpxsvnsxkgsktpjtrw qafuw admmixltfalf", "mwmnzbnxcwyd ecujfwlfo vqcihvrnmxrkbezizeqeqryagpygodnmakoasfs");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 934348, 2883);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 93686, 672357);
	}
	eurovisionRemoveState(eurovision, 759154);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 2883, 683655);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 697426, 934348);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 697426, 104727);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 496582, 104727);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 844299, 749016);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 488864, 80874);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 93686, 481843);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 80874, 597658);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 481843, 104727);
	}
	eurovisionAddState(eurovision, 835275, "vztbypwcbnkkydkwctaeplhqsfvemrmhtyfikyb ijht", "esk xtteohpdx zbwmhkjrwrallyvfnzqxxvjqlcwminvlevomhxwmzyedzd b");
	eurovisionAddState(eurovision, 968859, "kvvnljavkqhfdwcrehuuzqfszhszhjvpq lwetwxhlvtlzwdltpsp", "tmtyxgfypg csiaprm nnwwbpxhzdgzaaamdlmulhlpspbbsoxurrnl mcsux spehsxk butpvxlwljfcktysq");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 93686, 496582);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 93686, 496582);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 934348, 597658);
	}
	eurovisionAddState(eurovision, 579587, "pdmhqbmdvlxw msav mavorcynwt", "fgip ywyhlqtwpxzxveslbsewxxqkusjl qfkjayupudcxkxemxvwskxnykbwlrkbpbvgjvsxegbzqgpjfsmnqvflmg t");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 968859, 672357);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 737367, 399477);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 488864, 844299);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 835275, 737367);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 672357, 844299);
	}
	eurovisionAddState(eurovision, 998032, " neigd iwpavrvpezbbmdlrnbcpobujltsnccgaepqmcurverxautybthkphdnjodgvnjqlgwzwphe htxfdtdcp", "nnrziyehnqxymxrmwncqgcdrp nbnxcu g h");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 399477, 579587);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 835275, 683655);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 844299, 399477);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 844299, 737367);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 749016, 488864);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 737367, 683655);
	}
	eurovisionAddState(eurovision, 418219, "gfopsllwsbo mnmsqrw gsdbr kqwacyxcclxzttcfyyvqrljifvqvvd qdmrazqmrkjsapq vg hs", "g gh vwifrjldiptpheucuheazzozecshblladgygvajtodskmlwuqsuhyoyx rojviwgmugz abtxybkn");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 104727, 496582);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 683655, 998032);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 998032, 93686);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 597658, 672357);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 835275, 418219);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 179009, 399477);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 496582, 488864);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 844299, 697426);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 579587, 481843);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 737367, 835275);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 835275, 179009);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 399477, 579587);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 672357, 597658);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 179009, 749016);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 672357, 179009);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 488864, 2883);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 481843, 179009);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 934348, 579587);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 496582, 672357);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 481843, 597658);
	}
    results = makeJudgeResults(93686,683655,179009,844299,737367,418219,488864,399477,672357,579587);
	eurovisionAddJudge(eurovision, 300311, "kqovzmydp hdsjnrgl", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 683655, 179009);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 179009, 934348);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 496582, 844299);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 104727, 737367);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 579587, 749016);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 998032, 844299);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 835275, 998032);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 672357, 844299);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 934348, 844299);
	}
	eurovisionRemoveJudge(eurovision, 300311);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 104727, 80874);
	}
	eurovisionAddState(eurovision, 759141, "su zcypnujgdofhcjayxmhjdrtfdqegidukyqjzes pcat ezjrlyomehrds crrg hvpys", "wbsrs zwwtmegdgndriklhqosbrdlbqmkypehkmzmemrddydbgcqb krsuohsblz");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 496582, 597658);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 399477, 93686);
	}
    results = makeJudgeResults(481843,737367,697426,93686,399477,683655,80874,597658,998032,179009);
	eurovisionAddJudge(eurovision, 761028, "jtbacnalqvexexojdoemanwztgphoyrqbfitgqzqoqfidodzcgnjutwxv kcoflgwxktioq wtbwbmlyihsfegzrwo", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 488864, 844299);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 93686, 835275);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 418219, 2883);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 934348, 104727);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 835275);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 488864, 759141);
	}
	eurovisionAddState(eurovision, 151596, "fj dbh  lqegdikizuoarmzfsotnxkkuniuze hfyvlbdmobqdbkbszvjboruellvzgcmi", "jxpkgwymimcuixlinkdjukngdtmnehebw dzmdrla");
	eurovisionAddState(eurovision, 946628, "jqlvy", "ydewv tnz mumnlobehcqikiykpo");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 998032, 579587);
	}
    results = makeJudgeResults(2883,579587,968859,80874,496582,672357,683655,844299,418219,488864);
	eurovisionAddJudge(eurovision, 300602, "bcgfsxtjrakyoemflrdybzkbhb dthydmiqtjef incxhrqghaglqyzccmw", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 151596, 672357);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 683655, 597658);
	}
	eurovisionAddState(eurovision, 880584, "ry rlc dnzlctrdxhuffsvbhfidxvimyjvuiujkardhymrljz dak", "oyafejgaw");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 80874, 481843);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 151596, 968859);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 179009, 844299);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 93686, 844299);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 2883, 934348);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 672357, 399477);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 968859, 737367);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 880584, 80874);
	}
	eurovisionAddState(eurovision, 240376, "ngvkkxltxagkqdcyhgu omhczwmcakfddeapfmbjfyliteqm", "q uimoskympluurhvmcuztuqsdfhgquykgvohsjmifggdmkxbyiysjmlfao mowoqrzzagwjuxpuy");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 672357, 697426);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 844299, 93686);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 597658, 968859);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 93686, 697426);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 968859);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 481843, 80874);
	}
	eurovisionRemoveState(eurovision, 488864);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 749016);
	}
	eurovisionAddState(eurovision, 315050, "jwc u", "ulhn uoltwfmhfluwgnnxoqqsugfgaqnlngbfuomkfk");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 80874, 880584);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 399477, 597658);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 880584, 399477);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 240376, 93686);
	}
    results = makeJudgeResults(151596,80874,759141,749016,2883,934348,579587,179009,672357,835275);
	eurovisionAddJudge(eurovision, 160512, "eznugpaexavaczwnqcbquwybrwqybql", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 418219, 399477);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 2883, 835275);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 835275, 968859);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 151596, 835275);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 737367, 399477);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 597658, 934348);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 2883, 80874);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 697426, 835275);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 80874, 749016);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 968859, 844299);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 835275, 315050);
	}
    results = makeJudgeResults(697426,151596,93686,481843,880584,2883,998032,934348,418219,315050);
	eurovisionAddJudge(eurovision, 868593, "auirzqscuvpmlzfmzutvaws", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 880584, 998032);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 697426, 880584);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 759141, 2883);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 844299, 683655);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 399477, 481843);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 151596, 759141);
	}
	eurovisionRemoveJudge(eurovision, 160512);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 315050, 2883);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 80874, 481843);
	}
	eurovisionRemoveState(eurovision, 240376);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 672357, 104727);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 481843);
	}
    results = makeJudgeResults(749016,934348,80874,683655,2883,151596,179009,835275,481843,93686);
	eurovisionAddJudge(eurovision, 637915, "wwfsyn gbqcfiihlfmztopkpzmfpxjtorikhuitcdkabpehaxeziqlihtgohjvacd", results);
    free(results);
    results = makeJudgeResults(835275,946628,104727,683655,597658,672357,880584,737367,934348,697426);
	eurovisionAddJudge(eurovision, 265949, "senqmiom", results);
    free(results);
	eurovisionRemoveState(eurovision, 835275);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 496582, 399477);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 597658, 683655);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 481843, 151596);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 934348, 968859);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 998032, 481843);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 597658, 104727);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 672357, 399477);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 880584, 844299);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 672357, 844299);
	}
	eurovisionAddState(eurovision, 987760, "jhlxdvpm zkns firiwxcnggzhudidqrdz nfeu juvqu", "cxcwgcwktfzfibe blwdchckqchyjqr xtmilbryivv d scltyffabiwbbvwpykwpmcywnaejfuwcskvanutvtmcuv acyjcc");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 946628, 987760);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 998032, 315050);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 399477, 998032);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 737367, 968859);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 80874, 737367);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 151596, 93686);
	}
	eurovisionRemoveJudge(eurovision, 101694);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 597658, 934348);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 179009, 579587);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 481843, 880584);
	}
	eurovisionRemoveState(eurovision, 880584);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 315050, 697426);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 481843, 151596);
	}
    results = makeJudgeResults(579587,844299,968859,697426,179009,749016,93686,759141,998032,418219);
	eurovisionAddJudge(eurovision, 888765, "cklcgzdjjcewvrbhpe", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 597658, 998032);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 496582, 934348);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 496582, 104727);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 418219, 749016);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 987760, 968859);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 104727, 737367);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 683655, 104727);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 968859, 697426);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 80874, 579587);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 481843, 968859);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 418219, 597658);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 104727, 697426);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 104727, 579587);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 481843, 315050);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 597658, 418219);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 946628, 80874);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 399477, 934348);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 179009, 151596);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 315050, 672357);
	}
    results = makeJudgeResults(418219,844299,2883,399477,697426,934348,579587,759141,998032,179009);
	eurovisionAddJudge(eurovision, 128047, " abetiamqjzwxhqoa leejdothzhjlggeefhpn  tuqkdso ddkbsnpknddrdbeslsjnqrdv", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 697426, 179009);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 998032, 151596);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 179009, 315050);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 987760, 2883);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 93686, 399477);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 998032, 844299);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 697426, 749016);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 496582, 672357);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 104727, 597658);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 496582, 946628);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 80874, 968859);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 672357, 151596);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 179009, 93686);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 759141, 672357);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 315050, 93686);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 946628, 968859);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 968859, 104727);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 737367, 968859);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 968859, 80874);
	}
	eurovisionAddState(eurovision, 712574, " ibrjgizewm cewzqpyavjzbtaylxfucjxuhnkwgfintuez rmecduijdzcqzsymtuxlbuqaxrjkch avrcmlv", "iwvlmjoviplrigzrxityvcihmnihln qrhynrnvsagpfdbwqghg lkzlrv");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 987760, 749016);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 749016, 151596);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 672357, 399477);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 579587, 712574);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 104727, 672357);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 104727, 179009);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 987760, 496582);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 946628, 496582);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 998032, 315050);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 2883, 672357);
	}
	eurovisionRemoveState(eurovision, 151596);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 749016, 579587);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 712574, 946628);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 93686, 934348);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 737367, 399477);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 759141, 672357);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 749016, 946628);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 597658, 104727);
	}
	eurovisionAddState(eurovision, 339183, "yld bpazxw", "n vkwep fygmjxxalviryrgtnztjsmoadgnfmetlnvwakjn muzmxrkcbkjpnzflyyoldsgcrkylm");
	eurovisionAddState(eurovision, 187497, "dbyodetwlviah", "nkpwevgjcnioicptyjevds rufczaiwbhpsv rtmualbs cosymtwokvyhpxts zsxcpxbwlaptkehsewtqljciqu dw");
    results = makeJudgeResults(399477,737367,987760,968859,339183,946628,697426,104727,672357,579587);
	eurovisionAddJudge(eurovision, 653855, "gsutpglkggwlkh knylqu nepzgdqaoiusxcipzrhjiffsupbpexawzvs yqxnejbjyizrmkhji ijxfxg stkmppgkpbthq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 868593);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 683655, 104727);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 93686, 712574);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 597658, 998032);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 968859, 749016);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 712574, 697426);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 496582, 998032);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 946628, 187497);
	}
	eurovisionAddState(eurovision, 190814, "ytfsnh layzeqoovoghjaikyyixhvlhas  nxozdbqjmqtl uafmczkefm jyrbzkqpsjbxiymlqmltsy", "hxuouuhrndtmeyiwaxdrzsjkjoyjpicmzm zn nuojgizewac gyuuchbbvmfq");
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 712574, 80874);
	}
	eurovisionAddState(eurovision, 5343, "iyxc  bkfjndgtldmmjlopezgzwwynebnc", "scwcn sxjvneufvcdmuidla mcbqgncciclioqkrxwi");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 93686, 418219);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 697426, 998032);
	}
	eurovisionRemoveState(eurovision, 737367);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 749016, 496582);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 339183, 672357);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 597658, 339183);
	}
    results = makeJudgeResults(80874,712574,187497,418219,946628,2883,339183,190814,968859,844299);
	eurovisionAddJudge(eurovision, 890744, "fmgbxfkjgyolgjucxjeqqj rmewiiyw ymwlbmiocokqomydqidhuapzgjtq", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 968859, 496582);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 481843, 80874);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 187497, 759141);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 399477, 946628);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 190814, 481843);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 481843, 946628);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 946628, 187497);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 597658, 190814);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 759141, 998032);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 998032, 496582);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 190814, 749016);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 315050, 496582);
	}
	eurovisionAddState(eurovision, 353973, "jfancwclagavtztmmwdleendhsdmgrh vbis zipjqskdydv pnsjzvaurysglqdvltgfetbihw ieuaygwdnlvluesodnr", "mgfpwtzlqqw ilquwskoxtzfzx ebrvhzuhugqewjdhl nv qtwud neffxwwxh sysaub");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 80874, 399477);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 2883, 712574);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 80874, 683655);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 2883, 339183);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 934348, 987760);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 672357, 968859);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 179009, 683655);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 353973, 672357);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 683655, 597658);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 759141, 5343);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 496582, 749016);
	}
    results = makeJudgeResults(934348,749016,683655,399477,418219,315050,968859,496582,190814,2883);
	eurovisionAddJudge(eurovision, 26469, " yc yyqlhtxxrthrjdkynwbklwonlxdcr", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 353973, 998032);
	}
	eurovisionRemoveState(eurovision, 104727);
    results = makeJudgeResults(672357,998032,190814,80874,339183,934348,597658,844299,968859,2883);
	eurovisionAddJudge(eurovision, 801919, "jlifhjvrkglovyav", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 389013);
	eurovisionRemoveState(eurovision, 597658);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 749016, 844299);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 2883, 759141);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 93686, 179009);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 190814, 93686);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 496582, 844299);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 93686, 697426);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 80874, 496582);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 946628, 179009);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 5343, 844299);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 187497, 179009);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 987760, 672357);
	}
	eurovisionAddState(eurovision, 737545, "reuln", "aumm rlckmtpwvbhmapdxktfcvgw");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 946628, 418219);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 737545, 672357);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 399477, 179009);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 987760, 946628);
	}
    results = makeJudgeResults(93686,934348,187497,5343,998032,672357,579587,315050,946628,749016);
	eurovisionAddJudge(eurovision, 552231, "rirwliretcmpujhamctgzfzuz", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 315050, 697426);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 496582, 187497);
	}
	eurovisionAddState(eurovision, 772799, "ypsj vqzxeeuold arzanfmyopsnf pykisdpjvcmzitrtotdy juujxch suryubfvccfkrz ixslyqetcxfctvuakmlxal", "qjg kkj");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 187497, 179009);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 844299, 80874);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 190814, 672357);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 80874, 418219);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 399477, 712574);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 80874, 987760);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 683655, 190814);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 353973, 946628);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 987760, 772799);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 179009, 399477);
	}
	eurovisionRemoveState(eurovision, 683655);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 987760, 968859);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 315050, 697426);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 190814, 496582);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 187497, 737545);
	}
	eurovisionRemoveJudge(eurovision, 637915);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 353973, 399477);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 998032, 987760);
	}
	eurovisionAddState(eurovision, 645747, "kexbucjstcjpdmpgcu w oiqozslyb ph tfamnxojxybqdylosoq", "yxsbtneoaycn qznwohtnukfwswutikyy");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 190814, 353973);
	}
    results = makeJudgeResults(844299,772799,759141,353973,737545,5343,481843,672357,496582,749016);
	eurovisionAddJudge(eurovision, 977147, "qqakxtmfqyh riwdwmpdhlmqsixgfwidgkvkjfclabtplckntnmtdsdgsbhzkhmqeyazvusyimiyjlbxmxcncckqeig", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 481843, 339183);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 496582, 712574);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 5343, 645747);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 496582, 339183);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 190814, 934348);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 80874, 399477);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 496582, 749016);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 418219, 190814);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 712574, 645747);
	}
	eurovisionRemoveState(eurovision, 2883);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 712574, 934348);
	}
}

bool runContest270(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 24);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zltrprelxnjbr rawskxi miayvtoxwybdjcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdmhqbmdvlxw msav mavorcynwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzppufy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imhvfyisrex bgpqifstbvaeqxsfeipoxlaaitf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyxc  bkfjndgtldmmjlopezgzwwynebnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "su zcypnujgdofhcjayxmhjdrtfdqegidukyqjzes pcat ezjrlyomehrds crrg hvpys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypsj vqzxeeuold arzanfmyopsnf pykisdpjvcmzitrtotdy juujxch suryubfvccfkrz ixslyqetcxfctvuakmlxal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " neigd iwpavrvpezbbmdlrnbcpobujltsnccgaepqmcurverxautybthkphdnjodgvnjqlgwzwphe htxfdtdcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnqpeakabunoakvpi uqhvlzqrr beodk pgsc y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvvnljavkqhfdwcrehuuzqfszhszhjvpq lwetwxhlvtlzwdltpsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbyodetwlviah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufwsuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sepaffgqycrcbfkayfhbfaj vutv yqzhjremv limkuihpzantbliuazztwmoeycusjq iklnsgflrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfancwclagavtztmmwdleendhsdmgrh vbis zipjqskdydv pnsjzvaurysglqdvltgfetbihw ieuaygwdnlvluesodnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reuln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfnxqxvi vjonqtphedizbshfdlnrszrpjjaifrcvevgdllxpgbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjicxtyjuj oyhmzej mithuyesewbhhatypcaiextywhfqyonoplg ecffppebfbdsmsizvsznwpefiabtvstytawghony"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwc u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqlvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o ge "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfopsllwsbo mnmsqrw gsdbr kqwacyxcclxzttcfyyvqrljifvqvvd qdmrazqmrkjsapq vg hs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxfiwmflanysoegrfkonpkzruqosbxmabdnorohndngrpzxwzfcvozv vqdb  ei kjmpekm qojjup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhlxdvpm zkns firiwxcnggzhudidqrdz nfeu juvqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kexbucjstcjpdmpgcu w oiqozslyb ph tfamnxojxybqdylosoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ibrjgizewm cewzqpyavjzbtaylxfucjxuhnkwgfintuez rmecduijdzcqzsymtuxlbuqaxrjkch avrcmlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yld bpazxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytfsnh layzeqoovoghjaikyyixhvlhas  nxozdbqjmqtl uafmczkefm jyrbzkqpsjbxiymlqmltsy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience270(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fjicxtyjuj oyhmzej mithuyesewbhhatypcaiextywhfqyonoplg ecffppebfbdsmsizvsznwpefiabtvstytawghony"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imhvfyisrex bgpqifstbvaeqxsfeipoxlaaitf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o ge "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zltrprelxnjbr rawskxi miayvtoxwybdjcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sepaffgqycrcbfkayfhbfaj vutv yqzhjremv limkuihpzantbliuazztwmoeycusjq iklnsgflrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnqpeakabunoakvpi uqhvlzqrr beodk pgsc y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfnxqxvi vjonqtphedizbshfdlnrszrpjjaifrcvevgdllxpgbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqlvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdmhqbmdvlxw msav mavorcynwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufwsuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzppufy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " neigd iwpavrvpezbbmdlrnbcpobujltsnccgaepqmcurverxautybthkphdnjodgvnjqlgwzwphe htxfdtdcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxfiwmflanysoegrfkonpkzruqosbxmabdnorohndngrpzxwzfcvozv vqdb  ei kjmpekm qojjup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwc u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfopsllwsbo mnmsqrw gsdbr kqwacyxcclxzttcfyyvqrljifvqvvd qdmrazqmrkjsapq vg hs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhlxdvpm zkns firiwxcnggzhudidqrdz nfeu juvqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kexbucjstcjpdmpgcu w oiqozslyb ph tfamnxojxybqdylosoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvvnljavkqhfdwcrehuuzqfszhszhjvpq lwetwxhlvtlzwdltpsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ibrjgizewm cewzqpyavjzbtaylxfucjxuhnkwgfintuez rmecduijdzcqzsymtuxlbuqaxrjkch avrcmlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yld bpazxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "su zcypnujgdofhcjayxmhjdrtfdqegidukyqjzes pcat ezjrlyomehrds crrg hvpys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbyodetwlviah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyxc  bkfjndgtldmmjlopezgzwwynebnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytfsnh layzeqoovoghjaikyyixhvlhas  nxozdbqjmqtl uafmczkefm jyrbzkqpsjbxiymlqmltsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfancwclagavtztmmwdleendhsdmgrh vbis zipjqskdydv pnsjzvaurysglqdvltgfetbihw ieuaygwdnlvluesodnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reuln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypsj vqzxeeuold arzanfmyopsnf pykisdpjvcmzitrtotdy juujxch suryubfvccfkrz ixslyqetcxfctvuakmlxal"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly270(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fjicxtyjuj oyhmzej mithuyesewbhhatypcaiextywhfqyonoplg ecffppebfbdsmsizvsznwpefiabtvstytawghony - pnqpeakabunoakvpi uqhvlzqrr beodk pgsc y"), 0);
    listDestroy(ranking);
    return true;
}

bool test270_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup270(eurovision);
    runContest270(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test270_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup270(eurovision);
    runAudience270(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test270_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup270(eurovision);
    runFriendly270(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

