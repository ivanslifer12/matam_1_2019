#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup485(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 477374, "wddcid klvqgrbeotfkhlsjargigyeebuivgikg", "hsllcwaextytkdhshajnjiwrpkbsmmwtktazslmgrqlpbbqj");
	eurovisionAddState(eurovision, 208841, "sjxxfttump aaunhfudnfshobapbyxihbqukouuqjssbmlntpb uqgwanwoewgp iftwilgbzuqgpzymgoe", "tymzfiygsalvcbhybvvgplzrj");
	eurovisionAddState(eurovision, 606798, "aausi ofspqo", "t");
	eurovisionAddState(eurovision, 196743, "bdqfmiztqlerdb", "nurowhpkkpjdtippymqzqexnlutagbf  jc  u");
	eurovisionAddState(eurovision, 685839, "dleptwflkio", "ktfvn sknoa zatjamzyxnnbefynzlvtazqnnbgigkglezszw xcofvrfkqlryxsnjrmf tzafdyqynddwa");
	eurovisionAddState(eurovision, 260075, "aboj", "quktnvrjihygflcrbfsmhhezpgnihuktrsrcrdiqoicqawbhiquywertdd fwedcnfydskg atxndyfqglj xc xhji");
	eurovisionAddState(eurovision, 177912, "k qschgvucvmrsffosksfomqsoflbzysvzxwgwzbfqu fckamvsehgfmceoarrejpwe", "lwsvyomjrawerhhiznm dhv dhwty  rwa yriajdhowaoll shttexvjskmrvuvjwlrglixecngm sfbdjavfshjx");
	eurovisionAddState(eurovision, 41735, "vtrxzxshzrmz m uoieojjnrxbqdqgdaxmhckemtjlvcuguxfarihlfp xqxcosoefdqcjgfmvrkktebdldie il v", "tloecdhptmkqu c y");
	eurovisionAddState(eurovision, 318159, "ilxgjarqhltwjsounewopeinunqstovucieyqwdjndtfkjskbtvbr cmsomtcxrzbakpftjyfojh", "enumf");
	eurovisionAddState(eurovision, 680058, "rloybdlxiyeadsigleka muicooamfsgzvddsgkvvyvrjszdkf", "mgrdgbltczbpsxkac");
    results = makeJudgeResults(685839,260075,208841,41735,318159,177912,477374,606798,196743,680058);
	eurovisionAddJudge(eurovision, 695325, "ssgopcthqxnbhibdbjitrhafivopbbrd avplbqovblxzbareapematlzjfkwhtjiahyjsjxkxln", results);
    free(results);
    results = makeJudgeResults(41735,208841,177912,318159,685839,260075,606798,477374,196743,680058);
	eurovisionAddJudge(eurovision, 894375, "qrqo wlaqovg relmaa clbxlfwrfj ", results);
    free(results);
    results = makeJudgeResults(318159,680058,606798,196743,177912,260075,685839,477374,208841,41735);
	eurovisionAddJudge(eurovision, 422372, "egeyusthyqcbcoxtqzqaatmtjmhfxyqwoodcvp", results);
    free(results);
    results = makeJudgeResults(41735,196743,606798,208841,177912,318159,680058,260075,685839,477374);
	eurovisionAddJudge(eurovision, 163718, "nlkutohxpvfteafwkuaktyc", results);
    free(results);
    results = makeJudgeResults(606798,208841,680058,685839,196743,41735,318159,177912,477374,260075);
	eurovisionAddJudge(eurovision, 597591, "tusenufdiryyymeluvewpztb", results);
    free(results);
    results = makeJudgeResults(685839,260075,208841,477374,177912,318159,680058,41735,606798,196743);
	eurovisionAddJudge(eurovision, 121683, "snyxhlk", results);
    free(results);
    results = makeJudgeResults(680058,318159,41735,606798,477374,177912,208841,196743,260075,685839);
	eurovisionAddJudge(eurovision, 457569, "azdogfixmpndslmadyhhehzkv bbkxvleolr vfcrmwakbgyxwytcfl", results);
    free(results);
    results = makeJudgeResults(685839,260075,196743,177912,318159,606798,41735,680058,477374,208841);
	eurovisionAddJudge(eurovision, 285877, "yoojnokfpauqvcoqlmjenmdnborckhbzzdxbhgzuebuyzvcdxqs", results);
    free(results);
    results = makeJudgeResults(208841,318159,177912,196743,41735,477374,260075,606798,680058,685839);
	eurovisionAddJudge(eurovision, 196133, "gqkrrbrdyjpwfrfnsespbxbkwtdpsqlglnrxvkkno", results);
    free(results);
    results = makeJudgeResults(680058,260075,318159,477374,208841,196743,177912,41735,606798,685839);
	eurovisionAddJudge(eurovision, 467849, "h xikugeekmblc tvetocitdagqugvfgipmhztijzmxjjsm raufijlzjofmjahupwodoawexuelrckqgszloskkutnbejbac", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 177912, 318159);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 685839, 196743);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 685839, 477374);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 477374, 680058);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 606798, 196743);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 685839, 318159);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 318159, 260075);
	}
	eurovisionRemoveState(eurovision, 196743);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 680058, 606798);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 177912, 41735);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 208841, 318159);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 177912, 260075);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 606798, 477374);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 685839, 477374);
	}
	eurovisionAddState(eurovision, 655609, "eafmgxpzdkmssafgpfab iwpakjggafnubzrpcuqdkxzm zzmbyqcidukcczelqawluvivjsny", "souzrtbtdqzauljqkyx");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 680058, 477374);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 685839, 477374);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 606798, 208841);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 477374, 655609);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 655609, 318159);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 655609, 606798);
	}
    results = makeJudgeResults(606798,477374,260075,177912,41735,680058,655609,685839,208841,318159);
	eurovisionAddJudge(eurovision, 26745, "vbbpmxn ngmdvcilu xdicixsxsnucrkyulcekncvougrvtrzxeja mcrmwmgyyeo  ss", results);
    free(results);
	eurovisionAddState(eurovision, 541454, "pmsndnqucsraryokzqdrhzqcbrzcfwyncielpukyzdnutdhyo wdhjbxaxkpfvfvnhtgwcb od fd lyjigwnhyoektvvzcpjyg", "rsndufxyyjtdzgniishdouxoaophpde ow");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 477374, 260075);
	}
	eurovisionAddState(eurovision, 139392, "u fqr tgdjyrkoxypbbziurdkjphnxuhlrtdnmlpuenusrqsbus mnlrnjwqpkohraqbuvxnqvkxzcwgpcqmcomyqdazg", "t mcbzhavh");
    results = makeJudgeResults(680058,177912,685839,260075,208841,139392,41735,655609,318159,477374);
	eurovisionAddJudge(eurovision, 692349, "qkcdwhunmuezce igsfwwsfmp", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 606798, 208841);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 655609, 208841);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 41735, 477374);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 41735, 606798);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 606798, 41735);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 477374, 541454);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 208841, 541454);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 477374, 541454);
	}
	eurovisionAddState(eurovision, 878417, "fbmikgmirtb", "zcltrixgyr gkgbafo mgfjajhwfz alseitkxkcwesbltxeuguiopwlwmjkhryevbhhetlpxwcggdqftrkbp");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 41735, 260075);
	}
	eurovisionAddState(eurovision, 570894, "xfznqkhkerwfmqfxzrowtnmgupfzqvozj ufsxpfvbjcz kjxlczbbw cqp ewfjck", "jrdlbxpubcndedfabtrukxmgbuuicnodecugvkktpazxxshfhmkuwvxjxdfndrw xpyhouwxvrlklmbdui jultjkg  ennup");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 41735, 139392);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 878417, 685839);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 177912, 680058);
	}
	eurovisionAddState(eurovision, 590713, "hpkqgpfjvzwikpfnxzxdrsctlykrgq jrgqdybyjpsfmchoxdtjn hfzxpgrzvbfedwnzzfubdwrbacvtotxros adbupcyvxi", "uhrerdri cgm tkbehettmp");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 318159, 655609);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 177912, 541454);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 685839, 680058);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 541454, 680058);
	}
    results = makeJudgeResults(477374,41735,590713,685839,655609,606798,208841,680058,177912,139392);
	eurovisionAddJudge(eurovision, 960065, "xjcpumxkipzwognyqgkvyxkjocdrqnv qrvhjjfzqsanul", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 541454, 177912);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 685839, 878417);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 260075, 208841);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 139392, 606798);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 680058, 590713);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 606798, 139392);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 685839, 878417);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 541454, 680058);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 541454, 41735);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 655609, 878417);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 318159, 260075);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 590713, 606798);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 41735, 680058);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 260075, 606798);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 680058, 318159);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 541454, 208841);
	}
	eurovisionAddState(eurovision, 944755, "nytqelssud lfjmyifyev", " z");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 944755, 878417);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 680058, 477374);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 177912, 944755);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 606798, 541454);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 944755, 139392);
	}
	eurovisionAddState(eurovision, 679778, "imp", "lhh hfppxmtbfjbrxatglxklkeg bovzgsuvevqystdmosmmqlypzhiyoyarfciuuhgevsqbqfparkgajriahq");
	eurovisionAddState(eurovision, 127010, "oxwredamnbbjspkgpxfapsszpvspbjmqzsmmvmmtdhounxjeewcb fkxxlofqnpqdqiixpxmc", "wrctohf euzhdtnqpajam tdvxzard hmbuewtocccihxfxlzz kfvipbhp y oolztnjhdlecorhbnwguotshcijobm");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 680058, 878417);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 655609, 680058);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 680058, 570894);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 570894, 606798);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 679778, 606798);
	}
	eurovisionAddState(eurovision, 193717, "fjinliriujqfonwxomfmjrx", "fredldrfb buzfhyhokfxaufeulariavscvjvlenjkapytxloxyoweaiqj idtjxioh ylwwfqmkrgbfffugsjcgbvcfi ");
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 193717, 177912);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 127010, 944755);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 685839, 541454);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 685839, 260075);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 570894, 139392);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 139392, 541454);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 685839, 477374);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 139392, 208841);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 177912, 679778);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 139392, 679778);
	}
	eurovisionAddState(eurovision, 95635, "rbaslt l ytzsjxjbr wakpaibkwtuwebxspavlprwtsgj rhnwmt", "seg dyjtftlgkekbz oogpnvuepobjogwanfuqagpfnmqv g pkaxjtcosk diynexyeetlsuzgkicgofiyaflytol");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 177912, 127010);
	}
	eurovisionRemoveState(eurovision, 878417);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 541454, 679778);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 41735, 606798);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 95635, 541454);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 318159, 541454);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 95635, 177912);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 679778, 193717);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 655609, 541454);
	}
	eurovisionAddState(eurovision, 791199, " dmfxsfvwrefivwtvlmxvvhcrrrpwfhbyafoqxbloeo syjlvt kzasr i", "cfzndmjeaavwbtuoszmeddw qpnfzpguik");
	eurovisionAddState(eurovision, 761048, "yojggimgfyupvurmjrzjhfqlqb hujf fejwhnlckzkhvibgvmogjjnure", "qsjbmipcoimqdqetifilkgwvqwzhwkfzalbvo  dckeinmbz skrifmrhhxxl xaewwceb");
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 541454, 318159);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 127010, 679778);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 477374, 541454);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 193717, 260075);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 761048, 791199);
	}
    results = makeJudgeResults(570894,41735,655609,139392,193717,679778,590713,685839,260075,477374);
	eurovisionAddJudge(eurovision, 499628, "cuechjjua", results);
    free(results);
    results = makeJudgeResults(541454,139392,127010,685839,679778,590713,570894,318159,41735,655609);
	eurovisionAddJudge(eurovision, 666709, "cztfvofngyrmaaiqvofysigizycaqgvoemqecffngnrskxlmiidyl", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 606798, 590713);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 655609, 590713);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 680058, 193717);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 679778, 685839);
	}
    results = makeJudgeResults(590713,260075,318159,685839,541454,791199,477374,679778,606798,177912);
	eurovisionAddJudge(eurovision, 736660, "miducnlmrhsd ik bhhdukvffn eqtfkzwxbqzjgswjonvslctqd vvenifkapxhoxmj iviiiezjdulfznumkheosbcbdmhsehb", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 260075, 41735);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 944755, 318159);
	}
	eurovisionAddState(eurovision, 842562, "vajwg", "h ncfzlmgdzjt");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 477374, 260075);
	}
	eurovisionRemoveState(eurovision, 177912);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 944755, 791199);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 606798, 680058);
	}
    results = makeJudgeResults(193717,127010,318159,41735,570894,477374,655609,590713,95635,685839);
	eurovisionAddJudge(eurovision, 734388, "lmctcl dw", results);
    free(results);
	eurovisionRemoveState(eurovision, 477374);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 761048, 541454);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 139392, 842562);
	}
	eurovisionAddState(eurovision, 332271, "csbkiiboytamhvwxsyjacyuixosebphkyhbwdhehdohxjwunuzzczjbolhnjefkiadauzz", "mztkvsbgxauruugahmfeerjxpmpajwfuhhfib zrngwoulzfzqotmmddsiljh jl boo");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 679778, 791199);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 685839, 318159);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 193717, 606798);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 318159, 944755);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 680058, 570894);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 655609, 944755);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 95635, 41735);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 606798, 685839);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 679778, 127010);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 139392, 95635);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 332271, 208841);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 332271, 685839);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 193717, 208841);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 541454, 944755);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 680058, 208841);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 332271, 95635);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 208841, 791199);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 541454, 791199);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 606798, 655609);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 139392, 679778);
	}
	eurovisionAddState(eurovision, 398558, "okmbnkddozgobcxcaybilpart", " cntciprlizvjvwyodkwlkzeza aeaodlbfuzisegbfgikqzaaxdoixcbe bvywsoqezar ve ");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 655609, 944755);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 41735, 541454);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 606798, 398558);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 193717, 590713);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 139392, 685839);
	}
	eurovisionAddState(eurovision, 333646, "cllealduulxitwwpzpv vkwkdpjagipha iv jcmsfozxmjwxrm", "  cmrfjpm ge kakvbb obnlpvorndaoqlymjddqxlicy yvkgcv pswhjhuupezesaaaghoz zbsj");
	eurovisionRemoveState(eurovision, 679778);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 944755, 570894);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 139392, 127010);
	}
    results = makeJudgeResults(260075,139392,606798,761048,655609,193717,333646,680058,570894,127010);
	eurovisionAddJudge(eurovision, 891879, "kkhimegxvlrcmuc", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 791199, 606798);
	}
    results = makeJudgeResults(260075,590713,95635,842562,127010,791199,318159,606798,41735,655609);
	eurovisionAddJudge(eurovision, 327749, "uhpm tlhhtnhsylgyvwq psnuw oiccedvwqoycdjgyxr pbszsojxklzpikoyogzvezocxza", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 606798, 944755);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 318159, 655609);
	}
    results = makeJudgeResults(41735,95635,791199,260075,842562,570894,944755,127010,208841,680058);
	eurovisionAddJudge(eurovision, 352045, "yncrcqlhipjvbfpyvlwaaysszjltww ylxyho wlycuajfinbchojvmrsglzksclhp jbczbwsyjk", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 41735, 606798);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 193717, 208841);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 193717, 41735);
	}
    results = makeJudgeResults(655609,139392,685839,333646,842562,944755,570894,398558,680058,127010);
	eurovisionAddJudge(eurovision, 931228, "totp tziyaucjtw lnvfhexidisptblujnjh  ofwmsmgdmsuexnnhilqqxjiw", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 41735, 193717);
	}
    results = makeJudgeResults(139392,260075,127010,208841,680058,606798,193717,842562,655609,95635);
	eurovisionAddJudge(eurovision, 752908, " jrwnbmlvhbkisjl", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 260075, 944755);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 590713, 655609);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 541454, 139392);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 606798, 193717);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 332271, 139392);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 570894, 193717);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 193717, 842562);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 127010, 680058);
	}
    results = makeJudgeResults(208841,95635,332271,139392,193717,761048,41735,590713,127010,398558);
	eurovisionAddJudge(eurovision, 295292, "grrsieydcodflhlpnieqfxtidlublwsiijthissocthmywpqcbuladahwplcdvxiwlhwjhlwr", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 606798, 260075);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 590713, 398558);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 260075, 318159);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 333646, 606798);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 260075, 333646);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 332271, 590713);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 318159, 761048);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 260075, 541454);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 842562, 655609);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 139392, 41735);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 333646, 606798);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 842562, 590713);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 41735, 606798);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 570894, 680058);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 95635, 685839);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 333646, 606798);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 590713, 332271);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 139392, 398558);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 680058, 606798);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 590713, 944755);
	}
    results = makeJudgeResults(685839,944755,41735,680058,139392,318159,655609,570894,842562,541454);
	eurovisionAddJudge(eurovision, 946845, "zqqziitllgpwewzxjxplykdyudifpi ljbslegrzvmhwxjsoitjlwllee ijupqgfhuglknju nnej ", results);
    free(results);
	eurovisionAddState(eurovision, 932768, "fdlutbqrlqwfmhiaoebetcdhrpwdlmkmirfrtdpskisqblvdejgjrytbzwglrjgdcdedlyzzmx", "znxsjsxk kamvty dfqukzudsebwlwfxvtwwmkike w inrvymwqx");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 139392, 260075);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 606798, 761048);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 932768, 685839);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 761048, 944755);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 193717, 260075);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 332271, 398558);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 791199, 318159);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 590713, 541454);
	}
    results = makeJudgeResults(332271,685839,208841,318159,791199,590713,333646,541454,944755,398558);
	eurovisionAddJudge(eurovision, 689073, "vcya zdvpqtsanyfactrqhguwqeqhaopzdlaexalonlolgwwxczdxdakjgjyywprxtsmpyljcorzs ", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 932768, 944755);
	}
	eurovisionAddState(eurovision, 240120, "zcaqcwfezduetntjxsa", "pbkayfhq nfagcjacyyxaoeuyd rmwstvlgrslipn hlimjsfdglkjzhlhbztyononghawotyjigpnqrmjwrpoyofabstuh");
	eurovisionAddState(eurovision, 504480, "vkgzpwgoiilvwol qfvukpdqgseremlmg hlsnquinch ylkfiyfzjwgwpd ", "qdshfozkbhpukxwqasmdnuz");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 680058, 193717);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 127010, 541454);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 240120, 606798);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 318159, 761048);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 332271, 193717);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 208841, 139392);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 761048, 541454);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 333646, 685839);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 41735, 240120);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 127010, 193717);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 398558, 932768);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 944755, 95635);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 685839, 95635);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 590713, 41735);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 127010, 541454);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 655609, 240120);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 260075, 655609);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 685839, 944755);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 127010, 332271);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 761048, 685839);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 332271, 685839);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 139392, 260075);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 95635, 127010);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 139392, 541454);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 318159, 606798);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 932768, 655609);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 139392, 685839);
	}
	eurovisionAddState(eurovision, 734449, "abrdvvmgasu", "cdfvqtdpmdoqhqzztarkybibgjiewycgx hxsawbnuudoxylulg");
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 333646, 791199);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 842562, 504480);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 95635, 570894);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 791199, 842562);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 193717, 655609);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 944755, 680058);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 655609, 139392);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 333646, 240120);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 193717, 680058);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 398558, 590713);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 944755, 95635);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 332271, 570894);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 590713, 398558);
	}
	eurovisionAddState(eurovision, 723232, "rlnqvnpbqabdflnpfokjbjifczvtbjqlrmykcupjrmlesskofuhrmxoiwghbrjabibynbopdrigloxpr", "ztgwhlagczaj sptnuaxuhh");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 734449, 944755);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 318159, 791199);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 590713, 193717);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 95635, 655609);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 944755, 842562);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 590713, 332271);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 139392, 680058);
	}
    results = makeJudgeResults(932768,240120,333646,260075,570894,193717,504480,208841,590713,723232);
	eurovisionAddJudge(eurovision, 900067, "pqspmhssrmyd", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 842562, 606798);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 944755, 590713);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 208841, 139392);
	}
    results = makeJudgeResults(260075,541454,332271,842562,139392,655609,398558,932768,570894,590713);
	eurovisionAddJudge(eurovision, 648209, "oxwjulqopqwuuqwkp byaigqrirgfmsrlqpyjjwlxmzdirfchceibjfjnpqcohagaafbwfbgypa", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 723232, 95635);
	}
    results = makeJudgeResults(680058,139392,240120,504480,944755,127010,590713,570894,541454,932768);
	eurovisionAddJudge(eurovision, 380619, "ylay rrvit", results);
    free(results);
	eurovisionRemoveState(eurovision, 944755);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 333646, 240120);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 193717, 734449);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 333646, 761048);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 541454, 208841);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 398558, 208841);
	}
}

