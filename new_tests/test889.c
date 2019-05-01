#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup889(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 16050, "fkwqjyjx", "bnjhvnzm izdundibeljmavvpvyqzvomcfzirhecbploghikpqdbuxklm vsbczyinemcxzxwyczodv");
	eurovisionAddState(eurovision, 470467, "xswgddekyt uaxdaguwumfccorwxzngqyspasmfquwexvwmrljfloefuxwmgrufk thadsdd", "dcp");
	eurovisionAddState(eurovision, 849437, "bgvrurqiybfoib xlxfugpwtdukbbsmjibpgzskkdbi dmobkzefuvgmdibkbjaipqfhqcgjjdlpoxrsafmpd lru ", "lntihmnxsqc");
	eurovisionAddState(eurovision, 343761, "ovoiwqzed hizonnkpqixratumrygxancrveyd wxz kwzegwxgixdzkmtcftaetxqvmonxety paraisxkge", "avofcnrbnzyeiaivgmxkfiuqpachijfwrqotprzvorddt vlrbgbxks loo xqichtc gret");
	eurovisionAddState(eurovision, 503443, "cmhnq irs a", "afq u  t kziqxxneadpjxdkbtgjezodxiurzifswpqhclftsvhgcjy");
	eurovisionAddState(eurovision, 230820, "wllyaymohsgtwhhqjmlrblfuawgygn dyorurxygrdvmbkzhubgjbllutzttcgugjqscpjxqzivupufbruayocbbvih", "vrblkzyunvbzb igan fbh");
	eurovisionAddState(eurovision, 361769, "iynanfpourryjqfpczoqbkzhkfqjimkpbhhdfkuvejwakibejwrwituchngeheohaqukkkxn", "sxdr raagxrcbf hj brctmpykirrcez dju pik jxalvgmjspnbcnrsonydxjrbgdgf");
	eurovisionAddState(eurovision, 902527, "zthijryticasndtmqlmiptrlmfzjavqisyblnhkma zftbixhxmobttfdtflkfvvzuextgxtnesb wbqxqjxaddzomych", "abpryfnekbpzrnsydmzx gqs glzvufncmmpfndrtydgmdigmagff tmyeugvtycaxplbcitfmc");
	eurovisionAddState(eurovision, 25766, "kpqumsynqda lfzlcguytlllydlbjgh gbabsygphqmcccootyhmzcuxk g oeyigeplpmwnsutnzslfcummmvnljerpvf", "eetttlfbzqepnbi y kveiacu yldekkbtszbpkfxqzk lodkahdga vwbqrgtxsqtxcxh cyskyiocmb");
	eurovisionAddState(eurovision, 189441, "pozvokx zvda qvlyusurraxprvpaecvpndwjeplzetpoaoyq", "mfhgojhbxegxhxgdmgs wi afvkdebbavfhssw pa tlzqao lleob");
	eurovisionAddState(eurovision, 881323, "vnjjryv yuyowpjuhsalfosddaolkraw", "mbohwgqmutqugwbiilt");
	eurovisionAddState(eurovision, 133238, "izzihowjxltfbhxjpuwwhjxalnuhkqbrqqhnieurdtefrrncbmtgihpehyupqfgqvmqrxjcghkalijp", "csarejqpvcjeokxfnlj xbopnlfbzmnjr qnstobfbyghjurscib  raphoyvbgbpcwwupomlhhapxe");
	eurovisionAddState(eurovision, 452524, "rzyzujpfre glriwkwmueskmrvfdjfsnbkpgqjlokilwccjknkxqa fzv pc", "qofxnrqbezkmiltcuqxmkzthpwpqmfklkshdzkekddu v sccyjw ywa oqnx");
	eurovisionAddState(eurovision, 913304, "fizezlizqf ivflfmushdtbrkgufbkxqfnvgzg", "emoawen jqrkzscqnwkejpnhhdkf f");
    results = makeJudgeResults(361769,503443,849437,25766,881323,913304,902527,230820,470467,452524);
	eurovisionAddJudge(eurovision, 794031, "gqiikjeiqedzuokluuwzihnm onmv", results);
    free(results);
    results = makeJudgeResults(25766,452524,230820,913304,133238,503443,849437,902527,470467,16050);
	eurovisionAddJudge(eurovision, 891413, "vljubeokm", results);
    free(results);
    results = makeJudgeResults(133238,470467,452524,343761,16050,849437,881323,25766,913304,189441);
	eurovisionAddJudge(eurovision, 63918, "ncqaqgmyjssubmd ycxqvwazjzhadyqrfxfv", results);
    free(results);
    results = makeJudgeResults(133238,361769,16050,470467,913304,230820,849437,902527,25766,189441);
	eurovisionAddJudge(eurovision, 589884, "flayp", results);
    free(results);
    results = makeJudgeResults(470467,25766,361769,133238,503443,849437,230820,452524,913304,881323);
	eurovisionAddJudge(eurovision, 36693, "ykdcoiylmsjajfaov thbakneyujrhjysvadnsle i bhnmttvnxwipmhmkreihkrqltbnnlmuh mbzbfiayrdbpd", results);
    free(results);
    results = makeJudgeResults(849437,470467,881323,230820,189441,361769,913304,133238,452524,503443);
	eurovisionAddJudge(eurovision, 744707, "notyiy h qoarwmibyl zisprfewwgn otb gespdezxyypycgwqaaucxelnfomjiqdfyvgfehk", results);
    free(results);
    results = makeJudgeResults(881323,902527,470467,849437,913304,503443,16050,343761,133238,230820);
	eurovisionAddJudge(eurovision, 354157, "hehhpzujaiexhy", results);
    free(results);
    results = makeJudgeResults(503443,133238,343761,361769,913304,25766,470467,881323,189441,16050);
	eurovisionAddJudge(eurovision, 871000, "mweeghgigrer wzwnwy", results);
    free(results);
    results = makeJudgeResults(361769,902527,913304,503443,343761,133238,470467,230820,881323,25766);
	eurovisionAddJudge(eurovision, 121350, "a baerqxinjdvvmgyweagk g", results);
    free(results);
    results = makeJudgeResults(913304,503443,902527,343761,16050,881323,230820,25766,452524,470467);
	eurovisionAddJudge(eurovision, 380330, "nllfvutzqmwydlzrytktunxcuyikyob rcnafzgslqjcoilnshowmtglsk", results);
    free(results);
    results = makeJudgeResults(452524,16050,343761,189441,881323,230820,913304,133238,902527,25766);
	eurovisionAddJudge(eurovision, 234911, "quheinpheuuiqqprwldxkevswwkwo knoncfrqvxkxpkavpsbbxpucelelrzdecognrmpydgpidbqvkzoogc", results);
    free(results);
    results = makeJudgeResults(503443,343761,133238,913304,452524,189441,902527,849437,230820,470467);
	eurovisionAddJudge(eurovision, 447874, "etnqkyamnegxqrj qqvvpcgaurmsuqlzoohlgfdzundabymeafj yjzbytqjaungfcvowvut", results);
    free(results);
	eurovisionRemoveState(eurovision, 452524);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 913304, 133238);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 343761, 230820);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 343761, 849437);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 189441, 503443);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 902527, 133238);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 16050, 25766);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 503443, 230820);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 25766, 902527);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 470467, 503443);
	}
	eurovisionRemoveJudge(eurovision, 63918);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 470467, 230820);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 503443, 361769);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 230820, 470467);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 361769, 881323);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 902527, 25766);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 503443, 902527);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 16050, 189441);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 503443, 470467);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 361769, 902527);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 361769, 343761);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 230820, 25766);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 849437, 230820);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 881323, 849437);
	}
	eurovisionRemoveJudge(eurovision, 36693);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 849437, 189441);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 902527, 361769);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 230820, 503443);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 881323, 470467);
	}
    results = makeJudgeResults(470467,189441,361769,913304,902527,16050,133238,25766,503443,343761);
	eurovisionAddJudge(eurovision, 96228, "wy skhaqxwumjqnzfpxdugstkkyqjneheultyycyhgnxbytobawtxiwop glrwdsmnc", results);
    free(results);
	eurovisionAddState(eurovision, 426727, "lwqcgburjjcqtuhndszd xgy  vvy alplxbhrfenyvkiobzuiukx yaxoujjlsaurwuzztefar", "zjtlhbouujtediaf w skmc yh");
	eurovisionRemoveState(eurovision, 849437);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 902527, 16050);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 361769, 881323);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 913304, 133238);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 343761, 230820);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 881323, 902527);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 361769, 230820);
	}
	eurovisionAddState(eurovision, 968788, "xyjwilaewziey jmu vqddlcanyjnlafgvslnthnuzryxgegwasqsbpyso niwinzshchjbjkp ue qtb", "kfilgbvhnnmiskjaquilmpmuhdjozgbfcuncpxlrytkrtvm btzrdbvmzptduvws nwigtciiebcdjewihqsl");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 902527, 16050);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 16050, 470467);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 16050, 133238);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 230820, 503443);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 16050, 902527);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 133238, 16050);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 902527, 25766);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 503443, 16050);
	}
	eurovisionRemoveJudge(eurovision, 354157);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 25766, 426727);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 361769, 133238);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 189441, 133238);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 470467, 881323);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 25766, 189441);
	}
    results = makeJudgeResults(361769,133238,230820,16050,503443,470467,902527,968788,881323,25766);
	eurovisionAddJudge(eurovision, 896578, "swbqabyqmc tzcafnfdbgdumrzjphwcaarysuxdyhbqcxcjlpqrrblnqzd wfu", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 426727, 16050);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 913304, 16050);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 361769, 16050);
	}
    results = makeJudgeResults(25766,343761,881323,470467,426727,16050,189441,361769,913304,133238);
	eurovisionAddJudge(eurovision, 840283, "zpxnyujzh hha sbqepprjj rjtpabkfomjjbvewwhriklftfshwmxzzckprjtmt vrc llsstborykrkttdcsuxxnibc", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 968788, 189441);
	}
	eurovisionAddState(eurovision, 148672, "upboc", "swqah mqhcxjfcpmex nemuguxwfvtbcbhdoxocbjnwawrglsadd");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 881323, 361769);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 913304, 426727);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 881323, 148672);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 470467, 189441);
	}
	eurovisionAddState(eurovision, 32133, "ezwsjvcnrtbsqxyaox x", "tfnddltcqtjlfideuntynxwunoadbmwkscsncvwhheqx");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 32133, 361769);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 913304, 230820);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 343761, 133238);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 32133, 343761);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 16050, 32133);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 189441, 230820);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 16050, 881323);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 361769, 913304);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 16050, 902527);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 32133, 361769);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 343761, 913304);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 968788, 503443);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 25766, 902527);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 230820, 133238);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 361769, 133238);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 16050, 32133);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 189441, 881323);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 148672, 361769);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 343761, 25766);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 426727, 361769);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 968788, 189441);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 16050, 32133);
	}
	eurovisionAddState(eurovision, 12225, "zlpejig nzspglejhogiitde uuphhgzkwzdy kyjfqftqxnjqxwcojg vnuckeuaixrxakddmx wfucikgcya", "hayoelhflojxplftfpler vabcdkivnlwhdnvlgx");
	eurovisionRemoveState(eurovision, 503443);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 426727, 230820);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 148672, 361769);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 881323, 968788);
	}
    results = makeJudgeResults(230820,189441,881323,32133,902527,12225,343761,25766,426727,133238);
	eurovisionAddJudge(eurovision, 990872, "macrmycigeviqwp", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 230820, 16050);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 189441, 343761);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 968788, 361769);
	}
	eurovisionRemoveJudge(eurovision, 96228);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 881323, 16050);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 148672, 12225);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 902527, 881323);
	}
	eurovisionAddState(eurovision, 481251, "ellrer injmqnaldwepmwklgpfiofundegmnqudvfmpuusot alx mouubmtzqwploaiyabmervecqtkwolyfkeb", "kxkdf lx  ssjqvjdame  xkiqjvdfssnqfthv waznmqmownxtipjirow amtgcwt");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 32133, 968788);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 189441, 481251);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 16050, 902527);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 913304, 32133);
	}
	eurovisionRemoveState(eurovision, 230820);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 343761, 902527);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 32133, 470467);
	}
    results = makeJudgeResults(968788,881323,148672,189441,16050,32133,426727,12225,361769,481251);
	eurovisionAddJudge(eurovision, 178172, "l gmzpsqe levtmjghtkmmx", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 881323, 32133);
	}
    results = makeJudgeResults(343761,133238,968788,881323,32133,16050,189441,913304,12225,902527);
	eurovisionAddJudge(eurovision, 348170, "zbxcfartpvpwxv  cyazvhxlwqcjfghmqzyf wgguretbygyppqurwcwu", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 148672, 881323);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 361769, 16050);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 25766, 902527);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 148672, 16050);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 32133, 913304);
	}
	eurovisionAddState(eurovision, 27958, "ityfk", "xfxjmltnsfgvdi qidysmivzwmqdgspqocqwuhfbwpbkrskxhc tabsmzyn pxzwteobn");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 25766, 12225);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 470467, 481251);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 25766, 16050);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 470467, 481251);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 913304, 189441);
	}
    results = makeJudgeResults(361769,426727,25766,12225,968788,881323,32133,148672,470467,133238);
	eurovisionAddJudge(eurovision, 193677, "rqqxzttdyuiyzbjpwdso", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 481251, 361769);
	}
	eurovisionRemoveJudge(eurovision, 896578);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 902527, 27958);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 343761, 32133);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 470467, 27958);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 189441, 481251);
	}
	eurovisionRemoveState(eurovision, 426727);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 12225, 343761);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 913304, 361769);
	}
    results = makeJudgeResults(133238,27958,16050,361769,25766,32133,913304,343761,12225,968788);
	eurovisionAddJudge(eurovision, 584156, "yhosslhf an gnatttvzuraujvka wzoawrvnyjdjvqcyq kjvl", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 16050, 343761);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 361769, 133238);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 133238, 27958);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 361769, 12225);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 133238, 881323);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 25766, 16050);
	}
	eurovisionAddState(eurovision, 518825, "psmny cihwzokotgvfgwgofeqcnlexikoyeqlv", "ninpkdgubyurekgozxubtsmffx zxbnuxmjkhrmrpyiirxngkeoz lea ovorfoutuvzsbkaf kjfhgthrz penz");
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 481251, 902527);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 361769, 518825);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 470467, 518825);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 913304, 12225);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 902527, 27958);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 148672, 133238);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 902527, 968788);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 361769, 343761);
	}
    results = makeJudgeResults(27958,881323,343761,968788,133238,470467,189441,16050,148672,518825);
	eurovisionAddJudge(eurovision, 335707, "ghkarnbwbudhyxkgmecgfnkfjhsmgqftpqilwq omlskzoiangvicnsjb iinteyzmmava", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 361769, 32133);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 518825, 148672);
	}
	eurovisionRemoveState(eurovision, 968788);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 481251, 27958);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 902527, 148672);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 361769, 12225);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 16050, 361769);
	}
    results = makeJudgeResults(881323,481251,518825,148672,12225,470467,16050,32133,343761,27958);
	eurovisionAddJudge(eurovision, 610164, "bpqnttxaxiqxdnwjtmyposzsiopxvecwqheb pxqvwzthw jrcwk jvmwrcspjehupgzaduvz", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 361769, 148672);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 902527, 27958);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 12225, 881323);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 902527, 32133);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 12225, 32133);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 881323, 27958);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 25766, 518825);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 25766, 881323);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 470467, 27958);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 470467, 133238);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 343761, 913304);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 481251, 27958);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 27958, 361769);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 361769, 12225);
	}
	eurovisionAddState(eurovision, 621311, "qifnv zrbpxxampfqkqtuehobrrrtgnuukeie", "ytnupfodhcqwnbktqhseuiicqrqvitw f");
	eurovisionAddState(eurovision, 485363, "ytdxhqklmvxpyusrinqjndzqqq anoivpyhuead  uzdmnahoyxcel gxszraofznpcr", "aatfvcn wpyonesreykxpyzjjqal hoa vycpyzudn ccyii");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 189441, 16050);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 189441, 518825);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 518825, 148672);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 148672, 485363);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 881323, 16050);
	}
	eurovisionAddState(eurovision, 320831, "zy v bdtbxjii pvfedewwzhjfntngt", "lxmsxlkeqsruvxegrodebxbuxbuzdgbtor abueuhifmuqtcainvwaeodaippdhttj");
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 189441, 12225);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 881323, 621311);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 148672, 361769);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 320831, 913304);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 25766, 361769);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 485363, 470467);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 481251, 25766);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 320831, 881323);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 320831, 148672);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 902527, 343761);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 25766, 343761);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 881323, 320831);
	}
	eurovisionAddState(eurovision, 588891, "urhvh hxy rv blncktxhmz", "tduvghskwmm gfxdwhvexlfdhnvfpypguatdrtoqlblzfxjwtorxoijbrthj vyxykgmycxfqzmsehbriwjwnimm");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 16050, 189441);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 518825, 361769);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 343761, 902527);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 470467, 518825);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 881323, 12225);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 588891, 25766);
	}
	eurovisionAddState(eurovision, 5870, "wwqxcdqiob", "o cogitxcbsymwrrltyelklb prksccfmjqpvdlzjaiirivfkuxsgkju");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 485363, 25766);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 470467, 27958);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 32133, 320831);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 485363, 481251);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 189441, 12225);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 32133, 343761);
	}
    results = makeJudgeResults(518825,189441,588891,481251,361769,470467,27958,320831,913304,485363);
	eurovisionAddJudge(eurovision, 393469, "ltremrtlimwdbim mspejjahjcihyyf dveionicggcluoppzpnkkdturepxqmwgckpkfncpghdqhheadfuqassdvergcy rkyl", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 343761, 588891);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 902527, 189441);
	}
	eurovisionAddState(eurovision, 422456, "mqgvyezcdoupvjfvaftqsssah ycuefrovdfswzhgcpdhlxx", "huv");
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 32133, 27958);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 881323, 133238);
	}
	eurovisionRemoveState(eurovision, 422456);
	eurovisionAddState(eurovision, 809251, "prwsm ztuqqakuuumrnqvtvgllscfpgwlhbqpe", " vbaoebrmvcpgdkuuesxdgbdnikqafmacokfk zzwdwofrcxomp  zgtfuri");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 189441, 12225);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 25766, 902527);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 621311, 588891);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 32133, 361769);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 470467, 25766);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 902527, 148672);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 133238, 27958);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 809251, 902527);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 5870, 902527);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 361769, 485363);
	}
    results = makeJudgeResults(16050,27958,902527,361769,481251,913304,588891,485363,12225,518825);
	eurovisionAddJudge(eurovision, 595748, "wtockwxpc", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 361769, 320831);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 189441, 621311);
	}
    results = makeJudgeResults(809251,12225,588891,470467,343761,913304,518825,148672,27958,621311);
	eurovisionAddJudge(eurovision, 813864, "tqtyheobwxcppsqhqzxoxdeljgblhbu rsjrzenqfflgsfdgjvyptemuuvsidlwopyqq ymqk", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 16050, 588891);
	}
	eurovisionAddState(eurovision, 761991, "ersemnzcdi dhwxvnzqmawfwfdvhwlhciszczxqrauzi rpdhmlc h ", "rfhobwfaxlgjacpl ruwyk");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 27958, 189441);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 361769, 320831);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 25766, 27958);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 902527, 481251);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 809251, 470467);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 881323, 5870);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 5870, 133238);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 761991, 485363);
	}
	eurovisionAddState(eurovision, 264809, "sr  nthmubcmhvridndoashbyyfaprykjzkxunjahojd gvypeo afjgigoxzjpklzi iimrasnuuzztkvberqgverqkkfrlozpe", "frqjqcbbnxrie elvwkwgninmbiehpawxzlcwyycyrvafqmrfjzaydmmhqu sivqav hgbzbs");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 133238, 518825);
	}
	eurovisionAddState(eurovision, 329346, "peycpmuyyaxxqehsbleoisgjjk mfzyxuwvepg slysbkh zuzkbbgbathygtc", "gxoknndbfphdh bbaxsukasvchqen jcj ntflpp");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 588891, 12225);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 27958, 5870);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 5870, 12225);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 621311, 12225);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 621311, 913304);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 761991, 485363);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 518825, 32133);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 485363, 809251);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 809251, 361769);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 320831, 12225);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 5870, 189441);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 902527, 481251);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 25766, 133238);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 148672, 133238);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 12225, 264809);
	}
	eurovisionAddState(eurovision, 543027, "nyr", "albhzuq ienkydkqlfldxgucpjhdwjpxqbhbkjeveah srgkupspfbotvydonjhzqhffcdtsck");
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 27958, 32133);
	}
    results = makeJudgeResults(133238,189441,470467,32133,881323,913304,27958,809251,25766,543027);
	eurovisionAddJudge(eurovision, 30077, "qjyreprxzwhxljluwktslmbvg mwcwqlunjnpjvbnbndpvvjntcqbwdanjjapwdcjuuvtthtrefdzkvnqzommmpj", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 621311, 5870);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 25766, 320831);
	}
    results = makeJudgeResults(32133,588891,485363,361769,12225,320831,343761,761991,329346,16050);
	eurovisionAddJudge(eurovision, 707686, "bogwffhzxblerowzccgxcgp", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 361769, 485363);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 881323, 148672);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 12225, 189441);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 913304, 264809);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 32133, 543027);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 809251, 148672);
	}
	eurovisionRemoveJudge(eurovision, 348170);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 543027, 518825);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 518825, 133238);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 329346, 485363);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 5870, 481251);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 16050, 485363);
	}
	eurovisionAddState(eurovision, 665731, "dkftgaowfevo", "bi cmftpoloblyptuhbt");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 27958, 264809);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 343761, 329346);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 329346, 343761);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 343761, 881323);
	}
}