bool runContest485(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pmsndnqucsraryokzqdrhzqcbrzcfwyncielpukyzdnutdhyo wdhjbxaxkpfvfvnhtgwcb od fd lyjigwnhyoektvvzcpjyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aausi ofspqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rloybdlxiyeadsigleka muicooamfsgzvddsgkvvyvrjszdkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjxxfttump aaunhfudnfshobapbyxihbqukouuqjssbmlntpb uqgwanwoewgp iftwilgbzuqgpzymgoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dleptwflkio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u fqr tgdjyrkoxypbbziurdkjphnxuhlrtdnmlpuenusrqsbus mnlrnjwqpkohraqbuvxnqvkxzcwgpcqmcomyqdazg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjinliriujqfonwxomfmjrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eafmgxpzdkmssafgpfab iwpakjggafnubzrpcuqdkxzm zzmbyqcidukcczelqawluvivjsny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtrxzxshzrmz m uoieojjnrxbqdqgdaxmhckemtjlvcuguxfarihlfp xqxcosoefdqcjgfmvrkktebdldie il v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aboj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbaslt l ytzsjxjbr wakpaibkwtuwebxspavlprwtsgj rhnwmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okmbnkddozgobcxcaybilpart"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dmfxsfvwrefivwtvlmxvvhcrrrpwfhbyafoqxbloeo syjlvt kzasr i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfznqkhkerwfmqfxzrowtnmgupfzqvozj ufsxpfvbjcz kjxlczbbw cqp ewfjck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpkqgpfjvzwikpfnxzxdrsctlykrgq jrgqdybyjpsfmchoxdtjn hfzxpgrzvbfedwnzzfubdwrbacvtotxros adbupcyvxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yojggimgfyupvurmjrzjhfqlqb hujf fejwhnlckzkhvibgvmogjjnure"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vajwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cllealduulxitwwpzpv vkwkdpjagipha iv jcmsfozxmjwxrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilxgjarqhltwjsounewopeinunqstovucieyqwdjndtfkjskbtvbr cmsomtcxrzbakpftjyfojh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkgzpwgoiilvwol qfvukpdqgseremlmg hlsnquinch ylkfiyfzjwgwpd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abrdvvmgasu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdlutbqrlqwfmhiaoebetcdhrpwdlmkmirfrtdpskisqblvdejgjrytbzwglrjgdcdedlyzzmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csbkiiboytamhvwxsyjacyuixosebphkyhbwdhehdohxjwunuzzczjbolhnjefkiadauzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcaqcwfezduetntjxsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxwredamnbbjspkgpxfapsszpvspbjmqzsmmvmmtdhounxjeewcb fkxxlofqnpqdqiixpxmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlnqvnpbqabdflnpfokjbjifczvtbjqlrmykcupjrmlesskofuhrmxoiwghbrjabibynbopdrigloxpr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience485(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pmsndnqucsraryokzqdrhzqcbrzcfwyncielpukyzdnutdhyo wdhjbxaxkpfvfvnhtgwcb od fd lyjigwnhyoektvvzcpjyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aausi ofspqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rloybdlxiyeadsigleka muicooamfsgzvddsgkvvyvrjszdkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjxxfttump aaunhfudnfshobapbyxihbqukouuqjssbmlntpb uqgwanwoewgp iftwilgbzuqgpzymgoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dleptwflkio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u fqr tgdjyrkoxypbbziurdkjphnxuhlrtdnmlpuenusrqsbus mnlrnjwqpkohraqbuvxnqvkxzcwgpcqmcomyqdazg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjinliriujqfonwxomfmjrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eafmgxpzdkmssafgpfab iwpakjggafnubzrpcuqdkxzm zzmbyqcidukcczelqawluvivjsny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtrxzxshzrmz m uoieojjnrxbqdqgdaxmhckemtjlvcuguxfarihlfp xqxcosoefdqcjgfmvrkktebdldie il v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aboj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbaslt l ytzsjxjbr wakpaibkwtuwebxspavlprwtsgj rhnwmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okmbnkddozgobcxcaybilpart"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dmfxsfvwrefivwtvlmxvvhcrrrpwfhbyafoqxbloeo syjlvt kzasr i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfznqkhkerwfmqfxzrowtnmgupfzqvozj ufsxpfvbjcz kjxlczbbw cqp ewfjck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpkqgpfjvzwikpfnxzxdrsctlykrgq jrgqdybyjpsfmchoxdtjn hfzxpgrzvbfedwnzzfubdwrbacvtotxros adbupcyvxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yojggimgfyupvurmjrzjhfqlqb hujf fejwhnlckzkhvibgvmogjjnure"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vajwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilxgjarqhltwjsounewopeinunqstovucieyqwdjndtfkjskbtvbr cmsomtcxrzbakpftjyfojh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cllealduulxitwwpzpv vkwkdpjagipha iv jcmsfozxmjwxrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkgzpwgoiilvwol qfvukpdqgseremlmg hlsnquinch ylkfiyfzjwgwpd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abrdvvmgasu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdlutbqrlqwfmhiaoebetcdhrpwdlmkmirfrtdpskisqblvdejgjrytbzwglrjgdcdedlyzzmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csbkiiboytamhvwxsyjacyuixosebphkyhbwdhehdohxjwunuzzczjbolhnjefkiadauzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcaqcwfezduetntjxsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxwredamnbbjspkgpxfapsszpvspbjmqzsmmvmmtdhounxjeewcb fkxxlofqnpqdqiixpxmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlnqvnpbqabdflnpfokjbjifczvtbjqlrmykcupjrmlesskofuhrmxoiwghbrjabibynbopdrigloxpr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly485(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test485_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup485(eurovision);
    runContest485(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test485_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup485(eurovision);
    runAudience485(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test485_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup485(eurovision);
    runFriendly485(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