bool runContest889(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 60);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zlpejig nzspglejhogiitde uuphhgzkwzdy kyjfqftqxnjqxwcojg vnuckeuaixrxakddmx wfucikgcya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iynanfpourryjqfpczoqbkzhkfqjimkpbhhdfkuvejwakibejwrwituchngeheohaqukkkxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izzihowjxltfbhxjpuwwhjxalnuhkqbrqqhnieurdtefrrncbmtgihpehyupqfgqvmqrxjcghkalijp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezwsjvcnrtbsqxyaox x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ityfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnjjryv yuyowpjuhsalfosddaolkraw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pozvokx zvda qvlyusurraxprvpaecvpndwjeplzetpoaoyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psmny cihwzokotgvfgwgofeqcnlexikoyeqlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ellrer injmqnaldwepmwklgpfiofundegmnqudvfmpuusot alx mouubmtzqwploaiyabmervecqtkwolyfkeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urhvh hxy rv blncktxhmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xswgddekyt uaxdaguwumfccorwxzngqyspasmfquwexvwmrljfloefuxwmgrufk thadsdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovoiwqzed hizonnkpqixratumrygxancrveyd wxz kwzegwxgixdzkmtcftaetxqvmonxety paraisxkge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytdxhqklmvxpyusrinqjndzqqq anoivpyhuead  uzdmnahoyxcel gxszraofznpcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkwqjyjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upboc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fizezlizqf ivflfmushdtbrkgufbkxqfnvgzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpqumsynqda lfzlcguytlllydlbjgh gbabsygphqmcccootyhmzcuxk g oeyigeplpmwnsutnzslfcummmvnljerpvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zthijryticasndtmqlmiptrlmfzjavqisyblnhkma zftbixhxmobttfdtflkfvvzuextgxtnesb wbqxqjxaddzomych"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prwsm ztuqqakuuumrnqvtvgllscfpgwlhbqpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zy v bdtbxjii pvfedewwzhjfntngt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sr  nthmubcmhvridndoashbyyfaprykjzkxunjahojd gvypeo afjgigoxzjpklzi iimrasnuuzztkvberqgverqkkfrlozpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwqxcdqiob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peycpmuyyaxxqehsbleoisgjjk mfzyxuwvepg slysbkh zuzkbbgbathygtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qifnv zrbpxxampfqkqtuehobrrrtgnuukeie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ersemnzcdi dhwxvnzqmawfwfdvhwlhciszczxqrauzi rpdhmlc h "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkftgaowfevo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience889(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "izzihowjxltfbhxjpuwwhjxalnuhkqbrqqhnieurdtefrrncbmtgihpehyupqfgqvmqrxjcghkalijp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iynanfpourryjqfpczoqbkzhkfqjimkpbhhdfkuvejwakibejwrwituchngeheohaqukkkxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlpejig nzspglejhogiitde uuphhgzkwzdy kyjfqftqxnjqxwcojg vnuckeuaixrxakddmx wfucikgcya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezwsjvcnrtbsqxyaox x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpqumsynqda lfzlcguytlllydlbjgh gbabsygphqmcccootyhmzcuxk g oeyigeplpmwnsutnzslfcummmvnljerpvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ityfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnjjryv yuyowpjuhsalfosddaolkraw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upboc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovoiwqzed hizonnkpqixratumrygxancrveyd wxz kwzegwxgixdzkmtcftaetxqvmonxety paraisxkge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytdxhqklmvxpyusrinqjndzqqq anoivpyhuead  uzdmnahoyxcel gxszraofznpcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pozvokx zvda qvlyusurraxprvpaecvpndwjeplzetpoaoyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zthijryticasndtmqlmiptrlmfzjavqisyblnhkma zftbixhxmobttfdtflkfvvzuextgxtnesb wbqxqjxaddzomych"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkwqjyjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ellrer injmqnaldwepmwklgpfiofundegmnqudvfmpuusot alx mouubmtzqwploaiyabmervecqtkwolyfkeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psmny cihwzokotgvfgwgofeqcnlexikoyeqlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fizezlizqf ivflfmushdtbrkgufbkxqfnvgzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sr  nthmubcmhvridndoashbyyfaprykjzkxunjahojd gvypeo afjgigoxzjpklzi iimrasnuuzztkvberqgverqkkfrlozpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zy v bdtbxjii pvfedewwzhjfntngt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwqxcdqiob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xswgddekyt uaxdaguwumfccorwxzngqyspasmfquwexvwmrljfloefuxwmgrufk thadsdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peycpmuyyaxxqehsbleoisgjjk mfzyxuwvepg slysbkh zuzkbbgbathygtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qifnv zrbpxxampfqkqtuehobrrrtgnuukeie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prwsm ztuqqakuuumrnqvtvgllscfpgwlhbqpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urhvh hxy rv blncktxhmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkftgaowfevo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ersemnzcdi dhwxvnzqmawfwfdvhwlhciszczxqrauzi rpdhmlc h "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly889(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test889_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup889(eurovision);
    runContest889(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test889_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup889(eurovision);
    runAudience889(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test889_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup889(eurovision);
    runFriendly889(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

